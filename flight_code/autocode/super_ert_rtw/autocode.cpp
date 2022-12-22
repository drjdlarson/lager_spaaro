//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: autocode.cpp
//
// Code generated for Simulink model 'super'.
//
// Model version                  : 4.264
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Wed Dec 21 14:41:25 2022
//

#include "autocode.h"
#include "rtwtypes.h"
#include "global_defs.h"
#include <cmath>
#include <cstring>
#include <stddef.h>
#include "zero_crossing_types.h"
#define NumBitsPerChar                 8U
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

// Skipping ulong/long check: insufficient preprocessor integer range.

// Invariant block signals (default storage)
const bfs::Autocode::ConstBlockIO rtConstB = {
    {
        0.7F,
        -0.2F,
        0.0F,
        -0.1F,
        0.7F,
        0.2F,
        0.0F,
        0.1F,
        0.7F,
        0.1F,
        0.2F,
        -0.1F,
        0.7F,
        -0.1F,
        -0.2F,
        0.1F,
        0.7F,
        -0.1F,
        0.2F,
        0.1F,
        0.7F,
        0.1F,
        -0.2F,
        -0.1F,
        0.0F,
        0.0F,
        0.0F,
        0.0F,
        0.0F,
        0.0F,
        0.0F,
        0.0F
    }
    ,                                  // '<S2>/Transpose'
    0.333333343F
    ,                                  // '<S11>/ramp_time_intergrator signal'
    -0.333333343F
    // '<S11>/Gain1'
};

// Constant parameters (default storage)
const bfs::Autocode::ConstParam rtConstP = {
    // Pooled Parameter (Mixed Expressions)

    //  Referenced by:

    //    '<S2>/Constant2'

    //    '<S10>/Constant'
    { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

    // Computed Parameter: Constant_Value_f

    //  Referenced by: '<S6>/Constant'
    { 172.0F, 172.0F, 172.0F, 172.0F, 172.0F, 172.0F }
};

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S231>/Constant'
//    '<S236>/Discrete-Time Integrator'
#define rtCP_pooled1                   (0.005)

// Pooled Parameter (Expression: 0)
//  Referenced by:
//    '<S231>/Unit Delay'
//    '<S236>/Discrete-Time Integrator'
#define rtCP_pooled2                   (0.0)

// Expression: const
//  Referenced by: '<S237>/Constant'
#define rtCP_Constant_Value_k          (0.5)

// Expression: 1
//  Referenced by: '<S236>/Discrete-Time Integrator'
#define rtCP_DiscreteTimeIntegrator_Upp (1.0)

// Pooled Parameter (Expression: 2)
//  Referenced by:
//    '<S233>/Gain'
//    '<S236>/Gain'
#define rtCP_pooled3                   (2.0)

// Pooled Parameter (Expression: Aircraft.Inceptor.deadband)
//  Referenced by:
//    '<S7>/Constant'
//    '<S7>/Constant1'
//    '<S7>/Constant2'
#define rtCP_pooled4                   (0.1)

// Expression: -0.5
//  Referenced by: '<S233>/Constant'
#define rtCP_Constant_Value_a          (-0.5)

// Expression: const
//  Referenced by: '<S235>/Constant'
#define rtCP_Constant_Value_im         (0.98)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S3>/Gain'
//    '<S11>/Gain1'
//    '<S12>/Gain'
//    '<S12>/Gain1'
//    '<S13>/Gain'
//    '<S13>/Gain1'
//    '<S14>/Gain'
//    '<S14>/Gain1'
//    '<S203>/Constant1'
//    '<S206>/Constant1'
//    '<S208>/Constant1'
//    '<S211>/Constant1'
//    '<S230>/Constant'
#define rtCP_pooled5                   (-1.0F)

// Pooled Parameter (Expression: pi/180)
//  Referenced by:
//    '<S196>/Gain1'
//    '<S15>/Gain1'
//    '<S73>/Gain1'
//    '<S133>/Gain1'
#define rtCP_pooled6                   (0.0174532924F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S11>/motor_arm_ramp_integrator'
//    '<S197>/Constant4'
//    '<S199>/Constant'
//    '<S200>/Constant'
//    '<S204>/Constant1'
//    '<S205>/Constant1'
//    '<S207>/Constant1'
//    '<S209>/Constant1'
//    '<S210>/Constant1'
//    '<S226>/Unit Delay'
//    '<S252>/Constant'
//    '<S16>/UD'
//    '<S18>/Unit Delay'
//    '<S74>/UD'
//    '<S76>/Unit Delay'
//    '<S131>/Constant'
//    '<S134>/UD'
//    '<S137>/target_heading_rad'
//    '<S139>/Unit Delay'
//    '<S239>/Discrete-Time Integrator'
//    '<S245>/Constant'
//    '<S250>/time_arm_valid_s'
//    '<S250>/Discrete-Time Integrator'
//    '<S45>/Constant1'
//    '<S45>/Constant5'
//    '<S55>/Integrator'
//    '<S103>/Constant1'
//    '<S103>/Constant5'
//    '<S113>/Integrator'
//    '<S165>/Constant1'
//    '<S165>/Constant5'
//    '<S175>/Integrator'
#define rtCP_pooled7                   (0.0F)

// Pooled Parameter (Expression: )
//  Referenced by:
//    '<S195>/Constant'
//    '<S248>/Constant'
#define rtCP_pooled8                   (0.03F)

// Pooled Parameter (Expression: Aircraft.Control.motor_spin_min)
//  Referenced by:
//    '<S2>/Constant1'
//    '<S197>/Constant5'
#define rtCP_pooled9                   (0.15F)

// Pooled Parameter (Expression: 1)
//  Referenced by:
//    '<S11>/motor_arm_ramp_integrator'
//    '<S197>/Constant6'
//    '<S197>/Constant7'
//    '<S199>/Constant3'
//    '<S200>/Constant3'
//    '<S203>/Constant2'
//    '<S204>/Constant2'
//    '<S206>/Constant2'
//    '<S207>/Constant2'
//    '<S208>/Constant2'
//    '<S209>/Constant2'
//    '<S210>/Constant2'
//    '<S211>/Constant2'
//    '<S239>/Discrete-Time Integrator'
#define rtCP_pooled10                  (1.0F)

// Pooled Parameter (Expression: )
//  Referenced by:
//    '<S132>/Constant'
//    '<S249>/Constant'
//    '<S240>/Constant'
#define rtCP_pooled11                  (0.5F)

// Pooled Parameter (Expression: )
//  Referenced by:
//    '<S11>/motor_arm_ramp_integrator'
//    '<S239>/Discrete-Time Integrator'
//    '<S55>/Integrator'
//    '<S113>/Integrator'
//    '<S175>/Integrator'
#define rtCP_pooled12                  (0.005F)

// Pooled Parameter (Expression: 2)
//  Referenced by:
//    '<S205>/Constant2'
//    '<S239>/Gain'
#define rtCP_pooled13                  (2.0F)

// Computed Parameter: Constant_Value_kh
//  Referenced by: '<S140>/Constant'
#define rtCP_Constant_Value_kh         (3.14159274F)

// Computed Parameter: Constant_Value_g
//  Referenced by: '<S136>/Constant'
#define rtCP_Constant_Value_g          (6.28318548F)

// Computed Parameter: Constant_Value_l
//  Referenced by: '<S2>/Constant'
#define rtCP_Constant_Value_l          (0.9F)

// Computed Parameter: Constant1_Value
//  Referenced by: '<S199>/Constant1'
#define rtCP_Constant1_Value           (900.0F)

// Computed Parameter: Constant2_Value
//  Referenced by: '<S199>/Constant2'
#define rtCP_Constant2_Value           (2100.0F)

// Computed Parameter: Constant1_Value_g
//  Referenced by: '<S200>/Constant1'
#define rtCP_Constant1_Value_g         (1100.0F)

// Computed Parameter: Constant2_Value_a
//  Referenced by: '<S200>/Constant2'
#define rtCP_Constant2_Value_a         (1900.0F)

// Pooled Parameter (Expression: 172)
//  Referenced by:
//    '<S203>/Constant'
//    '<S204>/Constant'
//    '<S205>/Constant'
//    '<S206>/Constant'
//    '<S207>/Constant'
//    '<S208>/Constant'
//    '<S209>/Constant'
//    '<S210>/Constant'
//    '<S211>/Constant'
#define rtCP_pooled15                  (172.0F)

// Pooled Parameter (Expression: 1811)
//  Referenced by:
//    '<S203>/Constant3'
//    '<S204>/Constant3'
//    '<S205>/Constant3'
//    '<S206>/Constant3'
//    '<S207>/Constant3'
//    '<S208>/Constant3'
//    '<S209>/Constant3'
//    '<S210>/Constant3'
//    '<S211>/Constant3'
#define rtCP_pooled16                  (1811.0F)

// Computed Parameter: Constant_Value_iv
//  Referenced by: '<S238>/Constant'
#define rtCP_Constant_Value_iv         (0.98F)

// Computed Parameter: Constant_Value_m
//  Referenced by: '<S246>/Constant'
#define rtCP_Constant_Value_m          (0.95F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S11>/Constant1'
//    '<S247>/Constant'
#define rtCP_pooled17                  (3.0F)

// Computed Parameter: Constant_Value_e
//  Referenced by: '<S11>/Constant'
#define rtCP_Constant_Value_e          (-100.0F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<S16>/TSamp'
//    '<S18>/Constant'
//    '<S74>/TSamp'
//    '<S76>/Constant'
//    '<S134>/TSamp'
//    '<S139>/Constant'
#define rtCP_pooled18                  (200.0F)

// Computed Parameter: Gain_Gain_c
//  Referenced by: '<Root>/Gain'
#define rtCP_Gain_Gain_c               (100.0F)

// Pooled Parameter (Mixed Expressions)
//  Referenced by:
//    '<Root>/Constant'
//    '<S3>/low_throttle_flag'
//    '<S226>/Constant'
//    '<S239>/e_stop_filtered'
//    '<S243>/trigger_disarm'
//    '<S251>/arm_state'
//    '<S231>/battery_low_trigger'
//    '<S236>/e_stop_filtered'
#define rtCP_pooled19                  (false)

// Pooled Parameter (Expression: )
//  Referenced by:
//    '<S8>/Constant'
//    '<S45>/Constant'
//    '<S45>/Constant3'
//    '<S103>/Constant'
//    '<S103>/Constant3'
//    '<S165>/Constant'
//    '<S165>/Constant3'
#define rtCP_pooled20                  (1)

// Pooled Parameter (Expression: )
//  Referenced by:
//    '<S45>/Constant2'
//    '<S45>/Constant4'
//    '<S103>/Constant2'
//    '<S103>/Constant4'
//    '<S165>/Constant2'
//    '<S165>/Constant4'
#define rtCP_pooled21                  (-1)

// Computed Parameter: DiscreteTimeIntegrator_gainval
//  Referenced by: '<S250>/Discrete-Time Integrator'
#define rtCP_DiscreteTimeIntegrator_gai (41)

extern "C" {
    real_T rtInf;
    real_T rtMinusInf;
    real_T rtNaN;
    real32_T rtInfF;
    real32_T rtMinusInfF;
    real32_T rtNaNF;
}
//===========*
//  Constants *
// ===========
#define RT_PI                          3.14159265358979323846
#define RT_PIF                         3.1415927F
#define RT_LN_10                       2.30258509299404568402
#define RT_LN_10F                      2.3025851F
#define RT_LOG10E                      0.43429448190325182765
#define RT_LOG10EF                     0.43429449F
#define RT_E                           2.7182818284590452354
#define RT_EF                          2.7182817F

//
//  UNUSED_PARAMETER(x)
//    Used to specify that a function parameter (argument) is required but not
//    accessed by the function body.
#ifndef UNUSED_PARAMETER
#if defined(__LCC__)
#define UNUSED_PARAMETER(x)                                      // do nothing
#else

//
//  This is the semi-ANSI standard way of indicating that an
//  unused function parameter is required.
#define UNUSED_PARAMETER(x)            (void) (x)
#endif
#endif

extern "C" {
    //
    // Initialize the rtInf, rtMinusInf, and rtNaN needed by the
    // generated code. NaN is initialized as non-signaling. Assumes IEEE.
    //
    static void rt_InitInfAndNaN(size_t realSize)
    {
        (void) (realSize);
        rtNaN = rtGetNaN();
        rtNaNF = rtGetNaNF();
        rtInf = rtGetInf();
        rtInfF = rtGetInfF();
        rtMinusInf = rtGetMinusInf();
        rtMinusInfF = rtGetMinusInfF();
    }

    // Test if value is infinite
    static boolean_T rtIsInf(real_T value)
    {
        return (boolean_T)((value==rtInf || value==rtMinusInf) ? 1U : 0U);
    }

    // Test if single-precision value is infinite
    static boolean_T rtIsInfF(real32_T value)
    {
        return (boolean_T)(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U);
    }

    // Test if value is not a number
    static boolean_T rtIsNaN(real_T value)
    {
        boolean_T result = (boolean_T) 0;
        size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
        if (bitsPerReal == 32U) {
            result = rtIsNaNF((real32_T)value);
        } else {
            union {
                LittleEndianIEEEDouble bitVal;
                real_T fltVal;
            } tmpVal;

            tmpVal.fltVal = value;
            result = (boolean_T)((tmpVal.bitVal.words.wordH & 0x7FF00000) ==
                                 0x7FF00000 &&
                                 ( (tmpVal.bitVal.words.wordH & 0x000FFFFF) != 0
                                  ||
                                  (tmpVal.bitVal.words.wordL != 0) ));
        }

        return result;
    }

    // Test if single-precision value is not a number
    static boolean_T rtIsNaNF(real32_T value)
    {
        IEEESingle tmp;
        tmp.wordL.wordLreal = value;
        return (boolean_T)( (tmp.wordL.wordLuint & 0x7F800000) == 0x7F800000 &&
                           (tmp.wordL.wordLuint & 0x007FFFFF) != 0 );
    }
}
    extern "C"
{
    //
    // Initialize rtInf needed by the generated code.
    // Inf is initialized as non-signaling. Assumes IEEE.
    //
    static real_T rtGetInf(void)
    {
        size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
        real_T inf = 0.0;
        if (bitsPerReal == 32U) {
            inf = rtGetInfF();
        } else {
            union {
                LittleEndianIEEEDouble bitVal;
                real_T fltVal;
            } tmpVal;

            tmpVal.bitVal.words.wordH = 0x7FF00000U;
            tmpVal.bitVal.words.wordL = 0x00000000U;
            inf = tmpVal.fltVal;
        }

        return inf;
    }

    //
    // Initialize rtInfF needed by the generated code.
    // Inf is initialized as non-signaling. Assumes IEEE.
    //
    static real32_T rtGetInfF(void)
    {
        IEEESingle infF;
        infF.wordL.wordLuint = 0x7F800000U;
        return infF.wordL.wordLreal;
    }

    //
    // Initialize rtMinusInf needed by the generated code.
    // Inf is initialized as non-signaling. Assumes IEEE.
    //
    static real_T rtGetMinusInf(void)
    {
        size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
        real_T minf = 0.0;
        if (bitsPerReal == 32U) {
            minf = rtGetMinusInfF();
        } else {
            union {
                LittleEndianIEEEDouble bitVal;
                real_T fltVal;
            } tmpVal;

            tmpVal.bitVal.words.wordH = 0xFFF00000U;
            tmpVal.bitVal.words.wordL = 0x00000000U;
            minf = tmpVal.fltVal;
        }

        return minf;
    }

    //
    // Initialize rtMinusInfF needed by the generated code.
    // Inf is initialized as non-signaling. Assumes IEEE.
    //
    static real32_T rtGetMinusInfF(void)
    {
        IEEESingle minfF;
        minfF.wordL.wordLuint = 0xFF800000U;
        return minfF.wordL.wordLreal;
    }
}

extern "C" {
    //
    // Initialize rtNaN needed by the generated code.
    // NaN is initialized as non-signaling. Assumes IEEE.
    //
    static real_T rtGetNaN(void)
    {
        size_t bitsPerReal = sizeof(real_T) * (NumBitsPerChar);
        real_T nan = 0.0;
        if (bitsPerReal == 32U) {
            nan = rtGetNaNF();
        } else {
            union {
                LittleEndianIEEEDouble bitVal;
                real_T fltVal;
            } tmpVal;

            tmpVal.bitVal.words.wordH = 0xFFF80000U;
            tmpVal.bitVal.words.wordL = 0x00000000U;
            nan = tmpVal.fltVal;
        }

        return nan;
    }

    //
    // Initialize rtNaNF needed by the generated code.
    // NaN is initialized as non-signaling. Assumes IEEE.
    //
    static real32_T rtGetNaNF(void)
    {
        IEEESingle nanF = { { 0.0F } };

        nanF.wordL.wordLuint = 0xFFC00000U;
        return nanF.wordL.wordLreal;
    }
}
    namespace bfs
{
    //
    // Output and update for atomic system:
    //    '<S18>/MATLAB Function'
    //    '<S76>/MATLAB Function'
    //    '<S139>/MATLAB Function'
    //
    void Autocode::MATLABFunction(real32_T rtu_prev_val, real32_T rtu_raw_val,
        real32_T rtu_freq_cut, real32_T rtu_samp_freq, real32_T
        *rty_filtered_val)
    {
        real32_T a;
        real32_T fc;

        // MATLAB Function 'ANGLE CONTROLLER/Pitch Controller/pitch_D_DLPF/MATLAB Function': '<S20>:1'
        // '<S20>:1:2' fc = freq_cut/samp_freq;
        fc = rtu_freq_cut / rtu_samp_freq;

        // '<S20>:1:3' b = 2 - cos(2 * pi * fc) - sqrt((2 - cos(2 * pi * fc))^2 - 1);
        a = 2.0F - std::cos(6.28318548F * fc);
        fc = 2.0F - std::cos(6.28318548F * fc) - std::sqrt((a * a) - 1.0F);

        // '<S20>:1:4' a = 1 - b;
        // '<S20>:1:5' filtered_val = a * raw_val + b * prev_val;
        *rty_filtered_val = ((1.0F - fc) * rtu_raw_val) + (fc * rtu_prev_val);
    }
}

namespace bfs
{
    //
    // Output and update for atomic system:
    //    '<S197>/remap1'
    //    '<S203>/remap'
    //    '<S204>/remap'
    //    '<S205>/remap'
    //    '<S207>/remap'
    //    '<S209>/remap'
    //    '<S210>/remap'
    //
    void Autocode::remap1(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                          rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max,
                          real32_T *rty_norm_out)
    {
        // MATLAB Function 'Stab_input_conversion/remap from min_spin to max/remap1': '<S198>:1'
        // '<S198>:1:2' norm_out = (raw_in - in_min) * (out_max - out_min)/(in_max-in_min) + out_min;
        *rty_norm_out = (((rtu_raw_in - rtu_in_min) * (rtu_out_max - rtu_out_min))
                         / (rtu_in_max - rtu_in_min)) + rtu_out_min;
    }
}

namespace bfs
{
    // Model step function
    void Autocode::Run(const SysData &sys, const SensorData &sensor, const
                       InsData &bfs_ins, const InsData &vector_nav_ins, const
                       AuxInsData &aux_ins, const AdcData &adc, const TelemData
                       &telem, VmsData *vms)
    {
        real_T rtb_Gain;
        real_T rtb_Gain_p;
        int32_T i;
        real32_T rtb_CastToSingle_f[24];
        real32_T rtb_Command[8];
        real32_T rtb_Switch2_l[8];
        const real32_T *tmp;
        real32_T in_avg;
        real32_T in_deadband_low;
        real32_T in_deadband_range;
        real32_T out_avg;
        real32_T out_avg_0;
        real32_T rtb_DataTypeConversion2;
        real32_T rtb_DataTypeConversion3;
        real32_T rtb_DataTypeConversion4;
        real32_T rtb_Gain1_nt;
        real32_T rtb_Gain_c;
        real32_T rtb_Gain_d;
        real32_T rtb_IProdOut_c;
        real32_T rtb_Product1_o;
        real32_T rtb_Product_k;
        real32_T rtb_Subtract;
        real32_T rtb_Sum_d;
        real32_T rtb_Sum_h;
        real32_T rtb_Sum_j;
        real32_T rtb_Sum_k;
        real32_T rtb_Sum_o;
        real32_T rtb_Switch_c;
        real32_T rtb_Switch_ce;
        real32_T rtb_Switch_h0;
        real32_T rtb_Switch_p;
        real32_T rtb_pitch_angle_cmd_rad;
        real32_T rtb_roll_angle_cmd_rad;
        int16_T rtb_cnt[8];
        int8_T rtb_Cast;
        int8_T rtb_Switch1_a;
        boolean_T rtb_Compare;
        boolean_T rtb_Compare_ht;
        boolean_T rtb_Compare_k;
        boolean_T rtb_nav_initANDmotor_enable;
        UNUSED_PARAMETER(sys);
        UNUSED_PARAMETER(vector_nav_ins);
        UNUSED_PARAMETER(aux_ins);
        UNUSED_PARAMETER(adc);

        // DataTypeConversion: '<S7>/Data Type Conversion2' incorporates:
        //   Inport: '<Root>/Sensor Data'
        rtb_DataTypeConversion2 = static_cast<real32_T>(sensor.inceptor.ch[3]);

        // MATLAB Function: '<S211>/remap_with_deadband' incorporates:
        //   Constant: '<S211>/Constant'
        //   Constant: '<S211>/Constant1'
        //   Constant: '<S211>/Constant2'
        //   Constant: '<S211>/Constant3'
        //   Constant: '<S7>/Constant2'

        // MATLAB Function 'command selection/yaw_norm_deadband/remap_with_deadband': '<S220>:1'
        // '<S220>:1:2' in_avg = (in_min + in_max) / 2;
        in_avg = (rtCP_pooled15 + rtCP_pooled16) / 2.0F;

        // '<S220>:1:3' out_avg = (out_min + out_max) / 2;
        out_avg = (rtCP_pooled5 + rtCP_pooled10) / 2.0F;

        // '<S220>:1:5' in_deadband_range = (in_max - in_min) * deadband / 2;
        in_deadband_range = ((rtCP_pooled16 - rtCP_pooled15) *
                             static_cast<real32_T>(rtCP_pooled4)) / 2.0F;

        // '<S220>:1:6' in_deadband_low = in_avg - in_deadband_range;
        in_deadband_low = in_avg - in_deadband_range;

        // '<S220>:1:7' in_deadband_hi = in_avg + in_deadband_range;
        in_avg += in_deadband_range;

        // '<S220>:1:9' if raw_in < in_deadband_low
        if (rtb_DataTypeConversion2 < in_deadband_low) {
            // '<S220>:1:10' norm_out = (raw_in - in_deadband_low) .* (out_max - out_avg)./(in_deadband_low - in_min) + out_avg;
            out_avg += ((rtb_DataTypeConversion2 - in_deadband_low) *
                        (rtCP_pooled10 - out_avg)) / (in_deadband_low -
                rtCP_pooled15);
        } else if (static_cast<boolean_T>(static_cast<int32_T>
                    (((rtb_DataTypeConversion2 > in_deadband_low) ? (
                       static_cast<int32_T>(1)) : (static_cast<int32_T>(0))) &
                     ((rtb_DataTypeConversion2 < in_avg) ? (static_cast<int32_T>
                       (1)) : (static_cast<int32_T>(0)))))) {
            // '<S220>:1:11' elseif raw_in > in_deadband_low && raw_in < in_deadband_hi
            // '<S220>:1:12' norm_out = out_avg;
        } else {
            // '<S220>:1:13' else
            // '<S220>:1:14' norm_out = (raw_in - in_deadband_hi) .* (out_max - out_avg)./(in_max - in_deadband_hi) + out_avg;
            out_avg += ((rtb_DataTypeConversion2 - in_avg) * (rtCP_pooled10 -
                         out_avg)) / (rtCP_pooled16 - in_avg);
        }

        // End of MATLAB Function: '<S211>/remap_with_deadband'

        // DataTypeConversion: '<S7>/Data Type Conversion5' incorporates:
        //   Inport: '<Root>/Sensor Data'
        in_deadband_low = static_cast<real32_T>(sensor.inceptor.ch[0]);

        // MATLAB Function: '<S210>/remap' incorporates:
        //   Constant: '<S210>/Constant'
        //   Constant: '<S210>/Constant1'
        //   Constant: '<S210>/Constant2'
        //   Constant: '<S210>/Constant3'
        remap1(in_deadband_low, rtCP_pooled15, rtCP_pooled16, rtCP_pooled7,
               rtCP_pooled10, &rtb_DataTypeConversion2);

        // DataTypeConversion: '<S7>/Data Type Conversion4' incorporates:
        //   Inport: '<Root>/Sensor Data'
        rtb_DataTypeConversion4 = static_cast<real32_T>(sensor.inceptor.ch[2]);

        // MATLAB Function: '<S206>/remap_with_deadband' incorporates:
        //   Constant: '<S206>/Constant'
        //   Constant: '<S206>/Constant1'
        //   Constant: '<S206>/Constant2'
        //   Constant: '<S206>/Constant3'
        //   Constant: '<S7>/Constant'

        // MATLAB Function 'command selection/pitch_norm_deadband/remap_with_deadband': '<S215>:1'
        // '<S215>:1:2' in_avg = (in_min + in_max) / 2;
        in_avg = (rtCP_pooled15 + rtCP_pooled16) / 2.0F;

        // '<S215>:1:3' out_avg = (out_min + out_max) / 2;
        out_avg_0 = (rtCP_pooled5 + rtCP_pooled10) / 2.0F;

        // '<S215>:1:5' in_deadband_range = (in_max - in_min) * deadband / 2;
        in_deadband_range = ((rtCP_pooled16 - rtCP_pooled15) *
                             static_cast<real32_T>(rtCP_pooled4)) / 2.0F;

        // '<S215>:1:6' in_deadband_low = in_avg - in_deadband_range;
        in_deadband_low = in_avg - in_deadband_range;

        // '<S215>:1:7' in_deadband_hi = in_avg + in_deadband_range;
        in_avg += in_deadband_range;

        // '<S215>:1:9' if raw_in < in_deadband_low
        if (rtb_DataTypeConversion4 < in_deadband_low) {
            // '<S215>:1:10' norm_out = (raw_in - in_deadband_low) .* (out_max - out_avg)./(in_deadband_low - in_min) + out_avg;
            out_avg_0 += ((rtb_DataTypeConversion4 - in_deadband_low) *
                          (rtCP_pooled10 - out_avg_0)) / (in_deadband_low -
                rtCP_pooled15);
        } else if (static_cast<boolean_T>(static_cast<int32_T>
                    (((rtb_DataTypeConversion4 > in_deadband_low) ? (
                       static_cast<int32_T>(1)) : (static_cast<int32_T>(0))) &
                     ((rtb_DataTypeConversion4 < in_avg) ? (static_cast<int32_T>
                       (1)) : (static_cast<int32_T>(0)))))) {
            // '<S215>:1:11' elseif raw_in > in_deadband_low && raw_in < in_deadband_hi
            // '<S215>:1:12' norm_out = out_avg;
        } else {
            // '<S215>:1:13' else
            // '<S215>:1:14' norm_out = (raw_in - in_deadband_hi) .* (out_max - out_avg)./(in_max - in_deadband_hi) + out_avg;
            out_avg_0 += ((rtb_DataTypeConversion4 - in_avg) * (rtCP_pooled10 -
                           out_avg_0)) / (rtCP_pooled16 - in_avg);
        }

        // End of MATLAB Function: '<S206>/remap_with_deadband'

        // DataTypeConversion: '<S7>/Data Type Conversion3' incorporates:
        //   Inport: '<Root>/Sensor Data'
        rtb_DataTypeConversion3 = static_cast<real32_T>(sensor.inceptor.ch[1]);

        // MATLAB Function: '<S208>/remap_with_deadband' incorporates:
        //   Constant: '<S208>/Constant'
        //   Constant: '<S208>/Constant1'
        //   Constant: '<S208>/Constant2'
        //   Constant: '<S208>/Constant3'
        //   Constant: '<S7>/Constant1'

        // MATLAB Function 'command selection/roll_norm_deadband/remap_with_deadband': '<S217>:1'
        // '<S217>:1:2' in_avg = (in_min + in_max) / 2;
        in_avg = (rtCP_pooled15 + rtCP_pooled16) / 2.0F;

        // '<S217>:1:3' out_avg = (out_min + out_max) / 2;
        rtb_DataTypeConversion4 = (rtCP_pooled5 + rtCP_pooled10) / 2.0F;

        // '<S217>:1:5' in_deadband_range = (in_max - in_min) * deadband / 2;
        in_deadband_range = ((rtCP_pooled16 - rtCP_pooled15) *
                             static_cast<real32_T>(rtCP_pooled4)) / 2.0F;

        // '<S217>:1:6' in_deadband_low = in_avg - in_deadband_range;
        in_deadband_low = in_avg - in_deadband_range;

        // '<S217>:1:7' in_deadband_hi = in_avg + in_deadband_range;
        in_avg += in_deadband_range;

        // '<S217>:1:9' if raw_in < in_deadband_low
        if (rtb_DataTypeConversion3 < in_deadband_low) {
            // '<S217>:1:10' norm_out = (raw_in - in_deadband_low) .* (out_max - out_avg)./(in_deadband_low - in_min) + out_avg;
            rtb_DataTypeConversion4 += ((rtb_DataTypeConversion3 -
                in_deadband_low) * (rtCP_pooled10 - rtb_DataTypeConversion4)) /
                (in_deadband_low - rtCP_pooled15);
        } else if (static_cast<boolean_T>(static_cast<int32_T>
                    (((rtb_DataTypeConversion3 > in_deadband_low) ? (
                       static_cast<int32_T>(1)) : (static_cast<int32_T>(0))) &
                     ((rtb_DataTypeConversion3 < in_avg) ? (static_cast<int32_T>
                       (1)) : (static_cast<int32_T>(0)))))) {
            // '<S217>:1:11' elseif raw_in > in_deadband_low && raw_in < in_deadband_hi
            // '<S217>:1:12' norm_out = out_avg;
        } else {
            // '<S217>:1:13' else
            // '<S217>:1:14' norm_out = (raw_in - in_deadband_hi) .* (out_max - out_avg)./(in_max - in_deadband_hi) + out_avg;
            rtb_DataTypeConversion4 += ((rtb_DataTypeConversion3 - in_avg) *
                (rtCP_pooled10 - rtb_DataTypeConversion4)) / (rtCP_pooled16 -
                in_avg);
        }

        // End of MATLAB Function: '<S208>/remap_with_deadband'

        // DataTypeConversion: '<S7>/Data Type Conversion1' incorporates:
        //   Inport: '<Root>/Sensor Data'
        in_avg = static_cast<real32_T>(sensor.inceptor.ch[6]);

        // MATLAB Function: '<S203>/remap' incorporates:
        //   Constant: '<S203>/Constant'
        //   Constant: '<S203>/Constant1'
        //   Constant: '<S203>/Constant2'
        //   Constant: '<S203>/Constant3'
        remap1(in_avg, rtCP_pooled15, rtCP_pooled16, rtCP_pooled5, rtCP_pooled10,
               &in_deadband_low);

        // Abs: '<S222>/Abs1'
        rtb_Switch_ce = std::abs(in_deadband_low);

        // RelationalOperator: '<S238>/Compare' incorporates:
        //   Constant: '<S238>/Constant'
        rtb_Compare = (rtb_Switch_ce >= rtCP_Constant_Value_iv);

        // Outputs for Enabled SubSystem: '<S222>/e_stop counter' incorporates:
        //   EnablePort: '<S239>/Enable'
        if (rtb_Compare) {
            if (static_cast<boolean_T>(static_cast<int32_T>
                 ((rtDWork.e_stopcounter_MODE ? (
                    static_cast<int32_T>(1)) : (static_cast<int32_T>(0))) ^ 1)))
            {
                // InitializeConditions for DiscreteIntegrator: '<S239>/Discrete-Time Integrator'
                rtDWork.DiscreteTimeIntegrator_DSTATE_n = rtCP_pooled7;
                rtDWork.e_stopcounter_MODE = true;
            }

            // DiscreteIntegrator: '<S239>/Discrete-Time Integrator'
            rtb_Sum_k = rtDWork.DiscreteTimeIntegrator_DSTATE_n;

            // RelationalOperator: '<S240>/Compare' incorporates:
            //   Constant: '<S240>/Constant'
            rtDWork.Compare = (rtb_Sum_k >= rtCP_pooled11);

            // Gain: '<S239>/Gain'
            in_deadband_low *= rtCP_pooled13;

            // Update for DiscreteIntegrator: '<S239>/Discrete-Time Integrator'
            rtDWork.DiscreteTimeIntegrator_DSTATE_n += rtCP_pooled12 *
                in_deadband_low;
            if (rtDWork.DiscreteTimeIntegrator_DSTATE_n >= rtCP_pooled10) {
                rtDWork.DiscreteTimeIntegrator_DSTATE_n = rtCP_pooled10;
            } else if (rtDWork.DiscreteTimeIntegrator_DSTATE_n <= rtCP_pooled7)
            {
                rtDWork.DiscreteTimeIntegrator_DSTATE_n = rtCP_pooled7;
            } else {
                // no actions
            }

            // End of Update for DiscreteIntegrator: '<S239>/Discrete-Time Integrator'
        } else {
            rtDWork.e_stopcounter_MODE = false;
        }

        // End of Outputs for SubSystem: '<S222>/e_stop counter'

        // Logic: '<S228>/NOT2' incorporates:
        //   Inport: '<Root>/Sensor Data'
        rtb_Compare_k = sensor.inceptor.failsafe ^ 1;

        // DataTypeConversion: '<S233>/Cast To Single'
        rtb_Switch_ce = rtb_Compare_k ? 1.0F : 0.0F;

        // Sum: '<S233>/Add' incorporates:
        //   Constant: '<S233>/Constant'
        rtb_Gain_p = static_cast<real_T>(rtb_Switch_ce) + rtCP_Constant_Value_a;

        // Gain: '<S233>/Gain'
        rtb_Gain = rtCP_pooled3 * rtb_Gain_p;

        // Abs: '<S234>/Abs1'
        rtb_Gain_p = std::abs(rtb_Gain);

        // RelationalOperator: '<S235>/Compare' incorporates:
        //   Constant: '<S235>/Constant'
        rtb_Compare = (rtb_Gain_p >= rtCP_Constant_Value_im);

        // Outputs for Enabled SubSystem: '<S234>/e_stop counter' incorporates:
        //   EnablePort: '<S236>/Enable'
        if (rtb_Compare) {
            if (static_cast<boolean_T>(static_cast<int32_T>
                 ((rtDWork.e_stopcounter_MODE_k ? (
                    static_cast<int32_T>(1)) : (static_cast<int32_T>(0))) ^ 1)))
            {
                // InitializeConditions for DiscreteIntegrator: '<S236>/Discrete-Time Integrator'
                rtDWork.DiscreteTimeIntegrator_DSTATE = rtCP_pooled2;
                rtDWork.e_stopcounter_MODE_k = true;
            }

            // DiscreteIntegrator: '<S236>/Discrete-Time Integrator'
            rtb_Gain_p = rtDWork.DiscreteTimeIntegrator_DSTATE;

            // RelationalOperator: '<S237>/Compare' incorporates:
            //   Constant: '<S237>/Constant'
            rtDWork.Compare_n = (rtb_Gain_p >= rtCP_Constant_Value_k);

            // Gain: '<S236>/Gain'
            rtb_Gain_p = rtCP_pooled3 * rtb_Gain;

            // Update for DiscreteIntegrator: '<S236>/Discrete-Time Integrator'
            rtDWork.DiscreteTimeIntegrator_DSTATE += rtCP_pooled1 * rtb_Gain_p;
            if (rtDWork.DiscreteTimeIntegrator_DSTATE >=
                rtCP_DiscreteTimeIntegrator_Upp) {
                rtDWork.DiscreteTimeIntegrator_DSTATE =
                    rtCP_DiscreteTimeIntegrator_Upp;
            } else if (rtDWork.DiscreteTimeIntegrator_DSTATE <= rtCP_pooled2) {
                rtDWork.DiscreteTimeIntegrator_DSTATE = rtCP_pooled2;
            } else {
                // no actions
            }

            // End of Update for DiscreteIntegrator: '<S236>/Discrete-Time Integrator'
        } else {
            rtDWork.e_stopcounter_MODE_k = false;
        }

        // End of Outputs for SubSystem: '<S234>/e_stop counter'

        // Logic: '<S228>/NOT1'
        rtb_Compare_k = rtDWork.Compare_n ^ 1;

        // Logic: '<S9>/OR1'
        rtb_Compare = rtDWork.Compare | rtb_Compare_k;

        // RelationalOperator: '<S249>/Compare' incorporates:
        //   Constant: '<S249>/Constant'
        rtb_Compare_ht = (out_avg >= rtCP_pooled11);

        // UnitDelay: '<S226>/Unit Delay'
        rtb_Switch_ce = rtDWork.UnitDelay_DSTATE_f;

        // Abs: '<S226>/Abs'
        rtb_roll_angle_cmd_rad = std::abs(out_avg);

        // RelationalOperator: '<S246>/Compare' incorporates:
        //   Constant: '<S246>/Constant'
        rtb_Compare_k = (rtb_roll_angle_cmd_rad >= rtCP_Constant_Value_m);

        // RelationalOperator: '<S248>/Compare' incorporates:
        //   Constant: '<S248>/Constant'
        rtb_nav_initANDmotor_enable = (rtb_DataTypeConversion2 <= rtCP_pooled8);

        // Logic: '<S226>/AND'
        rtb_nav_initANDmotor_enable = rtb_nav_initANDmotor_enable &
            rtb_Compare_k;

        // Outputs for Enabled SubSystem: '<S226>/Enabled Subsystem' incorporates:
        //   EnablePort: '<S250>/Enable'
        if (rtb_nav_initANDmotor_enable) {
            if (static_cast<boolean_T>(static_cast<int32_T>
                 ((rtDWork.EnabledSubsystem_MODE ? (
                    static_cast<int32_T>(1)) : (static_cast<int32_T>(0))) ^ 1)))
            {
                // InitializeConditions for DiscreteIntegrator: '<S250>/Discrete-Time Integrator'
                rtDWork.DiscreteTimeIntegrator_DSTATE_k = rtCP_pooled7;
                rtDWork.EnabledSubsystem_MODE = true;
            }

            // DataTypeConversion: '<S250>/Cast'
            rtb_Cast = static_cast<int8_T>(rtb_Compare_k ? 1 : 0);

            // DiscreteIntegrator: '<S250>/Discrete-Time Integrator'
            rtDWork.DiscreteTimeIntegrator =
                rtDWork.DiscreteTimeIntegrator_DSTATE_k + ((static_cast<real32_T>
                (rtCP_DiscreteTimeIntegrator_gai) * 6.10351562E-5F) *
                static_cast<real32_T>(rtb_Cast));

            // Update for DiscreteIntegrator: '<S250>/Discrete-Time Integrator'
            rtDWork.DiscreteTimeIntegrator_DSTATE_k =
                rtDWork.DiscreteTimeIntegrator + ((static_cast<real32_T>
                (rtCP_DiscreteTimeIntegrator_gai) * 6.10351562E-5F) *
                static_cast<real32_T>(rtb_Cast));
        } else {
            rtDWork.EnabledSubsystem_MODE = false;
        }

        // End of Outputs for SubSystem: '<S226>/Enabled Subsystem'

        // RelationalOperator: '<S247>/Compare' incorporates:
        //   Constant: '<S247>/Constant'
        rtb_nav_initANDmotor_enable = (rtDWork.DiscreteTimeIntegrator >=
            rtCP_pooled17);

        // DataTypeConversion: '<S226>/Cast To Single'
        in_deadband_low = rtb_nav_initANDmotor_enable ? 1.0F : 0.0F;

        // Sum: '<S226>/Sum'
        rtb_Switch_ce = in_deadband_low - rtb_Switch_ce;

        // RelationalOperator: '<S245>/Compare' incorporates:
        //   Constant: '<S245>/Constant'
        rtb_nav_initANDmotor_enable = (rtb_Switch_ce > rtCP_pooled7);

        // Logic: '<S226>/OR'
        rtb_nav_initANDmotor_enable = rtb_Compare | rtb_nav_initANDmotor_enable;

        // Outputs for Triggered SubSystem: '<S226>/manual_arming' incorporates:
        //   TriggerPort: '<S251>/Trigger'
        rtb_Compare_k = rtb_nav_initANDmotor_enable & (static_cast<uint32_T>
            (rtPrevZCSigState.manual_arming_Trig_ZCE) != POS_ZCSIG);
        if (rtb_Compare_k) {
            // SignalConversion generated from: '<S251>/yaw_arm'
            rtDWork.yaw_arm = rtb_Compare_ht;
        }

        rtPrevZCSigState.manual_arming_Trig_ZCE = rtb_nav_initANDmotor_enable ?
            (static_cast<ZCSigState>(1)) : (static_cast<ZCSigState>(0));

        // End of Outputs for SubSystem: '<S226>/manual_arming'

        // Switch: '<S226>/Switch' incorporates:
        //   Constant: '<S226>/Constant'
        if (rtb_Compare) {
            rtb_nav_initANDmotor_enable = rtCP_pooled19;
        } else {
            rtb_nav_initANDmotor_enable = rtDWork.yaw_arm;
        }

        // End of Switch: '<S226>/Switch'

        // Logic: '<S9>/nav_init AND motor_enable' incorporates:
        //   Inport: '<Root>/Navigation Filter Data'
        rtb_nav_initANDmotor_enable = rtb_nav_initANDmotor_enable &
            bfs_ins.initialized;

        // DataTypeConversion: '<S7>/Data Type Conversion7' incorporates:
        //   Inport: '<Root>/Sensor Data'
        in_avg = static_cast<real32_T>(sensor.inceptor.ch[4]);

        // MATLAB Function: '<S205>/remap' incorporates:
        //   Constant: '<S205>/Constant'
        //   Constant: '<S205>/Constant1'
        //   Constant: '<S205>/Constant2'
        //   Constant: '<S205>/Constant3'
        remap1(in_avg, rtCP_pooled15, rtCP_pooled16, rtCP_pooled7, rtCP_pooled13,
               &in_deadband_range);

        // DataTypeConversion: '<S9>/mode_type_conversion'
        in_avg = std::abs(in_deadband_range);
        if (in_avg < 8.388608E+6F) {
            if (in_avg >= 0.5F) {
                in_deadband_range = std::floor(in_deadband_range + 0.5F);
            } else {
                in_deadband_range *= 0.0F;
            }
        }

        rtb_Cast = static_cast<int8_T>(in_deadband_range);

        // End of DataTypeConversion: '<S9>/mode_type_conversion'

        // RelationalOperator: '<S230>/Compare' incorporates:
        //   Constant: '<S230>/Constant'
        //   Inport: '<Root>/Sensor Data'
        rtb_Compare_ht = (sensor.power_module.voltage_v <= rtCP_pooled5);

        // Outputs for Enabled SubSystem: '<S227>/disarm motor' incorporates:
        //   EnablePort: '<S231>/Enable'
        if (rtb_Compare_ht) {
            if (static_cast<boolean_T>(static_cast<int32_T>
                 ((rtDWork.disarmmotor_MODE ? (
                    static_cast<int32_T>(1)) : (static_cast<int32_T>(0))) ^ 1)))
            {
                // InitializeConditions for UnitDelay: '<S231>/Unit Delay'
                rtDWork.UnitDelay_DSTATE = rtCP_pooled2;
                rtDWork.disarmmotor_MODE = true;
            }

            // UnitDelay: '<S231>/Unit Delay'
            rtb_Gain_p = rtDWork.UnitDelay_DSTATE;

            // Sum: '<S231>/Sum' incorporates:
            //   Constant: '<S231>/Constant'
            rtb_Gain_p += rtCP_pooled1;

            // Update for UnitDelay: '<S231>/Unit Delay'
            rtDWork.UnitDelay_DSTATE = rtb_Gain_p;
        } else {
            rtDWork.disarmmotor_MODE = false;
        }

        // End of Outputs for SubSystem: '<S227>/disarm motor'

        // RelationalOperator: '<S8>/Compare' incorporates:
        //   Constant: '<S8>/Constant'
        rtb_Compare_ht = (rtb_Cast <= rtCP_pooled20);

        // Logic: '<Root>/motor_armed AND mode_0'
        rtb_Compare_ht = rtb_nav_initANDmotor_enable & rtb_Compare_ht;

        // Outputs for Enabled SubSystem: '<Root>/Stab_input_conversion' incorporates:
        //   EnablePort: '<S3>/Enable'
        if (rtb_Compare_ht) {
            // Gain: '<S196>/Gain1' incorporates:
            //   Inport: '<Root>/Telemetry Data'
            in_deadband_range = rtCP_pooled6 * telem.param[13];
            in_avg = rtCP_pooled6 * telem.param[12];

            // Product: '<S3>/Product1'
            rtDWork.roll_angle_cmd_rad = rtb_DataTypeConversion4 *
                in_deadband_range;

            // Product: '<S3>/Product2'
            rtDWork.yaw_rate_cmd_radps = out_avg * in_avg;

            // Gain: '<S3>/Gain'
            rtb_Sum_k = rtCP_pooled5 * out_avg_0;

            // Product: '<S3>/Product'
            rtDWork.pitch_angle_cmd_rad = rtb_Sum_k * in_deadband_range;

            // RelationalOperator: '<S195>/Compare' incorporates:
            //   Constant: '<S195>/Constant'
            rtDWork.Compare_o = (rtb_DataTypeConversion2 <= rtCP_pooled8);

            // MATLAB Function: '<S197>/remap1' incorporates:
            //   Constant: '<S197>/Constant4'
            //   Constant: '<S197>/Constant5'
            //   Constant: '<S197>/Constant6'
            //   Constant: '<S197>/Constant7'
            remap1(rtb_DataTypeConversion2, rtCP_pooled7, rtCP_pooled10,
                   rtCP_pooled9, rtCP_pooled10, &rtDWork.norm_out);
        }

        // End of Outputs for SubSystem: '<Root>/Stab_input_conversion'

        // Switch generated from: '<Root>/Switch'
        rtb_DataTypeConversion4 = rtDWork.norm_out;

        // Switch generated from: '<Root>/Switch'
        rtb_roll_angle_cmd_rad = rtDWork.roll_angle_cmd_rad;

        // Gain: '<S73>/Gain1' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        out_avg = rtCP_pooled6 * telem.param[11];

        // Sum: '<S13>/stab_roll_angle_error_calc' incorporates:
        //   Inport: '<Root>/Navigation Filter Data'
        rtb_Switch_ce = rtb_roll_angle_cmd_rad - bfs_ins.roll_rad;

        // Product: '<S13>/Product1' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_DataTypeConversion2 = rtb_Switch_ce * telem.param[10];

        // RelationalOperator: '<S75>/LowerRelop1'
        rtb_Compare_k = (rtb_DataTypeConversion2 > out_avg);

        // Switch: '<S75>/Switch2'
        if (rtb_Compare_k) {
            rtb_Switch_ce = out_avg;
        } else {
            // Gain: '<S13>/Gain1'
            out_avg *= rtCP_pooled5;

            // RelationalOperator: '<S75>/UpperRelop'
            rtb_Compare_ht = (rtb_DataTypeConversion2 < out_avg);

            // Switch: '<S75>/Switch'
            if (rtb_Compare_ht) {
                rtb_Switch_ce = out_avg;
            } else {
                rtb_Switch_ce = rtb_DataTypeConversion2;
            }

            // End of Switch: '<S75>/Switch'
        }

        // End of Switch: '<S75>/Switch2'

        // Sum: '<S13>/stab_roll_angle_rate_error_calc' incorporates:
        //   Inport: '<Root>/Navigation Filter Data'
        out_avg_0 = rtb_Switch_ce - bfs_ins.gyro_radps[0];

        // Product: '<S118>/PProd Out' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Switch_p = out_avg_0 * telem.param[0];

        // DiscreteIntegrator: '<S113>/Integrator'
        if (static_cast<boolean_T>(static_cast<int32_T>(((static_cast<boolean_T>
                (static_cast<int32_T>((rtDWork.Compare_o ? (static_cast<int32_T>
                    (1)) : (static_cast<int32_T>(0))) &
                  ((rtDWork.Integrator_PrevResetState <= 0) ?
                   (static_cast<int32_T>(1)) : (static_cast<int32_T>(0)))))) ? (
                static_cast<int32_T>(1)) : (static_cast<int32_T>(0))) | ((
                static_cast<boolean_T>(static_cast<int32_T>
                 (((static_cast<boolean_T>(static_cast<int32_T>
                     ((rtDWork.Compare_o ? (static_cast<int32_T>(1)) : (
                        static_cast<int32_T>(0))) ^ 1))) ? (static_cast<int32_T>
                    (1)) : (static_cast<int32_T>(0))) &
                  ((rtDWork.Integrator_PrevResetState == 1) ?
                   (static_cast<int32_T>(1)) : (static_cast<int32_T>(0)))))) ? (
                static_cast<int32_T>(1)) : (static_cast<int32_T>(0)))))) {
            rtDWork.Integrator_DSTATE = rtCP_pooled7;
        }

        out_avg = rtDWork.Integrator_DSTATE;

        // End of DiscreteIntegrator: '<S113>/Integrator'

        // Sum: '<S123>/Sum'
        in_avg = rtb_Switch_p + out_avg;

        // RelationalOperator: '<S121>/LowerRelop1' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Compare_k = (in_avg > telem.param[15]);

        // Gain: '<S13>/Gain' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        in_deadband_range = rtCP_pooled5 * telem.param[15];

        // Switch: '<S121>/Switch2' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        if (rtb_Compare_k) {
            rtb_Switch_p = telem.param[15];
        } else {
            // RelationalOperator: '<S121>/UpperRelop'
            rtb_Compare_ht = (in_avg < in_deadband_range);

            // Switch: '<S121>/Switch'
            if (rtb_Compare_ht) {
                rtb_Switch_p = in_deadband_range;
            } else {
                rtb_Switch_p = in_avg;
            }

            // End of Switch: '<S121>/Switch'
        }

        // End of Switch: '<S121>/Switch2'

        // UnitDelay: '<S76>/Unit Delay'
        rtb_DataTypeConversion2 = rtDWork.UnitDelay_DSTATE_h;

        // MATLAB Function: '<S76>/MATLAB Function' incorporates:
        //   Constant: '<S76>/Constant'
        //   Inport: '<Root>/Navigation Filter Data'
        //   Inport: '<Root>/Telemetry Data'
        MATLABFunction(rtb_DataTypeConversion2, bfs_ins.gyro_radps[0],
                       telem.param[17], rtCP_pooled18, &out_avg);

        // SampleTimeMath: '<S74>/TSamp'
        //
        //  About '<S74>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        rtb_DataTypeConversion2 = out_avg * rtCP_pooled18;

        // UnitDelay: '<S74>/UD'
        //
        //  Block description for '<S74>/UD':
        //
        //   Store in Global RAM
        rtb_pitch_angle_cmd_rad = rtDWork.UD_DSTATE;

        // Sum: '<S74>/Diff'
        //
        //  Block description for '<S74>/Diff':
        //
        //   Add in CPU
        rtb_pitch_angle_cmd_rad = rtb_DataTypeConversion2 -
            rtb_pitch_angle_cmd_rad;

        // Product: '<S13>/Product' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_pitch_angle_cmd_rad *= telem.param[2];

        // Sum: '<S13>/Sum'
        rtb_Sum_j = rtb_Switch_p - rtb_pitch_angle_cmd_rad;

        // Switch generated from: '<Root>/Switch'
        rtb_pitch_angle_cmd_rad = rtDWork.pitch_angle_cmd_rad;

        // Gain: '<S15>/Gain1' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_DataTypeConversion3 = rtCP_pooled6 * telem.param[11];

        // Sum: '<S12>/stab_pitch_angle_error_calc' incorporates:
        //   Inport: '<Root>/Navigation Filter Data'
        rtb_Switch_p = rtb_pitch_angle_cmd_rad - bfs_ins.pitch_rad;

        // Product: '<S12>/Product1' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Product1_o = rtb_Switch_p * telem.param[9];

        // RelationalOperator: '<S17>/LowerRelop1'
        rtb_Compare_k = (rtb_Product1_o > rtb_DataTypeConversion3);

        // Switch: '<S17>/Switch2'
        if (rtb_Compare_k) {
            rtb_Switch_p = rtb_DataTypeConversion3;
        } else {
            // Gain: '<S12>/Gain1'
            rtb_DataTypeConversion3 *= rtCP_pooled5;

            // RelationalOperator: '<S17>/UpperRelop'
            rtb_Compare_ht = (rtb_Product1_o < rtb_DataTypeConversion3);

            // Switch: '<S17>/Switch'
            if (rtb_Compare_ht) {
                rtb_Switch_p = rtb_DataTypeConversion3;
            } else {
                rtb_Switch_p = rtb_Product1_o;
            }

            // End of Switch: '<S17>/Switch'
        }

        // End of Switch: '<S17>/Switch2'

        // Sum: '<S12>/stab_pitch_angle_rate_error_calc' incorporates:
        //   Inport: '<Root>/Navigation Filter Data'
        rtb_IProdOut_c = rtb_Switch_p - bfs_ins.gyro_radps[1];

        // Product: '<S60>/PProd Out' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Switch_h0 = rtb_IProdOut_c * telem.param[3];

        // DiscreteIntegrator: '<S55>/Integrator'
        if (static_cast<boolean_T>(static_cast<int32_T>(((static_cast<boolean_T>
                (static_cast<int32_T>((rtDWork.Compare_o ? (static_cast<int32_T>
                    (1)) : (static_cast<int32_T>(0))) &
                  ((rtDWork.Integrator_PrevResetState_o <= 0) ?
                   (static_cast<int32_T>(1)) : (static_cast<int32_T>(0)))))) ? (
                static_cast<int32_T>(1)) : (static_cast<int32_T>(0))) | ((
                static_cast<boolean_T>(static_cast<int32_T>
                 (((static_cast<boolean_T>(static_cast<int32_T>
                     ((rtDWork.Compare_o ? (static_cast<int32_T>(1)) : (
                        static_cast<int32_T>(0))) ^ 1))) ? (static_cast<int32_T>
                    (1)) : (static_cast<int32_T>(0))) &
                  ((rtDWork.Integrator_PrevResetState_o == 1) ?
                   (static_cast<int32_T>(1)) : (static_cast<int32_T>(0)))))) ? (
                static_cast<int32_T>(1)) : (static_cast<int32_T>(0)))))) {
            rtDWork.Integrator_DSTATE_l = rtCP_pooled7;
        }

        rtb_DataTypeConversion3 = rtDWork.Integrator_DSTATE_l;

        // End of DiscreteIntegrator: '<S55>/Integrator'

        // Sum: '<S65>/Sum'
        rtb_Sum_h = rtb_Switch_h0 + rtb_DataTypeConversion3;

        // RelationalOperator: '<S63>/LowerRelop1' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Compare_k = (rtb_Sum_h > telem.param[14]);

        // Gain: '<S12>/Gain' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Gain_c = rtCP_pooled5 * telem.param[14];

        // Switch: '<S63>/Switch2' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        if (rtb_Compare_k) {
            rtb_Switch_h0 = telem.param[14];
        } else {
            // RelationalOperator: '<S63>/UpperRelop'
            rtb_Compare_ht = (rtb_Sum_h < rtb_Gain_c);

            // Switch: '<S63>/Switch'
            if (rtb_Compare_ht) {
                rtb_Switch_h0 = rtb_Gain_c;
            } else {
                rtb_Switch_h0 = rtb_Sum_h;
            }

            // End of Switch: '<S63>/Switch'
        }

        // End of Switch: '<S63>/Switch2'

        // UnitDelay: '<S18>/Unit Delay'
        rtb_Product1_o = rtDWork.UnitDelay_DSTATE_i;

        // MATLAB Function: '<S18>/MATLAB Function' incorporates:
        //   Constant: '<S18>/Constant'
        //   Inport: '<Root>/Navigation Filter Data'
        //   Inport: '<Root>/Telemetry Data'
        MATLABFunction(rtb_Product1_o, bfs_ins.gyro_radps[1], telem.param[17],
                       rtCP_pooled18, &rtb_DataTypeConversion3);

        // SampleTimeMath: '<S16>/TSamp'
        //
        //  About '<S16>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        rtb_Product1_o = rtb_DataTypeConversion3 * rtCP_pooled18;

        // UnitDelay: '<S16>/UD'
        //
        //  Block description for '<S16>/UD':
        //
        //   Store in Global RAM
        rtb_Gain1_nt = rtDWork.UD_DSTATE_g;

        // Sum: '<S16>/Diff'
        //
        //  Block description for '<S16>/Diff':
        //
        //   Add in CPU
        rtb_Gain1_nt = rtb_Product1_o - rtb_Gain1_nt;

        // Product: '<S12>/Product' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Gain1_nt *= telem.param[5];

        // Sum: '<S12>/Sum'
        rtb_Sum_o = rtb_Switch_h0 - rtb_Gain1_nt;

        // Switch generated from: '<Root>/Switch'
        rtb_Gain1_nt = rtDWork.yaw_rate_cmd_radps;

        // RelationalOperator: '<S132>/Compare' incorporates:
        //   Constant: '<S132>/Constant'
        //   Inport: '<Root>/Telemetry Data'
        rtb_Compare_ht = (telem.param[20] > rtCP_pooled11);

        // RelationalOperator: '<S131>/Compare' incorporates:
        //   Constant: '<S131>/Constant'
        rtb_Compare_k = (rtb_Gain1_nt == rtCP_pooled7);

        // Logic: '<S14>/NOT'
        rtb_Compare_k = rtb_Compare_k ^ 1;

        // Logic: '<S14>/OR'
        rtb_Compare_ht = rtb_Compare_ht | rtb_Compare_k;

        // Outputs for Enabled SubSystem: '<S14>/set_tar_heading when heading_rate_cmd == 0' incorporates:
        //   EnablePort: '<S137>/Enable'
        if (rtb_Compare_k) {
            // SignalConversion generated from: '<S137>/heading_rad' incorporates:
            //   Inport: '<Root>/Navigation Filter Data'
            rtDWork.heading_rad = bfs_ins.heading_rad;
        }

        // End of Outputs for SubSystem: '<S14>/set_tar_heading when heading_rate_cmd == 0'

        // Switch: '<S14>/Switch'
        if (rtb_Compare_ht) {
        } else {
            // Gain: '<S133>/Gain1' incorporates:
            //   Inport: '<Root>/Telemetry Data'
            rtb_Gain1_nt = rtCP_pooled6 * telem.param[12];

            // Sum: '<S136>/Subtract' incorporates:
            //   Inport: '<Root>/Navigation Filter Data'
            rtb_Subtract = rtDWork.heading_rad - bfs_ins.heading_rad;

            // Abs: '<S136>/Abs'
            rtb_Product_k = std::abs(rtb_Subtract);

            // RelationalOperator: '<S140>/Compare' incorporates:
            //   Constant: '<S140>/Constant'
            rtb_Compare_ht = (rtb_Product_k > rtCP_Constant_Value_kh);

            // Switch: '<S136>/Switch'
            if (rtb_Compare_ht) {
                // Signum: '<S136>/Sign'
                if (rtIsNaNF(rtb_Subtract)) {
                    rtb_Product_k = rtb_Subtract;
                } else if (rtb_Subtract < 0.0F) {
                    rtb_Product_k = -1.0F;
                } else {
                    rtb_Product_k = static_cast<real32_T>((rtb_Subtract > 0.0F) ?
                        (static_cast<int32_T>(1)) : (static_cast<int32_T>(0)));
                }

                // End of Signum: '<S136>/Sign'

                // Product: '<S136>/Product' incorporates:
                //   Constant: '<S136>/Constant'
                rtb_Product_k *= rtCP_Constant_Value_g;

                // Sum: '<S136>/Subtract1'
                rtb_Product_k = rtb_Subtract - rtb_Product_k;
            } else {
                rtb_Product_k = rtb_Subtract;
            }

            // End of Switch: '<S136>/Switch'

            // Product: '<S14>/Product1' incorporates:
            //   Inport: '<Root>/Telemetry Data'
            rtb_Subtract = rtb_Product_k * telem.param[19];

            // RelationalOperator: '<S135>/LowerRelop1'
            rtb_Compare_ht = (rtb_Subtract > rtb_Gain1_nt);

            // Switch: '<S135>/Switch2'
            if (rtb_Compare_ht) {
            } else {
                // Gain: '<S14>/Gain1'
                rtb_Product_k = rtCP_pooled5 * rtb_Gain1_nt;

                // RelationalOperator: '<S135>/UpperRelop'
                rtb_Compare_ht = (rtb_Subtract < rtb_Product_k);

                // Switch: '<S135>/Switch'
                if (rtb_Compare_ht) {
                    rtb_Gain1_nt = rtb_Product_k;
                } else {
                    rtb_Gain1_nt = rtb_Subtract;
                }

                // End of Switch: '<S135>/Switch'
            }

            // End of Switch: '<S135>/Switch2'
        }

        // End of Switch: '<S14>/Switch'

        // Sum: '<S14>/stab_yaw_rate_error_calc' incorporates:
        //   Inport: '<Root>/Navigation Filter Data'
        rtb_Switch_h0 = rtb_Gain1_nt - bfs_ins.gyro_radps[2];

        // Product: '<S180>/PProd Out' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Switch_c = rtb_Switch_h0 * telem.param[6];

        // DiscreteIntegrator: '<S175>/Integrator'
        if (static_cast<boolean_T>(static_cast<int32_T>(((static_cast<boolean_T>
                (static_cast<int32_T>((rtDWork.Compare_o ? (static_cast<int32_T>
                    (1)) : (static_cast<int32_T>(0))) &
                  ((rtDWork.Integrator_PrevResetState_m <= 0) ?
                   (static_cast<int32_T>(1)) : (static_cast<int32_T>(0)))))) ? (
                static_cast<int32_T>(1)) : (static_cast<int32_T>(0))) | ((
                static_cast<boolean_T>(static_cast<int32_T>
                 (((static_cast<boolean_T>(static_cast<int32_T>
                     ((rtDWork.Compare_o ? (static_cast<int32_T>(1)) : (
                        static_cast<int32_T>(0))) ^ 1))) ? (static_cast<int32_T>
                    (1)) : (static_cast<int32_T>(0))) &
                  ((rtDWork.Integrator_PrevResetState_m == 1) ?
                   (static_cast<int32_T>(1)) : (static_cast<int32_T>(0)))))) ? (
                static_cast<int32_T>(1)) : (static_cast<int32_T>(0)))))) {
            rtDWork.Integrator_DSTATE_b = rtCP_pooled7;
        }

        rtb_Subtract = rtDWork.Integrator_DSTATE_b;

        // End of DiscreteIntegrator: '<S175>/Integrator'

        // Sum: '<S185>/Sum'
        rtb_Sum_d = rtb_Switch_c + rtb_Subtract;

        // RelationalOperator: '<S183>/LowerRelop1' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Compare_ht = (rtb_Sum_d > telem.param[16]);

        // Gain: '<S14>/Gain' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Gain_d = rtCP_pooled5 * telem.param[16];

        // Switch: '<S183>/Switch2' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        if (rtb_Compare_ht) {
            rtb_Switch_c = telem.param[16];
        } else {
            // RelationalOperator: '<S183>/UpperRelop'
            rtb_Compare_ht = (rtb_Sum_d < rtb_Gain_d);

            // Switch: '<S183>/Switch'
            if (rtb_Compare_ht) {
                rtb_Switch_c = rtb_Gain_d;
            } else {
                rtb_Switch_c = rtb_Sum_d;
            }

            // End of Switch: '<S183>/Switch'
        }

        // End of Switch: '<S183>/Switch2'

        // UnitDelay: '<S139>/Unit Delay'
        rtb_Product_k = rtDWork.UnitDelay_DSTATE_d;

        // MATLAB Function: '<S139>/MATLAB Function' incorporates:
        //   Constant: '<S139>/Constant'
        //   Inport: '<Root>/Navigation Filter Data'
        //   Inport: '<Root>/Telemetry Data'
        MATLABFunction(rtb_Product_k, bfs_ins.gyro_radps[2], telem.param[18],
                       rtCP_pooled18, &rtb_Subtract);

        // SampleTimeMath: '<S134>/TSamp'
        //
        //  About '<S134>/TSamp':
        //   y = u * K where K = 1 / ( w * Ts )
        rtb_Product_k = rtb_Subtract * rtCP_pooled18;

        // UnitDelay: '<S134>/UD'
        //
        //  Block description for '<S134>/UD':
        //
        //   Store in Global RAM
        rtb_Sum_k = rtDWork.UD_DSTATE_f;

        // Sum: '<S134>/Diff'
        //
        //  Block description for '<S134>/Diff':
        //
        //   Add in CPU
        rtb_Sum_k = rtb_Product_k - rtb_Sum_k;

        // Product: '<S14>/Product' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Sum_k *= telem.param[8];

        // Sum: '<S14>/Sum'
        rtb_Sum_k = rtb_Switch_c - rtb_Sum_k;

        // DataTypeConversion: '<Root>/Cast To Single' incorporates:
        //   Inport: '<Root>/Navigation Filter Data'
        rtb_CastToSingle_f[0] = rtb_DataTypeConversion4;
        rtb_CastToSingle_f[1] = rtb_Sum_j;
        rtb_CastToSingle_f[2] = rtb_roll_angle_cmd_rad;
        rtb_CastToSingle_f[3] = bfs_ins.roll_rad;
        rtb_CastToSingle_f[4] = rtb_Switch_ce;
        rtb_CastToSingle_f[5] = rtb_Sum_o;
        rtb_CastToSingle_f[6] = rtb_pitch_angle_cmd_rad;
        rtb_CastToSingle_f[7] = bfs_ins.pitch_rad;
        rtb_CastToSingle_f[8] = rtb_Switch_p;
        rtb_CastToSingle_f[9] = rtb_Sum_k;
        rtb_CastToSingle_f[10] = rtb_Gain1_nt;
        rtb_CastToSingle_f[11] = bfs_ins.gyro_radps[2];
        rtb_CastToSingle_f[12] = 0.0F;
        rtb_CastToSingle_f[13] = 0.0F;
        rtb_CastToSingle_f[14] = 0.0F;
        rtb_CastToSingle_f[15] = 0.0F;
        rtb_CastToSingle_f[16] = 0.0F;
        rtb_CastToSingle_f[17] = 0.0F;
        rtb_CastToSingle_f[18] = 0.0F;
        rtb_CastToSingle_f[19] = 0.0F;
        rtb_CastToSingle_f[20] = 0.0F;
        rtb_CastToSingle_f[21] = 0.0F;
        rtb_CastToSingle_f[22] = 0.0F;
        rtb_CastToSingle_f[23] = 0.0F;

        // DiscreteIntegrator: '<S11>/motor_arm_ramp_integrator'
        rtb_roll_angle_cmd_rad = rtDWork.motor_arm_ramp_integrator_DSTAT;

        // DataTypeConversion: '<S7>/Data Type Conversion8' incorporates:
        //   Inport: '<Root>/Sensor Data'
        rtb_pitch_angle_cmd_rad = static_cast<real32_T>(sensor.inceptor.ch[5]);

        // MATLAB Function: '<S207>/remap' incorporates:
        //   Constant: '<S207>/Constant'
        //   Constant: '<S207>/Constant1'
        //   Constant: '<S207>/Constant2'
        //   Constant: '<S207>/Constant3'
        remap1(rtb_pitch_angle_cmd_rad, rtCP_pooled15, rtCP_pooled16,
               rtCP_pooled7, rtCP_pooled10, &rtb_Switch_ce);

        // DataTypeConversion: '<S7>/Data Type Conversion6' incorporates:
        //   Inport: '<Root>/Sensor Data'
        rtb_Switch_p = static_cast<real32_T>(sensor.inceptor.ch[7]);

        // MATLAB Function: '<S204>/remap' incorporates:
        //   Constant: '<S204>/Constant'
        //   Constant: '<S204>/Constant1'
        //   Constant: '<S204>/Constant2'
        //   Constant: '<S204>/Constant3'
        remap1(rtb_Switch_p, rtCP_pooled15, rtCP_pooled16, rtCP_pooled7,
               rtCP_pooled10, &rtb_pitch_angle_cmd_rad);

        // Switch: '<S10>/emergency_switch' incorporates:
        //   Constant: '<S10>/Constant'
        //   Switch: '<S2>/Switch'
        if (rtb_Compare) {
            for (i = 0; i < 8; i++) {
                rtb_Command[i] = rtConstP.pooled14[i];
            }
        } else {
            if (rtDWork.Compare_o) {
                // Switch: '<S2>/Switch' incorporates:
                //   Constant: '<S2>/Constant2'
                for (i = 0; i < 8; i++) {
                    rtb_Command[i] = rtConstP.pooled14[i];
                }
            } else {
                // Product: '<S2>/Multiply' incorporates:
                //   Math: '<S2>/Transpose'
                //   Switch: '<S2>/Switch'
                tmp = &rtConstB.Transpose[0];
                i = 0;
                for (int32_T i_0 = 0; i_0 < 8; i_0++) {
                    rtb_Command[i_0] = 0.0F;
                    rtb_Switch_p = rtb_Command[i_0];
                    rtb_Switch_p += rtb_DataTypeConversion4 * tmp[i];
                    rtb_Command[i_0] = rtb_Switch_p;
                    rtb_Switch_p = rtb_Command[i_0];
                    rtb_Switch_p += rtb_Sum_j * tmp[i + 1];
                    rtb_Command[i_0] = rtb_Switch_p;
                    rtb_Switch_p = rtb_Command[i_0];
                    rtb_Switch_p += rtb_Sum_o * tmp[i + 2];
                    rtb_Command[i_0] = rtb_Switch_p;
                    rtb_Switch_p = rtb_Command[i_0];
                    rtb_Switch_p += rtb_Sum_k * tmp[i + 3];
                    rtb_Command[i_0] = rtb_Switch_p;
                    i += 4;
                }

                // End of Product: '<S2>/Multiply'
            }

            for (i = 0; i < 8; i++) {
                rtb_Switch_p = rtb_Command[i];

                // RelationalOperator: '<S194>/UpperRelop' incorporates:
                //   Constant: '<S2>/Constant1'
                //   Switch: '<S2>/Switch'
                rtb_Compare_k = (rtb_Switch_p < rtCP_pooled9);

                // Switch: '<S194>/Switch' incorporates:
                //   Constant: '<S2>/Constant1'
                if (rtb_Compare_k) {
                    rtb_Sum_k = rtCP_pooled9;
                } else {
                    rtb_Sum_k = rtb_Switch_p;
                }

                // RelationalOperator: '<S194>/LowerRelop1' incorporates:
                //   Constant: '<S2>/Constant'
                rtb_Compare_k = (rtb_Switch_p > rtCP_Constant_Value_l);

                // Switch: '<S194>/Switch2' incorporates:
                //   Constant: '<S2>/Constant'
                if (rtb_Compare_k) {
                    rtb_Sum_k = rtCP_Constant_Value_l;
                }

                // End of Switch: '<S194>/Switch2'

                // Product: '<Root>/Product'
                rtb_Sum_k *= rtb_roll_angle_cmd_rad;
                rtb_Switch2_l[i] = rtb_Sum_k;
            }

            // Sum: '<S5>/Sum' incorporates:
            //   RelationalOperator: '<S194>/UpperRelop'
            //   Switch: '<S194>/Switch'
            //   Switch: '<S194>/Switch2'
            //   Switch: '<S2>/Switch'
            rtb_Switch_ce += rtb_Switch2_l[6];

            // Sum: '<S5>/Sum1'
            rtb_Sum_j = rtb_Switch2_l[7] + rtb_pitch_angle_cmd_rad;
            for (i = 0; i < 6; i++) {
                rtb_Command[i] = rtb_Switch2_l[i];
            }

            rtb_Command[6] = rtb_Switch_ce;
            rtb_Command[7] = rtb_Sum_j;
        }

        // End of Switch: '<S10>/emergency_switch'

        // RelationalOperator: '<S252>/Compare' incorporates:
        //   Constant: '<S252>/Constant'
        rtb_Compare_ht = (rtb_roll_angle_cmd_rad <= rtCP_pooled7);

        // Logic: '<S6>/NOT'
        rtb_Compare_ht = rtb_Compare_ht ^ 1;

        // MATLAB Function: '<S200>/remap' incorporates:
        //   Constant: '<S200>/Constant'
        //   Constant: '<S200>/Constant1'
        //   Constant: '<S200>/Constant2'
        //   Constant: '<S200>/Constant3'

        // MATLAB Function 'cmd to raw pwm/motor_PWM_denormalize/remap': '<S202>:1'
        // '<S202>:1:2' raw_out = (norm_in - in_min) * (out_max - out_min)/(in_max-in_min) + out_min;
        rtb_roll_angle_cmd_rad = rtCP_Constant2_Value_a - rtCP_Constant1_Value_g;
        rtb_Switch_ce = rtCP_pooled10 - rtCP_pooled7;

        // MATLAB Function 'cmd to raw pwm/engine_PWM_denormalize/remap': '<S201>:1'
        // '<S201>:1:2' raw_out = (norm_in - in_min) * (out_max - out_min)/(in_max-in_min) + out_min;
        for (i = 0; i < 6; i++) {
            rtb_Sum_k = (((rtb_Command[i] - rtCP_pooled7) *
                          rtb_roll_angle_cmd_rad) / rtb_Switch_ce) +
                rtCP_Constant1_Value_g;

            // Switch: '<S6>/Switch' incorporates:
            //   Constant: '<S6>/Constant'
            if (rtb_Compare_ht) {
            } else {
                rtb_Sum_k = rtConstP.Constant_Value_f[i];
            }

            // End of Switch: '<S6>/Switch'

            // DataTypeConversion: '<S6>/Data Type Conversion'
            rtb_cnt[i] = static_cast<int16_T>(std::floor(rtb_Sum_k));
        }

        // End of MATLAB Function: '<S200>/remap'

        // MATLAB Function: '<S199>/remap' incorporates:
        //   Constant: '<S199>/Constant'
        //   Constant: '<S199>/Constant1'
        //   Constant: '<S199>/Constant2'
        //   Constant: '<S199>/Constant3'
        rtb_roll_angle_cmd_rad = (((rtb_Command[7] - rtCP_pooled7) *
            (rtCP_Constant2_Value - rtCP_Constant1_Value)) / (rtCP_pooled10 -
            rtCP_pooled7)) + rtCP_Constant1_Value;

        // DataTypeConversion: '<S6>/Data Type Conversion'
        rtb_cnt[6] = static_cast<int16_T>(std::floor(rtb_Command[6]));
        rtb_cnt[7] = static_cast<int16_T>(std::floor(rtb_roll_angle_cmd_rad));

        // Gain: '<Root>/Gain'
        rtb_Sum_k = rtCP_Gain_Gain_c * rtb_DataTypeConversion4;

        // BusCreator: '<S4>/Bus Creator' incorporates:
        //   Constant: '<Root>/Constant'
        rtb_Compare_ht = rtCP_pooled19;
        rtb_roll_angle_cmd_rad = 0.0F;

        // Outport: '<Root>/VMS Data' incorporates:
        //   BusCreator: '<S4>/Bus Creator'
        vms->advance_waypoint = rtb_Compare_ht;
        vms->motors_enabled = rtb_nav_initANDmotor_enable;
        vms->mode = rtb_Cast;
        for (i = 0; i < 16; i++) {
            vms->sbus[i] = 0;
        }

        for (i = 0; i < 8; i++) {
            vms->pwm[i] = rtb_cnt[i];
        }

        vms->throttle_cmd_prcnt = rtb_Sum_k;
        vms->flight_time_remaining_s = 0.0F;
        vms->power_remaining_prcnt = 0.0F;
        (void)std::memcpy(&vms->aux[0], &rtb_CastToSingle_f[0], 24U * sizeof
                          (real32_T));

        // End of Outport: '<Root>/VMS Data'

        // RelationalOperator: '<S168>/u_GTE_up' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Compare_ht = (rtb_Sum_d >= telem.param[16]);

        // Switch: '<S168>/Switch' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        if (rtb_Compare_ht) {
            rtb_Sum_k = telem.param[16];
        } else {
            // RelationalOperator: '<S168>/u_GT_lo'
            rtb_Compare_ht = (rtb_Sum_d > rtb_Gain_d);

            // Switch: '<S168>/Switch1'
            if (rtb_Compare_ht) {
                rtb_Sum_k = rtb_Sum_d;
            } else {
                rtb_Sum_k = rtb_Gain_d;
            }

            // End of Switch: '<S168>/Switch1'
        }

        // End of Switch: '<S168>/Switch'

        // Sum: '<S168>/Diff'
        rtb_Sum_k = rtb_Sum_d - rtb_Sum_k;

        // RelationalOperator: '<S165>/Relational Operator' incorporates:
        //   Constant: '<S165>/Constant5'
        rtb_Compare_ht = (rtCP_pooled7 != rtb_Sum_k);

        // RelationalOperator: '<S165>/fix for DT propagation issue' incorporates:
        //   Constant: '<S165>/Constant5'
        rtb_Compare_k = (rtb_Sum_k > rtCP_pooled7);

        // Switch: '<S165>/Switch1' incorporates:
        //   Constant: '<S165>/Constant'
        //   Constant: '<S165>/Constant2'
        if (rtb_Compare_k) {
            rtb_Cast = rtCP_pooled20;
        } else {
            rtb_Cast = rtCP_pooled21;
        }

        // End of Switch: '<S165>/Switch1'

        // Product: '<S172>/IProd Out' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Switch_h0 *= telem.param[7];

        // RelationalOperator: '<S165>/fix for DT propagation issue1' incorporates:
        //   Constant: '<S165>/Constant5'
        rtb_Compare_k = (rtb_Switch_h0 > rtCP_pooled7);

        // Switch: '<S165>/Switch2' incorporates:
        //   Constant: '<S165>/Constant3'
        //   Constant: '<S165>/Constant4'
        if (rtb_Compare_k) {
            rtb_Switch1_a = rtCP_pooled20;
        } else {
            rtb_Switch1_a = rtCP_pooled21;
        }

        // End of Switch: '<S165>/Switch2'

        // RelationalOperator: '<S165>/Equal1'
        rtb_Compare_k = (rtb_Cast == rtb_Switch1_a);

        // Logic: '<S165>/AND3'
        rtb_Compare_ht = rtb_Compare_ht & rtb_Compare_k;

        // Switch: '<S165>/Switch' incorporates:
        //   Constant: '<S165>/Constant1'
        if (rtb_Compare_ht) {
            rtb_DataTypeConversion4 = rtCP_pooled7;
        } else {
            rtb_DataTypeConversion4 = rtb_Switch_h0;
        }

        // End of Switch: '<S165>/Switch'

        // RelationalOperator: '<S48>/u_GTE_up' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Compare_ht = (rtb_Sum_h >= telem.param[14]);

        // Switch: '<S48>/Switch' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        if (rtb_Compare_ht) {
            rtb_Sum_k = telem.param[14];
        } else {
            // RelationalOperator: '<S48>/u_GT_lo'
            rtb_Compare_ht = (rtb_Sum_h > rtb_Gain_c);

            // Switch: '<S48>/Switch1'
            if (rtb_Compare_ht) {
                rtb_Sum_k = rtb_Sum_h;
            } else {
                rtb_Sum_k = rtb_Gain_c;
            }

            // End of Switch: '<S48>/Switch1'
        }

        // End of Switch: '<S48>/Switch'

        // Sum: '<S48>/Diff'
        rtb_Sum_k = rtb_Sum_h - rtb_Sum_k;

        // RelationalOperator: '<S45>/Relational Operator' incorporates:
        //   Constant: '<S45>/Constant5'
        rtb_Compare_ht = (rtCP_pooled7 != rtb_Sum_k);

        // RelationalOperator: '<S45>/fix for DT propagation issue' incorporates:
        //   Constant: '<S45>/Constant5'
        rtb_Compare_k = (rtb_Sum_k > rtCP_pooled7);

        // Switch: '<S45>/Switch1' incorporates:
        //   Constant: '<S45>/Constant'
        //   Constant: '<S45>/Constant2'
        if (rtb_Compare_k) {
            rtb_Switch1_a = rtCP_pooled20;
        } else {
            rtb_Switch1_a = rtCP_pooled21;
        }

        // End of Switch: '<S45>/Switch1'

        // Product: '<S52>/IProd Out' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_IProdOut_c *= telem.param[4];

        // RelationalOperator: '<S45>/fix for DT propagation issue1' incorporates:
        //   Constant: '<S45>/Constant5'
        rtb_Compare_k = (rtb_IProdOut_c > rtCP_pooled7);

        // Switch: '<S45>/Switch2' incorporates:
        //   Constant: '<S45>/Constant3'
        //   Constant: '<S45>/Constant4'
        if (rtb_Compare_k) {
            rtb_Cast = rtCP_pooled20;
        } else {
            rtb_Cast = rtCP_pooled21;
        }

        // End of Switch: '<S45>/Switch2'

        // RelationalOperator: '<S45>/Equal1'
        rtb_Compare_k = (rtb_Switch1_a == rtb_Cast);

        // Logic: '<S45>/AND3'
        rtb_Compare_ht = rtb_Compare_ht & rtb_Compare_k;

        // Switch: '<S45>/Switch' incorporates:
        //   Constant: '<S45>/Constant1'
        if (rtb_Compare_ht) {
            rtb_IProdOut_c = rtCP_pooled7;
        }

        // End of Switch: '<S45>/Switch'

        // RelationalOperator: '<S106>/u_GTE_up' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtb_Compare_ht = (in_avg >= telem.param[15]);

        // Switch: '<S106>/Switch' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        if (rtb_Compare_ht) {
            rtb_Sum_k = telem.param[15];
        } else {
            // RelationalOperator: '<S106>/u_GT_lo'
            rtb_Compare_ht = (in_avg > in_deadband_range);

            // Switch: '<S106>/Switch1'
            if (rtb_Compare_ht) {
                rtb_Sum_k = in_avg;
            } else {
                rtb_Sum_k = in_deadband_range;
            }

            // End of Switch: '<S106>/Switch1'
        }

        // End of Switch: '<S106>/Switch'

        // Sum: '<S106>/Diff'
        rtb_Sum_k = in_avg - rtb_Sum_k;

        // RelationalOperator: '<S103>/Relational Operator' incorporates:
        //   Constant: '<S103>/Constant5'
        rtb_Compare_ht = (rtCP_pooled7 != rtb_Sum_k);

        // RelationalOperator: '<S103>/fix for DT propagation issue' incorporates:
        //   Constant: '<S103>/Constant5'
        rtb_Compare_k = (rtb_Sum_k > rtCP_pooled7);

        // Switch: '<S103>/Switch1' incorporates:
        //   Constant: '<S103>/Constant'
        //   Constant: '<S103>/Constant2'
        if (rtb_Compare_k) {
            rtb_Switch1_a = rtCP_pooled20;
        } else {
            rtb_Switch1_a = rtCP_pooled21;
        }

        // End of Switch: '<S103>/Switch1'

        // Product: '<S110>/IProd Out' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        out_avg_0 *= telem.param[1];

        // RelationalOperator: '<S103>/fix for DT propagation issue1' incorporates:
        //   Constant: '<S103>/Constant5'
        rtb_Compare_k = (out_avg_0 > rtCP_pooled7);

        // Switch: '<S103>/Switch2' incorporates:
        //   Constant: '<S103>/Constant3'
        //   Constant: '<S103>/Constant4'
        if (rtb_Compare_k) {
            rtb_Cast = rtCP_pooled20;
        } else {
            rtb_Cast = rtCP_pooled21;
        }

        // End of Switch: '<S103>/Switch2'

        // RelationalOperator: '<S103>/Equal1'
        rtb_Compare_k = (rtb_Switch1_a == rtb_Cast);

        // Logic: '<S103>/AND3'
        rtb_Compare_ht = rtb_Compare_ht & rtb_Compare_k;

        // Switch: '<S103>/Switch' incorporates:
        //   Constant: '<S103>/Constant1'
        if (rtb_Compare_ht) {
            out_avg_0 = rtCP_pooled7;
        }

        // End of Switch: '<S103>/Switch'

        // Switch: '<S11>/motor_arm_ramp'
        if (rtb_nav_initANDmotor_enable) {
            in_avg = rtConstB.ramp_time_intergratorsignal;
        } else {
            // Logic: '<S11>/NOT'
            rtb_Compare = rtb_Compare ^ 1;

            // Switch: '<S11>/fast_dis_arm_time' incorporates:
            //   Constant: '<S11>/Constant'
            if (rtb_Compare) {
                in_avg = rtConstB.Gain1;
            } else {
                in_avg = rtCP_Constant_Value_e;
            }

            // End of Switch: '<S11>/fast_dis_arm_time'
        }

        // End of Switch: '<S11>/motor_arm_ramp'

        // DataTypeConversion: '<S7>/Data Type Conversion9' incorporates:
        //   Inport: '<Root>/Sensor Data'
        in_deadband_range = static_cast<real32_T>(sensor.inceptor.ch[8]);

        // MATLAB Function: '<S209>/remap' incorporates:
        //   Constant: '<S209>/Constant'
        //   Constant: '<S209>/Constant1'
        //   Constant: '<S209>/Constant2'
        //   Constant: '<S209>/Constant3'
        remap1(in_deadband_range, rtCP_pooled15, rtCP_pooled16, rtCP_pooled7,
               rtCP_pooled10, &rtb_roll_angle_cmd_rad);

        // Update for UnitDelay: '<S226>/Unit Delay'
        rtDWork.UnitDelay_DSTATE_f = in_deadband_low;

        // Update for DiscreteIntegrator: '<S113>/Integrator'
        rtDWork.Integrator_DSTATE += rtCP_pooled12 * out_avg_0;
        rtDWork.Integrator_PrevResetState = static_cast<int8_T>
            (rtDWork.Compare_o ? 1 : 0);

        // Update for UnitDelay: '<S76>/Unit Delay'
        rtDWork.UnitDelay_DSTATE_h = out_avg;

        // Update for UnitDelay: '<S74>/UD'
        //
        //  Block description for '<S74>/UD':
        //
        //   Store in Global RAM
        rtDWork.UD_DSTATE = rtb_DataTypeConversion2;

        // Update for DiscreteIntegrator: '<S55>/Integrator'
        rtDWork.Integrator_DSTATE_l += rtCP_pooled12 * rtb_IProdOut_c;
        rtDWork.Integrator_PrevResetState_o = static_cast<int8_T>
            (rtDWork.Compare_o ? 1 : 0);

        // Update for UnitDelay: '<S18>/Unit Delay'
        rtDWork.UnitDelay_DSTATE_i = rtb_DataTypeConversion3;

        // Update for UnitDelay: '<S16>/UD'
        //
        //  Block description for '<S16>/UD':
        //
        //   Store in Global RAM
        rtDWork.UD_DSTATE_g = rtb_Product1_o;

        // Update for DiscreteIntegrator: '<S175>/Integrator'
        rtDWork.Integrator_DSTATE_b += rtCP_pooled12 * rtb_DataTypeConversion4;
        rtDWork.Integrator_PrevResetState_m = static_cast<int8_T>
            (rtDWork.Compare_o ? 1 : 0);

        // Update for UnitDelay: '<S139>/Unit Delay'
        rtDWork.UnitDelay_DSTATE_d = rtb_Subtract;

        // Update for UnitDelay: '<S134>/UD'
        //
        //  Block description for '<S134>/UD':
        //
        //   Store in Global RAM
        rtDWork.UD_DSTATE_f = rtb_Product_k;

        // Update for DiscreteIntegrator: '<S11>/motor_arm_ramp_integrator'
        rtDWork.motor_arm_ramp_integrator_DSTAT += rtCP_pooled12 * in_avg;
        if (rtDWork.motor_arm_ramp_integrator_DSTAT >= rtCP_pooled10) {
            rtDWork.motor_arm_ramp_integrator_DSTAT = rtCP_pooled10;
        } else if (rtDWork.motor_arm_ramp_integrator_DSTAT <= rtCP_pooled7) {
            rtDWork.motor_arm_ramp_integrator_DSTAT = rtCP_pooled7;
        } else {
            // no actions
        }

        // End of Update for DiscreteIntegrator: '<S11>/motor_arm_ramp_integrator'
    }

    // Model initialize function
    void Autocode::initialize()
    {
        // Registration code

        // initialize non-finites
        rt_InitInfAndNaN(sizeof(real_T));
        rtPrevZCSigState.manual_arming_Trig_ZCE = POS_ZCSIG;

        // InitializeConditions for DiscreteIntegrator: '<S113>/Integrator'
        rtDWork.Integrator_PrevResetState = 2;

        // InitializeConditions for DiscreteIntegrator: '<S55>/Integrator'
        rtDWork.Integrator_PrevResetState_o = 2;

        // InitializeConditions for DiscreteIntegrator: '<S175>/Integrator'
        rtDWork.Integrator_PrevResetState_m = 2;

        // SystemInitialize for Enabled SubSystem: '<S222>/e_stop counter'
        // InitializeConditions for DiscreteIntegrator: '<S239>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTATE_n = rtCP_pooled7;

        // End of SystemInitialize for SubSystem: '<S222>/e_stop counter'

        // SystemInitialize for Enabled SubSystem: '<S234>/e_stop counter'
        // InitializeConditions for DiscreteIntegrator: '<S236>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTATE = rtCP_pooled2;

        // End of SystemInitialize for SubSystem: '<S234>/e_stop counter'

        // SystemInitialize for Enabled SubSystem: '<S226>/Enabled Subsystem'
        // InitializeConditions for DiscreteIntegrator: '<S250>/Discrete-Time Integrator'
        rtDWork.DiscreteTimeIntegrator_DSTATE_k = rtCP_pooled7;

        // End of SystemInitialize for SubSystem: '<S226>/Enabled Subsystem'

        // SystemInitialize for Enabled SubSystem: '<S227>/disarm motor'
        // InitializeConditions for UnitDelay: '<S231>/Unit Delay'
        rtDWork.UnitDelay_DSTATE = rtCP_pooled2;

        // End of SystemInitialize for SubSystem: '<S227>/disarm motor'
    }

    // Constructor
    Autocode::Autocode():
        rtDWork(),
        rtPrevZCSigState()
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
