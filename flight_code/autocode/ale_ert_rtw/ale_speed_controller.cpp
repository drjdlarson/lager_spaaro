//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ale_speed_controller.cpp
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
#include "ale_speed_controller.h"
#include "rtwtypes.h"
#include <array>

// System initialize for referenced model: 'ale_speed_controller'
void ale_speed_controller::init(void)
{
  ale_spee_b_dspcodegen_FIRFilter *iobj_0;
  static const std::array<real32_T, 14> tmp = { { -0.135167629F, 0.0469046645F,
      0.0655947775F, 0.0930410251F, 0.121895589F, 0.145996079F, 0.159559503F,
      0.159559503F, 0.145996079F, 0.121895589F, 0.0930410251F, 0.0655947775F,
      0.0469046645F, -0.135167629F } };

  // InitializeConditions for DiscreteIntegrator: '<S37>/Integrator'
  ale_speed_controllerrtDW.Integrator_PrevResetState = 2;

  // Start for MATLABSystem: '<S1>/Lowpass Filter'
  ale_speed_controllerrtDW.obj._pobj0.matlabCodegenIsDeleted = true;
  ale_speed_controllerrtDW.obj.matlabCodegenIsDeleted = true;
  ale_speed_controllerrtDW.obj.isInitialized = 0;
  ale_speed_controllerrtDW.obj.NumChannels = -1;
  ale_speed_controllerrtDW.obj.matlabCodegenIsDeleted = false;
  ale_speed_controllerrtDW.objisempty = true;
  ale_speed_controllerrtDW.obj.isSetupComplete = false;
  ale_speed_controllerrtDW.obj.isInitialized = 1;
  iobj_0 = &ale_speed_controllerrtDW.obj._pobj0;
  iobj_0->isInitialized = 0;
  iobj_0->isInitialized = 0;

  // System object Constructor function: dsp.FIRFilter
  iobj_0->cSFunObject.P0_InitialStates = 0.0F;
  for (int32_T i = 0; i < 14; i++) {
    iobj_0->cSFunObject.P1_Coefficients[i] = tmp[i];
  }

  iobj_0->matlabCodegenIsDeleted = false;
  ale_speed_controllerrtDW.obj.FilterObj = iobj_0;
  ale_speed_controllerrtDW.obj.NumChannels = 1;
  ale_speed_controllerrtDW.obj.isSetupComplete = true;

  // End of Start for MATLABSystem: '<S1>/Lowpass Filter'

  // InitializeConditions for MATLABSystem: '<S1>/Lowpass Filter'
  iobj_0 = ale_speed_controllerrtDW.obj.FilterObj;
  if (iobj_0->isInitialized == 1) {
    // System object Initialization function: dsp.FIRFilter
    for (int32_T i = 0; i < 13; i++) {
      iobj_0->cSFunObject.W0_states[i] = iobj_0->cSFunObject.P0_InitialStates;
    }
  }

  // End of InitializeConditions for MATLABSystem: '<S1>/Lowpass Filter'
}

// Output and update for referenced model: 'ale_speed_controller'
void ale_speed_controller::step(const real32_T *rtu_speed_cmd_mps, const
  real32_T *rtu_turn_rate_cmd_radps, const real32_T *rtu_fire, const real32_T
  *rtu_led, const real32_T *rtu_gnd_spd_mps, const real32_T rtu_gyro_radps[3],
  const real32_T rtu_telem_param[24], const boolean_T *rtu_reset, real32_T
  *rty_throttle, real32_T *rty_turn, real32_T *rty_fire_cmd, real32_T
  *rty_led_cmd)
{
  ale_spee_b_dspcodegen_FIRFilter *obj;
  ale_speed_con_b_dsp_FIRFilter_0 *obj_0;
  int32_T n;
  real32_T rtb_DeadZone;
  real32_T rtb_IProdOut;
  real32_T rtb_Integrator_m;
  real32_T rtb_Sum;
  int8_T rtb_DeadZone_0;
  int8_T rtb_Integrator_e;

  // MATLABSystem: '<S1>/Lowpass Filter'
  rtb_DeadZone = *rtu_gnd_spd_mps;
  obj = ale_speed_controllerrtDW.obj.FilterObj;
  if (obj->isInitialized != 1) {
    obj->isSetupComplete = false;
    obj->isInitialized = 1;
    obj->isSetupComplete = true;

    // System object Initialization function: dsp.FIRFilter
    for (n = 0; n < 13; n++) {
      obj->cSFunObject.W0_states[n] = obj->cSFunObject.P0_InitialStates;
    }
  }

  obj_0 = &obj->cSFunObject;

  // System object Outputs function: dsp.FIRFilter
  rtb_IProdOut = 0.0F;

  // load input sample
  for (n = 0; n < 13; n++) {
    // shift state
    rtb_Integrator_m = rtb_DeadZone;
    rtb_DeadZone = obj_0->W0_states[n];
    obj_0->W0_states[n] = rtb_Integrator_m;

    // compute one tap
    rtb_Integrator_m *= obj_0->P1_Coefficients[n];
    rtb_IProdOut += rtb_Integrator_m;
  }

  // compute last tap
  rtb_Integrator_m = obj->cSFunObject.P1_Coefficients[n] * rtb_DeadZone;

  // Sum: '<S1>/Sum' incorporates:
  //   MATLABSystem: '<S1>/Lowpass Filter'

  // store output sample
  rtb_DeadZone = *rtu_speed_cmd_mps - (rtb_IProdOut + rtb_Integrator_m);

  // DiscreteIntegrator: '<S37>/Integrator'
  if (((*rtu_reset) && (ale_speed_controllerrtDW.Integrator_PrevResetState <= 0))
      || ((!*rtu_reset) && (ale_speed_controllerrtDW.Integrator_PrevResetState ==
        1))) {
    ale_speed_controllerrtDW.Integrator_DSTATE = 0.0F;
  }

  // Sum: '<S46>/Sum' incorporates:
  //   DiscreteIntegrator: '<S37>/Integrator'
  //   Product: '<S42>/PProd Out'

  rtb_Integrator_m = rtb_DeadZone * rtu_telem_param[0] +
    ale_speed_controllerrtDW.Integrator_DSTATE;

  // Product: '<S1>/Product'
  rtb_IProdOut = rtu_telem_param[2] * *rtu_speed_cmd_mps;

  // Saturate: '<S44>/Saturation' incorporates:
  //   DeadZone: '<S30>/DeadZone'

  if (rtb_Integrator_m > 1.0F) {
    rtb_Sum = 1.0F;
    rtb_Integrator_m--;
  } else {
    if (rtb_Integrator_m < 0.0F) {
      rtb_Sum = 0.0F;
    } else {
      rtb_Sum = rtb_Integrator_m;
    }

    if (rtb_Integrator_m >= 0.0F) {
      rtb_Integrator_m = 0.0F;
    }
  }

  // End of Saturate: '<S44>/Saturation'

  // Sum: '<S1>/Sum1'
  *rty_throttle = rtb_Sum + rtb_IProdOut;

  // Product: '<S34>/IProd Out'
  rtb_DeadZone *= rtu_telem_param[1];

  // Switch: '<S28>/Switch1' incorporates:
  //   Constant: '<S28>/Constant'
  //   Constant: '<S28>/Constant2'
  //   Constant: '<S28>/Constant5'
  //   RelationalOperator: '<S28>/fix for DT propagation issue'

  if (rtb_Integrator_m > 0.0F) {
    rtb_Integrator_e = 1;
  } else {
    rtb_Integrator_e = -1;
  }

  // End of Switch: '<S28>/Switch1'

  // Switch: '<S28>/Switch2' incorporates:
  //   Constant: '<S28>/Constant3'
  //   Constant: '<S28>/Constant4'
  //   Constant: '<S28>/Constant5'
  //   RelationalOperator: '<S28>/fix for DT propagation issue1'

  if (rtb_DeadZone > 0.0F) {
    rtb_DeadZone_0 = 1;
  } else {
    rtb_DeadZone_0 = -1;
  }

  // End of Switch: '<S28>/Switch2'

  // Switch: '<S28>/Switch' incorporates:
  //   Constant: '<S28>/Constant1'
  //   Constant: '<S28>/Constant5'
  //   Logic: '<S28>/AND3'
  //   RelationalOperator: '<S28>/Equal1'
  //   RelationalOperator: '<S28>/Relational Operator'

  if ((rtb_Integrator_m != 0.0F) && (rtb_Integrator_e == rtb_DeadZone_0)) {
    rtb_Integrator_m = 0.0F;
  } else {
    rtb_Integrator_m = rtb_DeadZone;
  }

  // End of Switch: '<S28>/Switch'

  // Sum: '<S2>/Sum'
  rtb_IProdOut = *rtu_turn_rate_cmd_radps - rtu_gyro_radps[2];

  // Sum: '<S97>/Sum' incorporates:
  //   DiscreteIntegrator: '<S88>/Integrator'
  //   Product: '<S93>/PProd Out'

  rtb_Sum = rtb_IProdOut * rtu_telem_param[3] +
    ale_speed_controllerrtDW.Integrator_DSTATE_j;

  // DeadZone: '<S81>/DeadZone' incorporates:
  //   Saturate: '<S95>/Saturation'

  if (rtb_Sum > 1.0F) {
    rtb_DeadZone = rtb_Sum - 1.0F;
    *rty_turn = 1.0F;
  } else {
    if (rtb_Sum >= -1.0F) {
      rtb_DeadZone = 0.0F;
    } else {
      rtb_DeadZone = rtb_Sum - -1.0F;
    }

    if (rtb_Sum < -1.0F) {
      *rty_turn = -1.0F;
    } else {
      *rty_turn = rtb_Sum;
    }
  }

  // End of DeadZone: '<S81>/DeadZone'

  // Product: '<S85>/IProd Out'
  rtb_IProdOut *= rtu_telem_param[4];

  // SignalConversion generated from: '<Root>/fire'
  *rty_fire_cmd = *rtu_fire;

  // SignalConversion generated from: '<Root>/led'
  *rty_led_cmd = *rtu_led;

  // Update for DiscreteIntegrator: '<S37>/Integrator'
  ale_speed_controllerrtDW.Integrator_DSTATE += 0.02F * rtb_Integrator_m;
  ale_speed_controllerrtDW.Integrator_PrevResetState = static_cast<int8_T>
    (*rtu_reset);

  // Switch: '<S79>/Switch1' incorporates:
  //   Constant: '<S79>/Constant'
  //   Constant: '<S79>/Constant2'
  //   Constant: '<S79>/Constant5'
  //   RelationalOperator: '<S79>/fix for DT propagation issue'

  if (rtb_DeadZone > 0.0F) {
    rtb_DeadZone_0 = 1;
  } else {
    rtb_DeadZone_0 = -1;
  }

  // End of Switch: '<S79>/Switch1'

  // Switch: '<S79>/Switch2' incorporates:
  //   Constant: '<S79>/Constant3'
  //   Constant: '<S79>/Constant4'
  //   Constant: '<S79>/Constant5'
  //   RelationalOperator: '<S79>/fix for DT propagation issue1'

  if (rtb_IProdOut > 0.0F) {
    rtb_Integrator_e = 1;
  } else {
    rtb_Integrator_e = -1;
  }

  // End of Switch: '<S79>/Switch2'

  // Switch: '<S79>/Switch' incorporates:
  //   Constant: '<S79>/Constant1'
  //   Constant: '<S79>/Constant5'
  //   Logic: '<S79>/AND3'
  //   RelationalOperator: '<S79>/Equal1'
  //   RelationalOperator: '<S79>/Relational Operator'

  if ((rtb_DeadZone != 0.0F) && (rtb_DeadZone_0 == rtb_Integrator_e)) {
    rtb_IProdOut = 0.0F;
  }

  // End of Switch: '<S79>/Switch'

  // Update for DiscreteIntegrator: '<S88>/Integrator'
  ale_speed_controllerrtDW.Integrator_DSTATE_j += 0.02F * rtb_IProdOut;
}

// Termination for referenced model: 'ale_speed_controller'
void ale_speed_controller::terminate(void)
{
  ale_spee_b_dspcodegen_FIRFilter *obj;

  // Terminate for MATLABSystem: '<S1>/Lowpass Filter'
  if (!ale_speed_controllerrtDW.obj.matlabCodegenIsDeleted) {
    ale_speed_controllerrtDW.obj.matlabCodegenIsDeleted = true;
    if ((ale_speed_controllerrtDW.obj.isInitialized == 1) &&
        ale_speed_controllerrtDW.obj.isSetupComplete) {
      obj = ale_speed_controllerrtDW.obj.FilterObj;
      if (obj->isInitialized == 1) {
        obj->isInitialized = 2;
      }

      ale_speed_controllerrtDW.obj.NumChannels = -1;
    }
  }

  obj = &ale_speed_controllerrtDW.obj._pobj0;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }

  // End of Terminate for MATLABSystem: '<S1>/Lowpass Filter'
}

// Constructor
ale_speed_controller::ale_speed_controller():
  ale_speed_controllerrtDW()
{
  // Currently there is no constructor body generated.
}

// Destructor
ale_speed_controller::~ale_speed_controller()
{
  // Currently there is no destructor body generated.
}

//
// File trailer for generated code.
//
// [EOF]
//
