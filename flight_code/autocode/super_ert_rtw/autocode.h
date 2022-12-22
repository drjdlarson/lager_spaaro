//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: autocode.h
//
// Code generated for Simulink model 'super'.
//
// Model version                  : 4.264
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Wed Dec 21 14:41:25 2022
//
#ifndef RTW_HEADER_autocode_h_
#define RTW_HEADER_autocode_h_
#include "rtwtypes.h"
#include "global_defs.h"
#include <stddef.h>
#include "zero_crossing_types.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_struct_zAK2rPkfaw9DhLoh4VRxkC_
#define DEFINED_TYPEDEF_FOR_struct_zAK2rPkfaw9DhLoh4VRxkC_

struct struct_zAK2rPkfaw9DhLoh4VRxkC
{
    real32_T throttle_cc;
    real32_T pitch_angle_cmd_rad;
    real32_T roll_angle_cmd_rad;
    real32_T yaw_rate_cmd_radps;
};

#endif

extern "C" {
    extern real_T rtInf;
    extern real_T rtMinusInf;
    extern real_T rtNaN;
    extern real32_T rtInfF;
    extern real32_T rtMinusInfF;
    extern real32_T rtNaNF;
    static void rt_InitInfAndNaN(size_t realSize);
    static boolean_T rtIsInf(real_T value);
    static boolean_T rtIsInfF(real32_T value);
    static boolean_T rtIsNaN(real_T value);
    static boolean_T rtIsNaNF(real32_T value);
    struct BigEndianIEEEDouble {
        struct {
            uint32_T wordH;
            uint32_T wordL;
        } words;
    };

    struct LittleEndianIEEEDouble {
        struct {
            uint32_T wordL;
            uint32_T wordH;
        } words;
    };

    struct IEEESingle {
        union {
            real32_T wordLreal;
            uint32_T wordLuint;
        } wordL;
    };
}                                      // extern "C"
    extern "C"
{
    static real_T rtGetInf(void);
    static real32_T rtGetInfF(void);
    static real_T rtGetMinusInf(void);
    static real32_T rtGetMinusInfF(void);
}                                      // extern "C"

extern "C" {
    static real_T rtGetNaN(void);
    static real32_T rtGetNaNF(void);
}                                      // extern "C"
    // Class declaration for model super
    namespace bfs
{
    class Autocode
    {
        // public data and function members
      public:
        // Block signals and states (default storage) for system '<Root>'
        struct D_Work {
            real_T DiscreteTimeIntegrator_DSTATE;// '<S236>/Discrete-Time Integrator' 
            real_T UnitDelay_DSTATE;   // '<S231>/Unit Delay'
            real32_T DiscreteTimeIntegrator;// '<S250>/Discrete-Time Integrator' 
            real32_T roll_angle_cmd_rad;// '<S3>/Product1'
            real32_T yaw_rate_cmd_radps;// '<S3>/Product2'
            real32_T pitch_angle_cmd_rad;// '<S3>/Product'
            real32_T norm_out;         // '<S197>/remap1'
            real32_T heading_rad;      // '<S137>/heading_rad'
            real32_T UnitDelay_DSTATE_f;// '<S226>/Unit Delay'
            real32_T Integrator_DSTATE;// '<S113>/Integrator'
            real32_T UnitDelay_DSTATE_h;// '<S76>/Unit Delay'
            real32_T UD_DSTATE;        // '<S74>/UD'
            real32_T Integrator_DSTATE_l;// '<S55>/Integrator'
            real32_T UnitDelay_DSTATE_i;// '<S18>/Unit Delay'
            real32_T UD_DSTATE_g;      // '<S16>/UD'
            real32_T Integrator_DSTATE_b;// '<S175>/Integrator'
            real32_T UnitDelay_DSTATE_d;// '<S139>/Unit Delay'
            real32_T UD_DSTATE_f;      // '<S134>/UD'
            real32_T motor_arm_ramp_integrator_DSTAT;// '<S11>/motor_arm_ramp_integrator' 
            real32_T DiscreteTimeIntegrator_DSTATE_k;// '<S250>/Discrete-Time Integrator' 
            real32_T DiscreteTimeIntegrator_DSTATE_n;// '<S239>/Discrete-Time Integrator' 
            int8_T Integrator_PrevResetState;// '<S113>/Integrator'
            int8_T Integrator_PrevResetState_o;// '<S55>/Integrator'
            int8_T Integrator_PrevResetState_m;// '<S175>/Integrator'
            boolean_T yaw_arm;         // '<S251>/yaw_arm'
            boolean_T Compare;         // '<S240>/Compare'
            boolean_T Compare_n;       // '<S237>/Compare'
            boolean_T Compare_o;       // '<S195>/Compare'
            boolean_T EnabledSubsystem_MODE;// '<S226>/Enabled Subsystem'
            boolean_T e_stopcounter_MODE;// '<S222>/e_stop counter'
            boolean_T e_stopcounter_MODE_k;// '<S234>/e_stop counter'
            boolean_T disarmmotor_MODE;// '<S227>/disarm motor'
        };

        // Zero-crossing (trigger) state
        struct PrevZCSigStates {
            ZCSigState manual_arming_Trig_ZCE;// '<S226>/manual_arming'
        };

        // Invariant block signals (default storage)
        struct ConstBlockIO {
            real32_T Transpose[32];    // '<S2>/Transpose'
            real32_T ramp_time_intergratorsignal;// '<S11>/ramp_time_intergrator signal' 
            real32_T Gain1;            // '<S11>/Gain1'
        };

        // Constant parameters (default storage)
        struct ConstParam {
            // Pooled Parameter (Mixed Expressions)
            //  Referenced by:
            //    '<S2>/Constant2'
            //    '<S10>/Constant'

            real32_T pooled14[8];

            // Computed Parameter: Constant_Value_f
            //  Referenced by: '<S6>/Constant'

            real32_T Constant_Value_f[6];
        };

        // model initialize function
        void initialize();

        // model step function
        void Run(const SysData &sys, const SensorData &sensor, const InsData &
                 bfs_ins, const InsData &vector_nav_ins, const AuxInsData &
                 aux_ins, const AdcData &adc, const TelemData &telem, VmsData
                 *vms);

        // Constructor
        Autocode();

        // Destructor
        ~Autocode();

        // private data and function members
      private:
        // Block states
        D_Work rtDWork;

        // Triggered events
        PrevZCSigStates rtPrevZCSigState;

        // private member function(s) for subsystem '<S18>/MATLAB Function'
        static void MATLABFunction(real32_T rtu_prev_val, real32_T rtu_raw_val,
            real32_T rtu_freq_cut, real32_T rtu_samp_freq, real32_T
            *rty_filtered_val);

        // private member function(s) for subsystem '<S197>/remap1'
        static void remap1(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                           rtu_in_max, real32_T rtu_out_min, real32_T
                           rtu_out_max, real32_T *rty_norm_out);
    };
}

extern const bfs::Autocode::ConstBlockIO rtConstB;// constant block i/o

// Constant parameters (default storage)
extern const bfs::Autocode::ConstParam rtConstP;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S16>/Data Type Duplicate' : Unused code path elimination
//  Block '<S17>/Data Type Duplicate' : Unused code path elimination
//  Block '<S17>/Data Type Propagation' : Unused code path elimination
//  Block '<S63>/Data Type Duplicate' : Unused code path elimination
//  Block '<S63>/Data Type Propagation' : Unused code path elimination
//  Block '<S74>/Data Type Duplicate' : Unused code path elimination
//  Block '<S75>/Data Type Duplicate' : Unused code path elimination
//  Block '<S75>/Data Type Propagation' : Unused code path elimination
//  Block '<S121>/Data Type Duplicate' : Unused code path elimination
//  Block '<S121>/Data Type Propagation' : Unused code path elimination
//  Block '<S134>/Data Type Duplicate' : Unused code path elimination
//  Block '<S135>/Data Type Duplicate' : Unused code path elimination
//  Block '<S135>/Data Type Propagation' : Unused code path elimination
//  Block '<S183>/Data Type Duplicate' : Unused code path elimination
//  Block '<S183>/Data Type Propagation' : Unused code path elimination
//  Block '<S194>/Data Type Duplicate' : Unused code path elimination
//  Block '<S194>/Data Type Propagation' : Unused code path elimination
//  Block '<S9>/Constant' : Unused code path elimination
//  Block '<S9>/Switch' : Unused code path elimination
//  Block '<S244>/Compare' : Unused code path elimination
//  Block '<S244>/Constant' : Unused code path elimination
//  Block '<S243>/Constant' : Unused code path elimination
//  Block '<S243>/Sum' : Unused code path elimination
//  Block '<S243>/Unit Delay' : Unused code path elimination
//  Block '<S224>/Compare' : Unused code path elimination
//  Block '<S224>/Constant' : Unused code path elimination
//  Block '<Root>/Cast To Single1' : Eliminate redundant data type conversion


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
//  '<Root>' : 'super'
//  '<S1>'   : 'super/ANGLE CONTROLLER'
//  '<S2>'   : 'super/Motor Mixing Algorithm'
//  '<S3>'   : 'super/Stab_input_conversion'
//  '<S4>'   : 'super/To VMS Data1'
//  '<S5>'   : 'super/add_auxilary_cmd'
//  '<S6>'   : 'super/cmd to raw pwm'
//  '<S7>'   : 'super/command selection'
//  '<S8>'   : 'super/compare_to_stab'
//  '<S9>'   : 'super/determine arm and mode selection'
//  '<S10>'  : 'super/emergency_stop_system'
//  '<S11>'  : 'super/initial_motor_ramp'
//  '<S12>'  : 'super/ANGLE CONTROLLER/Pitch Controller'
//  '<S13>'  : 'super/ANGLE CONTROLLER/Roll Controller'
//  '<S14>'  : 'super/ANGLE CONTROLLER/Yaw Rate Controller'
//  '<S15>'  : 'super/ANGLE CONTROLLER/Pitch Controller/Degrees to Radians'
//  '<S16>'  : 'super/ANGLE CONTROLLER/Pitch Controller/Discrete Derivative'
//  '<S17>'  : 'super/ANGLE CONTROLLER/Pitch Controller/Saturation Dynamic'
//  '<S18>'  : 'super/ANGLE CONTROLLER/Pitch Controller/pitch_D_DLPF'
//  '<S19>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID'
//  '<S20>'  : 'super/ANGLE CONTROLLER/Pitch Controller/pitch_D_DLPF/MATLAB Function'
//  '<S21>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Anti-windup'
//  '<S22>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/D Gain'
//  '<S23>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Filter'
//  '<S24>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Filter ICs'
//  '<S25>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/I Gain'
//  '<S26>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Ideal P Gain'
//  '<S27>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Ideal P Gain Fdbk'
//  '<S28>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Integrator'
//  '<S29>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Integrator ICs'
//  '<S30>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/N Copy'
//  '<S31>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/N Gain'
//  '<S32>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/P Copy'
//  '<S33>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Parallel P Gain'
//  '<S34>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Reset Signal'
//  '<S35>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Saturation'
//  '<S36>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Saturation Fdbk'
//  '<S37>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Sum'
//  '<S38>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Sum Fdbk'
//  '<S39>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Tracking Mode'
//  '<S40>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Tracking Mode Sum'
//  '<S41>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Tsamp - Integral'
//  '<S42>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Tsamp - Ngain'
//  '<S43>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/postSat Signal'
//  '<S44>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/preSat Signal'
//  '<S45>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Anti-windup/Disc. Clamping Parallel'
//  '<S46>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S47>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/External'
//  '<S48>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/External/Dead Zone Dynamic'
//  '<S49>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/D Gain/Disabled'
//  '<S50>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Filter/Disabled'
//  '<S51>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Filter ICs/Disabled'
//  '<S52>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/I Gain/External Parameters'
//  '<S53>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Ideal P Gain/Passthrough'
//  '<S54>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Ideal P Gain Fdbk/Disabled'
//  '<S55>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Integrator/Discrete'
//  '<S56>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Integrator ICs/Internal IC'
//  '<S57>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/N Copy/Disabled wSignal Specification'
//  '<S58>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/N Gain/Disabled'
//  '<S59>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/P Copy/Disabled'
//  '<S60>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Parallel P Gain/External Parameters'
//  '<S61>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Reset Signal/External Reset'
//  '<S62>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Saturation/External'
//  '<S63>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Saturation/External/Saturation Dynamic'
//  '<S64>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Saturation Fdbk/Disabled'
//  '<S65>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Sum/Sum_PI'
//  '<S66>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Sum Fdbk/Disabled'
//  '<S67>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Tracking Mode/Disabled'
//  '<S68>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Tracking Mode Sum/Passthrough'
//  '<S69>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Tsamp - Integral/Passthrough'
//  '<S70>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/Tsamp - Ngain/Passthrough'
//  '<S71>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/postSat Signal/Forward_Path'
//  '<S72>'  : 'super/ANGLE CONTROLLER/Pitch Controller/stab_pitch_PID/preSat Signal/Forward_Path'
//  '<S73>'  : 'super/ANGLE CONTROLLER/Roll Controller/Degrees to Radians'
//  '<S74>'  : 'super/ANGLE CONTROLLER/Roll Controller/Discrete Derivative'
//  '<S75>'  : 'super/ANGLE CONTROLLER/Roll Controller/Saturation Dynamic'
//  '<S76>'  : 'super/ANGLE CONTROLLER/Roll Controller/roll_D_DLPF'
//  '<S77>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID'
//  '<S78>'  : 'super/ANGLE CONTROLLER/Roll Controller/roll_D_DLPF/MATLAB Function'
//  '<S79>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Anti-windup'
//  '<S80>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/D Gain'
//  '<S81>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Filter'
//  '<S82>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Filter ICs'
//  '<S83>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/I Gain'
//  '<S84>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Ideal P Gain'
//  '<S85>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Ideal P Gain Fdbk'
//  '<S86>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Integrator'
//  '<S87>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Integrator ICs'
//  '<S88>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/N Copy'
//  '<S89>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/N Gain'
//  '<S90>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/P Copy'
//  '<S91>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Parallel P Gain'
//  '<S92>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Reset Signal'
//  '<S93>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Saturation'
//  '<S94>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Saturation Fdbk'
//  '<S95>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Sum'
//  '<S96>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Sum Fdbk'
//  '<S97>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Tracking Mode'
//  '<S98>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Tracking Mode Sum'
//  '<S99>'  : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Tsamp - Integral'
//  '<S100>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Tsamp - Ngain'
//  '<S101>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/postSat Signal'
//  '<S102>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/preSat Signal'
//  '<S103>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Anti-windup/Disc. Clamping Parallel'
//  '<S104>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S105>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/External'
//  '<S106>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/External/Dead Zone Dynamic'
//  '<S107>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/D Gain/Disabled'
//  '<S108>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Filter/Disabled'
//  '<S109>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Filter ICs/Disabled'
//  '<S110>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/I Gain/External Parameters'
//  '<S111>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Ideal P Gain/Passthrough'
//  '<S112>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Ideal P Gain Fdbk/Disabled'
//  '<S113>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Integrator/Discrete'
//  '<S114>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Integrator ICs/Internal IC'
//  '<S115>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/N Copy/Disabled wSignal Specification'
//  '<S116>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/N Gain/Disabled'
//  '<S117>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/P Copy/Disabled'
//  '<S118>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Parallel P Gain/External Parameters'
//  '<S119>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Reset Signal/External Reset'
//  '<S120>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Saturation/External'
//  '<S121>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Saturation/External/Saturation Dynamic'
//  '<S122>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Saturation Fdbk/Disabled'
//  '<S123>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Sum/Sum_PI'
//  '<S124>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Sum Fdbk/Disabled'
//  '<S125>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Tracking Mode/Disabled'
//  '<S126>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Tracking Mode Sum/Passthrough'
//  '<S127>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Tsamp - Integral/Passthrough'
//  '<S128>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/Tsamp - Ngain/Passthrough'
//  '<S129>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/postSat Signal/Forward_Path'
//  '<S130>' : 'super/ANGLE CONTROLLER/Roll Controller/stab_roll_PID/preSat Signal/Forward_Path'
//  '<S131>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/Compare To Constant1'
//  '<S132>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/Compare To Constant2'
//  '<S133>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/Degrees to Radians'
//  '<S134>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/Discrete Derivative'
//  '<S135>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/Saturation Dynamic'
//  '<S136>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/heading_error'
//  '<S137>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/set_tar_heading when heading_rate_cmd == 0'
//  '<S138>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID'
//  '<S139>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/yaw_D_DLPF'
//  '<S140>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/heading_error/Compare To Constant'
//  '<S141>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup'
//  '<S142>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/D Gain'
//  '<S143>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Filter'
//  '<S144>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Filter ICs'
//  '<S145>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/I Gain'
//  '<S146>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain'
//  '<S147>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain Fdbk'
//  '<S148>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Integrator'
//  '<S149>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Integrator ICs'
//  '<S150>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/N Copy'
//  '<S151>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/N Gain'
//  '<S152>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/P Copy'
//  '<S153>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Parallel P Gain'
//  '<S154>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Reset Signal'
//  '<S155>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Saturation'
//  '<S156>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Saturation Fdbk'
//  '<S157>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Sum'
//  '<S158>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Sum Fdbk'
//  '<S159>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode'
//  '<S160>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode Sum'
//  '<S161>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Integral'
//  '<S162>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Ngain'
//  '<S163>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/postSat Signal'
//  '<S164>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/preSat Signal'
//  '<S165>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup/Disc. Clamping Parallel'
//  '<S166>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S167>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/External'
//  '<S168>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/External/Dead Zone Dynamic'
//  '<S169>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/D Gain/Disabled'
//  '<S170>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Filter/Disabled'
//  '<S171>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Filter ICs/Disabled'
//  '<S172>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/I Gain/External Parameters'
//  '<S173>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain/Passthrough'
//  '<S174>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain Fdbk/Disabled'
//  '<S175>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Integrator/Discrete'
//  '<S176>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Integrator ICs/Internal IC'
//  '<S177>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/N Copy/Disabled wSignal Specification'
//  '<S178>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/N Gain/Disabled'
//  '<S179>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/P Copy/Disabled'
//  '<S180>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Parallel P Gain/External Parameters'
//  '<S181>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Reset Signal/External Reset'
//  '<S182>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Saturation/External'
//  '<S183>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Saturation/External/Saturation Dynamic'
//  '<S184>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Saturation Fdbk/Disabled'
//  '<S185>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Sum/Sum_PI'
//  '<S186>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Sum Fdbk/Disabled'
//  '<S187>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode/Disabled'
//  '<S188>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode Sum/Passthrough'
//  '<S189>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Integral/Passthrough'
//  '<S190>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Ngain/Passthrough'
//  '<S191>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/postSat Signal/Forward_Path'
//  '<S192>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/stab_yaw_rate_PID/preSat Signal/Forward_Path'
//  '<S193>' : 'super/ANGLE CONTROLLER/Yaw Rate Controller/yaw_D_DLPF/MATLAB Function'
//  '<S194>' : 'super/Motor Mixing Algorithm/Saturation Dynamic'
//  '<S195>' : 'super/Stab_input_conversion/Compare To Constant3'
//  '<S196>' : 'super/Stab_input_conversion/Degrees to Radians'
//  '<S197>' : 'super/Stab_input_conversion/remap from min_spin to max'
//  '<S198>' : 'super/Stab_input_conversion/remap from min_spin to max/remap1'
//  '<S199>' : 'super/cmd to raw pwm/engine_PWM_denormalize'
//  '<S200>' : 'super/cmd to raw pwm/motor_PWM_denormalize'
//  '<S201>' : 'super/cmd to raw pwm/engine_PWM_denormalize/remap'
//  '<S202>' : 'super/cmd to raw pwm/motor_PWM_denormalize/remap'
//  '<S203>' : 'super/command selection/e_stop_norm'
//  '<S204>' : 'super/command selection/engine_cmd_norm'
//  '<S205>' : 'super/command selection/mode_norm'
//  '<S206>' : 'super/command selection/pitch_norm_deadband'
//  '<S207>' : 'super/command selection/relay_norm'
//  '<S208>' : 'super/command selection/roll_norm_deadband'
//  '<S209>' : 'super/command selection/rtl_norm'
//  '<S210>' : 'super/command selection/throttle_norm_no_deadband'
//  '<S211>' : 'super/command selection/yaw_norm_deadband'
//  '<S212>' : 'super/command selection/e_stop_norm/remap'
//  '<S213>' : 'super/command selection/engine_cmd_norm/remap'
//  '<S214>' : 'super/command selection/mode_norm/remap'
//  '<S215>' : 'super/command selection/pitch_norm_deadband/remap_with_deadband'
//  '<S216>' : 'super/command selection/relay_norm/remap'
//  '<S217>' : 'super/command selection/roll_norm_deadband/remap_with_deadband'
//  '<S218>' : 'super/command selection/rtl_norm/remap'
//  '<S219>' : 'super/command selection/throttle_norm_no_deadband/remap'
//  '<S220>' : 'super/command selection/yaw_norm_deadband/remap_with_deadband'
//  '<S221>' : 'super/determine arm and mode selection/Failsafe_management'
//  '<S222>' : 'super/determine arm and mode selection/Subsystem'
//  '<S223>' : 'super/determine arm and mode selection/auto_disarm'
//  '<S224>' : 'super/determine arm and mode selection/compare_rtl cmd > 0.5'
//  '<S225>' : 'super/determine arm and mode selection/compare_to_land'
//  '<S226>' : 'super/determine arm and mode selection/yaw_stick_arming'
//  '<S227>' : 'super/determine arm and mode selection/Failsafe_management/Battery failsafe'
//  '<S228>' : 'super/determine arm and mode selection/Failsafe_management/Radio failsafe'
//  '<S229>' : 'super/determine arm and mode selection/Failsafe_management/Battery failsafe/Compare To Constant'
//  '<S230>' : 'super/determine arm and mode selection/Failsafe_management/Battery failsafe/Compare To Constant3'
//  '<S231>' : 'super/determine arm and mode selection/Failsafe_management/Battery failsafe/disarm motor'
//  '<S232>' : 'super/determine arm and mode selection/Failsafe_management/Battery failsafe/disarm motor/Compare To Constant2'
//  '<S233>' : 'super/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem'
//  '<S234>' : 'super/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem'
//  '<S235>' : 'super/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem/Compare To Constant'
//  '<S236>' : 'super/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem/e_stop counter'
//  '<S237>' : 'super/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem/e_stop counter/Compare To Constant'
//  '<S238>' : 'super/determine arm and mode selection/Subsystem/Compare To Constant'
//  '<S239>' : 'super/determine arm and mode selection/Subsystem/e_stop counter'
//  '<S240>' : 'super/determine arm and mode selection/Subsystem/e_stop counter/Compare To Constant'
//  '<S241>' : 'super/determine arm and mode selection/auto_disarm/Compare To Constant'
//  '<S242>' : 'super/determine arm and mode selection/auto_disarm/Compare To Constant1'
//  '<S243>' : 'super/determine arm and mode selection/auto_disarm/disarm motor'
//  '<S244>' : 'super/determine arm and mode selection/auto_disarm/disarm motor/Compare To Constant2'
//  '<S245>' : 'super/determine arm and mode selection/yaw_stick_arming/Compare To Constant'
//  '<S246>' : 'super/determine arm and mode selection/yaw_stick_arming/Compare To Constant1'
//  '<S247>' : 'super/determine arm and mode selection/yaw_stick_arming/Compare To Constant2'
//  '<S248>' : 'super/determine arm and mode selection/yaw_stick_arming/Compare To Constant3'
//  '<S249>' : 'super/determine arm and mode selection/yaw_stick_arming/Compare To Constant4'
//  '<S250>' : 'super/determine arm and mode selection/yaw_stick_arming/Enabled Subsystem'
//  '<S251>' : 'super/determine arm and mode selection/yaw_stick_arming/manual_arming'
//  '<S252>' : 'super/initial_motor_ramp/Compare To Constant'


//-
//  Requirements for '<Root>': super

#endif                                 // RTW_HEADER_autocode_h_

//
// File trailer for generated code.
//
// [EOF]
//
