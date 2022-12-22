//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: autocode.h
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
#ifndef RTW_HEADER_autocode_h_
#define RTW_HEADER_autocode_h_
#include "rtwtypes.h"
#include "flight/global_defs.h"
#include "ale_speed_controller.h"
#include <array>

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_struct_dTfe4k2UVosyggqQqnWZ2_
#define DEFINED_TYPEDEF_FOR_struct_dTfe4k2UVosyggqQqnWZ2_

struct struct_dTfe4k2UVosyggqQqnWZ2
{
  real32_T speed_cmd_mps;
  real32_T turn_rate_cmd_radps;
  real32_T fire;
  real32_T led;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_1Zz1PfPIx4sYmwc3TopxTF_
#define DEFINED_TYPEDEF_FOR_struct_1Zz1PfPIx4sYmwc3TopxTF_

struct struct_1Zz1PfPIx4sYmwc3TopxTF
{
  real32_T throttle;
  real32_T turn;
  real32_T fire;
  real32_T led;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_kvNw6wKF27ENDiyuhdMQAF_
#define DEFINED_TYPEDEF_FOR_struct_kvNw6wKF27ENDiyuhdMQAF_

struct struct_kvNw6wKF27ENDiyuhdMQAF
{
  std::array<real32_T, 3> signal1;
  int16_T current_waypoint;
};

#endif

// Class declaration for model ale
namespace bfs
{
  class Autocode
  {
    // public data and function members
   public:
    // Block signals and states (default storage) for system '<Root>'
    struct DW {
      MissionItem Selector;            // '<S25>/Selector'
      std::array<real_T, 2> Multiply;  // '<S138>/Multiply'
      real_T Sum;                      // '<S137>/Sum'
      real_T UnitDelay_DSTATE;         // '<S145>/Unit Delay'
      real_T UnitDelay_DSTATE_l;       // '<S141>/Unit Delay'
      std::array<real32_T, 2> UnitDelay1_DSTATE;// '<S140>/Unit Delay1'
      real32_T throttle;               // '<S17>/Model'
      real32_T turn;                   // '<S17>/Model'
      real32_T fire;                   // '<S17>/Model'
      real32_T led;                    // '<S17>/Model'
      real32_T fire_d;                 // '<S16>/Cast'
      real32_T led_g;                  // '<S16>/Constant1'
      real32_T turn_b;                 // '<S16>/Constant4'
      real32_T throttle_h;             // '<S16>/Constant5'
      real32_T throttle_d;             // '<S15>/Constant'
      real32_T turn_p;                 // '<S15>/Constant1'
      real32_T fire_a;                 // '<S15>/Constant2'
      real32_T led_g0;                 // '<S15>/Constant3'
      real32_T throttle_l;             // '<S7>/Model'
      real32_T turn_c;                 // '<S7>/Model'
      real32_T fire_k;                 // '<S7>/Model'
      real32_T led_c;                  // '<S7>/Model'
      real32_T Gain;                   // '<S25>/Gain'
      real32_T Gain1;                  // '<S25>/Gain1'
      real32_T Saturation;             // '<S68>/Saturation'
      real32_T Saturation_o;           // '<S78>/Saturation'
      real32_T fire_kr;
                   // '<S23>/BusConversion_InsertedFor_Command out_at_inport_0'
      real32_T led_e;                  // '<S23>/Constant'
      real32_T throttle_g;             // '<S5>/Gain'
      real32_T led_em;                 // '<S5>/Constant'
      real32_T turn_k;                 // '<S5>/Gain1'
      real32_T fire_n;                 // '<S5>/Gain2'
      real32_T speed_cmd_mps;          // '<S4>/Gain'
      real32_T led_emo;                // '<S4>/Constant'
      real32_T turn_rate_cmd_radps;    // '<S4>/Gain3'
      real32_T fire_da;                // '<S4>/Gain2'
      int32_T clockTickCounter;        // '<S16>/Discrete Pulse Generator'
      int16_T DelayInput1_DSTATE;      // '<S130>/Delay Input1'
      int8_T mode;                     // '<Root>/state_machine'
      uint8_T is_active_c4_ale;        // '<Root>/state_machine'
      uint8_T is_arm_selection;        // '<Root>/state_machine'
      uint8_T is_active_arm_selection; // '<Root>/state_machine'
      uint8_T is_arm_state;            // '<Root>/state_machine'
      uint8_T is_active_arm_state;     // '<Root>/state_machine'
      uint8_T is_controller_state;     // '<Root>/state_machine'
      uint8_T is_active_controller_state;// '<Root>/state_machine'
      uint8_T is_mode_switching;       // '<Root>/state_machine'
      uint8_T is_active_mode_switching;// '<Root>/state_machine'
      uint8_T temporalCounter_i1;      // '<Root>/state_machine'
      uint8_T temporalCounter_i2;      // '<Root>/state_machine'
      std::array<boolean_T, 2> dead;   // '<S142>/MATLAB Function'
      std::array<boolean_T, 2> UnitDelay1_DSTATE_k;// '<S9>/Unit Delay1'
      boolean_T armed;                 // '<Root>/state_machine'
      boolean_T Compare;               // '<S146>/Compare'
      boolean_T Compare_l;             // '<S139>/Compare'
      boolean_T reached;               // '<S26>/check_wp_reached'
      boolean_T UnitDelay1_DSTATE_m;   // '<S8>/Unit Delay1'
      boolean_T UnitDelay_DSTATE_d;    // '<S7>/Unit Delay'
      boolean_T low_batt_counter_MODE; // '<S10>/low_batt_counter'
    };

    // External inputs (root inport signals with default storage)
    struct ExtU {
      NavData NavigationFilterData;    // '<Root>/Navigation Filter Data'
    };

    // External inputs
    ExtU rtU;

    // model initialize function
    void initialize();

    // model step function
    void Run(const SysData &sys, const SensorData &sensor, const NavData &nav,
             const TelemData &telem, VmsData *ctrl);

    // model terminate function
    void terminate();

    // Constructor
    Autocode();

    // Destructor
    ~Autocode();

    // private data and function members
   private:
    // Block states
    DW rtDW;

    // private member function(s) for subsystem '<S148>/remap'
    static void remap(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                      rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max,
                      real32_T *rty_norm_out);

    // private member function(s) for subsystem '<Root>'
    void arm_state(const int32_T *sfEvent);
    boolean_T check_arming(boolean_T motor_en_, boolean_T nav_initialized_,
      boolean_T cal_done_);
    void controller_state(const int32_T *sfEvent);

    // model instance variable for '<S7>/Model'
    ale_speed_controller ModelMDLOBJ1;

    // model instance variable for '<S17>/Model'
    ale_speed_controller ModelMDLOBJ2;
  };
}

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope' : Unused code path elimination
//  Block '<Root>/Cast To Single1' : Eliminate redundant data type conversion
//  Block '<Root>/Reshape' : Reshape block reduction
//  Block '<S119>/Saturation' : Eliminated Saturate block


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'ale'
//  '<S1>'   : 'ale/Compare To Constant'
//  '<S2>'   : 'ale/Compare To Constant1'
//  '<S3>'   : 'ale/Motor Mixing Algorithm'
//  '<S4>'   : 'ale/Pos_Hold_input_conversion2'
//  '<S5>'   : 'ale/Stab_input_conversion1'
//  '<S6>'   : 'ale/To VMS Data'
//  '<S7>'   : 'ale/WAYPOINT CONTROLLER1'
//  '<S8>'   : 'ale/calibrate phototransistor'
//  '<S9>'   : 'ale/check_death'
//  '<S10>'  : 'ale/check_low_batt'
//  '<S11>'  : 'ale/command selection1'
//  '<S12>'  : 'ale/compare_to_manual3'
//  '<S13>'  : 'ale/compare_to_stab4'
//  '<S14>'  : 'ale/compare_to_wp1'
//  '<S15>'  : 'ale/death controller'
//  '<S16>'  : 'ale/low battery controller'
//  '<S17>'  : 'ale/speed controller2'
//  '<S18>'  : 'ale/state_machine'
//  '<S19>'  : 'ale/unarmed mode'
//  '<S20>'  : 'ale/To VMS Data/SBUS '
//  '<S21>'  : 'ale/To VMS Data/Subsystem'
//  '<S22>'  : 'ale/To VMS Data/Subsystem/remap1'
//  '<S23>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV'
//  '<S24>'  : 'ale/WAYPOINT CONTROLLER1/capture rising edge'
//  '<S25>'  : 'ale/WAYPOINT CONTROLLER1/determine target'
//  '<S26>'  : 'ale/WAYPOINT CONTROLLER1/wp_completion_check'
//  '<S27>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2'
//  '<S28>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller'
//  '<S29>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/horizontal_error_calculation '
//  '<S30>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Anti-windup'
//  '<S31>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/D Gain'
//  '<S32>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Filter'
//  '<S33>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Filter ICs'
//  '<S34>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/I Gain'
//  '<S35>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Ideal P Gain'
//  '<S36>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Ideal P Gain Fdbk'
//  '<S37>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Integrator'
//  '<S38>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Integrator ICs'
//  '<S39>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/N Copy'
//  '<S40>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/N Gain'
//  '<S41>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/P Copy'
//  '<S42>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Parallel P Gain'
//  '<S43>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Reset Signal'
//  '<S44>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Saturation'
//  '<S45>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Saturation Fdbk'
//  '<S46>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Sum'
//  '<S47>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Sum Fdbk'
//  '<S48>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Tracking Mode'
//  '<S49>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Tracking Mode Sum'
//  '<S50>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Tsamp - Integral'
//  '<S51>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Tsamp - Ngain'
//  '<S52>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/postSat Signal'
//  '<S53>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/preSat Signal'
//  '<S54>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Anti-windup/Disabled'
//  '<S55>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/D Gain/Disabled'
//  '<S56>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Filter/Disabled'
//  '<S57>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Filter ICs/Disabled'
//  '<S58>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/I Gain/Disabled'
//  '<S59>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Ideal P Gain/Passthrough'
//  '<S60>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Ideal P Gain Fdbk/Disabled'
//  '<S61>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Integrator/Disabled'
//  '<S62>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Integrator ICs/Disabled'
//  '<S63>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/N Copy/Disabled wSignal Specification'
//  '<S64>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/N Gain/Disabled'
//  '<S65>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/P Copy/Disabled'
//  '<S66>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Parallel P Gain/External Parameters'
//  '<S67>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Reset Signal/Disabled'
//  '<S68>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Saturation/Enabled'
//  '<S69>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Saturation Fdbk/Disabled'
//  '<S70>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Sum/Passthrough_P'
//  '<S71>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Sum Fdbk/Disabled'
//  '<S72>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Tracking Mode/Disabled'
//  '<S73>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Tracking Mode Sum/Passthrough'
//  '<S74>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Tsamp - Integral/Disabled wSignal Specification'
//  '<S75>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/Tsamp - Ngain/Passthrough'
//  '<S76>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/postSat Signal/Forward_Path'
//  '<S77>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/PID Controller2/preSat Signal/Forward_Path'
//  '<S78>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller'
//  '<S79>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2'
//  '<S80>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/heading_error'
//  '<S81>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Anti-windup'
//  '<S82>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/D Gain'
//  '<S83>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Filter'
//  '<S84>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Filter ICs'
//  '<S85>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/I Gain'
//  '<S86>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Ideal P Gain'
//  '<S87>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Ideal P Gain Fdbk'
//  '<S88>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Integrator'
//  '<S89>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Integrator ICs'
//  '<S90>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/N Copy'
//  '<S91>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/N Gain'
//  '<S92>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/P Copy'
//  '<S93>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Parallel P Gain'
//  '<S94>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Reset Signal'
//  '<S95>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Saturation'
//  '<S96>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Saturation Fdbk'
//  '<S97>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Sum'
//  '<S98>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Sum Fdbk'
//  '<S99>'  : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Tracking Mode'
//  '<S100>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Tracking Mode Sum'
//  '<S101>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Tsamp - Integral'
//  '<S102>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Tsamp - Ngain'
//  '<S103>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/postSat Signal'
//  '<S104>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/preSat Signal'
//  '<S105>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Anti-windup/Disabled'
//  '<S106>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/D Gain/Disabled'
//  '<S107>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Filter/Disabled'
//  '<S108>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Filter ICs/Disabled'
//  '<S109>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/I Gain/Disabled'
//  '<S110>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Ideal P Gain/Passthrough'
//  '<S111>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Ideal P Gain Fdbk/Disabled'
//  '<S112>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Integrator/Disabled'
//  '<S113>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Integrator ICs/Disabled'
//  '<S114>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/N Copy/Disabled wSignal Specification'
//  '<S115>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/N Gain/Disabled'
//  '<S116>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/P Copy/Disabled'
//  '<S117>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Parallel P Gain/External Parameters'
//  '<S118>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Reset Signal/Disabled'
//  '<S119>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Saturation/Enabled'
//  '<S120>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Saturation Fdbk/Disabled'
//  '<S121>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Sum/Passthrough_P'
//  '<S122>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Sum Fdbk/Disabled'
//  '<S123>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Tracking Mode/Disabled'
//  '<S124>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Tracking Mode Sum/Passthrough'
//  '<S125>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Tsamp - Integral/Disabled wSignal Specification'
//  '<S126>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/Tsamp - Ngain/Passthrough'
//  '<S127>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/postSat Signal/Forward_Path'
//  '<S128>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/PID Controller2/preSat Signal/Forward_Path'
//  '<S129>' : 'ale/WAYPOINT CONTROLLER1/WP_NAV/heading_controller/heading_controller/heading_error/Compare To Constant'
//  '<S130>' : 'ale/WAYPOINT CONTROLLER1/capture rising edge/Detect Change1'
//  '<S131>' : 'ale/WAYPOINT CONTROLLER1/determine target/Compare To Constant'
//  '<S132>' : 'ale/WAYPOINT CONTROLLER1/determine target/calc_prev_target_pos'
//  '<S133>' : 'ale/WAYPOINT CONTROLLER1/determine target/determine_target'
//  '<S134>' : 'ale/WAYPOINT CONTROLLER1/wp_completion_check/check_wp_reached'
//  '<S135>' : 'ale/calibrate phototransistor/calibration routine'
//  '<S136>' : 'ale/calibrate phototransistor/calibration routine/Compare To Constant1'
//  '<S137>' : 'ale/calibrate phototransistor/calibration routine/delay counter'
//  '<S138>' : 'ale/calibrate phototransistor/calibration routine/determine threshold'
//  '<S139>' : 'ale/calibrate phototransistor/calibration routine/determine threshold/Compare To Constant'
//  '<S140>' : 'ale/calibrate phototransistor/calibration routine/determine threshold/average voltage'
//  '<S141>' : 'ale/calibrate phototransistor/calibration routine/determine threshold/counter'
//  '<S142>' : 'ale/check_death/determine death'
//  '<S143>' : 'ale/check_death/determine death/MATLAB Function'
//  '<S144>' : 'ale/check_low_batt/Compare To Constant4'
//  '<S145>' : 'ale/check_low_batt/low_batt_counter'
//  '<S146>' : 'ale/check_low_batt/low_batt_counter/Compare To Constant2'
//  '<S147>' : 'ale/command selection1/fire_normalize'
//  '<S148>' : 'ale/command selection1/mode_norm'
//  '<S149>' : 'ale/command selection1/motor_enable_norm'
//  '<S150>' : 'ale/command selection1/throttle_normalize'
//  '<S151>' : 'ale/command selection1/turn_normalize'
//  '<S152>' : 'ale/command selection1/fire_normalize/remap'
//  '<S153>' : 'ale/command selection1/mode_norm/remap'
//  '<S154>' : 'ale/command selection1/motor_enable_norm/remap'
//  '<S155>' : 'ale/command selection1/throttle_normalize/remap'
//  '<S156>' : 'ale/command selection1/turn_normalize/remap'

#endif                                 // RTW_HEADER_autocode_h_

//
// File trailer for generated code.
//
// [EOF]
//
