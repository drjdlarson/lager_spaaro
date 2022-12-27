//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: autocode.cpp
//
// Code generated for Simulink model 'malt'.
//
// Model version                  : 4.371
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Tue Dec 27 11:36:49 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: NXP->Cortex-M4
// Code generation objective: Execution efficiency
// Validation result: Not run
//

#include "autocode.h"
#include "rtwtypes.h"
#include "global_defs.h"
#include <cmath>
#include <cstring>
#include <array>
#include <cfloat>
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

// Invariant block signals (default storage)
const bfs::Autocode::ConstB rtConstB{
  { {
      0.8F,
      -0.1F,
      0.1F,
      -0.2F,
      0.8F,
      0.1F,
      -0.1F,
      -0.2F,
      0.8F,
      0.1F,
      0.1F,
      0.2F,
      0.8F,
      -0.1F,
      -0.1F,
      0.2F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F,
      0.0F
    }
  }                                    // '<S2>/Transpose'
};

extern real_T rt_remd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real32_T rt_atan2f_snf(real32_T u0, real32_T u1);

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
  real_T rtInf;
  real_T rtMinusInf;
  real_T rtNaN;
  real32_T rtInfF;
  real32_T rtMinusInfF;
  real32_T rtNaNF;
}
  extern "C"
{
  //
  // Initialize rtNaN needed by the generated code.
  // NaN is initialized as non-signaling. Assumes IEEE.
  //
  static real_T rtGetNaN(void)
  {
    size_t bitsPerReal{ sizeof(real_T) * (NumBitsPerChar) };

    real_T nan{ 0.0 };

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
    IEEESingle nanF{ { 0.0F } };

    nanF.wordL.wordLuint = 0xFFC00000U;
    return nanF.wordL.wordLreal;
  }
}

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
    boolean_T result{ (boolean_T) 0 };

    size_t bitsPerReal{ sizeof(real_T) * (NumBitsPerChar) };

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
                           ( (tmpVal.bitVal.words.wordH & 0x000FFFFF) != 0 ||
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
    size_t bitsPerReal{ sizeof(real_T) * (NumBitsPerChar) };

    real_T inf{ 0.0 };

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
    size_t bitsPerReal{ sizeof(real_T) * (NumBitsPerChar) };

    real_T minf{ 0.0 };

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

namespace bfs
{
  //
  // Output and update for atomic system:
  //    '<S22>/MATLAB Function'
  //    '<S23>/MATLAB Function'
  //    '<S79>/MATLAB Function'
  //    '<S80>/MATLAB Function'
  //    '<S140>/MATLAB Function'
  //    '<S201>/MATLAB Function'
  //    '<S257>/MATLAB Function'
  //
  void Autocode::MATLABFunction(real32_T rtu_prev_val, real32_T rtu_raw_val,
    real32_T rtu_freq_cut, real32_T rtu_samp_freq, real32_T *rty_filtered_val)
  {
    real32_T a;
    real32_T fc;
    fc = rtu_freq_cut / rtu_samp_freq;
    a = 2.0F - std::cos(6.28318548F * fc);
    fc = (2.0F - std::cos(6.28318548F * fc)) - std::sqrt(a * a - 1.0F);
    *rty_filtered_val = (1.0F - fc) * rtu_raw_val + fc * rtu_prev_val;
  }
}

namespace bfs
{
  //
  // Output and update for atomic system:
  //    '<S202>/MATLAB Function'
  //    '<S258>/MATLAB Function'
  //
  void Autocode::MATLABFunction_i(real32_T rtu_prev_val, real_T rtu_raw_val,
    real32_T rtu_freq_cut, real32_T rtu_samp_freq, real32_T *rty_filtered_val)
  {
    real32_T a;
    real32_T fc;
    fc = rtu_freq_cut / rtu_samp_freq;
    a = 2.0F - std::cos(6.28318548F * fc);
    fc = (2.0F - std::cos(6.28318548F * fc)) - std::sqrt(a * a - 1.0F);
    *rty_filtered_val = (1.0F - fc) * static_cast<real32_T>(rtu_raw_val) + fc *
      rtu_prev_val;
  }
}

namespace bfs
{
  //
  // Output and update for atomic system:
  //    '<S372>/remap1'
  //    '<S374>/remap1'
  //    '<S376>/remap1'
  //    '<S498>/remap'
  //    '<S499>/remap'
  //    '<S502>/remap'
  //
  void Autocode::remap1(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                        rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max,
                        real32_T *rty_norm_out)
  {
    *rty_norm_out = (rtu_raw_in - rtu_in_min) * (rtu_out_max - rtu_out_min) /
      (rtu_in_max - rtu_in_min) + rtu_out_min;
  }
}

namespace bfs
{
  //
  // Output and update for atomic system:
  //    '<S500>/remap_with_deadband'
  //    '<S501>/remap_with_deadband'
  //    '<S503>/remap_with_deadband'
  //
  void Autocode::remap_with_deadband(real32_T rtu_raw_in, real32_T rtu_in_min,
    real32_T rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max, real_T
    rtu_deadband, real32_T *rty_norm_out)
  {
    real32_T in_avg;
    real32_T in_deadband_low;
    real32_T in_deadband_range;
    real32_T out_avg;
    in_avg = (rtu_in_min + rtu_in_max) / 2.0F;
    out_avg = (rtu_out_min + rtu_out_max) / 2.0F;
    in_deadband_range = (rtu_in_max - rtu_in_min) * static_cast<real32_T>
      (rtu_deadband) / 2.0F;
    in_deadband_low = in_avg - in_deadband_range;
    in_avg += in_deadband_range;
    if (rtu_raw_in < in_deadband_low) {
      *rty_norm_out = (rtu_raw_in - in_deadband_low) * (rtu_out_max - out_avg) /
        (in_deadband_low - rtu_in_min) + out_avg;
    } else if ((rtu_raw_in > in_deadband_low) && (rtu_raw_in < in_avg)) {
      *rty_norm_out = out_avg;
    } else {
      *rty_norm_out = (rtu_raw_in - in_avg) * (rtu_out_max - out_avg) /
        (rtu_in_max - in_avg) + out_avg;
    }
  }
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (std::isnan(u0) || std::isnan(u1) || std::isinf(u0)) {
    y = (rtNaN);
  } else if (std::isinf(u1)) {
    y = u0;
  } else if ((u1 != 0.0) && (u1 != std::trunc(u1))) {
    real_T q;
    q = std::abs(u0 / u1);
    if (!(std::abs(q - std::floor(q + 0.5)) > DBL_EPSILON * q)) {
      y = 0.0 * u0;
    } else {
      y = std::fmod(u0, u1);
    }
  } else {
    y = std::fmod(u0, u1);
  }

  return y;
}

namespace bfs
{
  // Function for MATLAB Function: '<S380>/determine_current_tar_pos'
  void Autocode::cosd_i(real_T *x)
  {
    if (std::isinf(*x) || std::isnan(*x)) {
      *x = (rtNaN);
    } else {
      real_T absx;
      real_T b_x;
      int8_T n;
      b_x = rt_remd_snf(*x, 360.0);
      absx = std::abs(b_x);
      if (absx > 180.0) {
        if (b_x > 0.0) {
          b_x -= 360.0;
        } else {
          b_x += 360.0;
        }

        absx = std::abs(b_x);
      }

      if (absx <= 45.0) {
        b_x *= 0.017453292519943295;
        n = 0;
      } else if (absx <= 135.0) {
        if (b_x > 0.0) {
          b_x = (b_x - 90.0) * 0.017453292519943295;
          n = 1;
        } else {
          b_x = (b_x + 90.0) * 0.017453292519943295;
          n = -1;
        }
      } else if (b_x > 0.0) {
        b_x = (b_x - 180.0) * 0.017453292519943295;
        n = 2;
      } else {
        b_x = (b_x + 180.0) * 0.017453292519943295;
        n = -2;
      }

      switch (n) {
       case 0:
        *x = std::cos(b_x);
        break;

       case 1:
        *x = -std::sin(b_x);
        break;

       case -1:
        *x = std::sin(b_x);
        break;

       default:
        *x = -std::cos(b_x);
        break;
      }
    }
  }

  // Function for MATLAB Function: '<S380>/determine_current_tar_pos'
  void Autocode::sind_b(real_T *x)
  {
    if (std::isinf(*x) || std::isnan(*x)) {
      *x = (rtNaN);
    } else {
      real_T absx;
      real_T b_x;
      int8_T n;
      b_x = rt_remd_snf(*x, 360.0);
      absx = std::abs(b_x);
      if (absx > 180.0) {
        if (b_x > 0.0) {
          b_x -= 360.0;
        } else {
          b_x += 360.0;
        }

        absx = std::abs(b_x);
      }

      if (absx <= 45.0) {
        b_x *= 0.017453292519943295;
        n = 0;
      } else if (absx <= 135.0) {
        if (b_x > 0.0) {
          b_x = (b_x - 90.0) * 0.017453292519943295;
          n = 1;
        } else {
          b_x = (b_x + 90.0) * 0.017453292519943295;
          n = -1;
        }
      } else if (b_x > 0.0) {
        b_x = (b_x - 180.0) * 0.017453292519943295;
        n = 2;
      } else {
        b_x = (b_x + 180.0) * 0.017453292519943295;
        n = -2;
      }

      switch (n) {
       case 0:
        *x = std::sin(b_x);
        break;

       case 1:
        *x = std::cos(b_x);
        break;

       case -1:
        *x = -std::cos(b_x);
        break;

       default:
        *x = -std::sin(b_x);
        break;
      }
    }
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (std::isnan(u0) || std::isnan(u1)) {
    y = (rtNaN);
  } else if (std::isinf(u0) && std::isinf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u1 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u0 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = std::atan2(static_cast<real_T>(tmp_0), static_cast<real_T>(tmp));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = std::atan2(u0, u1);
  }

  return y;
}

real32_T rt_atan2f_snf(real32_T u0, real32_T u1)
{
  real32_T y;
  if (std::isnan(u0) || std::isnan(u1)) {
    y = (rtNaNF);
  } else if (std::isinf(u0) && std::isinf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u1 > 0.0F) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u0 > 0.0F) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = std::atan2(static_cast<real32_T>(tmp_0), static_cast<real32_T>(tmp));
  } else if (u1 == 0.0F) {
    if (u0 > 0.0F) {
      y = RT_PIF / 2.0F;
    } else if (u0 < 0.0F) {
      y = -(RT_PIF / 2.0F);
    } else {
      y = 0.0F;
    }
  } else {
    y = std::atan2(u0, u1);
  }

  return y;
}

namespace bfs
{
  // Model step function
  void Autocode::Run(const SysData &sys, const SensorData &sensor, const InsData
                     &bfs_ins, const AuxInsData &aux_ins, const AdcData &adc,
                     const TelemData &telem, VmsData *vms)
  {
    std::array<real_T, 9> s_lat_0;
    std::array<real32_T, 3> tmp;
    real_T b;
    real_T b_c_lat;
    real_T b_re;
    real_T c_c_lat;
    real_T c_lat;
    real_T c_lon;
    real_T e;
    real_T f;
    real_T g;
    real_T lla_idx_0;
    real_T lla_idx_1;
    real_T re;
    real_T s_lat;
    real_T s_lon;
    const real32_T *tmp_0;
    real32_T b_c_lon;
    real32_T b_s_lat;
    real32_T b_s_lon;
    real32_T d_c_lat;
    real32_T vec_tar_to_cur_idx_0;
    real32_T vec_tar_to_prev_idx_0;
    boolean_T zcEvent;
    UNUSED_PARAMETER(sys);
    UNUSED_PARAMETER(adc);

    // DataTypeConversion: '<S10>/Data Type Conversion1' incorporates:
    //   Inport: '<Root>/Sensor Data'
    rtDW.DataTypeConversion1 = sensor.inceptor.ch[6];

    // MATLAB Function: '<S498>/remap' incorporates:
    //   Constant: '<S498>/Constant'
    //   Constant: '<S498>/Constant1'
    //   Constant: '<S498>/Constant2'
    //   Constant: '<S498>/Constant3'
    remap1(rtDW.DataTypeConversion1, 172.0F, 1811.0F, -1.0F, 1.0F,
           &rtDW.norm_out_dm);

    // DataTypeConversion: '<S10>/Data Type Conversion2' incorporates:
    //   Inport: '<Root>/Sensor Data'
    rtDW.DataTypeConversion2 = sensor.inceptor.ch[3];

    // MATLAB Function: '<S503>/remap_with_deadband' incorporates:
    //   Constant: '<S10>/Constant2'
    //   Constant: '<S503>/Constant'
    //   Constant: '<S503>/Constant1'
    //   Constant: '<S503>/Constant2'
    //   Constant: '<S503>/Constant3'
    remap_with_deadband(rtDW.DataTypeConversion2, 172.0F, 1811.0F, -1.0F, 1.0F,
                        0.1, &rtDW.norm_out);

    // DataTypeConversion: '<S10>/Data Type Conversion5' incorporates:
    //   Inport: '<Root>/Sensor Data'
    rtDW.DataTypeConversion5 = sensor.inceptor.ch[0];

    // MATLAB Function: '<S502>/remap' incorporates:
    //   Constant: '<S502>/Constant'
    //   Constant: '<S502>/Constant1'
    //   Constant: '<S502>/Constant2'
    //   Constant: '<S502>/Constant3'
    remap1(rtDW.DataTypeConversion5, 172.0F, 1811.0F, 0.0F, 1.0F,
           &rtDW.norm_out_p);

    // DataTypeConversion: '<S10>/Data Type Conversion7' incorporates:
    //   Inport: '<Root>/Sensor Data'
    rtDW.DataTypeConversion7 = sensor.inceptor.ch[4];

    // MATLAB Function: '<S499>/remap' incorporates:
    //   Constant: '<S499>/Constant'
    //   Constant: '<S499>/Constant1'
    //   Constant: '<S499>/Constant2'
    //   Constant: '<S499>/Constant3'
    remap1(rtDW.DataTypeConversion7, 172.0F, 1811.0F, 0.0F, 2.0F,
           &rtDW.norm_out_n);

    // DataTypeConversion: '<S10>/Data Type Conversion4' incorporates:
    //   Inport: '<Root>/Sensor Data'
    rtDW.DataTypeConversion4 = sensor.inceptor.ch[2];

    // MATLAB Function: '<S500>/remap_with_deadband' incorporates:
    //   Constant: '<S10>/Constant'
    //   Constant: '<S500>/Constant'
    //   Constant: '<S500>/Constant1'
    //   Constant: '<S500>/Constant2'
    //   Constant: '<S500>/Constant3'
    remap_with_deadband(rtDW.DataTypeConversion4, 172.0F, 1811.0F, -1.0F, 1.0F,
                        0.1, &rtDW.norm_out_o);

    // DataTypeConversion: '<S10>/Data Type Conversion3' incorporates:
    //   Inport: '<Root>/Sensor Data'
    rtDW.DataTypeConversion3 = sensor.inceptor.ch[1];

    // MATLAB Function: '<S501>/remap_with_deadband' incorporates:
    //   Constant: '<S10>/Constant1'
    //   Constant: '<S501>/Constant'
    //   Constant: '<S501>/Constant1'
    //   Constant: '<S501>/Constant2'
    //   Constant: '<S501>/Constant3'
    remap_with_deadband(rtDW.DataTypeConversion3, 172.0F, 1811.0F, -1.0F, 1.0F,
                        0.1, &rtDW.norm_out_d);

    // Abs: '<S511>/Abs1'
    rtDW.Abs1_d = std::abs(rtDW.norm_out_dm);

    // RelationalOperator: '<S519>/Compare' incorporates:
    //   Constant: '<S519>/Constant'
    rtDW.Compare = (rtDW.Abs1_d >= 0.98F);

    // Outputs for Enabled SubSystem: '<S511>/e_stop counter' incorporates:
    //   EnablePort: '<S520>/Enable'
    if (rtDW.Compare) {
      if (!rtDW.e_stopcounter_MODE) {
        // InitializeConditions for DiscreteIntegrator: '<S520>/Discrete-Time Integrator'
        rtDW.DiscreteTimeIntegrator_DSTATE_i = 0.0F;
        rtDW.e_stopcounter_MODE = true;
      }

      // DiscreteIntegrator: '<S520>/Discrete-Time Integrator'
      rtDW.DiscreteTimeIntegrator_oc = rtDW.DiscreteTimeIntegrator_DSTATE_i;

      // RelationalOperator: '<S521>/Compare' incorporates:
      //   Constant: '<S521>/Constant'
      rtDW.Compare_k = (rtDW.DiscreteTimeIntegrator_oc >= 0.5F);

      // Gain: '<S520>/Gain'
      rtDW.Gain_a = 2.0F * rtDW.norm_out_dm;

      // Update for DiscreteIntegrator: '<S520>/Discrete-Time Integrator'
      rtDW.DiscreteTimeIntegrator_DSTATE_i += 0.005F * rtDW.Gain_a;
      if (rtDW.DiscreteTimeIntegrator_DSTATE_i >= 1.0F) {
        rtDW.DiscreteTimeIntegrator_DSTATE_i = 1.0F;
      } else if (rtDW.DiscreteTimeIntegrator_DSTATE_i <= 0.0F) {
        rtDW.DiscreteTimeIntegrator_DSTATE_i = 0.0F;
      }

      // End of Update for DiscreteIntegrator: '<S520>/Discrete-Time Integrator'
    } else {
      rtDW.e_stopcounter_MODE = false;
    }

    // End of Outputs for SubSystem: '<S511>/e_stop counter'

    // Logic: '<S510>/NOT' incorporates:
    //   Inport: '<Root>/Sensor Data'
    rtDW.NOT = !sensor.inceptor.failsafe;

    // DataTypeConversion: '<S514>/Cast To Single'
    rtDW.CastToSingle = rtDW.NOT;

    // Sum: '<S514>/Add' incorporates:
    //   Constant: '<S514>/Constant'
    rtDW.Add = rtDW.CastToSingle + -0.5;

    // Gain: '<S514>/Gain'
    rtDW.Gain = 2.0 * rtDW.Add;

    // Abs: '<S515>/Abs1'
    rtDW.Abs1 = std::abs(rtDW.Gain);

    // RelationalOperator: '<S516>/Compare' incorporates:
    //   Constant: '<S516>/Constant'
    rtDW.Compare_p = (rtDW.Abs1 >= 0.98);

    // Outputs for Enabled SubSystem: '<S515>/e_stop counter' incorporates:
    //   EnablePort: '<S517>/Enable'
    if (rtDW.Compare_p) {
      if (!rtDW.e_stopcounter_MODE_d) {
        // InitializeConditions for DiscreteIntegrator: '<S517>/Discrete-Time Integrator'
        rtDW.DiscreteTimeIntegrator_DSTATE = 0.0;
        rtDW.e_stopcounter_MODE_d = true;
      }

      // DiscreteIntegrator: '<S517>/Discrete-Time Integrator'
      rtDW.DiscreteTimeIntegrator = rtDW.DiscreteTimeIntegrator_DSTATE;

      // RelationalOperator: '<S518>/Compare' incorporates:
      //   Constant: '<S518>/Constant'
      rtDW.Compare_d5 = (rtDW.DiscreteTimeIntegrator >= 0.5);

      // Gain: '<S517>/Gain'
      rtDW.Gain_d = 2.0 * rtDW.Gain;

      // Update for DiscreteIntegrator: '<S517>/Discrete-Time Integrator'
      rtDW.DiscreteTimeIntegrator_DSTATE += 0.005 * rtDW.Gain_d;
      if (rtDW.DiscreteTimeIntegrator_DSTATE >= 1.0) {
        rtDW.DiscreteTimeIntegrator_DSTATE = 1.0;
      } else if (rtDW.DiscreteTimeIntegrator_DSTATE <= 0.0) {
        rtDW.DiscreteTimeIntegrator_DSTATE = 0.0;
      }

      // End of Update for DiscreteIntegrator: '<S517>/Discrete-Time Integrator'
    } else {
      rtDW.e_stopcounter_MODE_d = false;
    }

    // End of Outputs for SubSystem: '<S515>/e_stop counter'

    // Logic: '<S513>/NOT1'
    rtDW.NOT1 = !rtDW.Compare_d5;

    // Logic: '<S15>/OR1'
    rtDW.OR1 = (rtDW.Compare_k || rtDW.NOT1);

    // RelationalOperator: '<S526>/Compare' incorporates:
    //   Constant: '<S526>/Constant'
    rtDW.Compare_d = (rtDW.norm_out >= 0.5F);

    // UnitDelay: '<S512>/Unit Delay'
    rtDW.UnitDelay = rtDW.UnitDelay_DSTATE;

    // Abs: '<S512>/Abs'
    rtDW.Abs = std::abs(rtDW.norm_out);

    // RelationalOperator: '<S523>/Compare' incorporates:
    //   Constant: '<S523>/Constant'
    rtDW.Compare_g = (rtDW.Abs >= 0.95F);

    // RelationalOperator: '<S525>/Compare' incorporates:
    //   Constant: '<S525>/Constant'
    rtDW.Compare_j = (rtDW.norm_out_p <= 0.03F);

    // Logic: '<S512>/AND'
    rtDW.AND = (rtDW.Compare_j && rtDW.Compare_g);

    // Outputs for Enabled SubSystem: '<S512>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S527>/Enable'
    if (rtDW.AND) {
      if (!rtDW.EnabledSubsystem_MODE) {
        // InitializeConditions for DiscreteIntegrator: '<S527>/Discrete-Time Integrator'
        rtDW.DiscreteTimeIntegrator_DSTATE_m = 0.0F;
        rtDW.EnabledSubsystem_MODE = true;
      }

      // DataTypeConversion: '<S527>/Cast'
      rtDW.Cast = static_cast<int8_T>(rtDW.Compare_g);

      // DiscreteIntegrator: '<S527>/Discrete-Time Integrator'
      rtDW.DiscreteTimeIntegrator_o = 0.00250244141F * static_cast<real32_T>
        (rtDW.Cast) + rtDW.DiscreteTimeIntegrator_DSTATE_m;

      // Update for DiscreteIntegrator: '<S527>/Discrete-Time Integrator'
      rtDW.DiscreteTimeIntegrator_DSTATE_m = 0.00250244141F * static_cast<
        real32_T>(rtDW.Cast) + rtDW.DiscreteTimeIntegrator_o;
    } else {
      rtDW.EnabledSubsystem_MODE = false;
    }

    // End of Outputs for SubSystem: '<S512>/Enabled Subsystem'

    // RelationalOperator: '<S524>/Compare' incorporates:
    //   Constant: '<S524>/Constant'
    rtDW.Compare_l = (rtDW.DiscreteTimeIntegrator_o >= 3.0F);

    // DataTypeConversion: '<S512>/Cast To Single'
    rtDW.CastToSingle_a = rtDW.Compare_l;

    // Sum: '<S512>/Sum'
    rtDW.Sum_p = rtDW.CastToSingle_a - rtDW.UnitDelay;

    // RelationalOperator: '<S522>/Compare' incorporates:
    //   Constant: '<S522>/Constant'
    rtDW.Compare_h = (rtDW.Sum_p > 0.0F);

    // Logic: '<S512>/OR'
    rtDW.OR = (rtDW.OR1 || rtDW.Compare_h);

    // Outputs for Triggered SubSystem: '<S512>/manual_arming' incorporates:
    //   TriggerPort: '<S528>/Trigger'
    zcEvent = (rtDW.OR && (rtPrevZCX.manual_arming_Trig_ZCE != POS_ZCSIG));
    if (zcEvent) {
      // SignalConversion generated from: '<S528>/yaw_arm'
      rtDW.yaw_arm = rtDW.Compare_d;
    }

    rtPrevZCX.manual_arming_Trig_ZCE = rtDW.OR;

    // End of Outputs for SubSystem: '<S512>/manual_arming'

    // Switch: '<S512>/Switch'
    rtDW.Switch_m = ((!rtDW.OR1) && rtDW.yaw_arm);

    // Logic: '<S15>/nav_init AND motor_enable' incorporates:
    //   Inport: '<Root>/INS Data'
    rtDW.nav_initANDmotor_enable = (rtDW.Switch_m && bfs_ins.initialized);

    // DataTypeConversion: '<S15>/mode_type_conversion'
    b_s_lat = rtDW.norm_out_n;
    d_c_lat = std::abs(b_s_lat);
    if (d_c_lat < 8.388608E+6F) {
      if (d_c_lat >= 0.5F) {
        b_s_lat = std::floor(b_s_lat + 0.5F);
      } else {
        b_s_lat *= 0.0F;
      }
    }

    // DataTypeConversion: '<S15>/mode_type_conversion'
    rtDW.mode_type_conversion = static_cast<int8_T>(b_s_lat);

    // RelationalOperator: '<S14>/Compare' incorporates:
    //   Constant: '<S14>/Constant'
    rtDW.Compare_m = (rtDW.mode_type_conversion == 2);

    // Logic: '<Root>/motor_armed AND mode_2'
    rtDW.motor_armedANDmode_2 = (rtDW.nav_initANDmotor_enable && rtDW.Compare_m);

    // Outputs for Enabled SubSystem: '<Root>/Stab_input_conversion2' incorporates:
    //   EnablePort: '<S6>/Enable'
    if (rtDW.motor_armedANDmode_2) {
      real32_T absxk;
      real32_T t;
      real32_T vec_tar_to_cur_idx_1;
      real32_T vec_tar_to_prev_idx_1;

      // Product: '<S6>/Product' incorporates:
      //   Constant: '<S6>/Constant3'
      rtDW.yaw_rate_cmd_radps_l = rtDW.norm_out * 3.14159F;

      // MATLAB Function: '<S376>/remap1' incorporates:
      //   Constant: '<S376>/Constant4'
      //   Constant: '<S376>/Constant5'
      //   Constant: '<S376>/Constant6'
      //   Constant: '<S376>/Constant7'
      remap1(rtDW.norm_out_p, 0.0F, 1.0F, 0.15F, 1.0F, &rtDW.norm_out_i);

      // Outputs for Enabled SubSystem: '<Root>/WAYPOINT CONTROLLER1' incorporates:
      //   EnablePort: '<S8>/Enable'
      if (!rtDW.WAYPOINTCONTROLLER1_MODE) {
        // InitializeConditions for UnitDelay: '<S492>/Delay Input1'
        //
        //  Block description for '<S492>/Delay Input1':
        //
        //   Store in Global RAM
        rtDW.DelayInput1_DSTATE = -1;

        // InitializeConditions for UnitDelay: '<S8>/Unit Delay'
        rtDW.UnitDelay_DSTATE_o4 = false;
        rtDW.WAYPOINTCONTROLLER1_MODE = true;
      }

      // Sum: '<S8>/Sum' incorporates:
      //   Constant: '<S8>/Constant'
      //   Inport: '<Root>/Telemetry Data'
      rtDW.cur_wp = static_cast<int16_T>(telem.current_waypoint + 1);

      // UnitDelay: '<S492>/Delay Input1'
      //
      //  Block description for '<S492>/Delay Input1':
      //
      //   Store in Global RAM
      rtDW.Uk1_ei = rtDW.DelayInput1_DSTATE;

      // RelationalOperator: '<S492>/FixPt Relational Operator'
      rtDW.FixPtRelationalOperator = (rtDW.cur_wp != rtDW.Uk1_ei);

      // UnitDelay: '<S8>/Unit Delay'
      rtDW.UnitDelay_o = rtDW.UnitDelay_DSTATE_o4;

      // Logic: '<S8>/OR' incorporates:
      //   Inport: '<Root>/Telemetry Data'
      rtDW.enable = (telem.waypoints_updated || rtDW.FixPtRelationalOperator ||
                     rtDW.UnitDelay_o);

      // Outputs for Enabled SubSystem: '<S8>/determine target' incorporates:
      //   EnablePort: '<S380>/Enable'
      if (rtDW.enable) {
        // UnitDelay: '<S380>/Unit Delay'
        rtDW.UnitDelay_j[0] = rtDW.UnitDelay_DSTATE_m[0];
        rtDW.UnitDelay_j[1] = rtDW.UnitDelay_DSTATE_m[1];
        rtDW.UnitDelay_j[2] = rtDW.UnitDelay_DSTATE_m[2];

        // Sum: '<S380>/Sum' incorporates:
        //   Constant: '<S380>/Constant'
        //   Inport: '<Root>/Telemetry Data'
        rtDW.Sum_pz = static_cast<int16_T>(telem.current_waypoint + 1);

        // Selector: '<S380>/Selector1' incorporates:
        //   Inport: '<Root>/Telemetry Data'
        rtDW.Selector1 = telem.flight_plan[rtDW.Sum_pz];

        // Gain: '<S380>/Gain'
        rtDW.Gain_n = 1.0000000000287557E-7 * static_cast<real_T>
          (rtDW.Selector1.x);

        // DataTypeConversion: '<S380>/Cast To Single1'
        rtDW.CastToSingle1 = static_cast<real32_T>(rtDW.Gain_n);

        // Gain: '<S380>/Gain1'
        rtDW.Gain1 = 1.0000000000287557E-7 * static_cast<real_T>
          (rtDW.Selector1.y);

        // DataTypeConversion: '<S380>/Cast To Single2'
        rtDW.CastToSingle2 = static_cast<real32_T>(rtDW.Gain1);

        // MATLAB Function: '<S380>/determine_current_tar_pos' incorporates:
        //   Inport: '<Root>/AuxInsData'
        lla_idx_0 = aux_ins.home_lat_rad * 57.295779513082323;
        lla_idx_1 = aux_ins.home_lon_rad * 57.295779513082323;
        c_lat = 33.215477;
        cosd_i(&c_lat);
        s_lat = 33.215477;
        sind_b(&s_lat);
        c_lon = -87.54366;
        cosd_i(&c_lon);
        s_lon = -87.54366;
        sind_b(&s_lon);
        re = 33.215477;
        sind_b(&re);
        re = 6.378137E+6 / std::sqrt(1.0 - re * re * 0.0066943799901413156);
        b_c_lat = 33.215477;
        cosd_i(&b_c_lat);
        b_re = lla_idx_0;
        sind_b(&b_re);
        b_re = 6.378137E+6 / std::sqrt(1.0 - b_re * b_re * 0.0066943799901413156);
        c_c_lat = lla_idx_0;
        cosd_i(&c_c_lat);
        b = lla_idx_1;
        cosd_i(&b);
        sind_b(&lla_idx_1);
        sind_b(&lla_idx_0);
        e = -87.54366;
        cosd_i(&e);
        f = -87.54366;
        sind_b(&f);
        g = 33.215477;
        sind_b(&g);
        b *= b_re * c_c_lat;
        lla_idx_1 *= b_re * c_c_lat;
        lla_idx_0 *= 0.99330562000985867 * b_re;
        e *= re * b_c_lat;
        b_c_lat = re * b_c_lat * f;
        re = 0.99330562000985867 * re * g;
        s_lat_0[0] = -s_lat * c_lon;
        s_lat_0[1] = -s_lon;
        s_lat_0[2] = -c_lat * c_lon;
        s_lat_0[3] = -s_lat * s_lon;
        s_lat_0[4] = c_lon;
        s_lat_0[5] = -c_lat * s_lon;
        s_lat_0[6] = c_lat;
        s_lat_0[7] = 0.0;
        s_lat_0[8] = -s_lat;
        b -= e;
        lla_idx_1 -= b_c_lat;
        lla_idx_0 -= re;
        tmp[0] = rtDW.CastToSingle1;
        tmp[1] = -rtDW.CastToSingle2;
        tmp[2] = rtDW.Selector1.z;
        for (int32_T i{0}; i < 3; i++) {
          c_lat = s_lat_0[i] * b;
          c_lat += s_lat_0[i + 3] * lla_idx_1;
          c_lat += s_lat_0[i + 6] * lla_idx_0;
          b_s_lat = static_cast<real32_T>(c_lat);
          rtDW.cur_target_pos[i] = tmp[i] - b_s_lat;
        }

        // End of MATLAB Function: '<S380>/determine_current_tar_pos'

        // Update for UnitDelay: '<S380>/Unit Delay'
        rtDW.UnitDelay_DSTATE_m[0] = rtDW.cur_target_pos[0];
        rtDW.UnitDelay_DSTATE_m[1] = rtDW.cur_target_pos[1];
        rtDW.UnitDelay_DSTATE_m[2] = rtDW.cur_target_pos[2];
      }

      // End of Outputs for SubSystem: '<S8>/determine target'

      // Outputs for Enabled SubSystem: '<S8>/WP_NAV' incorporates:
      //   EnablePort: '<S378>/Enable'

      // Trigonometry: '<S491>/Cos' incorporates:
      //   Inport: '<Root>/INS Data'
      rtDW.Cos_g = std::cos(bfs_ins.heading_rad);

      // Trigonometry: '<S491>/Sin' incorporates:
      //   Inport: '<Root>/INS Data'
      rtDW.Sin_o = std::sin(bfs_ins.heading_rad);

      // Gain: '<S491>/Gain'
      rtDW.Gain_c = -rtDW.Sin_o;

      // Reshape: '<S491>/Reshape'
      rtDW.Reshape_a[0] = rtDW.Cos_g;
      rtDW.Reshape_a[2] = rtDW.Sin_o;
      rtDW.Reshape_a[1] = rtDW.Gain_c;
      rtDW.Reshape_a[3] = rtDW.Cos_g;

      // Sum: '<S385>/Subtract' incorporates:
      //   Inport: '<Root>/AuxInsData'
      rtDW.Subtract[0] = rtDW.cur_target_pos[0] - aux_ins.ned_pos_m[0];
      rtDW.Subtract[1] = rtDW.cur_target_pos[1] - aux_ins.ned_pos_m[1];
      rtDW.Subtract[2] = rtDW.cur_target_pos[2] - aux_ins.ned_pos_m[2];

      // Math: '<S385>/Transpose'
      rtDW.Transpose[0] = rtDW.Subtract[0];

      // Product: '<S385>/MatrixMultiply' incorporates:
      //   Math: '<S385>/Transpose'
      c_lat = rtDW.Transpose[0];
      s_lat = rtDW.Subtract[0];
      c_lon = c_lat * s_lat;

      // Math: '<S385>/Transpose'
      rtDW.Transpose[1] = rtDW.Subtract[1];

      // Product: '<S385>/MatrixMultiply' incorporates:
      //   Math: '<S385>/Transpose'
      c_lat = rtDW.Transpose[1];
      s_lat = rtDW.Subtract[1];
      c_lon += c_lat * s_lat;

      // Product: '<S385>/MatrixMultiply'
      rtDW.MatrixMultiply = c_lon;

      // Sqrt: '<S385>/Sqrt'
      rtDW.Sqrt = std::sqrt(rtDW.MatrixMultiply);

      // Saturate: '<S383>/Saturation'
      c_lat = rtDW.Sqrt;
      if (c_lat > 1.0) {
        // Saturate: '<S383>/Saturation'
        rtDW.Saturation = 1.0;
      } else if (c_lat < 0.0) {
        // Saturate: '<S383>/Saturation'
        rtDW.Saturation = 0.0;
      } else {
        // Saturate: '<S383>/Saturation'
        rtDW.Saturation = c_lat;
      }

      // End of Saturate: '<S383>/Saturation'

      // Product: '<S477>/PProd Out'
      rtDW.PProdOut = rtDW.Saturation * 0.40000000596046448;

      // RelationalOperator: '<S480>/LowerRelop1'
      rtDW.LowerRelop1_j = (rtDW.PProdOut > 0.30000001192092896);

      // Switch: '<S480>/Switch2'
      if (rtDW.LowerRelop1_j) {
        // Switch: '<S480>/Switch2' incorporates:
        //   Constant: '<S383>/Constant1'
        rtDW.Switch2_o = 0.30000001192092896;
      } else {
        // RelationalOperator: '<S480>/UpperRelop'
        rtDW.UpperRelop_p = false;

        // Switch: '<S480>/Switch'
        rtDW.Switch_f = rtDW.PProdOut;

        // Switch: '<S480>/Switch2'
        rtDW.Switch2_o = rtDW.Switch_f;
      }

      // End of Switch: '<S480>/Switch2'

      // Trigonometry: '<S385>/Atan2'
      rtDW.Atan2 = rt_atan2d_snf(rtDW.Subtract[1], rtDW.Subtract[0]);

      // Trigonometry: '<S388>/Cos'
      rtDW.Cos = std::cos(rtDW.Atan2);

      // Product: '<S388>/Product'
      rtDW.Product = rtDW.Switch2_o * rtDW.Cos;

      // MATLAB Function: '<S382>/deviation_calc' incorporates:
      //   Inport: '<Root>/AuxInsData'
      //   UnitDelay: '<S380>/Unit Delay'
      d_c_lat = rt_atan2f_snf(rtDW.cur_target_pos[1] - rtDW.UnitDelay_j[1],
        rtDW.cur_target_pos[0] - rtDW.UnitDelay_j[0]) + 1.57079637F;
      vec_tar_to_prev_idx_0 = rtDW.cur_target_pos[0] - rtDW.UnitDelay_j[0];
      vec_tar_to_cur_idx_0 = rtDW.cur_target_pos[0] - static_cast<real32_T>
        (aux_ins.ned_pos_m[0]);
      vec_tar_to_prev_idx_1 = rtDW.cur_target_pos[1] - rtDW.UnitDelay_j[1];
      vec_tar_to_cur_idx_1 = rtDW.cur_target_pos[1] - static_cast<real32_T>
        (aux_ins.ned_pos_m[1]);
      b_s_lon = 1.29246971E-26F;
      absxk = std::abs(vec_tar_to_cur_idx_0);
      if (absxk > 1.29246971E-26F) {
        b_c_lon = 1.0F;
        b_s_lon = absxk;
      } else {
        t = absxk / 1.29246971E-26F;
        b_c_lon = t * t;
      }

      absxk = std::abs(vec_tar_to_cur_idx_1);
      if (absxk > b_s_lon) {
        t = b_s_lon / absxk;
        b_c_lon = b_c_lon * t * t + 1.0F;
        b_s_lon = absxk;
      } else {
        t = absxk / b_s_lon;
        b_c_lon += t * t;
      }

      b_c_lon = b_s_lon * std::sqrt(b_c_lon);
      b_s_lat = vec_tar_to_prev_idx_0 * vec_tar_to_cur_idx_1 -
        vec_tar_to_cur_idx_0 * vec_tar_to_prev_idx_1;
      b_s_lon = vec_tar_to_prev_idx_0 * vec_tar_to_cur_idx_0 +
        vec_tar_to_prev_idx_1 * vec_tar_to_cur_idx_1;
      b_s_lat = b_s_lat * b_c_lon / std::sqrt(b_s_lon * b_s_lon + b_s_lat *
        b_s_lat);
      b_c_lon = std::cos(d_c_lat);
      d_c_lat = std::sin(d_c_lat);
      b_s_lon = b_s_lat * b_c_lon;
      vec_tar_to_prev_idx_0 = b_s_lat * d_c_lat;
      d_c_lat = 1.29246971E-26F;
      b_s_lat = std::abs(b_s_lon);
      if (b_s_lat > 1.29246971E-26F) {
        rtDW.dev_dist_m = 1.0F;
        d_c_lat = b_s_lat;
      } else {
        b_c_lon = b_s_lat / 1.29246971E-26F;
        rtDW.dev_dist_m = b_c_lon * b_c_lon;
      }

      b_s_lat = std::abs(vec_tar_to_prev_idx_0);
      if (b_s_lat > d_c_lat) {
        b_c_lon = d_c_lat / b_s_lat;
        rtDW.dev_dist_m = rtDW.dev_dist_m * b_c_lon * b_c_lon + 1.0F;
        d_c_lat = b_s_lat;
      } else {
        b_c_lon = b_s_lat / d_c_lat;
        rtDW.dev_dist_m += b_c_lon * b_c_lon;
      }

      rtDW.dev_dist_m = d_c_lat * std::sqrt(rtDW.dev_dist_m);
      rtDW.dev_bearing_rad = rt_atan2f_snf(vec_tar_to_prev_idx_0, b_s_lon);

      // End of MATLAB Function: '<S382>/deviation_calc'

      // Product: '<S428>/PProd Out' incorporates:
      //   Constant: '<S383>/Constant5'
      rtDW.PProdOut_o = rtDW.dev_dist_m * 0.5F;

      // RelationalOperator: '<S431>/LowerRelop1' incorporates:
      //   Constant: '<S383>/Constant6'
      rtDW.LowerRelop1_jy = (rtDW.PProdOut_o > 0.3F);

      // Switch: '<S431>/Switch2'
      if (rtDW.LowerRelop1_jy) {
        // Switch: '<S431>/Switch2' incorporates:
        //   Constant: '<S383>/Constant6'
        rtDW.Switch2_l = 0.3F;
      } else {
        // RelationalOperator: '<S431>/UpperRelop'
        rtDW.UpperRelop_i = false;

        // Switch: '<S431>/Switch'
        rtDW.Switch_dd = rtDW.PProdOut_o;

        // Switch: '<S431>/Switch2'
        rtDW.Switch2_l = rtDW.Switch_dd;
      }

      // End of Switch: '<S431>/Switch2'

      // Trigonometry: '<S389>/Cos'
      rtDW.Cos_h = std::cos(rtDW.dev_bearing_rad);

      // Product: '<S389>/Product'
      rtDW.Product_g5 = rtDW.Switch2_l * rtDW.Cos_h;

      // Sum: '<S383>/Sum'
      rtDW.Sum = rtDW.Product + rtDW.Product_g5;

      // Trigonometry: '<S388>/Sin'
      rtDW.Sin = std::sin(rtDW.Atan2);

      // Product: '<S388>/Product1'
      rtDW.Product1 = rtDW.Switch2_o * rtDW.Sin;

      // Trigonometry: '<S389>/Sin'
      rtDW.Sin_d = std::sin(rtDW.dev_bearing_rad);

      // Product: '<S389>/Product1'
      rtDW.Product1_h = rtDW.Switch2_l * rtDW.Sin_d;

      // Sum: '<S383>/Sum1'
      rtDW.Sum1 = rtDW.Product1 + rtDW.Product1_h;

      // SignalConversion generated from: '<S390>/Normalization1'
      rtDW.TmpSignalConversionAtNormalizat[0] = rtDW.Sum;
      rtDW.TmpSignalConversionAtNormalizat[1] = rtDW.Sum1;

      // Math: '<S390>/Square'
      rtDW.Square[0] = rtDW.TmpSignalConversionAtNormalizat[0] *
        rtDW.TmpSignalConversionAtNormalizat[0];
      rtDW.Square[1] = rtDW.TmpSignalConversionAtNormalizat[1] *
        rtDW.TmpSignalConversionAtNormalizat[1];

      // Sum: '<S390>/Sum of Elements'
      c_lat = rtDW.Square[0];
      c_lat += rtDW.Square[1];

      // Sum: '<S390>/Sum of Elements'
      rtDW.SumofElements = c_lat;

      // Sqrt: '<S390>/Sqrt'
      rtDW.Sqrt_p = std::sqrt(rtDW.SumofElements);

      // RelationalOperator: '<S490>/Compare' incorporates:
      //   Constant: '<S490>/Constant'
      rtDW.Compare_c = (rtDW.Sqrt_p > 0.3);

      // Switch: '<S390>/Switch'
      if (rtDW.Compare_c) {
        int32_T idx1;
        int32_T idx2;

        // S-Function (sdsp2norm2): '<S390>/Normalization1'
        idx1 = 0;
        idx2 = 0;
        c_lat = 0.0;
        for (int32_T i{0}; i < 2; i++) {
          c_lat += rtDW.TmpSignalConversionAtNormalizat[idx1] *
            rtDW.TmpSignalConversionAtNormalizat[idx1];
          idx1++;
        }

        c_lat = 1.0 / (std::sqrt(c_lat) + 1.0E-10);
        for (int32_T i{0}; i < 2; i++) {
          rtDW.Normalization1[idx2] = rtDW.TmpSignalConversionAtNormalizat[idx2]
            * c_lat;
          idx2++;
        }

        // End of S-Function (sdsp2norm2): '<S390>/Normalization1'

        // Gain: '<S390>/Gain'
        rtDW.Gain_f[0] = 0.3 * rtDW.Normalization1[0];

        // Switch: '<S390>/Switch'
        rtDW.Switch_d[0] = rtDW.Gain_f[0];

        // Gain: '<S390>/Gain'
        rtDW.Gain_f[1] = 0.3 * rtDW.Normalization1[1];

        // Switch: '<S390>/Switch'
        rtDW.Switch_d[1] = rtDW.Gain_f[1];
      } else {
        // Switch: '<S390>/Switch'
        rtDW.Switch_d[0] = rtDW.TmpSignalConversionAtNormalizat[0];
        rtDW.Switch_d[1] = rtDW.TmpSignalConversionAtNormalizat[1];
      }

      // End of Switch: '<S390>/Switch'

      // Product: '<S391>/Product' incorporates:
      //   Reshape: '<S491>/Reshape'
      b_s_lat = rtDW.Reshape_a[0];
      d_c_lat = rtDW.Reshape_a[1];
      b_c_lon = rtDW.Reshape_a[2];
      b_s_lon = rtDW.Reshape_a[3];
      s_lat = rtDW.Switch_d[0];
      c_lat = rtDW.Switch_d[1];
      c_lon = b_s_lat * s_lat;
      c_lon += b_c_lon * c_lat;

      // Product: '<S391>/Product'
      rtDW.vb_xy[0] = c_lon;

      // Product: '<S391>/Product'
      s_lat *= d_c_lat;
      s_lat += b_s_lon * c_lat;

      // Product: '<S391>/Product'
      rtDW.vb_xy[1] = s_lat;

      // SignalConversion generated from: '<S378>/Command out'
      rtDW.ve_z_cmd_mps_p0 = rtDW.norm_out_i;

      // SignalConversion generated from: '<S378>/Command out'
      rtDW.yaw_rate_cmd_radps_c5 = rtDW.yaw_rate_cmd_radps_l;

      // End of Outputs for SubSystem: '<S8>/WP_NAV'

      // SignalConversion generated from: '<S8>/wp_command'
      rtDW.ve_z_cmd_mps_p = rtDW.ve_z_cmd_mps_p0;

      // SignalConversion generated from: '<S8>/wp_command'
      rtDW.yaw_rate_cmd_radps_c = rtDW.yaw_rate_cmd_radps_c5;

      // Sum: '<S381>/Sum' incorporates:
      //   Constant: '<S381>/Constant1'
      //   Inport: '<Root>/Telemetry Data'
      rtDW.Sum_by = static_cast<int16_T>(telem.current_waypoint + 1);

      // Selector: '<S381>/Selector' incorporates:
      //   Inport: '<Root>/Telemetry Data'
      rtDW.Selector = telem.flight_plan[rtDW.Sum_by];

      // RelationalOperator: '<S494>/Compare' incorporates:
      //   Constant: '<S494>/Constant'
      rtDW.Compare_e = (rtDW.Selector.param1 > 0.5F);

      // MATLAB Function: '<S381>/check_wp_reached' incorporates:
      //   Constant: '<S381>/Constant'
      //   Inport: '<Root>/AuxInsData'
      b_s_lon = 1.29246971E-26F;
      d_c_lat = rtDW.cur_target_pos[0] - static_cast<real32_T>
        (aux_ins.ned_pos_m[0]);
      absxk = std::abs(d_c_lat);
      if (absxk > 1.29246971E-26F) {
        b_s_lat = 1.0F;
        b_s_lon = absxk;
      } else {
        t = absxk / 1.29246971E-26F;
        b_s_lat = t * t;
      }

      d_c_lat = rtDW.cur_target_pos[1] - static_cast<real32_T>
        (aux_ins.ned_pos_m[1]);
      absxk = std::abs(d_c_lat);
      if (absxk > b_s_lon) {
        t = b_s_lon / absxk;
        b_s_lat = b_s_lat * t * t + 1.0F;
        b_s_lon = absxk;
      } else {
        t = absxk / b_s_lon;
        b_s_lat += t * t;
      }

      b_s_lat = b_s_lon * std::sqrt(b_s_lat);
      rtDW.reached = ((b_s_lat <= 0.1F) && rtDW.Compare_e);

      // End of MATLAB Function: '<S381>/check_wp_reached'

      // Update for UnitDelay: '<S492>/Delay Input1'
      //
      //  Block description for '<S492>/Delay Input1':
      //
      //   Store in Global RAM
      rtDW.DelayInput1_DSTATE = rtDW.cur_wp;

      // Update for UnitDelay: '<S8>/Unit Delay'
      rtDW.UnitDelay_DSTATE_o4 = rtDW.reached;

      // End of Outputs for SubSystem: '<Root>/WAYPOINT CONTROLLER1'
    } else {
      // Outputs for Enabled SubSystem: '<Root>/WAYPOINT CONTROLLER1' incorporates:
      //   EnablePort: '<S8>/Enable'
      rtDW.WAYPOINTCONTROLLER1_MODE = false;

      // End of Outputs for SubSystem: '<Root>/WAYPOINT CONTROLLER1'
    }

    // End of Outputs for SubSystem: '<Root>/Stab_input_conversion2'

    // RelationalOperator: '<S13>/Compare' incorporates:
    //   Constant: '<S13>/Constant'
    rtDW.Compare_a = (rtDW.mode_type_conversion == 1);

    // Logic: '<Root>/motor_armed AND mode_5'
    rtDW.motor_armedANDmode_5 = (rtDW.nav_initANDmotor_enable && rtDW.Compare_a);

    // Outputs for Enabled SubSystem: '<Root>/Stab_input_conversion1' incorporates:
    //   EnablePort: '<S5>/Enable'
    if (rtDW.motor_armedANDmode_5) {
      // Product: '<S5>/Product' incorporates:
      //   Constant: '<S5>/Constant3'
      rtDW.yaw_rate_cmd_radps_o5 = rtDW.norm_out * 3.14159F;

      // Product: '<S5>/Product1' incorporates:
      //   Constant: '<S5>/Constant1'
      rtDW.vb_x_cmd_mps_b = rtDW.norm_out_o * 0.5F;

      // Product: '<S5>/Product2' incorporates:
      //   Constant: '<S5>/Constant4'
      rtDW.vb_y_cmd_mps_a = rtDW.norm_out_d * 0.5F;

      // MATLAB Function: '<S374>/remap1' incorporates:
      //   Constant: '<S374>/Constant4'
      //   Constant: '<S374>/Constant5'
      //   Constant: '<S374>/Constant6'
      //   Constant: '<S374>/Constant7'
      remap1(rtDW.norm_out_p, 0.0F, 1.0F, 0.15F, 1.0F, &rtDW.norm_out_b);
    }

    // End of Outputs for SubSystem: '<Root>/Stab_input_conversion1'

    // Logic: '<Root>/NOT1'
    rtDW.NOT1_g = !rtDW.motor_armedANDmode_5;

    // Switch generated from: '<Root>/Switch1'
    if (rtDW.NOT1_g) {
      // Switch generated from: '<Root>/Switch1'
      rtDW.ve_z_cmd_mps = rtDW.ve_z_cmd_mps_p;

      // Switch generated from: '<Root>/Switch1'
      rtDW.vb_x_cmd_mps = rtDW.vb_xy[0];

      // Switch generated from: '<Root>/Switch1'
      rtDW.vb_y_cmd_mps = rtDW.vb_xy[1];

      // Switch generated from: '<Root>/Switch1'
      rtDW.yaw_rate_cmd_radps = rtDW.yaw_rate_cmd_radps_c;
    } else {
      // Switch generated from: '<Root>/Switch1'
      rtDW.ve_z_cmd_mps = rtDW.norm_out_b;

      // Switch generated from: '<Root>/Switch1'
      rtDW.vb_x_cmd_mps = rtDW.vb_x_cmd_mps_b;

      // Switch generated from: '<Root>/Switch1'
      rtDW.vb_y_cmd_mps = rtDW.vb_y_cmd_mps_a;

      // Switch generated from: '<Root>/Switch1'
      rtDW.yaw_rate_cmd_radps = rtDW.yaw_rate_cmd_radps_o5;
    }

    // End of Switch generated from: '<Root>/Switch1'

    // RelationalOperator: '<S11>/Compare' incorporates:
    //   Constant: '<S11>/Constant'
    rtDW.Compare_b = (rtDW.mode_type_conversion >= 1);

    // Logic: '<Root>/motor_armed AND mode_1'
    rtDW.motor_armedANDmode_1 = (rtDW.nav_initANDmotor_enable && rtDW.Compare_b);

    // Outputs for Enabled SubSystem: '<Root>/POS_HOLD CONTROLLER' incorporates:
    //   EnablePort: '<S3>/Enable'
    if (rtDW.motor_armedANDmode_1) {
      if (!rtDW.POS_HOLDCONTROLLER_MODE) {
        // InitializeConditions for UnitDelay: '<S198>/Unit Delay'
        rtDW.UnitDelay_DSTATE_gw = false;

        // InitializeConditions for UnitDelay: '<S313>/Delay Input1'
        //
        //  Block description for '<S313>/Delay Input1':
        //
        //   Store in Global RAM
        rtDW.DelayInput1_DSTATE_p = false;

        // InitializeConditions for UnitDelay: '<S201>/Unit Delay'
        rtDW.UnitDelay_DSTATE_b = 0.0F;

        // InitializeConditions for UnitDelay: '<S199>/UD'
        //
        //  Block description for '<S199>/UD':
        //
        //   Store in Global RAM
        rtDW.UD_DSTATE_o = 0.0F;

        // InitializeConditions for UnitDelay: '<S202>/Unit Delay'
        rtDW.UnitDelay_DSTATE_g = 0.0F;

        // InitializeConditions for DiscreteIntegrator: '<S236>/Integrator'
        rtDW.Integrator_DSTATE_p = 0.0F;
        rtDW.Integrator_PrevResetState_k = 2;

        // InitializeConditions for UnitDelay: '<S257>/Unit Delay'
        rtDW.UnitDelay_DSTATE_e = 0.0F;

        // InitializeConditions for UnitDelay: '<S255>/UD'
        //
        //  Block description for '<S255>/UD':
        //
        //   Store in Global RAM
        rtDW.UD_DSTATE_p = 0.0F;

        // InitializeConditions for UnitDelay: '<S258>/Unit Delay'
        rtDW.UnitDelay_DSTATE_d = 0.0F;

        // InitializeConditions for DiscreteIntegrator: '<S292>/Integrator'
        rtDW.Integrator_DSTATE_o = 0.0F;
        rtDW.Integrator_PrevResetState_c = 2;
        rtDW.POS_HOLDCONTROLLER_MODE = true;
      }

      // Trigonometry: '<S195>/Cos' incorporates:
      //   Inport: '<Root>/INS Data'
      rtDW.Cos_a = std::cos(bfs_ins.heading_rad);

      // Trigonometry: '<S195>/Sin' incorporates:
      //   Inport: '<Root>/INS Data'
      rtDW.Sin_n = std::sin(bfs_ins.heading_rad);

      // Gain: '<S195>/Gain'
      rtDW.Gain_l = -rtDW.Sin_n;

      // Reshape: '<S195>/Reshape'
      rtDW.Reshape_g[0] = rtDW.Cos_a;
      rtDW.Reshape_g[2] = rtDW.Sin_n;
      rtDW.Reshape_g[1] = rtDW.Gain_l;
      rtDW.Reshape_g[3] = rtDW.Cos_a;

      // RelationalOperator: '<S311>/Compare' incorporates:
      //   Constant: '<S311>/Constant'
      rtDW.Compare_a0 = (rtDW.vb_x_cmd_mps == 0.0);

      // RelationalOperator: '<S312>/Compare' incorporates:
      //   Constant: '<S312>/Constant'
      rtDW.Compare_md = (rtDW.vb_y_cmd_mps == 0.0);

      // Logic: '<S198>/AND'
      rtDW.AND_e = (rtDW.Compare_a0 && rtDW.Compare_md);

      // UnitDelay: '<S198>/Unit Delay'
      rtDW.UnitDelay_kx = rtDW.UnitDelay_DSTATE_gw;

      // UnitDelay: '<S313>/Delay Input1'
      //
      //  Block description for '<S313>/Delay Input1':
      //
      //   Store in Global RAM
      rtDW.Uk1_ev = rtDW.DelayInput1_DSTATE_p;

      // RelationalOperator: '<S313>/FixPt Relational Operator'
      rtDW.FixPtRelationalOperator_j = (rtDW.UnitDelay_kx != rtDW.Uk1_ev);

      // Logic: '<S198>/OR'
      rtDW.OR_c = (rtDW.AND_e || rtDW.FixPtRelationalOperator_j);

      // Logic: '<S198>/NOT'
      rtDW.NOT_h = !rtDW.OR_c;

      // Outputs for Enabled SubSystem: '<S198>/set_tar_pos when vel_cmd == 0' incorporates:
      //   EnablePort: '<S315>/Enable'
      if (rtDW.NOT_h) {
        // SignalConversion generated from: '<S315>/pos_xy_m' incorporates:
        //   Inport: '<Root>/AuxInsData'
        rtDW.pos_xy_m[0] = aux_ins.ned_pos_m[0];
        rtDW.pos_xy_m[1] = aux_ins.ned_pos_m[1];
      }

      // End of Outputs for SubSystem: '<S198>/set_tar_pos when vel_cmd == 0'

      // Sum: '<S317>/Subtract' incorporates:
      //   Inport: '<Root>/AuxInsData'
      rtDW.Subtract_o[0] = rtDW.pos_xy_m[0] - aux_ins.ned_pos_m[0];

      // Math: '<S317>/Transpose'
      rtDW.Transpose_o[0] = rtDW.Subtract_o[0];

      // Product: '<S317>/MatrixMultiply' incorporates:
      //   Math: '<S317>/Transpose'
      c_lat = rtDW.Transpose_o[0];
      s_lat = rtDW.Subtract_o[0];
      c_lon = c_lat * s_lat;

      // Sum: '<S317>/Subtract' incorporates:
      //   Inport: '<Root>/AuxInsData'
      rtDW.Subtract_o[1] = rtDW.pos_xy_m[1] - aux_ins.ned_pos_m[1];

      // Math: '<S317>/Transpose'
      rtDW.Transpose_o[1] = rtDW.Subtract_o[1];

      // Product: '<S317>/MatrixMultiply' incorporates:
      //   Math: '<S317>/Transpose'
      c_lat = rtDW.Transpose_o[1];
      s_lat = rtDW.Subtract_o[1];
      c_lon += c_lat * s_lat;

      // Product: '<S317>/MatrixMultiply'
      rtDW.MatrixMultiply_i = c_lon;

      // Sqrt: '<S317>/Sqrt'
      rtDW.Sqrt_p1 = std::sqrt(rtDW.MatrixMultiply_i);

      // Saturate: '<S316>/Saturation'
      c_lat = rtDW.Sqrt_p1;
      if (c_lat > 1.0) {
        // Saturate: '<S316>/Saturation'
        rtDW.Saturation_k = 1.0;
      } else if (c_lat < 0.0) {
        // Saturate: '<S316>/Saturation'
        rtDW.Saturation_k = 0.0;
      } else {
        // Saturate: '<S316>/Saturation'
        rtDW.Saturation_k = c_lat;
      }

      // End of Saturate: '<S316>/Saturation'

      // Product: '<S357>/PProd Out'
      rtDW.PProdOut_b = rtDW.Saturation_k * 0.800000011920929;

      // Switch: '<S198>/Switch'
      if (rtDW.NOT_h) {
        // Switch: '<S198>/Switch'
        rtDW.Switch_db[0] = rtDW.vb_x_cmd_mps;
        rtDW.Switch_db[1] = rtDW.vb_y_cmd_mps;
      } else {
        // Trigonometry: '<S317>/Atan2'
        rtDW.Atan2_m = rt_atan2d_snf(rtDW.Subtract_o[1], rtDW.Subtract_o[0]);

        // Trigonometry: '<S319>/Sin'
        rtDW.Sin_f = std::sin(rtDW.Atan2_m);

        // RelationalOperator: '<S360>/LowerRelop1'
        rtDW.LowerRelop1_jw = (rtDW.PProdOut_b > 0.5);

        // Switch: '<S360>/Switch2'
        if (rtDW.LowerRelop1_jw) {
          // Switch: '<S360>/Switch2' incorporates:
          //   Constant: '<S316>/Constant1'
          rtDW.Switch2_p = 0.5;
        } else {
          // RelationalOperator: '<S360>/UpperRelop'
          rtDW.UpperRelop_i3 = false;

          // Switch: '<S360>/Switch'
          rtDW.Switch_p = rtDW.PProdOut_b;

          // Switch: '<S360>/Switch2'
          rtDW.Switch2_p = rtDW.Switch_p;
        }

        // End of Switch: '<S360>/Switch2'

        // Product: '<S319>/Product1'
        rtDW.Product1_b = rtDW.Switch2_p * rtDW.Sin_f;

        // Trigonometry: '<S319>/Cos'
        rtDW.Cos_m = std::cos(rtDW.Atan2_m);

        // Product: '<S319>/Product'
        rtDW.Product_g = rtDW.Switch2_p * rtDW.Cos_m;

        // SignalConversion generated from: '<S320>/Product'
        rtDW.TmpSignalConversionAtProductInp[0] = rtDW.Product_g;
        rtDW.TmpSignalConversionAtProductInp[1] = rtDW.Product1_b;

        // Trigonometry: '<S370>/Sin' incorporates:
        //   Inport: '<Root>/INS Data'
        rtDW.Sin_os = std::sin(bfs_ins.heading_rad);

        // Gain: '<S370>/Gain'
        rtDW.Gain_b = -rtDW.Sin_os;

        // Trigonometry: '<S370>/Cos' incorporates:
        //   Inport: '<Root>/INS Data'
        rtDW.Cos_e = std::cos(bfs_ins.heading_rad);

        // Reshape: '<S370>/Reshape'
        rtDW.Reshape_au[0] = rtDW.Cos_e;
        rtDW.Reshape_au[2] = rtDW.Sin_os;
        rtDW.Reshape_au[1] = rtDW.Gain_b;
        rtDW.Reshape_au[3] = rtDW.Cos_e;

        // Product: '<S320>/Product' incorporates:
        //   Reshape: '<S370>/Reshape'
        b_s_lat = rtDW.Reshape_au[0];
        d_c_lat = rtDW.Reshape_au[1];
        b_c_lon = rtDW.Reshape_au[2];
        b_s_lon = rtDW.Reshape_au[3];
        s_lat = rtDW.TmpSignalConversionAtProductInp[0];
        c_lat = rtDW.TmpSignalConversionAtProductInp[1];
        c_lon = b_s_lat * s_lat;
        c_lon += b_c_lon * c_lat;

        // Product: '<S320>/Product'
        rtDW.vb_xy_o[0] = c_lon;

        // DataTypeConversion: '<S198>/Cast To Single'
        rtDW.CastToSingle_o[0] = static_cast<real32_T>(rtDW.vb_xy_o[0]);

        // Switch: '<S198>/Switch'
        rtDW.Switch_db[0] = rtDW.CastToSingle_o[0];

        // Product: '<S320>/Product'
        s_lat *= d_c_lat;
        s_lat += b_s_lon * c_lat;

        // Product: '<S320>/Product'
        rtDW.vb_xy_o[1] = s_lat;

        // DataTypeConversion: '<S198>/Cast To Single'
        rtDW.CastToSingle_o[1] = static_cast<real32_T>(rtDW.vb_xy_o[1]);

        // Switch: '<S198>/Switch'
        rtDW.Switch_db[1] = rtDW.CastToSingle_o[1];
      }

      // End of Switch: '<S198>/Switch'

      // Product: '<S194>/Product' incorporates:
      //   Inport: '<Root>/INS Data'
      //   Reshape: '<S195>/Reshape'
      b_s_lat = rtDW.Reshape_g[0];
      d_c_lat = rtDW.Reshape_g[1];
      b_c_lon = rtDW.Reshape_g[2];
      b_s_lon = rtDW.Reshape_g[3];
      vec_tar_to_prev_idx_0 = bfs_ins.ned_vel_mps[0];
      vec_tar_to_cur_idx_0 = bfs_ins.ned_vel_mps[1];
      b_s_lat *= vec_tar_to_prev_idx_0;
      b_s_lat += b_c_lon * vec_tar_to_cur_idx_0;

      // Product: '<S194>/Product'
      rtDW.vb_xy_k[0] = b_s_lat;

      // Product: '<S194>/Product'
      d_c_lat *= vec_tar_to_prev_idx_0;
      d_c_lat += b_s_lon * vec_tar_to_cur_idx_0;

      // Product: '<S194>/Product'
      rtDW.vb_xy_k[1] = d_c_lat;

      // UnitDelay: '<S201>/Unit Delay'
      rtDW.UnitDelay_e = rtDW.UnitDelay_DSTATE_b;

      // MATLAB Function: '<S201>/MATLAB Function' incorporates:
      //   Constant: '<S196>/Constant'
      //   Constant: '<S201>/Constant'
      MATLABFunction(rtDW.UnitDelay_e, rtDW.vb_xy_k[0], 10.0F, 50.0F,
                     &rtDW.filtered_val_l);

      // SampleTimeMath: '<S199>/TSamp'
      //
      //  About '<S199>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      rtDW.TSamp_d = rtDW.filtered_val_l * 200.0F;

      // UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM
      rtDW.Uk1_o = rtDW.UD_DSTATE_o;

      // Sum: '<S199>/Diff'
      //
      //  Block description for '<S199>/Diff':
      //
      //   Add in CPU
      rtDW.Diff_fd = rtDW.TSamp_d - rtDW.Uk1_o;

      // Product: '<S196>/Product' incorporates:
      //   Constant: '<S196>/Constant4'
      rtDW.Product_j = rtDW.Diff_fd * 0.01F;

      // UnitDelay: '<S202>/Unit Delay'
      rtDW.UnitDelay_k = rtDW.UnitDelay_DSTATE_g;

      // MATLAB Function: '<S202>/MATLAB Function' incorporates:
      //   Constant: '<S196>/Constant1'
      //   Constant: '<S202>/Constant'
      MATLABFunction_i(rtDW.UnitDelay_k, rtDW.Switch_db[0], 30.0F, 50.0F,
                       &rtDW.filtered_val_p);

      // Sum: '<S196>/Sum'
      rtDW.Sum_h = rtDW.filtered_val_p - rtDW.vb_xy_k[0];

      // Product: '<S241>/PProd Out' incorporates:
      //   Constant: '<S196>/Constant2'
      rtDW.PProdOut_e = rtDW.Sum_h * 0.5F;

      // DiscreteIntegrator: '<S236>/Integrator'
      if (rtDW.Integrator_PrevResetState_k <= 0) {
        rtDW.Integrator_DSTATE_p = 0.0F;
      }

      // DiscreteIntegrator: '<S236>/Integrator'
      rtDW.Integrator_d = rtDW.Integrator_DSTATE_p;

      // Sum: '<S245>/Sum'
      rtDW.Sum_j = rtDW.PProdOut_e + rtDW.Integrator_d;

      // Saturate: '<S243>/Saturation'
      b_s_lat = rtDW.Sum_j;
      if (b_s_lat > 0.261799F) {
        // Saturate: '<S243>/Saturation'
        rtDW.Saturation_g = 0.261799F;
      } else if (b_s_lat < -0.261799F) {
        // Saturate: '<S243>/Saturation'
        rtDW.Saturation_g = -0.261799F;
      } else {
        // Saturate: '<S243>/Saturation'
        rtDW.Saturation_g = b_s_lat;
      }

      // End of Saturate: '<S243>/Saturation'

      // Sum: '<S196>/Sum1'
      rtDW.Sum1_f = rtDW.Saturation_g - rtDW.Product_j;

      // Saturate: '<S196>/Saturation'
      b_s_lat = rtDW.Sum1_f;
      if (b_s_lat > 0.261799F) {
        // Saturate: '<S196>/Saturation'
        rtDW.Saturation_f = 0.261799F;
      } else if (b_s_lat < -0.261799F) {
        // Saturate: '<S196>/Saturation'
        rtDW.Saturation_f = -0.261799F;
      } else {
        // Saturate: '<S196>/Saturation'
        rtDW.Saturation_f = b_s_lat;
      }

      // End of Saturate: '<S196>/Saturation'

      // Gain: '<S196>/Gain'
      rtDW.Gain_m = -rtDW.Saturation_f;

      // DeadZone: '<S229>/DeadZone'
      if (rtDW.Sum_j > 0.261799F) {
        // DeadZone: '<S229>/DeadZone'
        rtDW.DeadZone_i = rtDW.Sum_j - 0.261799F;
      } else if (rtDW.Sum_j >= -0.261799F) {
        // DeadZone: '<S229>/DeadZone'
        rtDW.DeadZone_i = 0.0F;
      } else {
        // DeadZone: '<S229>/DeadZone'
        rtDW.DeadZone_i = rtDW.Sum_j - -0.261799F;
      }

      // End of DeadZone: '<S229>/DeadZone'

      // RelationalOperator: '<S227>/Relational Operator' incorporates:
      //   Constant: '<S227>/Constant5'
      rtDW.RelationalOperator_l = (rtDW.DeadZone_i != 0.0F);

      // RelationalOperator: '<S227>/fix for DT propagation issue' incorporates:
      //   Constant: '<S227>/Constant5'
      rtDW.fixforDTpropagationissue_p = (rtDW.DeadZone_i > 0.0F);

      // Switch: '<S227>/Switch1'
      if (rtDW.fixforDTpropagationissue_p) {
        // Switch: '<S227>/Switch1' incorporates:
        //   Constant: '<S227>/Constant'
        rtDW.Switch1_l = 1;
      } else {
        // Switch: '<S227>/Switch1' incorporates:
        //   Constant: '<S227>/Constant2'
        rtDW.Switch1_l = -1;
      }

      // End of Switch: '<S227>/Switch1'

      // Product: '<S233>/IProd Out' incorporates:
      //   Constant: '<S196>/Constant3'
      rtDW.IProdOut_e = rtDW.Sum_h * 0.01F;

      // RelationalOperator: '<S227>/fix for DT propagation issue1' incorporates:
      //   Constant: '<S227>/Constant5'
      rtDW.fixforDTpropagationissue1_o = (rtDW.IProdOut_e > 0.0F);

      // Switch: '<S227>/Switch2'
      if (rtDW.fixforDTpropagationissue1_o) {
        // Switch: '<S227>/Switch2' incorporates:
        //   Constant: '<S227>/Constant3'
        rtDW.Switch2_an = 1;
      } else {
        // Switch: '<S227>/Switch2' incorporates:
        //   Constant: '<S227>/Constant4'
        rtDW.Switch2_an = -1;
      }

      // End of Switch: '<S227>/Switch2'

      // RelationalOperator: '<S227>/Equal1'
      rtDW.Equal1_g = (rtDW.Switch1_l == rtDW.Switch2_an);

      // Logic: '<S227>/AND3'
      rtDW.AND3_p = (rtDW.RelationalOperator_l && rtDW.Equal1_g);

      // Switch: '<S227>/Switch'
      if (rtDW.AND3_p) {
        // Switch: '<S227>/Switch' incorporates:
        //   Constant: '<S227>/Constant1'
        rtDW.Switch_gh = 0.0F;
      } else {
        // Switch: '<S227>/Switch'
        rtDW.Switch_gh = rtDW.IProdOut_e;
      }

      // End of Switch: '<S227>/Switch'

      // UnitDelay: '<S257>/Unit Delay'
      rtDW.UnitDelay_b = rtDW.UnitDelay_DSTATE_e;

      // MATLAB Function: '<S257>/MATLAB Function' incorporates:
      //   Constant: '<S197>/Constant'
      //   Constant: '<S257>/Constant'
      MATLABFunction(rtDW.UnitDelay_b, rtDW.vb_xy_k[1], 10.0F, 50.0F,
                     &rtDW.filtered_val_o);

      // SampleTimeMath: '<S255>/TSamp'
      //
      //  About '<S255>/TSamp':
      //   y = u * K where K = 1 / ( w * Ts )
      rtDW.TSamp_a = rtDW.filtered_val_o * 200.0F;

      // UnitDelay: '<S255>/UD'
      //
      //  Block description for '<S255>/UD':
      //
      //   Store in Global RAM
      rtDW.Uk1_h = rtDW.UD_DSTATE_p;

      // Sum: '<S255>/Diff'
      //
      //  Block description for '<S255>/Diff':
      //
      //   Add in CPU
      rtDW.Diff_kq = rtDW.TSamp_a - rtDW.Uk1_h;

      // Product: '<S197>/Product' incorporates:
      //   Constant: '<S197>/Constant5'
      rtDW.Product_l = rtDW.Diff_kq * 0.01F;

      // UnitDelay: '<S258>/Unit Delay'
      rtDW.UnitDelay_j2 = rtDW.UnitDelay_DSTATE_d;

      // MATLAB Function: '<S258>/MATLAB Function' incorporates:
      //   Constant: '<S197>/Constant1'
      //   Constant: '<S258>/Constant'
      MATLABFunction_i(rtDW.UnitDelay_j2, rtDW.Switch_db[1], 30.0F, 50.0F,
                       &rtDW.filtered_val);

      // Sum: '<S197>/Sum'
      rtDW.Sum_m = rtDW.filtered_val - rtDW.vb_xy_k[1];

      // Product: '<S297>/PProd Out' incorporates:
      //   Constant: '<S197>/Constant2'
      rtDW.PProdOut_g = rtDW.Sum_m * 0.5F;

      // DiscreteIntegrator: '<S292>/Integrator'
      if (rtDW.Integrator_PrevResetState_c <= 0) {
        rtDW.Integrator_DSTATE_o = 0.0F;
      }

      // DiscreteIntegrator: '<S292>/Integrator'
      rtDW.Integrator_o = rtDW.Integrator_DSTATE_o;

      // Sum: '<S301>/Sum'
      rtDW.Sum_nw = rtDW.PProdOut_g + rtDW.Integrator_o;

      // Saturate: '<S299>/Saturation'
      b_s_lat = rtDW.Sum_nw;
      if (b_s_lat > 0.261799F) {
        // Saturate: '<S299>/Saturation'
        rtDW.Saturation_pq = 0.261799F;
      } else if (b_s_lat < -0.261799F) {
        // Saturate: '<S299>/Saturation'
        rtDW.Saturation_pq = -0.261799F;
      } else {
        // Saturate: '<S299>/Saturation'
        rtDW.Saturation_pq = b_s_lat;
      }

      // End of Saturate: '<S299>/Saturation'

      // Sum: '<S197>/Sum1'
      rtDW.Sum1_l = rtDW.Saturation_pq - rtDW.Product_l;

      // Saturate: '<S197>/Saturation'
      b_s_lat = rtDW.Sum1_l;
      if (b_s_lat > 0.261799F) {
        // Saturate: '<S197>/Saturation'
        rtDW.Saturation_a = 0.261799F;
      } else if (b_s_lat < -0.261799F) {
        // Saturate: '<S197>/Saturation'
        rtDW.Saturation_a = -0.261799F;
      } else {
        // Saturate: '<S197>/Saturation'
        rtDW.Saturation_a = b_s_lat;
      }

      // End of Saturate: '<S197>/Saturation'

      // DeadZone: '<S285>/DeadZone'
      if (rtDW.Sum_nw > 0.261799F) {
        // DeadZone: '<S285>/DeadZone'
        rtDW.DeadZone_k = rtDW.Sum_nw - 0.261799F;
      } else if (rtDW.Sum_nw >= -0.261799F) {
        // DeadZone: '<S285>/DeadZone'
        rtDW.DeadZone_k = 0.0F;
      } else {
        // DeadZone: '<S285>/DeadZone'
        rtDW.DeadZone_k = rtDW.Sum_nw - -0.261799F;
      }

      // End of DeadZone: '<S285>/DeadZone'

      // RelationalOperator: '<S283>/Relational Operator' incorporates:
      //   Constant: '<S283>/Constant5'
      rtDW.RelationalOperator_a = (rtDW.DeadZone_k != 0.0F);

      // RelationalOperator: '<S283>/fix for DT propagation issue' incorporates:
      //   Constant: '<S283>/Constant5'
      rtDW.fixforDTpropagationissue_md = (rtDW.DeadZone_k > 0.0F);

      // Switch: '<S283>/Switch1'
      if (rtDW.fixforDTpropagationissue_md) {
        // Switch: '<S283>/Switch1' incorporates:
        //   Constant: '<S283>/Constant'
        rtDW.Switch1_a = 1;
      } else {
        // Switch: '<S283>/Switch1' incorporates:
        //   Constant: '<S283>/Constant2'
        rtDW.Switch1_a = -1;
      }

      // End of Switch: '<S283>/Switch1'

      // Product: '<S289>/IProd Out' incorporates:
      //   Constant: '<S197>/Constant3'
      rtDW.IProdOut_eh = rtDW.Sum_m * 0.01F;

      // RelationalOperator: '<S283>/fix for DT propagation issue1' incorporates:
      //   Constant: '<S283>/Constant5'
      rtDW.fixforDTpropagationissue1_a = (rtDW.IProdOut_eh > 0.0F);

      // Switch: '<S283>/Switch2'
      if (rtDW.fixforDTpropagationissue1_a) {
        // Switch: '<S283>/Switch2' incorporates:
        //   Constant: '<S283>/Constant3'
        rtDW.Switch2_ei = 1;
      } else {
        // Switch: '<S283>/Switch2' incorporates:
        //   Constant: '<S283>/Constant4'
        rtDW.Switch2_ei = -1;
      }

      // End of Switch: '<S283>/Switch2'

      // RelationalOperator: '<S283>/Equal1'
      rtDW.Equal1_f = (rtDW.Switch1_a == rtDW.Switch2_ei);

      // Logic: '<S283>/AND3'
      rtDW.AND3_g = (rtDW.RelationalOperator_a && rtDW.Equal1_f);

      // Switch: '<S283>/Switch'
      if (rtDW.AND3_g) {
        // Switch: '<S283>/Switch' incorporates:
        //   Constant: '<S283>/Constant1'
        rtDW.Switch_f2 = 0.0F;
      } else {
        // Switch: '<S283>/Switch'
        rtDW.Switch_f2 = rtDW.IProdOut_eh;
      }

      // End of Switch: '<S283>/Switch'

      // SignalConversion generated from: '<S3>/Command out'
      rtDW.yaw_rate_cmd_radps_c53 = rtDW.yaw_rate_cmd_radps;

      // Gain: '<S3>/Gain'
      rtDW.throttle_cc_i = rtDW.ve_z_cmd_mps;

      // Update for UnitDelay: '<S198>/Unit Delay'
      rtDW.UnitDelay_DSTATE_gw = true;

      // Update for UnitDelay: '<S313>/Delay Input1'
      //
      //  Block description for '<S313>/Delay Input1':
      //
      //   Store in Global RAM
      rtDW.DelayInput1_DSTATE_p = rtDW.UnitDelay_kx;

      // Update for UnitDelay: '<S201>/Unit Delay'
      rtDW.UnitDelay_DSTATE_b = rtDW.filtered_val_l;

      // Update for UnitDelay: '<S199>/UD'
      //
      //  Block description for '<S199>/UD':
      //
      //   Store in Global RAM
      rtDW.UD_DSTATE_o = rtDW.TSamp_d;

      // Update for UnitDelay: '<S202>/Unit Delay'
      rtDW.UnitDelay_DSTATE_g = rtDW.filtered_val_p;

      // Update for DiscreteIntegrator: '<S236>/Integrator'
      rtDW.Integrator_DSTATE_p += 0.005F * rtDW.Switch_gh;
      rtDW.Integrator_PrevResetState_k = 1;

      // Update for UnitDelay: '<S257>/Unit Delay'
      rtDW.UnitDelay_DSTATE_e = rtDW.filtered_val_o;

      // Update for UnitDelay: '<S255>/UD'
      //
      //  Block description for '<S255>/UD':
      //
      //   Store in Global RAM
      rtDW.UD_DSTATE_p = rtDW.TSamp_a;

      // Update for UnitDelay: '<S258>/Unit Delay'
      rtDW.UnitDelay_DSTATE_d = rtDW.filtered_val;

      // Update for DiscreteIntegrator: '<S292>/Integrator'
      rtDW.Integrator_DSTATE_o += 0.005F * rtDW.Switch_f2;
      rtDW.Integrator_PrevResetState_c = 1;
    } else {
      rtDW.POS_HOLDCONTROLLER_MODE = false;
    }

    // End of Outputs for SubSystem: '<Root>/POS_HOLD CONTROLLER'

    // UnitDelay: '<S80>/Unit Delay'
    rtDW.UnitDelay_g = rtDW.UnitDelay_DSTATE_k;

    // RelationalOperator: '<S12>/Compare' incorporates:
    //   Constant: '<S12>/Constant'
    rtDW.Compare_n = (rtDW.mode_type_conversion == 0);

    // Logic: '<Root>/motor_armed AND mode_0'
    rtDW.motor_armedANDmode_0 = (rtDW.nav_initANDmotor_enable && rtDW.Compare_n);

    // Outputs for Enabled SubSystem: '<Root>/Stab_input_conversion' incorporates:
    //   EnablePort: '<S4>/Enable'
    if (rtDW.motor_armedANDmode_0) {
      // RelationalOperator: '<S371>/Compare' incorporates:
      //   Constant: '<S371>/Constant'
      rtDW.Compare_f = (rtDW.norm_out_p <= 0.03F);

      // Gain: '<S4>/Gain'
      rtDW.Gain_cj = -rtDW.norm_out_o;

      // Product: '<S4>/Product1' incorporates:
      //   Constant: '<S4>/Constant'
      rtDW.pitch_angle_cmd_rad_g = rtDW.Gain_cj * 0.261799F;

      // Product: '<S4>/Product' incorporates:
      //   Constant: '<S4>/Constant2'
      rtDW.yaw_rate_cmd_radps_o5m = rtDW.norm_out * 3.14159F;

      // Product: '<S4>/Product2' incorporates:
      //   Constant: '<S4>/Constant1'
      rtDW.roll_angle_cmd_rad_d = rtDW.norm_out_d * 0.261799F;

      // MATLAB Function: '<S372>/remap1' incorporates:
      //   Constant: '<S372>/Constant4'
      //   Constant: '<S372>/Constant5'
      //   Constant: '<S372>/Constant6'
      //   Constant: '<S372>/Constant7'
      remap1(rtDW.norm_out_p, 0.0F, 1.0F, 0.15F, 1.0F, &rtDW.norm_out_j);
    }

    // End of Outputs for SubSystem: '<Root>/Stab_input_conversion'

    // Logic: '<Root>/NOT'
    rtDW.NOT_o = !rtDW.motor_armedANDmode_0;

    // Switch generated from: '<Root>/Switch'
    if (rtDW.NOT_o) {
      // Switch generated from: '<Root>/Switch'
      rtDW.roll_angle_cmd_rad = rtDW.Saturation_a;
    } else {
      // Switch generated from: '<Root>/Switch'
      rtDW.roll_angle_cmd_rad = rtDW.roll_angle_cmd_rad_d;
    }

    // MATLAB Function: '<S80>/MATLAB Function' incorporates:
    //   Constant: '<S18>/Constant6'
    //   Constant: '<S80>/Constant'
    MATLABFunction(rtDW.UnitDelay_g, rtDW.roll_angle_cmd_rad, 10.0F, 200.0F,
                   &rtDW.filtered_val_g);

    // Sum: '<S18>/stab_roll_angle_error_calc' incorporates:
    //   Inport: '<Root>/INS Data'
    rtDW.roll_angle_error = rtDW.filtered_val_g - bfs_ins.roll_rad;

    // Product: '<S18>/Product1' incorporates:
    //   Constant: '<S18>/Constant4'
    rtDW.Product1_e = rtDW.roll_angle_error * 7.0F;

    // RelationalOperator: '<S78>/LowerRelop1' incorporates:
    //   Constant: '<S18>/Constant5'
    rtDW.LowerRelop1 = (rtDW.Product1_e > 3.83972F);

    // Switch: '<S78>/Switch2'
    if (rtDW.LowerRelop1) {
      // Switch: '<S78>/Switch2' incorporates:
      //   Constant: '<S18>/Constant5'
      rtDW.Switch2_e = 3.83972F;
    } else {
      // RelationalOperator: '<S78>/UpperRelop'
      rtDW.UpperRelop_b = (rtDW.Product1_e < -3.83972F);

      // Switch: '<S78>/Switch'
      if (rtDW.UpperRelop_b) {
        // Switch: '<S78>/Switch'
        rtDW.Switch_n = -3.83972F;
      } else {
        // Switch: '<S78>/Switch'
        rtDW.Switch_n = rtDW.Product1_e;
      }

      // End of Switch: '<S78>/Switch'

      // Switch: '<S78>/Switch2'
      rtDW.Switch2_e = rtDW.Switch_n;
    }

    // End of Switch: '<S78>/Switch2'

    // UnitDelay: '<S23>/Unit Delay'
    rtDW.UnitDelay_i = rtDW.UnitDelay_DSTATE_o;

    // Switch generated from: '<Root>/Switch'
    if (rtDW.NOT_o) {
      // Switch generated from: '<Root>/Switch'
      rtDW.pitch_angle_cmd_rad = rtDW.Gain_m;
    } else {
      // Switch generated from: '<Root>/Switch'
      rtDW.pitch_angle_cmd_rad = rtDW.pitch_angle_cmd_rad_g;
    }

    // MATLAB Function: '<S23>/MATLAB Function' incorporates:
    //   Constant: '<S17>/Constant6'
    //   Constant: '<S23>/Constant'
    MATLABFunction(rtDW.UnitDelay_i, rtDW.pitch_angle_cmd_rad, 1.0F, 200.0F,
                   &rtDW.filtered_val_f);

    // Sum: '<S17>/stab_pitch_angle_error_calc' incorporates:
    //   Inport: '<Root>/INS Data'
    rtDW.pitcherror = rtDW.filtered_val_f - bfs_ins.pitch_rad;

    // Product: '<S17>/Product1' incorporates:
    //   Constant: '<S17>/Constant4'
    rtDW.Product1_o = rtDW.pitcherror * 7.0F;

    // RelationalOperator: '<S21>/LowerRelop1' incorporates:
    //   Constant: '<S17>/Constant5'
    rtDW.LowerRelop1_i = (rtDW.Product1_o > 3.83972F);

    // Switch: '<S21>/Switch2'
    if (rtDW.LowerRelop1_i) {
      // Switch: '<S21>/Switch2' incorporates:
      //   Constant: '<S17>/Constant5'
      rtDW.Switch2_o0 = 3.83972F;
    } else {
      // RelationalOperator: '<S21>/UpperRelop'
      rtDW.UpperRelop_e = (rtDW.Product1_o < -3.83972F);

      // Switch: '<S21>/Switch'
      if (rtDW.UpperRelop_e) {
        // Switch: '<S21>/Switch'
        rtDW.Switch_a = -3.83972F;
      } else {
        // Switch: '<S21>/Switch'
        rtDW.Switch_a = rtDW.Product1_o;
      }

      // End of Switch: '<S21>/Switch'

      // Switch: '<S21>/Switch2'
      rtDW.Switch2_o0 = rtDW.Switch_a;
    }

    // End of Switch: '<S21>/Switch2'

    // Switch generated from: '<Root>/Switch'
    if (rtDW.NOT_o) {
      // Switch generated from: '<Root>/Switch'
      rtDW.yaw_rate_cmd_radps_o = rtDW.yaw_rate_cmd_radps_c53;
    } else {
      // Switch generated from: '<Root>/Switch'
      rtDW.yaw_rate_cmd_radps_o = rtDW.yaw_rate_cmd_radps_o5m;
    }

    // RelationalOperator: '<S134>/Compare' incorporates:
    //   Constant: '<S134>/Constant'
    rtDW.Compare_mw = (rtDW.yaw_rate_cmd_radps_o == 0.0F);

    // Logic: '<S19>/NOT'
    rtDW.NOT_a = !rtDW.Compare_mw;

    // Outputs for Enabled SubSystem: '<S19>/set_tar_heading when heading_rate_cmd == 0' incorporates:
    //   EnablePort: '<S138>/Enable'
    if (rtDW.NOT_a) {
      // SignalConversion generated from: '<S138>/heading_rad' incorporates:
      //   Inport: '<Root>/INS Data'
      rtDW.heading_rad = bfs_ins.heading_rad;

      // Switch: '<S19>/Switch'
      rtDW.yaw_rate_cmd = rtDW.yaw_rate_cmd_radps_o;
    } else {
      // Sum: '<S137>/Subtract' incorporates:
      //   Inport: '<Root>/INS Data'
      //   Switch: '<S19>/Switch'
      rtDW.Subtract_c = rtDW.heading_rad - bfs_ins.heading_rad;

      // Abs: '<S137>/Abs' incorporates:
      //   Switch: '<S19>/Switch'
      rtDW.Abs_m = std::abs(rtDW.Subtract_c);

      // RelationalOperator: '<S141>/Compare' incorporates:
      //   Constant: '<S141>/Constant'
      //   Switch: '<S19>/Switch'
      rtDW.Compare_ma = (rtDW.Abs_m > 3.14159274F);

      // Switch: '<S137>/Switch' incorporates:
      //   Switch: '<S19>/Switch'
      if (rtDW.Compare_ma) {
        // Signum: '<S137>/Sign'
        b_s_lat = rtDW.Subtract_c;
        if (std::isnan(b_s_lat)) {
          // Signum: '<S137>/Sign'
          rtDW.Sign = b_s_lat;
        } else if (b_s_lat < 0.0F) {
          // Signum: '<S137>/Sign'
          rtDW.Sign = -1.0F;
        } else {
          // Signum: '<S137>/Sign'
          rtDW.Sign = (b_s_lat > 0.0F);
        }

        // End of Signum: '<S137>/Sign'

        // Product: '<S137>/Product' incorporates:
        //   Constant: '<S137>/Constant'
        rtDW.Product_en = rtDW.Sign * 6.28318548F;

        // Sum: '<S137>/Subtract1'
        rtDW.Subtract1 = rtDW.Subtract_c - rtDW.Product_en;

        // Switch: '<S137>/Switch'
        rtDW.Switch_e = rtDW.Subtract1;
      } else {
        // Switch: '<S137>/Switch'
        rtDW.Switch_e = rtDW.Subtract_c;
      }

      // End of Switch: '<S137>/Switch'

      // Product: '<S19>/Product1' incorporates:
      //   Constant: '<S19>/Constant1'
      //   Switch: '<S19>/Switch'
      rtDW.Product1_n = rtDW.Switch_e * 6.0F;

      // RelationalOperator: '<S136>/LowerRelop1' incorporates:
      //   Constant: '<S19>/Constant'
      //   Switch: '<S19>/Switch'
      rtDW.LowerRelop1_d = (rtDW.Product1_n > 3.14159);

      // Switch: '<S136>/Switch2' incorporates:
      //   Switch: '<S19>/Switch'
      if (rtDW.LowerRelop1_d) {
        // Switch: '<S136>/Switch2' incorporates:
        //   Constant: '<S19>/Constant'
        rtDW.Switch2_j = 3.14159F;
      } else {
        // RelationalOperator: '<S136>/UpperRelop'
        rtDW.UpperRelop_g = (rtDW.Product1_n < -3.14159);

        // Switch: '<S136>/Switch'
        if (rtDW.UpperRelop_g) {
          // Switch: '<S136>/Switch'
          rtDW.Switch_j = -3.14159F;
        } else {
          // Switch: '<S136>/Switch'
          rtDW.Switch_j = rtDW.Product1_n;
        }

        // End of Switch: '<S136>/Switch'

        // Switch: '<S136>/Switch2'
        rtDW.Switch2_j = rtDW.Switch_j;
      }

      // End of Switch: '<S136>/Switch2'

      // Switch: '<S19>/Switch'
      rtDW.yaw_rate_cmd = rtDW.Switch2_j;
    }

    // End of Outputs for SubSystem: '<S19>/set_tar_heading when heading_rate_cmd == 0'

    // SignalConversion generated from: '<S7>/Bus Creator' incorporates:
    //   Inport: '<Root>/INS Data'
    rtDW.aux[0] = rtDW.norm_out_p;
    rtDW.aux[1] = rtDW.norm_out_o;
    rtDW.aux[2] = rtDW.norm_out_d;
    rtDW.aux[3] = rtDW.norm_out;
    rtDW.aux[4] = rtDW.norm_out_dm;
    rtDW.aux[5] = rtDW.norm_out_n;
    rtDW.aux[6] = rtDW.filtered_val_g;
    rtDW.aux[7] = bfs_ins.roll_rad;
    rtDW.aux[8] = rtDW.Switch2_e;
    rtDW.aux[9] = bfs_ins.gyro_radps[0];
    rtDW.aux[10] = rtDW.filtered_val_f;
    rtDW.aux[11] = bfs_ins.pitch_rad;
    rtDW.aux[12] = rtDW.Switch2_o0;
    rtDW.aux[13] = bfs_ins.gyro_radps[1];
    rtDW.aux[14] = rtDW.yaw_rate_cmd;
    rtDW.aux[15] = bfs_ins.gyro_radps[2];
    rtDW.aux[16] = rtDW.filtered_val_p;
    rtDW.aux[17] = rtDW.vb_xy_k[0];
    rtDW.aux[18] = rtDW.filtered_val;
    rtDW.aux[19] = rtDW.vb_xy_k[1];

    // DataTypeConversion: '<Root>/Cast To Single'
    rtDW.CastToSingle_p[0] = static_cast<real32_T>(rtDW.pos_xy_m[0]);

    // SignalConversion generated from: '<S7>/Bus Creator'
    rtDW.aux[20] = rtDW.CastToSingle_p[0];

    // DataTypeConversion: '<Root>/Cast To Single'
    rtDW.CastToSingle_p[1] = static_cast<real32_T>(rtDW.pos_xy_m[1]);

    // SignalConversion generated from: '<S7>/Bus Creator'
    rtDW.aux[21] = rtDW.CastToSingle_p[1];
    rtDW.aux[22] = 0.0F;
    rtDW.aux[23] = 0.0F;
    for (int32_T i{0}; i < 16; i++) {
      // SignalConversion generated from: '<S7>/Bus Creator'
      rtDW.sbus[i] = 0;
    }

    // Switch generated from: '<Root>/Switch'
    if (rtDW.NOT_o) {
      // Switch generated from: '<Root>/Switch'
      rtDW.throttle_cc = rtDW.throttle_cc_i;
    } else {
      // Switch generated from: '<Root>/Switch'
      rtDW.throttle_cc = rtDW.norm_out_j;
    }

    // Sum: '<S18>/stab_roll_angle_rate_error_calc' incorporates:
    //   Inport: '<Root>/INS Data'
    rtDW.roll_angle_error_b = rtDW.Switch2_e - bfs_ins.gyro_radps[0];

    // Product: '<S122>/PProd Out' incorporates:
    //   Constant: '<S18>/Constant2'
    rtDW.PProdOut_p = rtDW.roll_angle_error_b * 0.25F;

    // DiscreteIntegrator: '<S117>/Integrator'
    if ((rtDW.Compare_f && (rtDW.Integrator_PrevResetState <= 0)) ||
        ((!rtDW.Compare_f) && (rtDW.Integrator_PrevResetState == 1))) {
      rtDW.Integrator_DSTATE = 0.0F;
    }

    // DiscreteIntegrator: '<S117>/Integrator'
    rtDW.Integrator = rtDW.Integrator_DSTATE;

    // Sum: '<S126>/Sum'
    rtDW.Sum_l = rtDW.PProdOut_p + rtDW.Integrator;

    // Saturate: '<S124>/Saturation'
    b_s_lat = rtDW.Sum_l;
    if (b_s_lat > 1.0F) {
      // Saturate: '<S124>/Saturation'
      rtDW.Saturation_m = 1.0F;
    } else if (b_s_lat < -1.0F) {
      // Saturate: '<S124>/Saturation'
      rtDW.Saturation_m = -1.0F;
    } else {
      // Saturate: '<S124>/Saturation'
      rtDW.Saturation_m = b_s_lat;
    }

    // End of Saturate: '<S124>/Saturation'

    // UnitDelay: '<S79>/Unit Delay'
    rtDW.UnitDelay_if = rtDW.UnitDelay_DSTATE_h;

    // MATLAB Function: '<S79>/MATLAB Function' incorporates:
    //   Constant: '<S18>/Constant'
    //   Constant: '<S79>/Constant'
    //   Inport: '<Root>/INS Data'
    MATLABFunction(rtDW.UnitDelay_if, bfs_ins.gyro_radps[0], 10.0F, 200.0F,
                   &rtDW.filtered_val_e);

    // SampleTimeMath: '<S77>/TSamp'
    //
    //  About '<S77>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )
    rtDW.TSamp = rtDW.filtered_val_e * 200.0F;

    // UnitDelay: '<S77>/UD'
    //
    //  Block description for '<S77>/UD':
    //
    //   Store in Global RAM
    rtDW.Uk1 = rtDW.UD_DSTATE;

    // Sum: '<S17>/stab_pitch_angle_rate_error_calc' incorporates:
    //   Inport: '<Root>/INS Data'
    rtDW.pitcherror_k = rtDW.Switch2_o0 - bfs_ins.gyro_radps[1];

    // Product: '<S65>/PProd Out' incorporates:
    //   Constant: '<S17>/Constant'
    rtDW.PProdOut_i = rtDW.pitcherror_k * 0.25F;

    // DiscreteIntegrator: '<S60>/Integrator'
    if ((rtDW.Compare_f && (rtDW.Integrator_PrevResetState_e <= 0)) ||
        ((!rtDW.Compare_f) && (rtDW.Integrator_PrevResetState_e == 1))) {
      rtDW.Integrator_DSTATE_d = 0.0F;
    }

    // DiscreteIntegrator: '<S60>/Integrator'
    rtDW.Integrator_g = rtDW.Integrator_DSTATE_d;

    // Sum: '<S69>/Sum'
    rtDW.Sum_lv = rtDW.PProdOut_i + rtDW.Integrator_g;

    // Saturate: '<S67>/Saturation'
    b_s_lat = rtDW.Sum_lv;
    if (b_s_lat > 1.0F) {
      // Saturate: '<S67>/Saturation'
      rtDW.Saturation_p = 1.0F;
    } else if (b_s_lat < -1.0F) {
      // Saturate: '<S67>/Saturation'
      rtDW.Saturation_p = -1.0F;
    } else {
      // Saturate: '<S67>/Saturation'
      rtDW.Saturation_p = b_s_lat;
    }

    // End of Saturate: '<S67>/Saturation'

    // UnitDelay: '<S22>/Unit Delay'
    rtDW.UnitDelay_l = rtDW.UnitDelay_DSTATE_c;

    // MATLAB Function: '<S22>/MATLAB Function' incorporates:
    //   Constant: '<S17>/Constant3'
    //   Constant: '<S22>/Constant'
    //   Inport: '<Root>/INS Data'
    MATLABFunction(rtDW.UnitDelay_l, bfs_ins.gyro_radps[1], 10.0F, 200.0F,
                   &rtDW.filtered_val_lj);

    // SampleTimeMath: '<S20>/TSamp'
    //
    //  About '<S20>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )
    rtDW.TSamp_j = rtDW.filtered_val_lj * 200.0F;

    // UnitDelay: '<S20>/UD'
    //
    //  Block description for '<S20>/UD':
    //
    //   Store in Global RAM
    rtDW.Uk1_j = rtDW.UD_DSTATE_l;

    // Sum: '<S19>/stab_yaw_rate_error_calc' incorporates:
    //   Inport: '<Root>/INS Data'
    rtDW.stab_yaw_rate_error_calc = rtDW.yaw_rate_cmd - bfs_ins.gyro_radps[2];

    // Product: '<S180>/PProd Out' incorporates:
    //   Constant: '<S19>/Constant2'
    rtDW.PProdOut_j = rtDW.stab_yaw_rate_error_calc * 0.3F;

    // DiscreteIntegrator: '<S175>/Integrator'
    if ((rtDW.Compare_f && (rtDW.Integrator_PrevResetState_i <= 0)) ||
        ((!rtDW.Compare_f) && (rtDW.Integrator_PrevResetState_i == 1))) {
      rtDW.Integrator_DSTATE_dd = 0.0F;
    }

    // DiscreteIntegrator: '<S175>/Integrator'
    rtDW.Integrator_i = rtDW.Integrator_DSTATE_dd;

    // Sum: '<S184>/Sum'
    rtDW.Sum_g = rtDW.PProdOut_j + rtDW.Integrator_i;

    // Saturate: '<S182>/Saturation'
    b_s_lat = rtDW.Sum_g;
    if (b_s_lat > 1.0F) {
      // Saturate: '<S182>/Saturation'
      rtDW.Saturation_b = 1.0F;
    } else if (b_s_lat < -1.0F) {
      // Saturate: '<S182>/Saturation'
      rtDW.Saturation_b = -1.0F;
    } else {
      // Saturate: '<S182>/Saturation'
      rtDW.Saturation_b = b_s_lat;
    }

    // End of Saturate: '<S182>/Saturation'

    // UnitDelay: '<S140>/Unit Delay'
    rtDW.UnitDelay_m = rtDW.UnitDelay_DSTATE_l;

    // MATLAB Function: '<S140>/MATLAB Function' incorporates:
    //   Constant: '<S140>/Constant'
    //   Constant: '<S19>/Constant5'
    //   Inport: '<Root>/INS Data'
    MATLABFunction(rtDW.UnitDelay_m, bfs_ins.gyro_radps[2], 10.0F, 200.0F,
                   &rtDW.filtered_val_k);

    // SampleTimeMath: '<S135>/TSamp'
    //
    //  About '<S135>/TSamp':
    //   y = u * K where K = 1 / ( w * Ts )
    rtDW.TSamp_jb = rtDW.filtered_val_k * 200.0F;

    // UnitDelay: '<S135>/UD'
    //
    //  Block description for '<S135>/UD':
    //
    //   Store in Global RAM
    rtDW.Uk1_e = rtDW.UD_DSTATE_d;

    // Switch: '<S16>/emergency_switch'
    if (rtDW.nav_initANDmotor_enable) {
      // Switch: '<S2>/Switch'
      if (rtDW.Compare_f) {
        // Switch: '<S2>/Switch'
        std::memset(&rtDW.Switch[0], 0, sizeof(real_T) << 3U);
      } else {
        // Sum: '<S135>/Diff'
        //
        //  Block description for '<S135>/Diff':
        //
        //   Add in CPU
        rtDW.Diff = rtDW.TSamp_jb - rtDW.Uk1_e;

        // Product: '<S19>/Product' incorporates:
        //   Constant: '<S19>/Constant4'
        rtDW.Product_k = rtDW.Diff * 0.01F;

        // Sum: '<S19>/Sum'
        rtDW.Sum_b = rtDW.Saturation_b - rtDW.Product_k;

        // Sum: '<S20>/Diff'
        //
        //  Block description for '<S20>/Diff':
        //
        //   Add in CPU
        rtDW.Diff_f = rtDW.TSamp_j - rtDW.Uk1_j;

        // Product: '<S17>/Product' incorporates:
        //   Constant: '<S17>/Constant2'
        rtDW.Product_c = rtDW.Diff_f * 0.01F;

        // Sum: '<S17>/Sum'
        rtDW.Sum_gf = rtDW.Saturation_p - rtDW.Product_c;

        // Sum: '<S77>/Diff'
        //
        //  Block description for '<S77>/Diff':
        //
        //   Add in CPU
        rtDW.Diff_k = rtDW.TSamp - rtDW.Uk1;

        // Product: '<S18>/Product' incorporates:
        //   Constant: '<S18>/Constant1'
        rtDW.Product_e = rtDW.Diff_k * 0.01F;

        // Sum: '<S18>/Sum'
        rtDW.Sum_n = rtDW.Saturation_m - rtDW.Product_e;

        // Reshape: '<S2>/Reshape'
        rtDW.Reshape[0] = rtDW.throttle_cc;
        rtDW.Reshape[1] = rtDW.Sum_n;
        rtDW.Reshape[2] = rtDW.Sum_gf;
        rtDW.Reshape[3] = rtDW.Sum_b;

        // Product: '<S2>/Multiply' incorporates:
        //   Math: '<S2>/Transpose'
        //   Reshape: '<S2>/Reshape'
        b_s_lat = rtDW.Reshape[0];
        d_c_lat = rtDW.Reshape[1];
        b_c_lon = rtDW.Reshape[2];
        b_s_lon = rtDW.Reshape[3];
        tmp_0 = &rtConstB.Transpose[0];
        for (int32_T i{0}; i < 8; i++) {
          // Product: '<S2>/Multiply'
          rtDW.Command[i] = 0.0F;
          rtDW.Command[i] += tmp_0[i << 2] * b_s_lat;
          rtDW.Command[i] += tmp_0[(i << 2) + 1] * d_c_lat;
          rtDW.Command[i] += tmp_0[(i << 2) + 2] * b_c_lon;
          rtDW.Command[i] += tmp_0[(i << 2) + 3] * b_s_lon;

          // Switch: '<S2>/Switch' incorporates:
          //   Product: '<S2>/Multiply'
          rtDW.Switch[i] = rtDW.Command[i];
        }
      }

      // End of Switch: '<S2>/Switch'
      for (int32_T i{0}; i < 8; i++) {
        // RelationalOperator: '<S193>/UpperRelop' incorporates:
        //   Constant: '<S2>/Constant1'
        //   Switch: '<S2>/Switch'
        rtDW.UpperRelop[i] = (rtDW.Switch[i] < 0.15);

        // Switch: '<S193>/Switch' incorporates:
        //   Constant: '<S2>/Constant1'
        //   RelationalOperator: '<S193>/UpperRelop'
        //   Switch: '<S2>/Switch'
        if (rtDW.UpperRelop[i]) {
          rtDW.Switch_k[i] = 0.15;
        } else {
          rtDW.Switch_k[i] = rtDW.Switch[i];
        }

        // End of Switch: '<S193>/Switch'

        // RelationalOperator: '<S193>/LowerRelop1' incorporates:
        //   Constant: '<S2>/Constant'
        //   Switch: '<S2>/Switch'
        rtDW.LowerRelop1_n[i] = (rtDW.Switch[i] > 1.0);

        // Switch: '<S193>/Switch2' incorporates:
        //   Constant: '<S2>/Constant'
        //   RelationalOperator: '<S193>/LowerRelop1'
        //   Switch: '<S193>/Switch'
        if (rtDW.LowerRelop1_n[i]) {
          rtDW.Switch2[i] = 1.0;
        } else {
          rtDW.Switch2[i] = rtDW.Switch_k[i];
        }

        // End of Switch: '<S193>/Switch2'

        // Switch: '<S16>/emergency_switch' incorporates:
        //   Switch: '<S193>/Switch2'
        rtDW.emergency_switch[i] = rtDW.Switch2[i];
      }
    } else {
      // Switch: '<S16>/emergency_switch'
      std::memset(&rtDW.emergency_switch[0], 0, sizeof(real_T) << 3U);
    }

    // End of Switch: '<S16>/emergency_switch'
    for (int32_T i{0}; i < 8; i++) {
      // MATLAB Function: '<S496>/remap' incorporates:
      //   Constant: '<S496>/Constant1'
      //   Switch: '<S16>/emergency_switch'
      rtDW.raw_out[i] = static_cast<real32_T>(rtDW.emergency_switch[i]) * 850.0F
        + 1100.0F;

      // DataTypeConversion: '<S9>/Data Type Conversion'
      rtDW.BusCreator.pwm[i] = static_cast<int16_T>(std::floor(rtDW.raw_out[i]));
    }

    // Logic: '<Root>/AND'
    rtDW.BusCreator.advance_waypoint = (rtDW.motor_armedANDmode_2 &&
      rtDW.reached);

    // Gain: '<Root>/Gain'
    rtDW.BusCreator.throttle_cmd_prcnt = 100.0F * rtDW.throttle_cc;

    // BusCreator: '<S7>/Bus Creator'
    rtDW.BusCreator.motors_enabled = rtDW.nav_initANDmotor_enable;
    rtDW.BusCreator.mode = rtDW.mode_type_conversion;
    for (int32_T i{0}; i < 16; i++) {
      rtDW.BusCreator.sbus[i] = rtDW.sbus[i];
    }

    rtDW.BusCreator.flight_time_remaining_s = 0.0F;
    rtDW.BusCreator.power_remaining_prcnt = 0.0F;
    std::memcpy(&rtDW.BusCreator.aux[0], &rtDW.aux[0], 24U * sizeof(real32_T));

    // End of BusCreator: '<S7>/Bus Creator'

    // Outport: '<Root>/VmsData'
    *vms = rtDW.BusCreator;

    // DeadZone: '<S168>/DeadZone'
    if (rtDW.Sum_g > 1.0F) {
      // DeadZone: '<S168>/DeadZone'
      rtDW.DeadZone = rtDW.Sum_g - 1.0F;
    } else if (rtDW.Sum_g >= -1.0F) {
      // DeadZone: '<S168>/DeadZone'
      rtDW.DeadZone = 0.0F;
    } else {
      // DeadZone: '<S168>/DeadZone'
      rtDW.DeadZone = rtDW.Sum_g - -1.0F;
    }

    // End of DeadZone: '<S168>/DeadZone'

    // RelationalOperator: '<S166>/Relational Operator' incorporates:
    //   Constant: '<S166>/Constant5'
    rtDW.RelationalOperator = (rtDW.DeadZone != 0.0F);

    // RelationalOperator: '<S166>/fix for DT propagation issue' incorporates:
    //   Constant: '<S166>/Constant5'
    rtDW.fixforDTpropagationissue = (rtDW.DeadZone > 0.0F);

    // Switch: '<S166>/Switch1'
    if (rtDW.fixforDTpropagationissue) {
      // Switch: '<S166>/Switch1' incorporates:
      //   Constant: '<S166>/Constant'
      rtDW.Switch1 = 1;
    } else {
      // Switch: '<S166>/Switch1' incorporates:
      //   Constant: '<S166>/Constant2'
      rtDW.Switch1 = -1;
    }

    // End of Switch: '<S166>/Switch1'

    // Product: '<S172>/IProd Out' incorporates:
    //   Constant: '<S19>/Constant3'
    rtDW.IProdOut = rtDW.stab_yaw_rate_error_calc * 0.1F;

    // RelationalOperator: '<S166>/fix for DT propagation issue1' incorporates:
    //   Constant: '<S166>/Constant5'
    rtDW.fixforDTpropagationissue1 = (rtDW.IProdOut > 0.0F);

    // Switch: '<S166>/Switch2'
    if (rtDW.fixforDTpropagationissue1) {
      // Switch: '<S166>/Switch2' incorporates:
      //   Constant: '<S166>/Constant3'
      rtDW.Switch2_a = 1;
    } else {
      // Switch: '<S166>/Switch2' incorporates:
      //   Constant: '<S166>/Constant4'
      rtDW.Switch2_a = -1;
    }

    // End of Switch: '<S166>/Switch2'

    // RelationalOperator: '<S166>/Equal1'
    rtDW.Equal1 = (rtDW.Switch1 == rtDW.Switch2_a);

    // Logic: '<S166>/AND3'
    rtDW.AND3 = (rtDW.RelationalOperator && rtDW.Equal1);

    // Switch: '<S166>/Switch'
    if (rtDW.AND3) {
      // Switch: '<S166>/Switch' incorporates:
      //   Constant: '<S166>/Constant1'
      rtDW.Switch_c = 0.0F;
    } else {
      // Switch: '<S166>/Switch'
      rtDW.Switch_c = rtDW.IProdOut;
    }

    // End of Switch: '<S166>/Switch'

    // DeadZone: '<S53>/DeadZone'
    if (rtDW.Sum_lv > 1.0F) {
      // DeadZone: '<S53>/DeadZone'
      rtDW.DeadZone_j = rtDW.Sum_lv - 1.0F;
    } else if (rtDW.Sum_lv >= -1.0F) {
      // DeadZone: '<S53>/DeadZone'
      rtDW.DeadZone_j = 0.0F;
    } else {
      // DeadZone: '<S53>/DeadZone'
      rtDW.DeadZone_j = rtDW.Sum_lv - -1.0F;
    }

    // End of DeadZone: '<S53>/DeadZone'

    // RelationalOperator: '<S51>/Relational Operator' incorporates:
    //   Constant: '<S51>/Constant5'
    rtDW.RelationalOperator_o = (rtDW.DeadZone_j != 0.0F);

    // RelationalOperator: '<S51>/fix for DT propagation issue' incorporates:
    //   Constant: '<S51>/Constant5'
    rtDW.fixforDTpropagationissue_m = (rtDW.DeadZone_j > 0.0F);

    // Switch: '<S51>/Switch1'
    if (rtDW.fixforDTpropagationissue_m) {
      // Switch: '<S51>/Switch1' incorporates:
      //   Constant: '<S51>/Constant'
      rtDW.Switch1_e = 1;
    } else {
      // Switch: '<S51>/Switch1' incorporates:
      //   Constant: '<S51>/Constant2'
      rtDW.Switch1_e = -1;
    }

    // End of Switch: '<S51>/Switch1'

    // Product: '<S57>/IProd Out' incorporates:
    //   Constant: '<S17>/Constant1'
    rtDW.IProdOut_c = rtDW.pitcherror_k * 0.2F;

    // RelationalOperator: '<S51>/fix for DT propagation issue1' incorporates:
    //   Constant: '<S51>/Constant5'
    rtDW.fixforDTpropagationissue1_d = (rtDW.IProdOut_c > 0.0F);

    // Switch: '<S51>/Switch2'
    if (rtDW.fixforDTpropagationissue1_d) {
      // Switch: '<S51>/Switch2' incorporates:
      //   Constant: '<S51>/Constant3'
      rtDW.Switch2_at = 1;
    } else {
      // Switch: '<S51>/Switch2' incorporates:
      //   Constant: '<S51>/Constant4'
      rtDW.Switch2_at = -1;
    }

    // End of Switch: '<S51>/Switch2'

    // RelationalOperator: '<S51>/Equal1'
    rtDW.Equal1_n = (rtDW.Switch1_e == rtDW.Switch2_at);

    // Logic: '<S51>/AND3'
    rtDW.AND3_i = (rtDW.RelationalOperator_o && rtDW.Equal1_n);

    // Switch: '<S51>/Switch'
    if (rtDW.AND3_i) {
      // Switch: '<S51>/Switch' incorporates:
      //   Constant: '<S51>/Constant1'
      rtDW.Switch_g = 0.0F;
    } else {
      // Switch: '<S51>/Switch'
      rtDW.Switch_g = rtDW.IProdOut_c;
    }

    // End of Switch: '<S51>/Switch'

    // DeadZone: '<S110>/DeadZone'
    if (rtDW.Sum_l > 1.0F) {
      // DeadZone: '<S110>/DeadZone'
      rtDW.DeadZone_n = rtDW.Sum_l - 1.0F;
    } else if (rtDW.Sum_l >= -1.0F) {
      // DeadZone: '<S110>/DeadZone'
      rtDW.DeadZone_n = 0.0F;
    } else {
      // DeadZone: '<S110>/DeadZone'
      rtDW.DeadZone_n = rtDW.Sum_l - -1.0F;
    }

    // End of DeadZone: '<S110>/DeadZone'

    // RelationalOperator: '<S108>/Relational Operator' incorporates:
    //   Constant: '<S108>/Constant5'
    rtDW.RelationalOperator_h = (rtDW.DeadZone_n != 0.0F);

    // RelationalOperator: '<S108>/fix for DT propagation issue' incorporates:
    //   Constant: '<S108>/Constant5'
    rtDW.fixforDTpropagationissue_k = (rtDW.DeadZone_n > 0.0F);

    // Switch: '<S108>/Switch1'
    if (rtDW.fixforDTpropagationissue_k) {
      // Switch: '<S108>/Switch1' incorporates:
      //   Constant: '<S108>/Constant'
      rtDW.Switch1_p = 1;
    } else {
      // Switch: '<S108>/Switch1' incorporates:
      //   Constant: '<S108>/Constant2'
      rtDW.Switch1_p = -1;
    }

    // End of Switch: '<S108>/Switch1'

    // Product: '<S114>/IProd Out' incorporates:
    //   Constant: '<S18>/Constant3'
    rtDW.IProdOut_g = rtDW.roll_angle_error_b * 0.2F;

    // RelationalOperator: '<S108>/fix for DT propagation issue1' incorporates:
    //   Constant: '<S108>/Constant5'
    rtDW.fixforDTpropagationissue1_k = (rtDW.IProdOut_g > 0.0F);

    // Switch: '<S108>/Switch2'
    if (rtDW.fixforDTpropagationissue1_k) {
      // Switch: '<S108>/Switch2' incorporates:
      //   Constant: '<S108>/Constant3'
      rtDW.Switch2_or = 1;
    } else {
      // Switch: '<S108>/Switch2' incorporates:
      //   Constant: '<S108>/Constant4'
      rtDW.Switch2_or = -1;
    }

    // End of Switch: '<S108>/Switch2'

    // RelationalOperator: '<S108>/Equal1'
    rtDW.Equal1_j = (rtDW.Switch1_p == rtDW.Switch2_or);

    // Logic: '<S108>/AND3'
    rtDW.AND3_e = (rtDW.RelationalOperator_h && rtDW.Equal1_j);

    // Switch: '<S108>/Switch'
    if (rtDW.AND3_e) {
      // Switch: '<S108>/Switch' incorporates:
      //   Constant: '<S108>/Constant1'
      rtDW.Switch_b = 0.0F;
    } else {
      // Switch: '<S108>/Switch'
      rtDW.Switch_b = rtDW.IProdOut_g;
    }

    // End of Switch: '<S108>/Switch'

    // Update for UnitDelay: '<S512>/Unit Delay'
    rtDW.UnitDelay_DSTATE = rtDW.CastToSingle_a;

    // Update for UnitDelay: '<S80>/Unit Delay'
    rtDW.UnitDelay_DSTATE_k = rtDW.filtered_val_g;

    // Update for UnitDelay: '<S23>/Unit Delay'
    rtDW.UnitDelay_DSTATE_o = rtDW.filtered_val_f;

    // Update for DiscreteIntegrator: '<S117>/Integrator'
    rtDW.Integrator_DSTATE += 0.005F * rtDW.Switch_b;
    rtDW.Integrator_PrevResetState = static_cast<int8_T>(rtDW.Compare_f);

    // Update for UnitDelay: '<S79>/Unit Delay'
    rtDW.UnitDelay_DSTATE_h = rtDW.filtered_val_e;

    // Update for UnitDelay: '<S77>/UD'
    //
    //  Block description for '<S77>/UD':
    //
    //   Store in Global RAM
    rtDW.UD_DSTATE = rtDW.TSamp;

    // Update for DiscreteIntegrator: '<S60>/Integrator'
    rtDW.Integrator_DSTATE_d += 0.005F * rtDW.Switch_g;
    rtDW.Integrator_PrevResetState_e = static_cast<int8_T>(rtDW.Compare_f);

    // Update for UnitDelay: '<S22>/Unit Delay'
    rtDW.UnitDelay_DSTATE_c = rtDW.filtered_val_lj;

    // Update for UnitDelay: '<S20>/UD'
    //
    //  Block description for '<S20>/UD':
    //
    //   Store in Global RAM
    rtDW.UD_DSTATE_l = rtDW.TSamp_j;

    // Update for DiscreteIntegrator: '<S175>/Integrator'
    rtDW.Integrator_DSTATE_dd += 0.005F * rtDW.Switch_c;
    rtDW.Integrator_PrevResetState_i = static_cast<int8_T>(rtDW.Compare_f);

    // Update for UnitDelay: '<S140>/Unit Delay'
    rtDW.UnitDelay_DSTATE_l = rtDW.filtered_val_k;

    // Update for UnitDelay: '<S135>/UD'
    //
    //  Block description for '<S135>/UD':
    //
    //   Store in Global RAM
    rtDW.UD_DSTATE_d = rtDW.TSamp_jb;
  }

  // Model initialize function
  void Autocode::initialize()
  {
    // Registration code

    // initialize non-finites
    rt_InitInfAndNaN(sizeof(real_T));
    rtPrevZCX.manual_arming_Trig_ZCE = POS_ZCSIG;

    // InitializeConditions for DiscreteIntegrator: '<S117>/Integrator'
    rtDW.Integrator_PrevResetState = 2;

    // InitializeConditions for DiscreteIntegrator: '<S60>/Integrator'
    rtDW.Integrator_PrevResetState_e = 2;

    // InitializeConditions for DiscreteIntegrator: '<S175>/Integrator'
    rtDW.Integrator_PrevResetState_i = 2;

    // SystemInitialize for Enabled SubSystem: '<Root>/WAYPOINT CONTROLLER1'
    // InitializeConditions for UnitDelay: '<S492>/Delay Input1'
    //
    //  Block description for '<S492>/Delay Input1':
    //
    //   Store in Global RAM
    rtDW.DelayInput1_DSTATE = -1;

    // SystemInitialize for SignalConversion generated from: '<S8>/wp_command'
    rtDW.ve_z_cmd_mps_p = rtDW.ve_z_cmd_mps_p0;

    // SystemInitialize for SignalConversion generated from: '<S8>/wp_command'
    rtDW.yaw_rate_cmd_radps_c = rtDW.yaw_rate_cmd_radps_c5;

    // End of SystemInitialize for SubSystem: '<Root>/WAYPOINT CONTROLLER1'

    // SystemInitialize for Enabled SubSystem: '<Root>/POS_HOLD CONTROLLER'
    // InitializeConditions for DiscreteIntegrator: '<S236>/Integrator'
    rtDW.Integrator_PrevResetState_k = 2;

    // InitializeConditions for DiscreteIntegrator: '<S292>/Integrator'
    rtDW.Integrator_PrevResetState_c = 2;

    // End of SystemInitialize for SubSystem: '<Root>/POS_HOLD CONTROLLER'
  }

  // Constructor
  Autocode::Autocode():
    rtDW(),
    rtPrevZCX()
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
