//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: autocode.cpp
//
// Code generated for Simulink model 'ale'.
//
// Model version                  : 4.207
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Wed Dec 21 10:17:31 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: NXP->Cortex-M4
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#include "autocode.h"
#include "rtwtypes.h"
#include "flight/global_defs.h"
#include <cmath>
#include "rt_roundf.h"
#include <cstring>
#include <array>
#include "ale_speed_controller.h"

// Named constants for Chart: '<Root>/state_machine'
const uint8_T IN_Armed = 1U;
const uint8_T IN_Dead = 1U;
const uint8_T IN_Disarmed = 2U;
const uint8_T IN_LowBattery = 3U;
const uint8_T IN_Manual = 4U;
const uint8_T IN_Speed = 5U;
const uint8_T IN_Waypoint = 6U;
const uint8_T IN_arming = 1U;
const uint8_T IN_disarming = 2U;
const uint8_T IN_neutral = 3U;
const uint8_T IN_neutural = 1U;
const uint8_T IN_trans_to_dead = 2U;
const uint8_T IN_trans_to_disarm = 3U;
const uint8_T IN_trans_to_low_battery = 4U;
const uint8_T IN_trans_to_manual = 5U;
const uint8_T IN_trans_to_speed = 6U;
const uint8_T IN_trans_to_wp = 7U;
const int32_T event_ARM = 0;
const int32_T event_DISARM = 1;
const int32_T event_TX_DEAD = 2;
const int32_T event_TX_DISARM = 3;
const int32_T event_TX_LOW_BATTERY = 4;
const int32_T event_TX_MANUAL = 5;
const int32_T event_TX_SPEED = 6;
const int32_T event_TX_WAYPOINT = 7;

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

// Skipping ulong_long/long_long check: insufficient preprocessor integer range. 
extern const std::array<real32_T, 32> rtCP_pooled_SWXYmHxSKqmQ;
extern const std::array<real32_T, 8> rtCP_pooled_s81kA0c3Ym5L;

#define rtCP_MotorMix_Value            rtCP_pooled_SWXYmHxSKqmQ  // Computed Parameter: rtCP_MotorMix_Value
                                                                 //  Referenced by: '<S3>/Motor Mix'

#define rtCP_Constant_Value_bm         rtCP_pooled_s81kA0c3Ym5L  // Computed Parameter: rtCP_Constant_Value_bm
                                                                 //  Referenced by: '<Root>/Constant'


namespace bfs
{
  //
  // Output and update for atomic system:
  //    '<S148>/remap'
  //    '<S149>/remap'
  //    '<S150>/remap'
  //    '<S151>/remap'
  //
  void Autocode::remap(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                       rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max,
                       real32_T *rty_norm_out)
  {
    *rty_norm_out = (rtu_raw_in - rtu_in_min) * (rtu_out_max - rtu_out_min) /
      (rtu_in_max - rtu_in_min) + rtu_out_min;
  }
}

namespace bfs
{
  // Function for Chart: '<Root>/state_machine'
  void Autocode::arm_state(const int32_T *sfEvent)
  {
    switch (rtDW.is_arm_state) {
     case IN_Armed:
      rtDW.armed = true;
      if (*sfEvent == event_DISARM) {
        rtDW.is_arm_state = IN_Disarmed;
        rtDW.armed = false;
      }
      break;

     case IN_Disarmed:
      rtDW.armed = false;
      if (*sfEvent == event_ARM) {
        rtDW.is_arm_state = IN_Armed;
        rtDW.armed = true;
      }
      break;
    }
  }

  // Function for Chart: '<Root>/state_machine'
  boolean_T Autocode::check_arming(boolean_T motor_en_, boolean_T
    nav_initialized_, boolean_T cal_done_)
  {
    return motor_en_ && nav_initialized_ && cal_done_;
  }

  // Function for Chart: '<Root>/state_machine'
  void Autocode::controller_state(const int32_T *sfEvent)
  {
    switch (rtDW.is_controller_state) {
     case IN_Dead:
      rtDW.mode = 4;
      if (*sfEvent == event_TX_LOW_BATTERY) {
        rtDW.is_controller_state = IN_LowBattery;
        rtDW.mode = 3;
      }
      break;

     case IN_Disarmed:
      rtDW.mode = 10;
      switch (*sfEvent) {
       case event_TX_WAYPOINT:
        rtDW.is_controller_state = IN_Waypoint;
        rtDW.mode = 2;
        break;

       case event_TX_MANUAL:
        rtDW.is_controller_state = IN_Manual;
        rtDW.mode = 0;
        break;

       case event_TX_SPEED:
        rtDW.is_controller_state = IN_Speed;
        rtDW.mode = 1;
        break;

       case event_TX_DEAD:
        rtDW.is_controller_state = IN_Dead;
        rtDW.mode = 4;
        break;

       case event_TX_LOW_BATTERY:
        rtDW.is_controller_state = IN_LowBattery;
        rtDW.mode = 3;
        break;
      }
      break;

     case IN_LowBattery:
      rtDW.mode = 3;
      break;

     case IN_Manual:
      rtDW.mode = 0;
      switch (*sfEvent) {
       case event_TX_DISARM:
        rtDW.is_controller_state = IN_Disarmed;
        rtDW.mode = 10;
        break;

       case event_TX_WAYPOINT:
        rtDW.is_controller_state = IN_Waypoint;
        rtDW.mode = 2;
        break;

       case event_TX_SPEED:
        rtDW.is_controller_state = IN_Speed;
        rtDW.mode = 1;
        break;

       case event_TX_DEAD:
        rtDW.is_controller_state = IN_Dead;
        rtDW.mode = 4;
        break;
      }
      break;

     case IN_Speed:
      rtDW.mode = 1;
      switch (*sfEvent) {
       case event_TX_MANUAL:
        rtDW.is_controller_state = IN_Manual;
        rtDW.mode = 0;
        break;

       case event_TX_DISARM:
        rtDW.is_controller_state = IN_Disarmed;
        rtDW.mode = 10;
        break;

       case event_TX_WAYPOINT:
        rtDW.is_controller_state = IN_Waypoint;
        rtDW.mode = 2;
        break;

       case event_TX_DEAD:
        rtDW.is_controller_state = IN_Dead;
        rtDW.mode = 4;
        break;

       case event_TX_LOW_BATTERY:
        rtDW.is_controller_state = IN_LowBattery;
        rtDW.mode = 3;
        break;
      }
      break;

     case IN_Waypoint:
      rtDW.mode = 2;
      switch (*sfEvent) {
       case event_TX_DISARM:
        rtDW.is_controller_state = IN_Disarmed;
        rtDW.mode = 10;
        break;

       case event_TX_MANUAL:
        rtDW.is_controller_state = IN_Manual;
        rtDW.mode = 0;
        break;

       case event_TX_SPEED:
        rtDW.is_controller_state = IN_Speed;
        rtDW.mode = 1;
        break;

       case event_TX_DEAD:
        rtDW.is_controller_state = IN_Dead;
        rtDW.mode = 4;
        break;

       case event_TX_LOW_BATTERY:
        rtDW.is_controller_state = IN_LowBattery;
        rtDW.mode = 3;
        break;
      }
      break;
    }
  }
}

namespace bfs
{
  // Model step function
  void Autocode::Run(const SysData &sys, const SensorData &sensor, const NavData
                     &nav, const TelemData &telem, VmsData *ctrl)
  {
    std::array<real32_T, 8> rtb_switch_motor_out;
    int32_T sfEvent;
    real32_T absxk;
    real32_T norm_out;
    real32_T rtb_TmpSignalConversionAtSFun_0;
    real32_T rtb_norm_out_f;
    real32_T t;
    real32_T u0;
    int16_T rtb_current_waypoint;
    boolean_T rtb_Compare_g;
    boolean_T rtb_Compare_jd;

    // Copy value for root inport '<Root>/Navigation Filter Data' since it is accessed globally 
    rtU.NavigationFilterData = nav;

    // Outputs for Enabled SubSystem: '<S8>/calibration routine' incorporates:
    //   EnablePort: '<S135>/Enable'

    // Outputs for Enabled SubSystem: '<S135>/delay counter' incorporates:
    //   EnablePort: '<S137>/Enable'

    // UnitDelay: '<S8>/Unit Delay1' incorporates:
    //   Constant: '<S136>/Constant'
    //   RelationalOperator: '<S136>/Compare'

    if (rtDW.UnitDelay1_DSTATE_m) {
      // Sum: '<S137>/Sum' incorporates:
      //   Constant: '<S137>/Constant'
      //   UnitDelay: '<S137>/Unit Delay'

      rtDW.Sum++;

      // Outputs for Enabled SubSystem: '<S135>/determine threshold' incorporates:
      //   EnablePort: '<S138>/Enable'

      if (rtDW.Sum >= 250.0) {
        // RelationalOperator: '<S139>/Compare' incorporates:
        //   Constant: '<S139>/Constant'
        //   Constant: '<S141>/Constant'
        //   Sum: '<S141>/Sum'
        //   UnitDelay: '<S141>/Unit Delay'

        rtDW.Compare_l = (rtDW.UnitDelay_DSTATE_l + 1.0 >= 1000.0);

        // Sum: '<S140>/Sum1' incorporates:
        //   Inport: '<Root>/Sensor Data'
        //   UnitDelay: '<S140>/Unit Delay1'

        rtb_norm_out_f = sensor.adc.volt[0] + rtDW.UnitDelay1_DSTATE[0];

        // Gain: '<S138>/Multiply' incorporates:
        //   Constant: '<S140>/Constant1'
        //   Product: '<S140>/Divide'

        rtDW.Multiply[0] = rtb_norm_out_f / 1000.0 * 0.8;

        // Update for UnitDelay: '<S140>/Unit Delay1'
        rtDW.UnitDelay1_DSTATE[0] = rtb_norm_out_f;

        // Sum: '<S140>/Sum1' incorporates:
        //   Inport: '<Root>/Sensor Data'
        //   UnitDelay: '<S140>/Unit Delay1'

        rtb_norm_out_f = sensor.adc.volt[1] + rtDW.UnitDelay1_DSTATE[1];

        // Gain: '<S138>/Multiply' incorporates:
        //   Constant: '<S140>/Constant1'
        //   Product: '<S140>/Divide'

        rtDW.Multiply[1] = rtb_norm_out_f / 1000.0 * 0.8;

        // Update for UnitDelay: '<S140>/Unit Delay1'
        rtDW.UnitDelay1_DSTATE[1] = rtb_norm_out_f;

        // Update for UnitDelay: '<S141>/Unit Delay' incorporates:
        //   Constant: '<S141>/Constant'
        //   Sum: '<S141>/Sum'

        rtDW.UnitDelay_DSTATE_l++;
      }

      // End of Outputs for SubSystem: '<S135>/determine threshold'
    }

    // End of UnitDelay: '<S8>/Unit Delay1'
    // End of Outputs for SubSystem: '<S135>/delay counter'
    // End of Outputs for SubSystem: '<S8>/calibration routine'

    // MATLAB Function: '<S149>/remap' incorporates:
    //   Constant: '<S149>/Constant'
    //   Constant: '<S149>/Constant1'
    //   Constant: '<S149>/Constant2'
    //   Constant: '<S149>/Constant3'
    //   DataTypeConversion: '<S11>/Data Type Conversion1'
    //   Inport: '<Root>/Sensor Data'

    remap(static_cast<real32_T>(sensor.inceptor.ch[6]), 172.0F, 1811.0F, 0.0F,
          1.0F, &rtb_norm_out_f);

    // MATLAB Function: '<S148>/remap' incorporates:
    //   Constant: '<S148>/Constant'
    //   Constant: '<S148>/Constant1'
    //   Constant: '<S148>/Constant2'
    //   Constant: '<S148>/Constant3'
    //   DataTypeConversion: '<S11>/Data Type Conversion7'
    //   Inport: '<Root>/Sensor Data'

    remap(static_cast<real32_T>(sensor.inceptor.ch[4]), 172.0F, 1811.0F, 0.0F,
          2.0F, &norm_out);

    // Outputs for Enabled SubSystem: '<S10>/low_batt_counter' incorporates:
    //   EnablePort: '<S145>/Enable'

    // RelationalOperator: '<S144>/Compare' incorporates:
    //   Constant: '<S144>/Constant'
    //   Inport: '<Root>/System Data'

    if (sys.input_volt <= 9.6F) {
      if (!rtDW.low_batt_counter_MODE) {
        // InitializeConditions for UnitDelay: '<S145>/Unit Delay'
        rtDW.UnitDelay_DSTATE = 0.0;
        rtDW.low_batt_counter_MODE = true;
      }

      // RelationalOperator: '<S146>/Compare' incorporates:
      //   Constant: '<S145>/Constant'
      //   Constant: '<S146>/Constant'
      //   Sum: '<S145>/Sum'
      //   UnitDelay: '<S145>/Unit Delay'

      rtDW.Compare = (rtDW.UnitDelay_DSTATE + 0.02 > 15.0);

      // Update for UnitDelay: '<S145>/Unit Delay' incorporates:
      //   Constant: '<S145>/Constant'
      //   Sum: '<S145>/Sum'

      rtDW.UnitDelay_DSTATE += 0.02;
    } else {
      rtDW.low_batt_counter_MODE = false;
    }

    // End of RelationalOperator: '<S144>/Compare'
    // End of Outputs for SubSystem: '<S10>/low_batt_counter'

    // Chart: '<Root>/state_machine' incorporates:
    //   DataTypeConversion: '<Root>/Data Type Conversion'
    //   Inport: '<Root>/Navigation Filter Data'

    sfEvent = -1;
    if (rtDW.temporalCounter_i1 < 1U) {
      rtDW.temporalCounter_i1 = 1U;
    }

    if (rtDW.temporalCounter_i2 < 1U) {
      rtDW.temporalCounter_i2 = 1U;
    }

    if (rtDW.is_active_c4_ale == 0U) {
      rtDW.is_active_c4_ale = 1U;
      rtDW.is_active_arm_state = 1U;
      rtDW.is_arm_state = IN_Disarmed;
      rtDW.armed = false;
      rtDW.is_active_arm_selection = 1U;
      rtDW.is_arm_selection = IN_neutral;
      rtDW.is_active_controller_state = 1U;
      rtDW.is_controller_state = IN_Disarmed;
      rtDW.mode = 10;
      rtDW.is_active_mode_switching = 1U;
      rtDW.is_mode_switching = IN_neutural;
    } else {
      if (rtDW.is_active_arm_state != 0U) {
        arm_state(&sfEvent);
      }

      if (rtDW.is_active_arm_selection != 0U) {
        switch (rtDW.is_arm_selection) {
         case IN_arming:
          if (!check_arming(rtb_norm_out_f != 0.0F,
                            rtU.NavigationFilterData.nav_initialized,
                            rtDW.Compare_l)) {
            rtDW.is_arm_selection = IN_neutral;
          } else {
            sfEvent = event_ARM;
            if (rtDW.is_active_arm_state != 0U) {
              arm_state(&sfEvent);
            }

            sfEvent = -1;
            rtDW.is_arm_selection = IN_neutral;
          }
          break;

         case IN_disarming:
          if (check_arming(rtb_norm_out_f != 0.0F,
                           rtU.NavigationFilterData.nav_initialized,
                           rtDW.Compare_l)) {
            rtDW.is_arm_selection = IN_neutral;
          } else {
            sfEvent = event_DISARM;
            if (rtDW.is_active_arm_state != 0U) {
              arm_state(&sfEvent);
            }

            sfEvent = -1;
            rtDW.is_arm_selection = IN_neutral;
          }
          break;

         case IN_neutral:
          if (!check_arming(rtb_norm_out_f != 0.0F,
                            rtU.NavigationFilterData.nav_initialized,
                            rtDW.Compare_l)) {
            rtDW.is_arm_selection = IN_disarming;
            rtDW.temporalCounter_i1 = 0U;
          } else {
            rtDW.is_arm_selection = IN_arming;
            rtDW.temporalCounter_i1 = 0U;
          }
          break;
        }
      }

      if (rtDW.is_active_controller_state != 0U) {
        controller_state(&sfEvent);
      }

      if (rtDW.is_active_mode_switching != 0U) {
        switch (rtDW.is_mode_switching) {
         case IN_neutural:
          if (norm_out == 2.0F) {
            rtDW.is_mode_switching = IN_trans_to_wp;
            rtDW.temporalCounter_i2 = 0U;
          } else if (rtDW.is_arm_state == IN_Disarmed) {
            rtDW.is_mode_switching = IN_trans_to_disarm;
            rtDW.temporalCounter_i2 = 0U;
          } else if (norm_out == 1.0F) {
            rtDW.is_mode_switching = IN_trans_to_speed;
            rtDW.temporalCounter_i2 = 0U;
          } else if (norm_out == 0.0F) {
            rtDW.is_mode_switching = IN_trans_to_manual;
            rtDW.temporalCounter_i2 = 0U;
          } else if (rtDW.Compare) {
            rtDW.is_mode_switching = IN_trans_to_low_battery;
            rtDW.temporalCounter_i2 = 0U;
          }
          break;

         case IN_trans_to_dead:
          rtDW.is_mode_switching = IN_neutural;
          break;

         case IN_trans_to_disarm:
          if (rtDW.is_arm_state == IN_Armed) {
            rtDW.is_mode_switching = IN_neutural;
          } else if (rtDW.is_arm_state == IN_Disarmed) {
            sfEvent = event_TX_DISARM;
            if (rtDW.is_active_controller_state != 0U) {
              controller_state(&sfEvent);
            }

            rtDW.is_mode_switching = IN_neutural;
          }
          break;

         case IN_trans_to_low_battery:
          if (!rtDW.Compare) {
            rtDW.is_mode_switching = IN_neutural;
          } else {
            sfEvent = event_TX_LOW_BATTERY;
            if (rtDW.is_active_controller_state != 0U) {
              controller_state(&sfEvent);
            }

            rtDW.is_mode_switching = IN_neutural;
          }
          break;

         case IN_trans_to_manual:
          if (norm_out != 0.0F) {
            rtDW.is_mode_switching = IN_neutural;
          } else {
            sfEvent = event_TX_MANUAL;
            if (rtDW.is_active_controller_state != 0U) {
              controller_state(&sfEvent);
            }

            rtDW.is_mode_switching = IN_neutural;
          }
          break;

         case IN_trans_to_speed:
          if (norm_out != 1.0F) {
            rtDW.is_mode_switching = IN_neutural;
          } else {
            sfEvent = event_TX_SPEED;
            if (rtDW.is_active_controller_state != 0U) {
              controller_state(&sfEvent);
            }

            rtDW.is_mode_switching = IN_neutural;
          }
          break;

         case IN_trans_to_wp:
          if (norm_out != 2.0F) {
            rtDW.is_mode_switching = IN_neutural;
          } else {
            sfEvent = event_TX_WAYPOINT;
            if (rtDW.is_active_controller_state != 0U) {
              controller_state(&sfEvent);
            }

            rtDW.is_mode_switching = IN_neutural;
          }
          break;
        }
      }
    }

    // End of Chart: '<Root>/state_machine'

    // MATLAB Function: '<S147>/remap' incorporates:
    //   Constant: '<S147>/Constant'
    //   Constant: '<S147>/Constant1'
    //   Constant: '<S147>/Constant2'
    //   Constant: '<S147>/Constant3'
    //   DataTypeConversion: '<S11>/Data Type Conversion8'
    //   Inport: '<Root>/Sensor Data'

    rtb_norm_out_f = (static_cast<real32_T>(sensor.inceptor.ch[5]) - 172.0F) *
      2.0F / 1639.0F + -1.0F;

    // RelationalOperator: '<S14>/Compare' incorporates:
    //   Constant: '<S14>/Constant'

    rtb_Compare_jd = (rtDW.mode == 2);

    // Outputs for Enabled SubSystem: '<Root>/WAYPOINT CONTROLLER1' incorporates:
    //   EnablePort: '<S7>/Enable'

    if (rtb_Compare_jd) {
      // SignalConversion generated from: '<S7>/Bus Selector1' incorporates:
      //   Inport: '<Root>/Telemetry Data'

      rtb_current_waypoint = telem.current_waypoint;

      // Outputs for Enabled SubSystem: '<S7>/determine target' incorporates:
      //   EnablePort: '<S25>/Enable'

      // Logic: '<S7>/OR' incorporates:
      //   Inport: '<Root>/Telemetry Data'
      //   RelationalOperator: '<S130>/FixPt Relational Operator'
      //   SignalConversion generated from: '<S7>/Bus Selector1'
      //   UnitDelay: '<S130>/Delay Input1'
      //   UnitDelay: '<S7>/Unit Delay'
      //
      //  Block description for '<S130>/Delay Input1':
      //
      //   Store in Global RAM

      if (telem.waypoints_updated || (telem.current_waypoint !=
           rtDW.DelayInput1_DSTATE) || rtDW.UnitDelay_DSTATE_d) {
        // Selector: '<S25>/Selector'
        rtDW.Selector = telem.flight_plan[telem.current_waypoint];

        // Gain: '<S25>/Gain'
        rtDW.Gain = 1.0E-7F * static_cast<real32_T>(rtDW.Selector.x);

        // Gain: '<S25>/Gain1'
        rtDW.Gain1 = 1.0E-7F * static_cast<real32_T>(rtDW.Selector.y);
      }

      // End of Logic: '<S7>/OR'
      // End of Outputs for SubSystem: '<S7>/determine target'

      // Outputs for Enabled SubSystem: '<S7>/WP_NAV' incorporates:
      //   EnablePort: '<S23>/Enable'

      // Sum: '<S29>/Subtract' incorporates:
      //   Inport: '<Root>/Navigation Filter Data'

      norm_out = rtDW.Gain - rtU.NavigationFilterData.ned_pos_m[0];
      rtb_TmpSignalConversionAtSFun_0 = rtDW.Gain1 -
        rtU.NavigationFilterData.ned_pos_m[1];

      // Sqrt: '<S29>/Sqrt' incorporates:
      //   Math: '<S29>/Transpose'
      //   Product: '<S29>/MatrixMultiply'

      u0 = std::sqrt(norm_out * norm_out + rtb_TmpSignalConversionAtSFun_0 *
                     rtb_TmpSignalConversionAtSFun_0);

      // Saturate: '<S23>/Saturation'
      if (u0 > 20.0F) {
        u0 = 20.0F;
      } else if (u0 < 0.0F) {
        u0 = 0.0F;
      }

      // End of Saturate: '<S23>/Saturation'

      // Product: '<S66>/PProd Out' incorporates:
      //   Inport: '<Root>/Telemetry Data'

      u0 *= telem.param[5];

      // Saturate: '<S68>/Saturation'
      if (u0 > 0.3F) {
        // Saturate: '<S68>/Saturation'
        rtDW.Saturation = 0.3F;
      } else if (u0 < 0.0F) {
        // Saturate: '<S68>/Saturation'
        rtDW.Saturation = 0.0F;
      } else {
        // Saturate: '<S68>/Saturation'
        rtDW.Saturation = u0;
      }

      // End of Saturate: '<S68>/Saturation'

      // Sum: '<S80>/Subtract' incorporates:
      //   Inport: '<Root>/Navigation Filter Data'
      //   Trigonometry: '<S29>/Atan2'

      norm_out = std::atan2(rtb_TmpSignalConversionAtSFun_0, norm_out) -
        rtU.NavigationFilterData.heading_rad;

      // Switch: '<S80>/Switch' incorporates:
      //   Abs: '<S80>/Abs'
      //   Constant: '<S129>/Constant'
      //   Constant: '<S80>/Constant'
      //   Product: '<S80>/Product'
      //   RelationalOperator: '<S129>/Compare'
      //   Sum: '<S80>/Subtract1'

      if (std::abs(norm_out) > 3.14159274F) {
        // Signum: '<S80>/Sign'
        if (norm_out < 0.0F) {
          u0 = -1.0F;
        } else {
          u0 = (norm_out > 0.0F);
        }

        // End of Signum: '<S80>/Sign'
        norm_out -= u0 * 6.28318548F;
      }

      // End of Switch: '<S80>/Switch'

      // Product: '<S117>/PProd Out' incorporates:
      //   Inport: '<Root>/Telemetry Data'

      u0 = norm_out * telem.param[6];

      // Saturate: '<S78>/Saturation'
      if (u0 > 3.0F) {
        // Saturate: '<S78>/Saturation'
        rtDW.Saturation_o = 3.0F;
      } else if (u0 < -3.0F) {
        // Saturate: '<S78>/Saturation'
        rtDW.Saturation_o = -3.0F;
      } else {
        // Saturate: '<S78>/Saturation'
        rtDW.Saturation_o = u0;
      }

      // End of Saturate: '<S78>/Saturation'

      // SignalConversion generated from: '<S23>/Command out'
      rtDW.fire_kr = rtb_norm_out_f;

      // SignalConversion generated from: '<S23>/Constant' incorporates:
      //   Constant: '<S23>/Constant'

      rtDW.led_e = -1.0F;

      // End of Outputs for SubSystem: '<S7>/WP_NAV'

      // ModelReference: '<S7>/Model' incorporates:
      //   Inport: '<Root>/Navigation Filter Data'
      //   Inport: '<Root>/Telemetry Data'

      ModelMDLOBJ1.step(&rtDW.Saturation, &rtDW.Saturation_o, &rtDW.fire_kr,
                        &rtDW.led_e, &rtU.NavigationFilterData.gnd_spd_mps,
                        &rtU.NavigationFilterData.gyro_radps[0], &telem.param[0],
                        &rtb_Compare_jd, &rtDW.throttle_l, &rtDW.turn_c,
                        &rtDW.fire_k, &rtDW.led_c);

      // MATLAB Function: '<S26>/check_wp_reached' incorporates:
      //   Constant: '<S26>/Constant'
      //   Inport: '<Root>/Navigation Filter Data'
      //   Inport: '<Root>/Telemetry Data'
      //   Selector: '<S26>/Selector'
      //   Selector: '<S26>/Selector1'
      //   SignalConversion generated from: '<S134>/ SFunction '

      rtb_TmpSignalConversionAtSFun_0 = 1.29246971E-26F;
      absxk = std::abs(rtDW.Gain - rtU.NavigationFilterData.ned_pos_m[0]);
      if (absxk > 1.29246971E-26F) {
        norm_out = 1.0F;
        rtb_TmpSignalConversionAtSFun_0 = absxk;
      } else {
        t = absxk / 1.29246971E-26F;
        norm_out = t * t;
      }

      absxk = std::abs(rtDW.Gain1 - rtU.NavigationFilterData.ned_pos_m[1]);
      if (absxk > rtb_TmpSignalConversionAtSFun_0) {
        t = rtb_TmpSignalConversionAtSFun_0 / absxk;
        norm_out = norm_out * t * t + 1.0F;
        rtb_TmpSignalConversionAtSFun_0 = absxk;
      } else {
        t = absxk / rtb_TmpSignalConversionAtSFun_0;
        norm_out += t * t;
      }

      rtDW.reached = ((rtb_TmpSignalConversionAtSFun_0 * std::sqrt(norm_out) <=
                       telem.param[10]) &&
                      telem.flight_plan[telem.current_waypoint].autocontinue);

      // End of MATLAB Function: '<S26>/check_wp_reached'
    }

    // End of Outputs for SubSystem: '<Root>/WAYPOINT CONTROLLER1'

    // MATLAB Function: '<S150>/remap' incorporates:
    //   Constant: '<S150>/Constant'
    //   Constant: '<S150>/Constant1'
    //   Constant: '<S150>/Constant2'
    //   Constant: '<S150>/Constant3'
    //   DataTypeConversion: '<S11>/Data Type Conversion4'
    //   Inport: '<Root>/Sensor Data'

    remap(static_cast<real32_T>(sensor.inceptor.ch[2]), 172.0F, 1811.0F, -1.0F,
          1.0F, &norm_out);

    // MATLAB Function: '<S151>/remap' incorporates:
    //   Constant: '<S151>/Constant'
    //   Constant: '<S151>/Constant1'
    //   Constant: '<S151>/Constant2'
    //   Constant: '<S151>/Constant3'
    //   DataTypeConversion: '<S11>/Data Type Conversion3'
    //   Inport: '<Root>/Sensor Data'

    remap(static_cast<real32_T>(sensor.inceptor.ch[1]), 172.0F, 1811.0F, -1.0F,
          1.0F, &rtb_TmpSignalConversionAtSFun_0);

    // Outputs for Enabled SubSystem: '<Root>/Stab_input_conversion1' incorporates:
    //   EnablePort: '<S5>/Enable'

    // RelationalOperator: '<S12>/Compare' incorporates:
    //   Constant: '<S12>/Constant'

    if (rtDW.mode == 0) {
      // Gain: '<S5>/Gain'
      rtDW.throttle_g = norm_out;

      // SignalConversion generated from: '<S5>/Constant' incorporates:
      //   Constant: '<S5>/Constant'

      rtDW.led_em = -1.0F;

      // Gain: '<S5>/Gain1'
      rtDW.turn_k = rtb_TmpSignalConversionAtSFun_0;

      // Gain: '<S5>/Gain2'
      rtDW.fire_n = rtb_norm_out_f;
    }

    // End of RelationalOperator: '<S12>/Compare'
    // End of Outputs for SubSystem: '<Root>/Stab_input_conversion1'

    // RelationalOperator: '<S13>/Compare' incorporates:
    //   Constant: '<S13>/Constant'

    rtb_Compare_g = (rtDW.mode == 1);

    // Outputs for Enabled SubSystem: '<Root>/speed controller2' incorporates:
    //   EnablePort: '<S17>/Enable'

    // Outputs for Enabled SubSystem: '<Root>/Pos_Hold_input_conversion2' incorporates:
    //   EnablePort: '<S4>/Enable'

    if (rtb_Compare_g) {
      // Saturate: '<S4>/Saturation'
      if (norm_out > 1.0F) {
        u0 = 1.0F;
      } else if (norm_out < 0.0F) {
        u0 = 0.0F;
      } else {
        u0 = norm_out;
      }

      // End of Saturate: '<S4>/Saturation'

      // Gain: '<S4>/Gain'
      rtDW.speed_cmd_mps = 0.3F * u0;

      // SignalConversion generated from: '<S4>/Constant' incorporates:
      //   Constant: '<S4>/Constant'

      rtDW.led_emo = -1.0F;

      // Gain: '<S4>/Gain3' incorporates:
      //   Gain: '<S4>/Gain1'
      //   Rounding: '<S4>/Round'

      rtDW.turn_rate_cmd_radps = rt_roundf(300.0F *
        rtb_TmpSignalConversionAtSFun_0) * 0.01F;

      // Gain: '<S4>/Gain2'
      rtDW.fire_da = rtb_norm_out_f;

      // ModelReference: '<S17>/Model' incorporates:
      //   Inport: '<Root>/Navigation Filter Data'
      //   Inport: '<Root>/Telemetry Data'

      ModelMDLOBJ2.step(&rtDW.speed_cmd_mps, &rtDW.turn_rate_cmd_radps,
                        &rtDW.fire_da, &rtDW.led_emo,
                        &rtU.NavigationFilterData.gnd_spd_mps,
                        &rtU.NavigationFilterData.gyro_radps[0], &telem.param[0],
                        &rtb_Compare_g, &rtDW.throttle, &rtDW.turn, &rtDW.fire,
                        &rtDW.led);
    }

    // End of Outputs for SubSystem: '<Root>/Pos_Hold_input_conversion2'
    // End of Outputs for SubSystem: '<Root>/speed controller2'

    // Outputs for Enabled SubSystem: '<Root>/low battery controller' incorporates:
    //   EnablePort: '<S16>/Enable'

    // RelationalOperator: '<S2>/Compare' incorporates:
    //   Constant: '<S16>/Constant1'
    //   Constant: '<S16>/Constant4'
    //   Constant: '<S16>/Constant5'
    //   Constant: '<S2>/Constant'

    if (rtDW.mode == 3) {
      real_T rtb_Sum_n;

      // DiscretePulseGenerator: '<S16>/Discrete Pulse Generator'
      rtb_Sum_n = (rtDW.clockTickCounter < 5) && (rtDW.clockTickCounter >= 0) ?
        2.0 : 0.0;
      if (rtDW.clockTickCounter >= 99) {
        rtDW.clockTickCounter = 0;
      } else {
        rtDW.clockTickCounter++;
      }

      // End of DiscretePulseGenerator: '<S16>/Discrete Pulse Generator'

      // DataTypeConversion: '<S16>/Cast' incorporates:
      //   Constant: '<S16>/Constant'
      //   Sum: '<S16>/Sum'

      rtDW.fire_d = static_cast<real32_T>(rtb_Sum_n) - 1.0F;
      rtDW.led_g = 1.0F;
      rtDW.turn_b = 0.0F;
      rtDW.throttle_h = 0.0F;
    }

    // End of RelationalOperator: '<S2>/Compare'
    // End of Outputs for SubSystem: '<Root>/low battery controller'

    // Outputs for Enabled SubSystem: '<Root>/death controller' incorporates:
    //   EnablePort: '<S15>/Enable'

    // RelationalOperator: '<S1>/Compare' incorporates:
    //   Constant: '<S15>/Constant'
    //   Constant: '<S15>/Constant1'
    //   Constant: '<S15>/Constant2'
    //   Constant: '<S15>/Constant3'
    //   Constant: '<S1>/Constant'

    if (rtDW.mode == 4) {
      rtDW.throttle_d = 0.0F;
      rtDW.turn_p = 0.0F;
      rtDW.fire_a = -1.0F;
      rtDW.led_g0 = 1.0F;
    }

    // End of RelationalOperator: '<S1>/Compare'
    // End of Outputs for SubSystem: '<Root>/death controller'

    // MultiPortSwitch generated from: '<Root>/Multiport Switch2' incorporates:
    //   Constant: '<S19>/Constant5'

    switch (rtDW.mode) {
     case 0:
      rtb_norm_out_f = rtDW.throttle_g;
      break;

     case 1:
      rtb_norm_out_f = rtDW.throttle;
      break;

     case 2:
      rtb_norm_out_f = rtDW.throttle_l;
      break;

     case 3:
      rtb_norm_out_f = rtDW.throttle_h;
      break;

     case 4:
      rtb_norm_out_f = rtDW.throttle_d;
      break;

     default:
      rtb_norm_out_f = 0.0F;
      break;
    }

    // Switch: '<Root>/switch_motor_out' incorporates:
    //   Constant: '<Root>/Constant'

    if (rtDW.armed) {
      real32_T rtb_turn;

      // MultiPortSwitch generated from: '<Root>/Multiport Switch2' incorporates:
      //   Constant: '<S19>/Constant3'

      switch (rtDW.mode) {
       case 0:
        absxk = rtDW.led_em;
        break;

       case 1:
        absxk = rtDW.led;
        break;

       case 2:
        absxk = rtDW.led_c;
        break;

       case 3:
        absxk = rtDW.led_g;
        break;

       case 4:
        absxk = rtDW.led_g0;
        break;

       default:
        absxk = 1.0F;
        break;
      }

      // MultiPortSwitch generated from: '<Root>/Multiport Switch2' incorporates:
      //   Constant: '<S19>/Constant2'

      switch (rtDW.mode) {
       case 0:
        t = rtDW.fire_n;
        break;

       case 1:
        t = rtDW.fire;
        break;

       case 2:
        t = rtDW.fire_k;
        break;

       case 3:
        t = rtDW.fire_d;
        break;

       case 4:
        t = rtDW.fire_a;
        break;

       default:
        t = 0.0F;
        break;
      }

      // MultiPortSwitch generated from: '<Root>/Multiport Switch2' incorporates:
      //   Constant: '<S19>/Constant4'

      switch (rtDW.mode) {
       case 0:
        rtb_turn = rtDW.turn_k;
        break;

       case 1:
        rtb_turn = rtDW.turn;
        break;

       case 2:
        rtb_turn = rtDW.turn_c;
        break;

       case 3:
        rtb_turn = rtDW.turn_b;
        break;

       case 4:
        rtb_turn = rtDW.turn_p;
        break;

       default:
        rtb_turn = 0.0F;
        break;
      }

      // Product: '<S3>/Multiply' incorporates:
      //   Constant: '<S3>/Motor Mix'
      //   Reshape: '<S3>/Reshape'

      for (sfEvent = 0; sfEvent < 8; sfEvent++) {
        u0 = ((rtCP_MotorMix_Value[sfEvent + 8] * rtb_turn +
               rtCP_MotorMix_Value[sfEvent] * rtb_norm_out_f) +
              rtCP_MotorMix_Value[sfEvent + 16] * t) +
          rtCP_MotorMix_Value[sfEvent + 24] * absxk;

        // Saturate: '<S3>/Saturation' incorporates:
        //   Constant: '<S3>/Motor Mix'
        //   Reshape: '<S3>/Reshape'

        if (u0 > 1.0F) {
          rtb_switch_motor_out[sfEvent] = 1.0F;
        } else if (u0 < -1.0F) {
          rtb_switch_motor_out[sfEvent] = -1.0F;
        } else {
          rtb_switch_motor_out[sfEvent] = u0;
        }

        // End of Saturate: '<S3>/Saturation'
      }

      // End of Product: '<S3>/Multiply'
    } else {
      for (sfEvent = 0; sfEvent < 8; sfEvent++) {
        rtb_switch_motor_out[sfEvent] = rtCP_Constant_Value_bm[sfEvent];
      }
    }

    // End of Switch: '<Root>/switch_motor_out'

    // Outputs for Enabled SubSystem: '<S9>/determine death' incorporates:
    //   EnablePort: '<S142>/Enable'

    // Logic: '<S9>/AND' incorporates:
    //   UnitDelay: '<S9>/Unit Delay1'

    if ((rtDW.UnitDelay1_DSTATE_k[0] && rtDW.Compare_l) ||
        (rtDW.UnitDelay1_DSTATE_k[1] && rtDW.Compare_l)) {
      // MATLAB Function: '<S142>/MATLAB Function' incorporates:
      //   Gain: '<S138>/Multiply'
      //   Inport: '<Root>/Sensor Data'

      rtDW.dead[0] = (sensor.adc.volt[0] <= rtDW.Multiply[0]);
      rtDW.dead[1] = (sensor.adc.volt[0] <= rtDW.Multiply[1]);
    }

    // End of Logic: '<S9>/AND'
    // End of Outputs for SubSystem: '<S9>/determine death'

    // Outport: '<Root>/VMS Data' incorporates:
    //   BusCreator: '<S6>/Bus Creator'
    //   Constant: '<S20>/Constant'
    //   Constant: '<S20>/Constant1'
    //   Constant: '<S21>/Constant4'
    //   Constant: '<S21>/Constant6'
    //   Constant: '<S21>/Constant7'
    //   DataTypeConversion: '<Root>/Cast To Single'
    //   DataTypeConversion: '<S21>/Data Type Conversion'
    //   Gain: '<Root>/Gain'
    //   MATLAB Function: '<S21>/remap1'
    //   SignalConversion generated from: '<S6>/Bus Creator'
    //   Switch: '<Root>/switch_motor_out'
    //
    ctrl->motors_enabled = rtDW.armed;
    ctrl->waypoint_reached = rtDW.reached;
    ctrl->mode = rtDW.mode;
    ctrl->throttle_cmd_prcnt = 100.0F * rtb_norm_out_f;
    ctrl->aux[0] = norm_out;
    ctrl->aux[1] = rtb_TmpSignalConversionAtSFun_0;
    ctrl->aux[2] = rtb_switch_motor_out[0];
    ctrl->aux[3] = rtb_switch_motor_out[1];
    ctrl->aux[4] = rtb_switch_motor_out[2];
    ctrl->aux[5] = 0.0F;
    ctrl->aux[6] = 0.0F;
    ctrl->aux[7] = rtb_switch_motor_out[3];
    ctrl->aux[8] = rtDW.Gain;
    ctrl->aux[9] = rtDW.Gain1;
    ctrl->aux[10] = rtDW.Selector.z;
    ctrl->aux[11] = 0.0F;
    ctrl->aux[12] = 0.0F;
    ctrl->aux[13] = 0.0F;
    ctrl->aux[14] = 0.0F;
    ctrl->aux[15] = 0.0F;
    ctrl->aux[16] = 0.0F;
    ctrl->aux[17] = 0.0F;
    ctrl->aux[18] = 0.0F;
    ctrl->aux[19] = 0.0F;
    ctrl->aux[20] = 0.0F;
    ctrl->aux[21] = 0.0F;
    ctrl->aux[22] = 0.0F;
    ctrl->aux[23] = 0.0F;
    ctrl->sbus.ch17 = true;
    ctrl->sbus.ch18 = true;
    std::memset(&ctrl->sbus.cmd[0], 0, sizeof(real32_T) << 4U);
    for (sfEvent = 0; sfEvent < 16; sfEvent++) {
      ctrl->sbus.cnt[sfEvent] = 0;
    }

    for (sfEvent = 0; sfEvent < 8; sfEvent++) {
      rtb_norm_out_f = rtb_switch_motor_out[sfEvent];
      ctrl->pwm.cnt[sfEvent] = static_cast<int16_T>(std::floor((rtb_norm_out_f -
        -1.0F) * 1000.0F / 2.0F + 1000.0F));

      // Saturate: '<S21>/Saturation' incorporates:
      //   Constant: '<S21>/Constant4'
      //   Constant: '<S21>/Constant6'
      //   Constant: '<S21>/Constant7'
      //   DataTypeConversion: '<S21>/Data Type Conversion'
      //   MATLAB Function: '<S21>/remap1'
      //   Switch: '<Root>/switch_motor_out'

      if (rtb_norm_out_f > 1.0F) {
        ctrl->pwm.cmd[sfEvent] = 1.0F;
      } else if (rtb_norm_out_f < 1.0F) {
        ctrl->pwm.cmd[sfEvent] = 1.0F;
      } else {
        ctrl->pwm.cmd[sfEvent] = rtb_norm_out_f;
      }

      // End of Saturate: '<S21>/Saturation'
    }

    ctrl->analog.val[0] = 0.0F;
    ctrl->analog.val[1] = 0.0F;

    // End of Outport: '<Root>/VMS Data'

    // Update for UnitDelay: '<S8>/Unit Delay1' incorporates:
    //   Logic: '<S8>/NOT2'

    rtDW.UnitDelay1_DSTATE_m = !rtDW.Compare_l;

    // Update for Enabled SubSystem: '<Root>/WAYPOINT CONTROLLER1' incorporates:
    //   EnablePort: '<S7>/Enable'

    if (rtb_Compare_jd) {
      // Update for UnitDelay: '<S130>/Delay Input1'
      //
      //  Block description for '<S130>/Delay Input1':
      //
      //   Store in Global RAM

      rtDW.DelayInput1_DSTATE = rtb_current_waypoint;

      // Update for UnitDelay: '<S7>/Unit Delay'
      rtDW.UnitDelay_DSTATE_d = rtDW.reached;
    }

    // End of Update for SubSystem: '<Root>/WAYPOINT CONTROLLER1'

    // Update for UnitDelay: '<S9>/Unit Delay1' incorporates:
    //   Logic: '<S9>/NOT1'

    rtDW.UnitDelay1_DSTATE_k[0] = !rtDW.dead[0];
    rtDW.UnitDelay1_DSTATE_k[1] = !rtDW.dead[1];
  }

  // Model initialize function
  void Autocode::initialize()
  {
    // InitializeConditions for UnitDelay: '<S8>/Unit Delay1'
    rtDW.UnitDelay1_DSTATE_m = true;

    // InitializeConditions for UnitDelay: '<S9>/Unit Delay1'
    rtDW.UnitDelay1_DSTATE_k[0] = true;
    rtDW.UnitDelay1_DSTATE_k[1] = true;

    // SystemInitialize for Enabled SubSystem: '<Root>/WAYPOINT CONTROLLER1'
    // InitializeConditions for UnitDelay: '<S130>/Delay Input1'
    //
    //  Block description for '<S130>/Delay Input1':
    //
    //   Store in Global RAM

    rtDW.DelayInput1_DSTATE = -1;

    // SystemInitialize for ModelReference: '<S7>/Model'
    ModelMDLOBJ1.init();

    // End of SystemInitialize for SubSystem: '<Root>/WAYPOINT CONTROLLER1'

    // SystemInitialize for Enabled SubSystem: '<Root>/speed controller2'

    // SystemInitialize for ModelReference: '<S17>/Model'
    ModelMDLOBJ2.init();

    // End of SystemInitialize for SubSystem: '<Root>/speed controller2'

    // SystemInitialize for Enabled SubSystem: '<Root>/death controller'
    // Start for Constant: '<S15>/Constant2'
    rtDW.fire_a = -1.0F;

    // Start for Constant: '<S15>/Constant3'
    rtDW.led_g0 = 1.0F;

    // End of SystemInitialize for SubSystem: '<Root>/death controller'
  }

  // Model terminate function
  void Autocode::terminate()
  {
    // Terminate for Enabled SubSystem: '<Root>/WAYPOINT CONTROLLER1'

    // Terminate for ModelReference: '<S7>/Model'
    ModelMDLOBJ1.terminate();

    // End of Terminate for SubSystem: '<Root>/WAYPOINT CONTROLLER1'

    // Terminate for Enabled SubSystem: '<Root>/speed controller2'

    // Terminate for ModelReference: '<S17>/Model'
    ModelMDLOBJ2.terminate();

    // End of Terminate for SubSystem: '<Root>/speed controller2'
  }

  // Constructor
  Autocode::Autocode():
    rtU(),
    rtDW()
  {
    // Currently there is no constructor body generated.
  }

  // Destructor
  Autocode::~Autocode()
  {
    // Currently there is no destructor body generated.
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
