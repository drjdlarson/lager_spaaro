/*
* Brian R Taylor
* brian.taylor@bolderflight.com
* 
* Copyright (c) 2022 Bolder Flight Systems Inc
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the “Software”), to
* deal in the Software without restriction, including without limitation the
* rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
* sell copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
* IN THE SOFTWARE.
*/

#include "flight/datalog.h"
#include "flight/msg.h"
#include "logger/logger.h"
#include "framing.h"
#include "./pb_encode.h"
#include "./pb_decode.h"
#if defined(__FMU_R_MINI_V1__)
#include "./datalog_fmu_mini_v1.pb.h"
#endif
#if defined(__FMU_R_V2__)
#include "./datalog_fmu_v2.pb.h"
#endif
#if defined(__FMU_R_V2_BETA__)
#include "./datalog_fmu_v2_beta.pb.h"
#endif
#if defined(__FMU_R_V1__)
#include "./datalog_fmu_v1.pb.h"
#endif

namespace {
/* Datalog file name */
static const char * DATA_LOG_NAME_ = "malt";
/* SD card */
SdFat32 sd_;
/* Logger object */
bfs::Logger<400> logger_(&sd_);
/* Framing */
bfs::FrameEncoder<DatalogMessage_size> encoder;
/* nanopb buffer for encoding */
uint8_t data_buffer_[DatalogMessage_size];
pb_ostream_t stream_;
/* Datalog message from protobuf */
DatalogMessage datalog_msg_;
}  // namespace

void DatalogInit() {
  MsgInfo("Initializing datalog...");
  /* Initialize SD card */
  sd_.begin(SdioConfig(FIFO_SDIO));
  /* Initialize logger */
  int file_num = logger_.Init(DATA_LOG_NAME_);
  if (file_num < 0) {
    MsgError("Unable to initialize datalog.");
  }
  MsgInfo("done.\n");
}

void DatalogAdd(const AircraftData &ref) {
  /* Assign to message */
  /* Sys data */
  datalog_msg_.sys_frame_time_us = ref.sys.frame_time_us;
  datalog_msg_.sys_time_s = static_cast<double>(ref.sys.sys_time_us) / 1e6;
  /* Inceptor Data */
  datalog_msg_.incept_healthy = ref.sensor.inceptor.healthy;
  datalog_msg_.incept_new_data = ref.sensor.inceptor.new_data;
  datalog_msg_.incept_lost_frame = ref.sensor.inceptor.lost_frame;
  datalog_msg_.incept_failsafe = ref.sensor.inceptor.failsafe;
  for (std::size_t i = 0; i < NUM_SBUS_CH; i++) {
    datalog_msg_.incept_ch[i] = ref.sensor.inceptor.ch[i];
  }
  /* IMU data */
  datalog_msg_.imu_installed = ref.sensor.fmu_imu.installed;
  datalog_msg_.imu_new_data = ref.sensor.fmu_imu.new_data;
  datalog_msg_.imu_healthy = ref.sensor.fmu_imu.healthy;
  datalog_msg_.imu_die_temp_c = ref.sensor.fmu_imu.die_temp_c;
  for (std::size_t i = 0; i < 3; i++) {
    datalog_msg_.imu_accel_mps2[i] = ref.sensor.fmu_imu.accel_mps2[i];
    datalog_msg_.imu_gyro_radps[i] = ref.sensor.fmu_imu.gyro_radps[i];
  }
  /* Mag data */
  datalog_msg_.mag_installed = ref.sensor.fmu_mag.installed;
  datalog_msg_.mag_new_data = ref.sensor.fmu_mag.new_data;
  datalog_msg_.mag_healthy = ref.sensor.fmu_mag.healthy;
  datalog_msg_.mag_die_temp_c = ref.sensor.fmu_mag.die_temp_c;
  for (std::size_t i = 0; i < 3; i++) {
    datalog_msg_.mag_ut[i] = ref.sensor.fmu_mag.mag_ut[i];
  }
  /* GNSS data */
  datalog_msg_.gnss_installed = ref.sensor.ext_gnss1.installed;
  datalog_msg_.gnss_new_data = ref.sensor.ext_gnss1.new_data;
  datalog_msg_.gnss_healthy = ref.sensor.ext_gnss1.healthy;
  datalog_msg_.rel_pos_avail = ref.sensor.ext_gnss1.rel_pos_avail;
  datalog_msg_.rel_pos_moving_baseline = ref.sensor.ext_gnss1.rel_pos_moving_baseline;
  datalog_msg_.rel_pos_baseline_normalized = ref.sensor.ext_gnss1.rel_pos_baseline_normalized;
  datalog_msg_.gnss_fix = ref.sensor.ext_gnss1.fix;
  datalog_msg_.gnss_num_sats = ref.sensor.ext_gnss1.num_sats;
  datalog_msg_.gnss_week = ref.sensor.ext_gnss1.gps_week;
  datalog_msg_.gnss_tow_s = ref.sensor.ext_gnss1.gps_tow_s;
  datalog_msg_.gnss_alt_wgs84_m = ref.sensor.ext_gnss1.alt_wgs84_m;
  datalog_msg_.gnss_horz_alt_acc_m = ref.sensor.ext_gnss1.horz_acc_m;
  datalog_msg_.gnss_vert_acc_m = ref.sensor.ext_gnss1.vert_acc_m;
  datalog_msg_.gnss_vel_acc_m = ref.sensor.ext_gnss1.vel_acc_mps;
  for (std::size_t i = 0; i < 3; i++) {
    datalog_msg_.gnss_ned_vel_mps[i] = ref.sensor.ext_gnss1.ned_vel_mps[i];
    datalog_msg_.rel_pos_acc_ned_m[i] = ref.sensor.ext_gnss1.rel_pos_acc_ned_m[i];
    datalog_msg_.rel_pos_ned_m[i] = ref.sensor.ext_gnss1.rel_pos_ned_m[i];
  }
  datalog_msg_.gnss_lat_rad = ref.sensor.gnss.lat_rad;
  datalog_msg_.gnss_lon_rad = ref.sensor.gnss.lon_rad;
  /* Static pressure data */
  datalog_msg_.static_pres_installed = ref.sensor.fmu_static_pres.installed;
  datalog_msg_.static_pres_healthy = ref.sensor.fmu_static_pres.healthy;
  datalog_msg_.static_pres_new_data = ref.sensor.fmu_static_pres.new_data;
  datalog_msg_.static_pres_die_temp_c = ref.sensor.fmu_static_pres.die_temp_c;
  datalog_msg_.static_pres_pres_pa = ref.sensor.fmu_static_pres.pres_pa;
  /* Analog data */
  for (std::size_t i = 0; i < NUM_AIN_PINS; i++) {
    datalog_msg_.adc_volt[i] = ref.sensor.analog.voltage_v[i]
  }
  /* Power module data */
  datalog_msg_.pwr_mod_volt_v = ref.sensor.power_module.voltage_v;
  datalog_msg_.pwr_mod_curr_ma = ref.sensor.power_module.current_ma;
  /* Encode */
  stream_ = pb_ostream_from_buffer(data_buffer_, sizeof(data_buffer_));
  if (!pb_encode(&stream_, DatalogMessage_fields, &datalog_msg_)) {
    MsgWarning("Error encoding datalog.");
    return;
  }
  std::size_t msg_len = stream_.bytes_written;
  /* Framing */
  std::size_t bytes_written = encoder.Write(data_buffer_, msg_len);
  if (msg_len != bytes_written) {
    MsgWarning("Error framing datalog.");
    return;
  }
  /* Write the data */
  logger_.Write(const_cast<uint8_t *>(encoder.data()), encoder.size());
}

void DatalogClose() {
  logger_.Close();
}

void DatalogFlush() {
  logger_.Flush();
}
