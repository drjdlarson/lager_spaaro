//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ale_speed_controller.h
//
// Code generated for Simulink model 'ale_speed_controller'.
//
// Model version                  : 1.21
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Wed Dec 21 10:17:11 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: NXP->Cortex-M4
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_ale_speed_controller_h_
#define RTW_HEADER_ale_speed_controller_h_
#include "rtwtypes.h"
#include <array>
#include <cstring>
#include <stddef.h>

// Model Code Variants
#ifndef struct_ale_speed_con_b_dsp_FIRFilter_0
#define struct_ale_speed_con_b_dsp_FIRFilter_0

struct ale_speed_con_b_dsp_FIRFilter_0
{
  int32_T S0_isInitialized;
  std::array<real32_T, 13> W0_states;
  real32_T P0_InitialStates;
  std::array<real32_T, 14> P1_Coefficients;
};

#endif                                // struct_ale_speed_con_b_dsp_FIRFilter_0

#ifndef struct_ale_spee_b_dspcodegen_FIRFilter
#define struct_ale_spee_b_dspcodegen_FIRFilter

struct ale_spee_b_dspcodegen_FIRFilter
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  ale_speed_con_b_dsp_FIRFilter_0 cSFunObject;
};

#endif                                // struct_ale_spee_b_dspcodegen_FIRFilter

#ifndef struct_ale_speed_controller_cell_wrap
#define struct_ale_speed_controller_cell_wrap

struct ale_speed_controller_cell_wrap
{
  std::array<uint32_T, 8> f1;
};

#endif                                 // struct_ale_speed_controller_cell_wrap

#ifndef struct_ale__dsp_simulink_LowpassFilter
#define struct_ale__dsp_simulink_LowpassFilter

struct ale__dsp_simulink_LowpassFilter
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  ale_speed_controller_cell_wrap inputVarSize;
  int32_T NumChannels;
  ale_spee_b_dspcodegen_FIRFilter *FilterObj;
  ale_spee_b_dspcodegen_FIRFilter _pobj0;
};

#endif                                // struct_ale__dsp_simulink_LowpassFilter

// Class declaration for model ale_speed_controller
class ale_speed_controller
{
  // public data and function members
 public:
  // Block signals and states (default storage) for model 'ale_speed_controller' 
  struct ale_speed_controller_DW {
    ale__dsp_simulink_LowpassFilter obj;// '<S1>/Lowpass Filter'
    real32_T Integrator_DSTATE;        // '<S37>/Integrator'
    real32_T Integrator_DSTATE_j;      // '<S88>/Integrator'
    int8_T Integrator_PrevResetState;  // '<S37>/Integrator'
    boolean_T objisempty;              // '<S1>/Lowpass Filter'
    boolean_T isInitialized;           // '<S1>/Lowpass Filter'
  };

  // Initial conditions function
  void init();

  // model terminate function
  void terminate();

  // model step function
  void step(const real32_T *rtu_speed_cmd_mps, const real32_T
            *rtu_turn_rate_cmd_radps, const real32_T *rtu_fire, const real32_T
            *rtu_led, const real32_T *rtu_gnd_spd_mps, const real32_T
            rtu_gyro_radps[3], const real32_T rtu_telem_param[24], const
            boolean_T *rtu_reset, real32_T *rty_throttle, real32_T *rty_turn,
            real32_T *rty_fire_cmd, real32_T *rty_led_cmd);

  // Constructor
  ale_speed_controller();

  // Destructor
  ~ale_speed_controller();

  // private data and function members
 private:
  // Block states
  ale_speed_controller_DW ale_speed_controllerrtDW;
};

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
//  '<Root>' : 'ale_speed_controller'
//  '<S1>'   : 'ale_speed_controller/Subsystem'
//  '<S2>'   : 'ale_speed_controller/Subsystem1'
//  '<S3>'   : 'ale_speed_controller/Subsystem/speed PI Controller'
//  '<S4>'   : 'ale_speed_controller/Subsystem/speed PI Controller/Anti-windup'
//  '<S5>'   : 'ale_speed_controller/Subsystem/speed PI Controller/D Gain'
//  '<S6>'   : 'ale_speed_controller/Subsystem/speed PI Controller/Filter'
//  '<S7>'   : 'ale_speed_controller/Subsystem/speed PI Controller/Filter ICs'
//  '<S8>'   : 'ale_speed_controller/Subsystem/speed PI Controller/I Gain'
//  '<S9>'   : 'ale_speed_controller/Subsystem/speed PI Controller/Ideal P Gain'
//  '<S10>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Ideal P Gain Fdbk'
//  '<S11>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Integrator'
//  '<S12>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Integrator ICs'
//  '<S13>'  : 'ale_speed_controller/Subsystem/speed PI Controller/N Copy'
//  '<S14>'  : 'ale_speed_controller/Subsystem/speed PI Controller/N Gain'
//  '<S15>'  : 'ale_speed_controller/Subsystem/speed PI Controller/P Copy'
//  '<S16>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Parallel P Gain'
//  '<S17>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Reset Signal'
//  '<S18>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Saturation'
//  '<S19>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Saturation Fdbk'
//  '<S20>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Sum'
//  '<S21>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Sum Fdbk'
//  '<S22>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Tracking Mode'
//  '<S23>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Tracking Mode Sum'
//  '<S24>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Tsamp - Integral'
//  '<S25>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Tsamp - Ngain'
//  '<S26>'  : 'ale_speed_controller/Subsystem/speed PI Controller/postSat Signal'
//  '<S27>'  : 'ale_speed_controller/Subsystem/speed PI Controller/preSat Signal'
//  '<S28>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Anti-windup/Disc. Clamping Parallel'
//  '<S29>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S30>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S31>'  : 'ale_speed_controller/Subsystem/speed PI Controller/D Gain/Disabled'
//  '<S32>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Filter/Disabled'
//  '<S33>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Filter ICs/Disabled'
//  '<S34>'  : 'ale_speed_controller/Subsystem/speed PI Controller/I Gain/External Parameters'
//  '<S35>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Ideal P Gain/Passthrough'
//  '<S36>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Ideal P Gain Fdbk/Disabled'
//  '<S37>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Integrator/Discrete'
//  '<S38>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Integrator ICs/Internal IC'
//  '<S39>'  : 'ale_speed_controller/Subsystem/speed PI Controller/N Copy/Disabled wSignal Specification'
//  '<S40>'  : 'ale_speed_controller/Subsystem/speed PI Controller/N Gain/Disabled'
//  '<S41>'  : 'ale_speed_controller/Subsystem/speed PI Controller/P Copy/Disabled'
//  '<S42>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Parallel P Gain/External Parameters'
//  '<S43>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Reset Signal/External Reset'
//  '<S44>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Saturation/Enabled'
//  '<S45>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Saturation Fdbk/Disabled'
//  '<S46>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Sum/Sum_PI'
//  '<S47>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Sum Fdbk/Disabled'
//  '<S48>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Tracking Mode/Disabled'
//  '<S49>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Tracking Mode Sum/Passthrough'
//  '<S50>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Tsamp - Integral/Passthrough'
//  '<S51>'  : 'ale_speed_controller/Subsystem/speed PI Controller/Tsamp - Ngain/Passthrough'
//  '<S52>'  : 'ale_speed_controller/Subsystem/speed PI Controller/postSat Signal/Forward_Path'
//  '<S53>'  : 'ale_speed_controller/Subsystem/speed PI Controller/preSat Signal/Forward_Path'
//  '<S54>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller'
//  '<S55>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Anti-windup'
//  '<S56>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/D Gain'
//  '<S57>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Filter'
//  '<S58>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Filter ICs'
//  '<S59>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/I Gain'
//  '<S60>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Ideal P Gain'
//  '<S61>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Ideal P Gain Fdbk'
//  '<S62>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Integrator'
//  '<S63>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Integrator ICs'
//  '<S64>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/N Copy'
//  '<S65>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/N Gain'
//  '<S66>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/P Copy'
//  '<S67>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Parallel P Gain'
//  '<S68>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Reset Signal'
//  '<S69>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Saturation'
//  '<S70>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Saturation Fdbk'
//  '<S71>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Sum'
//  '<S72>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Sum Fdbk'
//  '<S73>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Tracking Mode'
//  '<S74>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Tracking Mode Sum'
//  '<S75>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Tsamp - Integral'
//  '<S76>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Tsamp - Ngain'
//  '<S77>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/postSat Signal'
//  '<S78>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/preSat Signal'
//  '<S79>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Anti-windup/Disc. Clamping Parallel'
//  '<S80>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S81>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S82>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/D Gain/Disabled'
//  '<S83>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Filter/Disabled'
//  '<S84>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Filter ICs/Disabled'
//  '<S85>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/I Gain/External Parameters'
//  '<S86>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Ideal P Gain/Passthrough'
//  '<S87>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Ideal P Gain Fdbk/Disabled'
//  '<S88>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Integrator/Discrete'
//  '<S89>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Integrator ICs/Internal IC'
//  '<S90>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/N Copy/Disabled wSignal Specification'
//  '<S91>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/N Gain/Disabled'
//  '<S92>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/P Copy/Disabled'
//  '<S93>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Parallel P Gain/External Parameters'
//  '<S94>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Reset Signal/Disabled'
//  '<S95>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Saturation/Enabled'
//  '<S96>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Saturation Fdbk/Disabled'
//  '<S97>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Sum/Sum_PI'
//  '<S98>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Sum Fdbk/Disabled'
//  '<S99>'  : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Tracking Mode/Disabled'
//  '<S100>' : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Tracking Mode Sum/Passthrough'
//  '<S101>' : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Tsamp - Integral/Passthrough'
//  '<S102>' : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/Tsamp - Ngain/Passthrough'
//  '<S103>' : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/postSat Signal/Forward_Path'
//  '<S104>' : 'ale_speed_controller/Subsystem1/turn_rate PI Controller/preSat Signal/Forward_Path'

#endif                                 // RTW_HEADER_ale_speed_controller_h_

//
// File trailer for generated code.
//
// [EOF]
//
