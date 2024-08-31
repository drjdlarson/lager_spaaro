# Tutorial 1 - Introduction
This tutorial aims to introduce the SPAARO framework. Topics will include the different components such as MATLAB/Simulink code, the C++ code. By the end of the tutorial, one is expected to be able to understand the data structure of Spaaro and how they interact between C++ and MATLAB, and able to open and load an empty flight control model on Simulink.

## Hardware components
None

## C++ Code components
This section outlines the C++ codes and highlight the important components

### Flight code
The flight code to be uploaded exists in the ```/flight_code``` directory. This directory includes all the C++ source and header files. When compiling the project, SPAARO will automatically setup any dependencies such as hardware drivers, EKF, etc. from other repositories. The project utilize CMake to handle project builds. CMake also handle the dependencies as well as different build configuration depending on which vehicle is being built for. 

#### Hardware definition
```/include/hardware_defs.h``` describes the hardware definitions to SPAARO. This is used to configure the project for different teensy and FMU version such as *FMU-V1*, *FMU-V2* or *FMU-MINI*. Generally, no changes are needed to be made here. A useful parameter one can change in this file is the loop rate which is defined by ```FRAME_RATE_HZ``` and  ```FRAME_PERIOD_MS``` for the corresponding board. *FMU-MINI* have been tested with upto 200Hz rate. 

#### Global definition
```/include/global_defs.h``` contains all the data and configuration relavant to SPAARO. the datas are group into 4 main structs(or buses). Some datas within the main buses are structs themselves and will be denoted with the drop down list. Variables followed by square brackets are arrays. For example, x[y] is variable x which is an array or vector with y number of elements. 

<details>
<summary>System Data (Data mostly used for debugging)</summary>

* int32_t frame_time_us: time the previous frame took to complete, us. Useful for analyzing CPU load.
* int64_t sys_time_us: the time since boot, us.
* float input_volt (*FMU-R v1.x*): the input voltage to the voltage regulator.
* float reg_volt (*FMU-R v1.x*): the regulated voltage.
* float pwm_volt (*FMU-R v1.x*): the PWM servo rail voltage.
* float sbus_volt (*FMU-R v1.x*): the SBUS servo rail voltage.
</details>

<details>
<summary>Sensor Data (Raw sensor data)</summary>

* <details>
    <summary>Inceptor Data (Data from RC receiver)</summary>

    * bool new_data: whether new data was received by the SBUS receiver.
    * bool lost_frame: whether a frame of SBUS data was lost by the receiver.
    * bool failsafe: whether the SBUS receiver has entered failsafe mode - this typically occurs if many frames of data are lost in a row.
    * int16_t ch[16]: SBUS channel values. SBUS is 11 bits with a range of 0 - 2048. Some SBUS receivers, such as FrSky, use a default range of 172 - 1811, unless an extended range is configured.
    </details>

* <details>
    <summary>IMU Data (<em>FMU-V1 and <em>FMU-V2 has additional struct for VectorNav IMU data)</summary>

    * bool installed: whether the IMU is configured. Default as ```false```
    * bool healthy: whether the accelerometer and gyro are healthy. Unhealthy is defined as missing 5 frames of data in a row at the expected rate.
    * bool new_data: whether new data was received from the accelerometer and gyro.
    * float die_temp_c: the IMU die temperature, C.
    * float accel_mps2[3]: the accelerometer data, with bias and scale factor corrected, and rotated into the vehicle frame, m/s/s [x y z].
    * float gyro_radps[3]: the gyro data, with bias corrected, and rotated into the vehicle frame, rad/s [x y z].
    </details>

* <details>
    <summary> Magnetometer Data (<em>FMU-V1 and <em>FMU-V2 has additional struct for VectorNav Magnetometer data)</summary>

    * bool installed: whether the Magnetometer is configured. Default as ```false```
    * bool healthy: whether the magnetometer is healthy. Unhealthy is defined as missing 5 frames of data in a row at the expected rate.
    * bool new_data: whether new data was received from the magnetometer.
    * float die_temp_c: the IMU die temperature, C.
    * float mag_ut[3]: the magnetometer data, with bias and scale factor corrected, and rotated into the vehicle frame, uT [x y z].
    </details>

* <details>
    <summary> OpFlow Data (Optical flow sensor. <em>FMU-V2 and <em>FMU-MINI supported. Still experimental. Tested with Matek System 3901-LOX)</summary>

    * bool installed: whether the optcal flow sensor is configured. Default as ```false```
    * bool healthy: whether the optcal flow sensor is healthy. Unhealthy is defined as missing 5 frames of data in a row at the expected rate.
    * bool new_data: whether new data was received from the optcal flow sensor.
    * int32_t mot_x: estimated motion in sensor x direction.
    * int32_t mot_y: estimated motion in sensor y direction.
    * uint8_t sur_qual: metric for the certainty of the motion estimates.
    * int32_t range_mm: range readings in mm.
    * uint8_t range_qual: metric the certainty of range estimate.
    </details>

* <details>
    <summary>GNSS Data (<em>FMU-V2 and <em>FMU-MINI has 2 GNSS structs for upto 2 GNSS receivers. <em>FMU-V1 and <em>FMU-V2 has additional struct for VectorNav GNSS data) </summary>

    * bool installed: whether the GNSS is configured. Default as ```false```
    * bool healthy: whether the GNSS receiver is healthy. Unhealthy is defined as missing 5 frames of data in a row at the expected rate. 
    * bool new_data: whether new data was received by the GNSS receiver.
    * bool rel_pos_avail: whether the current receiver is in DGPS mode which report relative position (relevant for RTK)
    * bool rel_pos_moving_baseline: whether the moving baseline has been defined.
    * bool rel_pos_baseline_normalized: whether the baseline has been normalized.
    * int8_t fix: the GNSS fix type:
        * 1: No fix
        * 2: 2D fix
        * 3: 3D fix
        * 4: 3D fix with differential GNSS
        * 5: 3D fix, RTK with floating integer ambiguity
        * 6: 3D fix, RTK with fixed integer ambiguity
    * int8_t num_sats: the number of satellites used in the GNSS solution.
    * int16_t gps_week: GNSS week number.
    * float alt_wgs84_m: Altitude above the WGS84 ellipsoid, m.
    * float horz_acc_m: estimated horizontal position accuracy, m.
    * float vert_acc_m: estimated vertical position accuracy, m.
    * float vel_acc_mps: estimated velocity accuracy, m/s.
    * float ned_vel_mps[3]: north east down velocity, m/s [North East Down].
    * float rel_pos_acc_ned_m[3]: estimated relative position accuracy, m.
    * double gps_tow_s: GNSS time of week, s.
    * double lat_rad: latitudde, rad.
    * double lon_rad: longitude, rad.
    * double rel_pos_ned_m[3]: NED position relative to RTK base, m.
    </details>

* <details>
    <summary>Pressure Data (<em>FMU-V1 and <em>FMU-V2 has additional struct for VectorNav Pressure data. All FMU has upto 4 Pressure data struct defined) </summary>

    * bool installed: whether a pressure tranducer is configured. Default as ```false```
    * bool is_static_pres: whether the current pressure sensor is static or differential. Defauls as ```false```
    * bool healthy: whether the pressure transducer is healthy. Unhealthy is defined as missing 5 frames of data in a row at the expected rate.
    * bool new_data: whether new data was received from the pressure transducer.
    * float die_temp_c: the pressure transducer die temperature, C.
    * float pres_pa: the measured pressure, Pa.
    </details>

* <details>
    <summary>RadAlt Data (Radar altimeter) </summary>
    
    * bool installed: whether a radar altimeter is configured. Default as ```false```
    * bool healthy: whether the radar altimeter is healthy. Unhealthy is defined as missing 5 frames of data in a row at the expected rate.
    * bool new_data: whether new data was received from the radar altimeter.
    * uint8_t snr: Signal to noise value.
    * float alt_m: measured range, m.
    </details>

* <details>
    <summary>ADC Data </summary>
    
    * float volt[2(<em>FMU-V1)/8(<em>FMU-V2)]: voltages measured by the FMU analog to digital converters
    </details>

* <details>
    <summary>Power Module Data (<em>FMU-V2 and <em>FMU-MINI. Measure battery voltage and current draw using analog modules)</summary>
    
    * float voltage_v: voltage measured on the power port voltage pin. Note that this is not the battery pack voltage, typically this value needs to be scaled by the power module volts / volt value and is power module specific.
    * float current_v: voltage measured on the power port current pin. Typically this is scaled by the power module mA / volt value and is power module specific.
    </details>
</details>

<details>
    <summary>StateEst Data (Data from the state estimation systems)</summary>

  * <details>
    <summary> INS Data (Data from the EKF filters. Can be BFS ES-EKF or VectorNav estimations) </summary>

    * bool initialized: whether the estimation filter has been initialized.
    * float pitch_rad: pitch angle, rad.
    * float roll_rad: roll angle, rad.
    * float heading_rad: heading relative to true north, rad.
    * float alt_wgs84_m: altitude above the WGS84 ellipsoid, m.
    * float accel_mps2[3]: IMU acceleterometer data with the EKF estimated biases removed and digital low pass filtereing applied, m/s/s [x y z].
    * float gyro_radps[3]: IMU gyro data with the EKF estimated biases removed and digital low pass filtereing applied, rad/s [x y z].
    * float mag_ut[3]: IMU magnetometer data with digital low pass filtering applied, uT [x y z].
    * float ned_vel_mps[3]: North east down ground velocity, m/s [north east down].
    * double lat_rad: latitude, rad.
    * double lon_rad: longitude, rad.
    </details>
</details>






### Log converter code

## MATLAB/Simulink

### MATLAB code and setup

### Simulink model

