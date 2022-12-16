//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: autocode.h
//
// Code generated for Simulink model 'malt'.
//
// Model version                  : 4.360
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Thu Dec 15 18:40:21 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: NXP->Cortex-M4
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_autocode_h_
#define RTW_HEADER_autocode_h_
#include "rtwtypes.h"
#include "global_defs.h"
#include <array>
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

#ifndef DEFINED_TYPEDEF_FOR_struct_S7q3KinsSoz6CjUl9QPj6B_
#define DEFINED_TYPEDEF_FOR_struct_S7q3KinsSoz6CjUl9QPj6B_

struct struct_S7q3KinsSoz6CjUl9QPj6B
{
  real32_T vb_x_cmd;
  real32_T vb_x;
  real32_T vb_y_cmd;
  real32_T vb_y;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_bJj7DeK7VQpDAMomUA5NpE_
#define DEFINED_TYPEDEF_FOR_struct_bJj7DeK7VQpDAMomUA5NpE_

struct struct_bJj7DeK7VQpDAMomUA5NpE
{
  real32_T ve_z_cmd_mps;
  real32_T vb_x_cmd_mps;
  real32_T vb_y_cmd_mps;
  real32_T yaw_rate_cmd_radps;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_WjDSCgipRzLiNSeRFfSBFD_
#define DEFINED_TYPEDEF_FOR_struct_WjDSCgipRzLiNSeRFfSBFD_

struct struct_WjDSCgipRzLiNSeRFfSBFD
{
  real32_T ve_z_cmd_mps;
  real_T vb_x_cmd_mps;
  real_T vb_y_cmd_mps;
  real32_T yaw_rate_cmd_radps;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_UyVWlQxKY1bB1qjRfNasTD_
#define DEFINED_TYPEDEF_FOR_struct_UyVWlQxKY1bB1qjRfNasTD_

struct struct_UyVWlQxKY1bB1qjRfNasTD
{
  real32_T dev_dist;
  real32_T dev_bearing;
};

#endif

extern "C" {
  static real_T rtGetNaN(void);
  static real32_T rtGetNaNF(void);
}                                      // extern "C"
  extern "C"
{
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

extern "C" {
  static real_T rtGetInf(void);
  static real32_T rtGetInfF(void);
  static real_T rtGetMinusInf(void);
  static real32_T rtGetMinusInfF(void);
}                                      // extern "C"
  // Class declaration for model malt
  namespace bfs
{
  class Autocode final
  {
    // public data and function members
   public:
    // Block signals and states (default storage) for system '<Root>'
    struct DW {
      VmsData BusCreator;              // '<S7>/Bus Creator'
      MissionItem Selector;            // '<S377>/Selector'
      MissionItem Selector1;           // '<S376>/Selector1'
      std::array<real_T, 8> emergency_switch;// '<S16>/emergency_switch'
      std::array<real_T, 8> Switch;    // '<S2>/Switch'
      std::array<real_T, 8> Switch_k;  // '<S189>/Switch'
      std::array<real_T, 8> Switch2;   // '<S189>/Switch2'
      std::array<real_T, 3> Subtract;  // '<S381>/Subtract'
      std::array<real_T, 2> Transpose; // '<S381>/Transpose'
      std::array<real_T, 2> TmpSignalConversionAtMagnitudeS;
      std::array<real_T, 2> MagnitudeSquared;// '<S386>/Magnitude Squared'
      std::array<real_T, 2> Switch_d;  // '<S386>/Switch'
      std::array<real_T, 2> vb_xy;     // '<S387>/Product'
      std::array<real_T, 2> Normalization1;// '<S386>/Normalization1'
      std::array<real_T, 2> Gain_f;    // '<S386>/Gain'
      std::array<real_T, 2> Subtract_o;// '<S313>/Subtract'
      std::array<real_T, 2> Transpose_o;// '<S313>/Transpose'
      std::array<real_T, 2> Switch_db; // '<S194>/Switch'
      std::array<real_T, 2> pos_xy_m;  // '<S311>/pos_xy_m'
      std::array<real_T, 2> TmpSignalConversionAtProductInp;
      std::array<real_T, 2> vb_xy_o;   // '<S316>/Product'
      std::array<real_T, 3> Subtract_DWORK1;// '<S381>/Subtract'
      real_T Add;                      // '<S510>/Add'
      real_T Gain;                     // '<S510>/Gain'
      real_T Abs1;                     // '<S511>/Abs1'
      real_T vb_x_cmd_mps;             // '<Root>/Switch1'
      real_T vb_y_cmd_mps;             // '<Root>/Switch1'
      real_T DiscreteTimeIntegrator;   // '<S513>/Discrete-Time Integrator'
      real_T Gain_d;                   // '<S513>/Gain'
      real_T Gain_n;                   // '<S376>/Gain'
      real_T Gain1;                    // '<S376>/Gain1'
      real_T MatrixMultiply;           // '<S381>/MatrixMultiply'
      real_T Sqrt;                     // '<S381>/Sqrt'
      real_T Saturation;               // '<S379>/Saturation'
      real_T PProdOut;                 // '<S473>/PProd Out'
      real_T Switch2_o;                // '<S476>/Switch2'
      real_T Atan2;                    // '<S381>/Atan2'
      real_T Cos;                      // '<S384>/Cos'
      real_T Product;                  // '<S384>/Product'
      real_T Sum;                      // '<S379>/Sum'
      real_T Sin;                      // '<S384>/Sin'
      real_T Product1;                 // '<S384>/Product1'
      real_T Sum1;                     // '<S379>/Sum1'
      real_T SumofElements;            // '<S386>/Sum of Elements'
      real_T Sqrt_p;                   // '<S386>/Sqrt'
      real_T Switch_f;                 // '<S476>/Switch'
      real_T MatrixMultiply_i;         // '<S313>/MatrixMultiply'
      real_T Sqrt_p1;                  // '<S313>/Sqrt'
      real_T Saturation_k;             // '<S312>/Saturation'
      real_T PProdOut_b;               // '<S353>/PProd Out'
      real_T Atan2_m;                  // '<S313>/Atan2'
      real_T Sin_f;                    // '<S315>/Sin'
      real_T Switch2_p;                // '<S356>/Switch2'
      real_T Product1_b;               // '<S315>/Product1'
      real_T Cos_m;                    // '<S315>/Cos'
      real_T Product_g;                // '<S315>/Product'
      real_T Switch_p;                 // '<S356>/Switch'
      real_T DiscreteTimeIntegrator_DSTATE;// '<S513>/Discrete-Time Integrator'
      real_T Add_DWORK1;               // '<S510>/Add'
      std::array<real32_T, 2> CastToSingle_p;// '<Root>/Cast To Single'
      std::array<real32_T, 24> aux;
      std::array<real32_T, 4> Reshape; // '<S2>/Reshape'
      std::array<real32_T, 8> Command; // '<S2>/Multiply'
      std::array<real32_T, 8> raw_out; // '<S492>/remap'
      std::array<real32_T, 3> UnitDelay_j;// '<S376>/Unit Delay'
      std::array<real32_T, 3> cur_target_pos;// '<S376>/determine_current_tar_pos' 
      std::array<real32_T, 4> Reshape_a;// '<S487>/Reshape'
      std::array<real32_T, 4> Reshape_g;// '<S191>/Reshape'
      std::array<real32_T, 2> vb_xy_k; // '<S190>/Product'
      std::array<real32_T, 4> Reshape_au;// '<S366>/Reshape'
      std::array<real32_T, 2> CastToSingle_o;// '<S194>/Cast To Single'
      std::array<real32_T, 3> UnitDelay_DSTATE_m;// '<S376>/Unit Delay'
      real32_T DataTypeConversion1;    // '<S10>/Data Type Conversion1'
      real32_T DataTypeConversion2;    // '<S10>/Data Type Conversion2'
      real32_T DataTypeConversion5;    // '<S10>/Data Type Conversion5'
      real32_T DataTypeConversion7;    // '<S10>/Data Type Conversion7'
      real32_T DataTypeConversion4;    // '<S10>/Data Type Conversion4'
      real32_T DataTypeConversion3;    // '<S10>/Data Type Conversion3'
      real32_T Abs1_d;                 // '<S507>/Abs1'
      real32_T CastToSingle;           // '<S510>/Cast To Single'
      real32_T UnitDelay;              // '<S508>/Unit Delay'
      real32_T Abs;                    // '<S508>/Abs'
      real32_T CastToSingle_a;         // '<S508>/Cast To Single'
      real32_T Sum_p;                  // '<S508>/Sum'
      real32_T ve_z_cmd_mps;           // '<Root>/Switch1'
      real32_T yaw_rate_cmd_radps;     // '<Root>/Switch1'
      real32_T roll_angle_cmd_rad;     // '<Root>/Switch'
      real32_T roll_angle_error;       // '<S18>/stab_roll_angle_error_calc'
      real32_T Product1_e;             // '<S18>/Product1'
      real32_T Switch2_e;              // '<S76>/Switch2'
      real32_T pitch_angle_cmd_rad;    // '<Root>/Switch'
      real32_T pitcherror;             // '<S17>/stab_pitch_angle_error_calc'
      real32_T Product1_o;             // '<S17>/Product1'
      real32_T Switch2_o0;             // '<S21>/Switch2'
      real32_T yaw_rate_cmd_radps_o;   // '<Root>/Switch'
      real32_T yaw_rate_cmd;           // '<S19>/Switch'
      real32_T throttle_cc;            // '<Root>/Switch'
      real32_T roll_angle_error_b;   // '<S18>/stab_roll_angle_rate_error_calc'
      real32_T PProdOut_p;             // '<S118>/PProd Out'
      real32_T Integrator;             // '<S113>/Integrator'
      real32_T Sum_l;                  // '<S122>/Sum'
      real32_T Saturation_m;           // '<S120>/Saturation'
      real32_T UnitDelay_i;            // '<S77>/Unit Delay'
      real32_T TSamp;                  // '<S75>/TSamp'
      real32_T Uk1;                    // '<S75>/UD'
      real32_T pitcherror_k;        // '<S17>/stab_pitch_angle_rate_error_calc'
      real32_T PProdOut_i;             // '<S63>/PProd Out'
      real32_T Integrator_g;           // '<S58>/Integrator'
      real32_T Sum_lv;                 // '<S67>/Sum'
      real32_T Saturation_p;           // '<S65>/Saturation'
      real32_T UnitDelay_l;            // '<S22>/Unit Delay'
      real32_T TSamp_j;                // '<S20>/TSamp'
      real32_T Uk1_j;                  // '<S20>/UD'
      real32_T stab_yaw_rate_error_calc;// '<S19>/stab_yaw_rate_error_calc'
      real32_T PProdOut_j;             // '<S176>/PProd Out'
      real32_T Integrator_i;           // '<S171>/Integrator'
      real32_T Sum_g;                  // '<S180>/Sum'
      real32_T Saturation_b;           // '<S178>/Saturation'
      real32_T UnitDelay_m;            // '<S136>/Unit Delay'
      real32_T TSamp_jb;               // '<S131>/TSamp'
      real32_T Uk1_e;                  // '<S131>/UD'
      real32_T DeadZone;               // '<S164>/DeadZone'
      real32_T IProdOut;               // '<S168>/IProd Out'
      real32_T Switch_c;               // '<S162>/Switch'
      real32_T DeadZone_j;             // '<S51>/DeadZone'
      real32_T IProdOut_c;             // '<S55>/IProd Out'
      real32_T Switch_g;               // '<S49>/Switch'
      real32_T DeadZone_n;             // '<S106>/DeadZone'
      real32_T IProdOut_g;             // '<S110>/IProd Out'
      real32_T Switch_b;               // '<S104>/Switch'
      real32_T Diff;                   // '<S131>/Diff'
      real32_T Product_k;              // '<S19>/Product'
      real32_T Sum_b;                  // '<S19>/Sum'
      real32_T Diff_f;                 // '<S20>/Diff'
      real32_T Product_c;              // '<S17>/Product'
      real32_T Sum_gf;                 // '<S17>/Sum'
      real32_T Diff_k;                 // '<S75>/Diff'
      real32_T Product_e;              // '<S18>/Product'
      real32_T Sum_n;                  // '<S18>/Sum'
      real32_T DiscreteTimeIntegrator_o;// '<S523>/Discrete-Time Integrator'
      real32_T DiscreteTimeIntegrator_oc;// '<S516>/Discrete-Time Integrator'
      real32_T Gain_a;                 // '<S516>/Gain'
      real32_T norm_out;               // '<S499>/remap_with_deadband'
      real32_T norm_out_p;             // '<S498>/remap'
      real32_T norm_out_d;             // '<S497>/remap_with_deadband'
      real32_T norm_out_o;             // '<S496>/remap_with_deadband'
      real32_T norm_out_n;             // '<S495>/remap'
      real32_T norm_out_dm;            // '<S494>/remap'
      real32_T ve_z_cmd_mps_p;
                     // '<S8>/BusConversion_InsertedFor_wp_command_at_inport_0'
      real32_T yaw_rate_cmd_radps_c;
                     // '<S8>/BusConversion_InsertedFor_wp_command_at_inport_0'
      real32_T CastToSingle1;          // '<S376>/Cast To Single1'
      real32_T CastToSingle2;          // '<S376>/Cast To Single2'
      real32_T Cos_g;                  // '<S487>/Cos'
      real32_T Sin_o;                  // '<S487>/Sin'
      real32_T Gain_c;                 // '<S487>/Gain'
      real32_T PProdOut_o;             // '<S424>/PProd Out'
      real32_T Switch2_l;              // '<S427>/Switch2'
      real32_T Cos_h;                  // '<S385>/Cos'
      real32_T Product_g5;             // '<S385>/Product'
      real32_T Sin_d;                  // '<S385>/Sin'
      real32_T Product1_h;             // '<S385>/Product1'
      real32_T ve_z_cmd_mps_p0;
                  // '<S374>/BusConversion_InsertedFor_Command out_at_inport_0'
      real32_T yaw_rate_cmd_radps_c5;
                  // '<S374>/BusConversion_InsertedFor_Command out_at_inport_0'
      real32_T dev_dist_m;             // '<S378>/deviation_calc'
      real32_T dev_bearing_rad;        // '<S378>/deviation_calc'
      real32_T Switch_dd;              // '<S427>/Switch'
      real32_T yaw_rate_cmd_radps_l;   // '<S6>/Product'
      real32_T norm_out_i;             // '<S372>/remap1'
      real32_T yaw_rate_cmd_radps_o5;  // '<S5>/Product'
      real32_T vb_x_cmd_mps_b;         // '<S5>/Product1'
      real32_T vb_y_cmd_mps_a;         // '<S5>/Product2'
      real32_T norm_out_b;             // '<S370>/remap1'
      real32_T Gain_cj;                // '<S4>/Gain'
      real32_T pitch_angle_cmd_rad_g;  // '<S4>/Product1'
      real32_T yaw_rate_cmd_radps_o5m; // '<S4>/Product'
      real32_T roll_angle_cmd_rad_d;   // '<S4>/Product2'
      real32_T norm_out_j;             // '<S368>/remap1'
      real32_T Cos_a;                  // '<S191>/Cos'
      real32_T Sin_n;                  // '<S191>/Sin'
      real32_T Gain_l;                 // '<S191>/Gain'
      real32_T UnitDelay_e;            // '<S197>/Unit Delay'
      real32_T TSamp_d;                // '<S195>/TSamp'
      real32_T Uk1_o;                  // '<S195>/UD'
      real32_T Diff_fd;                // '<S195>/Diff'
      real32_T Product_j;              // '<S192>/Product'
      real32_T UnitDelay_k;            // '<S198>/Unit Delay'
      real32_T Sum_h;                  // '<S192>/Sum'
      real32_T PProdOut_e;             // '<S237>/PProd Out'
      real32_T Integrator_d;           // '<S232>/Integrator'
      real32_T Sum_j;                  // '<S241>/Sum'
      real32_T Saturation_g;           // '<S239>/Saturation'
      real32_T Sum1_f;                 // '<S192>/Sum1'
      real32_T Saturation_f;           // '<S192>/Saturation'
      real32_T Gain_m;                 // '<S192>/Gain'
      real32_T DeadZone_i;             // '<S225>/DeadZone'
      real32_T IProdOut_e;             // '<S229>/IProd Out'
      real32_T Switch_gh;              // '<S223>/Switch'
      real32_T UnitDelay_b;            // '<S253>/Unit Delay'
      real32_T TSamp_a;                // '<S251>/TSamp'
      real32_T Uk1_h;                  // '<S251>/UD'
      real32_T Diff_kq;                // '<S251>/Diff'
      real32_T Product_l;              // '<S193>/Product'
      real32_T UnitDelay_j2;           // '<S254>/Unit Delay'
      real32_T Sum_m;                  // '<S193>/Sum'
      real32_T PProdOut_g;             // '<S293>/PProd Out'
      real32_T Integrator_o;           // '<S288>/Integrator'
      real32_T Sum_nw;                 // '<S297>/Sum'
      real32_T Saturation_pq;          // '<S295>/Saturation'
      real32_T Sum1_l;                 // '<S193>/Sum1'
      real32_T Saturation_a;           // '<S193>/Saturation'
      real32_T DeadZone_k;             // '<S281>/DeadZone'
      real32_T IProdOut_eh;            // '<S285>/IProd Out'
      real32_T Switch_f2;              // '<S279>/Switch'
      real32_T yaw_rate_cmd_radps_c53;
                    // '<S3>/BusConversion_InsertedFor_Command out_at_inport_0'
      real32_T throttle_cc_i;          // '<S3>/Gain'
      real32_T Sin_os;                 // '<S366>/Sin'
      real32_T Gain_b;                 // '<S366>/Gain'
      real32_T Cos_e;                  // '<S366>/Cos'
      real32_T filtered_val;           // '<S254>/MATLAB Function'
      real32_T filtered_val_o;         // '<S253>/MATLAB Function'
      real32_T filtered_val_p;         // '<S198>/MATLAB Function'
      real32_T filtered_val_l;         // '<S197>/MATLAB Function'
      real32_T filtered_val_k;         // '<S136>/MATLAB Function'
      real32_T heading_rad;            // '<S134>/heading_rad'
      real32_T Subtract_c;             // '<S133>/Subtract'
      real32_T Abs_m;                  // '<S133>/Abs'
      real32_T Switch_e;               // '<S133>/Switch'
      real32_T Product1_n;             // '<S19>/Product1'
      real32_T Switch2_j;              // '<S132>/Switch2'
      real32_T Sign;                   // '<S133>/Sign'
      real32_T Product_en;             // '<S133>/Product'
      real32_T Subtract1;              // '<S133>/Subtract1'
      real32_T Switch_j;               // '<S132>/Switch'
      real32_T filtered_val_e;         // '<S77>/MATLAB Function'
      real32_T Switch_n;               // '<S76>/Switch'
      real32_T filtered_val_lj;        // '<S22>/MATLAB Function'
      real32_T Switch_a;               // '<S21>/Switch'
      real32_T UnitDelay_DSTATE;       // '<S508>/Unit Delay'
      real32_T Integrator_DSTATE;      // '<S113>/Integrator'
      real32_T UnitDelay_DSTATE_h;     // '<S77>/Unit Delay'
      real32_T UD_DSTATE;              // '<S75>/UD'
      real32_T Integrator_DSTATE_d;    // '<S58>/Integrator'
      real32_T UnitDelay_DSTATE_c;     // '<S22>/Unit Delay'
      real32_T UD_DSTATE_l;            // '<S20>/UD'
      real32_T Integrator_DSTATE_dd;   // '<S171>/Integrator'
      real32_T UnitDelay_DSTATE_l;     // '<S136>/Unit Delay'
      real32_T UD_DSTATE_d;            // '<S131>/UD'
      real32_T DiscreteTimeIntegrator_DSTATE_m;// '<S523>/Discrete-Time Integrator' 
      real32_T DiscreteTimeIntegrator_DSTATE_i;// '<S516>/Discrete-Time Integrator' 
      real32_T UnitDelay_DSTATE_b;     // '<S197>/Unit Delay'
      real32_T UD_DSTATE_o;            // '<S195>/UD'
      real32_T UnitDelay_DSTATE_g;     // '<S198>/Unit Delay'
      real32_T Integrator_DSTATE_p;    // '<S232>/Integrator'
      real32_T UnitDelay_DSTATE_e;     // '<S253>/Unit Delay'
      real32_T UD_DSTATE_p;            // '<S251>/UD'
      real32_T UnitDelay_DSTATE_d;     // '<S254>/Unit Delay'
      real32_T Integrator_DSTATE_o;    // '<S288>/Integrator'
      std::array<int16_T, 16> sbus;
      int16_T cur_wp;                  // '<S8>/Sum'
      int16_T Uk1_ei;                  // '<S488>/Delay Input1'
      int16_T Sum_by;                  // '<S377>/Sum'
      int16_T Sum_pz;                  // '<S376>/Sum'
      int16_T DelayInput1_DSTATE;      // '<S488>/Delay Input1'
      int8_T mode_type_conversion;     // '<S15>/mode_type_conversion'
      int8_T Switch1;                  // '<S162>/Switch1'
      int8_T Switch2_a;                // '<S162>/Switch2'
      int8_T Switch1_e;                // '<S49>/Switch1'
      int8_T Switch2_at;               // '<S49>/Switch2'
      int8_T Switch1_p;                // '<S104>/Switch1'
      int8_T Switch2_or;               // '<S104>/Switch2'
      int8_T Cast;                     // '<S523>/Cast'
      int8_T Switch1_l;                // '<S223>/Switch1'
      int8_T Switch2_an;               // '<S223>/Switch2'
      int8_T Switch1_a;                // '<S279>/Switch1'
      int8_T Switch2_ei;               // '<S279>/Switch2'
      int8_T Integrator_PrevResetState;// '<S113>/Integrator'
      int8_T Integrator_PrevResetState_e;// '<S58>/Integrator'
      int8_T Integrator_PrevResetState_i;// '<S171>/Integrator'
      int8_T Integrator_PrevResetState_k;// '<S232>/Integrator'
      int8_T Integrator_PrevResetState_c;// '<S288>/Integrator'
      std::array<boolean_T, 8> UpperRelop;// '<S189>/UpperRelop'
      std::array<boolean_T, 8> LowerRelop1_n;// '<S189>/LowerRelop1'
      boolean_T Compare;               // '<S515>/Compare'
      boolean_T NOT;                   // '<S506>/NOT'
      boolean_T Compare_p;             // '<S512>/Compare'
      boolean_T NOT1;                  // '<S509>/NOT1'
      boolean_T OR1;                   // '<S15>/OR1'
      boolean_T Compare_d;             // '<S522>/Compare'
      boolean_T Compare_g;             // '<S519>/Compare'
      boolean_T Compare_j;             // '<S521>/Compare'
      boolean_T AND;                   // '<S508>/AND'
      boolean_T Compare_l;             // '<S520>/Compare'
      boolean_T Compare_h;             // '<S518>/Compare'
      boolean_T OR;                    // '<S508>/OR'
      boolean_T Switch_m;              // '<S508>/Switch'
      boolean_T nav_initANDmotor_enable;// '<S15>/nav_init AND motor_enable'
      boolean_T Compare_m;             // '<S14>/Compare'
      boolean_T motor_armedANDmode_2;  // '<Root>/motor_armed AND mode_2'
      boolean_T Compare_a;             // '<S13>/Compare'
      boolean_T motor_armedANDmode_5;  // '<Root>/motor_armed AND mode_5'
      boolean_T NOT1_g;                // '<Root>/NOT1'
      boolean_T Compare_b;             // '<S11>/Compare'
      boolean_T motor_armedANDmode_1;  // '<Root>/motor_armed AND mode_1'
      boolean_T Compare_n;             // '<S12>/Compare'
      boolean_T motor_armedANDmode_0;  // '<Root>/motor_armed AND mode_0'
      boolean_T NOT_o;                 // '<Root>/NOT'
      boolean_T LowerRelop1;           // '<S76>/LowerRelop1'
      boolean_T LowerRelop1_i;         // '<S21>/LowerRelop1'
      boolean_T Compare_mw;            // '<S130>/Compare'
      boolean_T NOT_a;                 // '<S19>/NOT'
      boolean_T RelationalOperator;    // '<S162>/Relational Operator'
      boolean_T fixforDTpropagationissue;// '<S162>/fix for DT propagation issue' 
      boolean_T fixforDTpropagationissue1;
                                      // '<S162>/fix for DT propagation issue1'
      boolean_T Equal1;                // '<S162>/Equal1'
      boolean_T AND3;                  // '<S162>/AND3'
      boolean_T RelationalOperator_o;  // '<S49>/Relational Operator'
      boolean_T fixforDTpropagationissue_m;// '<S49>/fix for DT propagation issue' 
      boolean_T fixforDTpropagationissue1_d;// '<S49>/fix for DT propagation issue1' 
      boolean_T Equal1_n;              // '<S49>/Equal1'
      boolean_T AND3_i;                // '<S49>/AND3'
      boolean_T RelationalOperator_h;  // '<S104>/Relational Operator'
      boolean_T fixforDTpropagationissue_k;// '<S104>/fix for DT propagation issue' 
      boolean_T fixforDTpropagationissue1_k;
                                      // '<S104>/fix for DT propagation issue1'
      boolean_T Equal1_j;              // '<S104>/Equal1'
      boolean_T AND3_e;                // '<S104>/AND3'
      boolean_T yaw_arm;               // '<S524>/yaw_arm'
      boolean_T Compare_k;             // '<S517>/Compare'
      boolean_T Compare_d5;            // '<S514>/Compare'
      boolean_T FixPtRelationalOperator;// '<S488>/FixPt Relational Operator'
      boolean_T UnitDelay_o;           // '<S8>/Unit Delay'
      boolean_T enable;                // '<S8>/OR'
      boolean_T Compare_e;             // '<S490>/Compare'
      boolean_T reached;               // '<S377>/check_wp_reached'
      boolean_T LowerRelop1_j;         // '<S476>/LowerRelop1'
      boolean_T LowerRelop1_jy;        // '<S427>/LowerRelop1'
      boolean_T Compare_c;             // '<S486>/Compare'
      boolean_T UpperRelop_p;          // '<S476>/UpperRelop'
      boolean_T UpperRelop_i;          // '<S427>/UpperRelop'
      boolean_T Compare_f;             // '<S367>/Compare'
      boolean_T Compare_a0;            // '<S307>/Compare'
      boolean_T Compare_md;            // '<S308>/Compare'
      boolean_T AND_e;                 // '<S194>/AND'
      boolean_T UnitDelay_kx;          // '<S194>/Unit Delay'
      boolean_T Uk1_ev;                // '<S309>/Delay Input1'
      boolean_T FixPtRelationalOperator_j;// '<S309>/FixPt Relational Operator'
      boolean_T OR_c;                  // '<S194>/OR'
      boolean_T NOT_h;                 // '<S194>/NOT'
      boolean_T RelationalOperator_l;  // '<S223>/Relational Operator'
      boolean_T fixforDTpropagationissue_p;// '<S223>/fix for DT propagation issue' 
      boolean_T fixforDTpropagationissue1_o;
                                      // '<S223>/fix for DT propagation issue1'
      boolean_T Equal1_g;              // '<S223>/Equal1'
      boolean_T AND3_p;                // '<S223>/AND3'
      boolean_T RelationalOperator_a;  // '<S279>/Relational Operator'
      boolean_T fixforDTpropagationissue_md;// '<S279>/fix for DT propagation issue' 
      boolean_T fixforDTpropagationissue1_a;
                                      // '<S279>/fix for DT propagation issue1'
      boolean_T Equal1_f;              // '<S279>/Equal1'
      boolean_T AND3_g;                // '<S279>/AND3'
      boolean_T LowerRelop1_jw;        // '<S356>/LowerRelop1'
      boolean_T UpperRelop_i3;         // '<S356>/UpperRelop'
      boolean_T Compare_ma;            // '<S137>/Compare'
      boolean_T LowerRelop1_d;         // '<S132>/LowerRelop1'
      boolean_T UpperRelop_g;          // '<S132>/UpperRelop'
      boolean_T UpperRelop_b;          // '<S76>/UpperRelop'
      boolean_T UpperRelop_e;          // '<S21>/UpperRelop'
      boolean_T UnitDelay_DSTATE_o;    // '<S8>/Unit Delay'
      boolean_T UnitDelay_DSTATE_gw;   // '<S194>/Unit Delay'
      boolean_T DelayInput1_DSTATE_p;  // '<S309>/Delay Input1'
      boolean_T EnabledSubsystem_MODE; // '<S508>/Enabled Subsystem'
      boolean_T e_stopcounter_MODE;    // '<S507>/e_stop counter'
      boolean_T e_stopcounter_MODE_d;  // '<S511>/e_stop counter'
      boolean_T WAYPOINTCONTROLLER1_MODE;// '<Root>/WAYPOINT CONTROLLER1'
      boolean_T POS_HOLDCONTROLLER_MODE;// '<Root>/POS_HOLD CONTROLLER'
    };

    // Zero-crossing (trigger) state
    struct PrevZCX {
      ZCSigState manual_arming_Trig_ZCE;// '<S508>/manual_arming'
    };

    // Invariant block signals (default storage)
    struct ConstB {
      std::array<real32_T, 32> Transpose;// '<S2>/Transpose'
    };

    // Copy Constructor
    Autocode(Autocode const&) = delete;

    // Assignment Operator
    Autocode& operator= (Autocode const&) & = delete;

    // Move Constructor
    Autocode(Autocode &&) = delete;

    // Move Assignment Operator
    Autocode& operator= (Autocode &&) = delete;

    // model initialize function
    void initialize();

    // model step function
    void Run(const SysData &sys, const SensorData &sensor, const InsData &
             bfs_ins, const AuxInsData &aux_ins, const AdcData &adc, const
             TelemData &telem, VmsData *vms);

    // Constructor
    Autocode();

    // Destructor
    ~Autocode();

    // private data and function members
   private:
    // Block states
    DW rtDW;

    // Triggered events
    PrevZCX rtPrevZCX;

    // private member function(s) for subsystem '<S22>/MATLAB Function'
    static void MATLABFunction(real32_T rtu_prev_val, real32_T rtu_raw_val,
      real32_T rtu_freq_cut, real32_T rtu_samp_freq, real32_T *rty_filtered_val);

    // private member function(s) for subsystem '<S198>/MATLAB Function'
    static void MATLABFunction_i(real32_T rtu_prev_val, real_T rtu_raw_val,
      real32_T rtu_freq_cut, real32_T rtu_samp_freq, real32_T *rty_filtered_val);

    // private member function(s) for subsystem '<S368>/remap1'
    static void remap1(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                       rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max,
                       real32_T *rty_norm_out);

    // private member function(s) for subsystem '<S496>/remap_with_deadband'
    static void remap_with_deadband(real32_T rtu_raw_in, real32_T rtu_in_min,
      real32_T rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max, real_T
      rtu_deadband, real32_T *rty_norm_out);

    // private member function(s) for subsystem '<Root>'
    void cosd_i(real_T *x);
    void sind_b(real_T *x);
  };
}

extern const bfs::Autocode::ConstB rtConstB;// constant block i/o

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S20>/Data Type Duplicate' : Unused code path elimination
//  Block '<S21>/Data Type Duplicate' : Unused code path elimination
//  Block '<S21>/Data Type Propagation' : Unused code path elimination
//  Block '<S75>/Data Type Duplicate' : Unused code path elimination
//  Block '<S76>/Data Type Duplicate' : Unused code path elimination
//  Block '<S76>/Data Type Propagation' : Unused code path elimination
//  Block '<S131>/Data Type Duplicate' : Unused code path elimination
//  Block '<S132>/Data Type Duplicate' : Unused code path elimination
//  Block '<S132>/Data Type Propagation' : Unused code path elimination
//  Block '<S189>/Data Type Duplicate' : Unused code path elimination
//  Block '<S189>/Data Type Propagation' : Unused code path elimination
//  Block '<S195>/Data Type Duplicate' : Unused code path elimination
//  Block '<S193>/Constant2' : Unused code path elimination
//  Block '<S193>/Constant3' : Unused code path elimination
//  Block '<S193>/Constant5' : Unused code path elimination
//  Block '<S251>/Data Type Duplicate' : Unused code path elimination
//  Block '<S312>/Constant2' : Unused code path elimination
//  Block '<S356>/Data Type Duplicate' : Unused code path elimination
//  Block '<S356>/Data Type Propagation' : Unused code path elimination
//  Block '<S6>/Constant1' : Unused code path elimination
//  Block '<S6>/Constant4' : Unused code path elimination
//  Block '<S6>/Product1' : Unused code path elimination
//  Block '<S6>/Product2' : Unused code path elimination
//  Block '<S427>/Data Type Duplicate' : Unused code path elimination
//  Block '<S427>/Data Type Propagation' : Unused code path elimination
//  Block '<S476>/Data Type Duplicate' : Unused code path elimination
//  Block '<S476>/Data Type Propagation' : Unused code path elimination
//  Block '<Root>/Cast' : Eliminate redundant data type conversion


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
//  '<Root>' : 'malt'
//  '<S1>'   : 'malt/ANGLE CONTROLLER1'
//  '<S2>'   : 'malt/Motor Mixing Algorithm'
//  '<S3>'   : 'malt/POS_HOLD CONTROLLER'
//  '<S4>'   : 'malt/Stab_input_conversion'
//  '<S5>'   : 'malt/Stab_input_conversion1'
//  '<S6>'   : 'malt/Stab_input_conversion2'
//  '<S7>'   : 'malt/To VMS Data'
//  '<S8>'   : 'malt/WAYPOINT CONTROLLER1'
//  '<S9>'   : 'malt/cmd to raw pwm1'
//  '<S10>'  : 'malt/command selection'
//  '<S11>'  : 'malt/compare_to_pos_hold'
//  '<S12>'  : 'malt/compare_to_stab'
//  '<S13>'  : 'malt/compare_to_stab1'
//  '<S14>'  : 'malt/compare_to_wp'
//  '<S15>'  : 'malt/determine arm and mode selection'
//  '<S16>'  : 'malt/emergency_stop_system1'
//  '<S17>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller'
//  '<S18>'  : 'malt/ANGLE CONTROLLER1/Roll Controller'
//  '<S19>'  : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller'
//  '<S20>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/Discrete Derivative'
//  '<S21>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/Saturation Dynamic'
//  '<S22>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/pitch_D_DLPF'
//  '<S23>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID'
//  '<S24>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/pitch_D_DLPF/MATLAB Function'
//  '<S25>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Anti-windup'
//  '<S26>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/D Gain'
//  '<S27>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Filter'
//  '<S28>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Filter ICs'
//  '<S29>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/I Gain'
//  '<S30>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Ideal P Gain'
//  '<S31>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Ideal P Gain Fdbk'
//  '<S32>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Integrator'
//  '<S33>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Integrator ICs'
//  '<S34>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/N Copy'
//  '<S35>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/N Gain'
//  '<S36>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/P Copy'
//  '<S37>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Parallel P Gain'
//  '<S38>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Reset Signal'
//  '<S39>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Saturation'
//  '<S40>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Saturation Fdbk'
//  '<S41>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Sum'
//  '<S42>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Sum Fdbk'
//  '<S43>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tracking Mode'
//  '<S44>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tracking Mode Sum'
//  '<S45>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tsamp - Integral'
//  '<S46>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tsamp - Ngain'
//  '<S47>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/postSat Signal'
//  '<S48>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/preSat Signal'
//  '<S49>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Anti-windup/Disc. Clamping Parallel'
//  '<S50>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S51>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S52>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/D Gain/Disabled'
//  '<S53>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Filter/Disabled'
//  '<S54>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Filter ICs/Disabled'
//  '<S55>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/I Gain/External Parameters'
//  '<S56>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Ideal P Gain/Passthrough'
//  '<S57>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Ideal P Gain Fdbk/Disabled'
//  '<S58>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Integrator/Discrete'
//  '<S59>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Integrator ICs/Internal IC'
//  '<S60>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/N Copy/Disabled wSignal Specification'
//  '<S61>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/N Gain/Disabled'
//  '<S62>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/P Copy/Disabled'
//  '<S63>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Parallel P Gain/External Parameters'
//  '<S64>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Reset Signal/External Reset'
//  '<S65>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Saturation/Enabled'
//  '<S66>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Saturation Fdbk/Disabled'
//  '<S67>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Sum/Sum_PI'
//  '<S68>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Sum Fdbk/Disabled'
//  '<S69>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tracking Mode/Disabled'
//  '<S70>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tracking Mode Sum/Passthrough'
//  '<S71>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tsamp - Integral/Passthrough'
//  '<S72>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tsamp - Ngain/Passthrough'
//  '<S73>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/postSat Signal/Forward_Path'
//  '<S74>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/preSat Signal/Forward_Path'
//  '<S75>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/Discrete Derivative'
//  '<S76>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/Saturation Dynamic'
//  '<S77>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/roll_D_DLPF'
//  '<S78>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID'
//  '<S79>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/roll_D_DLPF/MATLAB Function'
//  '<S80>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Anti-windup'
//  '<S81>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/D Gain'
//  '<S82>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Filter'
//  '<S83>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Filter ICs'
//  '<S84>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/I Gain'
//  '<S85>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Ideal P Gain'
//  '<S86>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Ideal P Gain Fdbk'
//  '<S87>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Integrator'
//  '<S88>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Integrator ICs'
//  '<S89>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/N Copy'
//  '<S90>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/N Gain'
//  '<S91>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/P Copy'
//  '<S92>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Parallel P Gain'
//  '<S93>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Reset Signal'
//  '<S94>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Saturation'
//  '<S95>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Saturation Fdbk'
//  '<S96>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Sum'
//  '<S97>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Sum Fdbk'
//  '<S98>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tracking Mode'
//  '<S99>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tracking Mode Sum'
//  '<S100>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tsamp - Integral'
//  '<S101>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tsamp - Ngain'
//  '<S102>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/postSat Signal'
//  '<S103>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/preSat Signal'
//  '<S104>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Anti-windup/Disc. Clamping Parallel'
//  '<S105>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S106>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S107>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/D Gain/Disabled'
//  '<S108>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Filter/Disabled'
//  '<S109>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Filter ICs/Disabled'
//  '<S110>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/I Gain/External Parameters'
//  '<S111>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Ideal P Gain/Passthrough'
//  '<S112>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Ideal P Gain Fdbk/Disabled'
//  '<S113>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Integrator/Discrete'
//  '<S114>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Integrator ICs/Internal IC'
//  '<S115>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/N Copy/Disabled wSignal Specification'
//  '<S116>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/N Gain/Disabled'
//  '<S117>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/P Copy/Disabled'
//  '<S118>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Parallel P Gain/External Parameters'
//  '<S119>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Reset Signal/External Reset'
//  '<S120>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Saturation/Enabled'
//  '<S121>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Saturation Fdbk/Disabled'
//  '<S122>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Sum/Sum_PI'
//  '<S123>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Sum Fdbk/Disabled'
//  '<S124>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tracking Mode/Disabled'
//  '<S125>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tracking Mode Sum/Passthrough'
//  '<S126>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tsamp - Integral/Passthrough'
//  '<S127>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tsamp - Ngain/Passthrough'
//  '<S128>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/postSat Signal/Forward_Path'
//  '<S129>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/preSat Signal/Forward_Path'
//  '<S130>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/Compare To Constant1'
//  '<S131>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/Discrete Derivative'
//  '<S132>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/Saturation Dynamic'
//  '<S133>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/heading_error'
//  '<S134>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/set_tar_heading when heading_rate_cmd == 0'
//  '<S135>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID'
//  '<S136>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/yaw_D_DLPF'
//  '<S137>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/heading_error/Compare To Constant'
//  '<S138>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup'
//  '<S139>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/D Gain'
//  '<S140>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Filter'
//  '<S141>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Filter ICs'
//  '<S142>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/I Gain'
//  '<S143>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain'
//  '<S144>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain Fdbk'
//  '<S145>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Integrator'
//  '<S146>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Integrator ICs'
//  '<S147>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/N Copy'
//  '<S148>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/N Gain'
//  '<S149>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/P Copy'
//  '<S150>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Parallel P Gain'
//  '<S151>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Reset Signal'
//  '<S152>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Saturation'
//  '<S153>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Saturation Fdbk'
//  '<S154>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Sum'
//  '<S155>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Sum Fdbk'
//  '<S156>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode'
//  '<S157>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode Sum'
//  '<S158>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Integral'
//  '<S159>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Ngain'
//  '<S160>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/postSat Signal'
//  '<S161>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/preSat Signal'
//  '<S162>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup/Disc. Clamping Parallel'
//  '<S163>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S164>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S165>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/D Gain/Disabled'
//  '<S166>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Filter/Disabled'
//  '<S167>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Filter ICs/Disabled'
//  '<S168>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/I Gain/External Parameters'
//  '<S169>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain/Passthrough'
//  '<S170>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain Fdbk/Disabled'
//  '<S171>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Integrator/Discrete'
//  '<S172>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Integrator ICs/Internal IC'
//  '<S173>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/N Copy/Disabled wSignal Specification'
//  '<S174>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/N Gain/Disabled'
//  '<S175>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/P Copy/Disabled'
//  '<S176>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Parallel P Gain/External Parameters'
//  '<S177>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Reset Signal/External Reset'
//  '<S178>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Saturation/Enabled'
//  '<S179>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Saturation Fdbk/Disabled'
//  '<S180>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Sum/Sum_PI'
//  '<S181>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Sum Fdbk/Disabled'
//  '<S182>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode/Disabled'
//  '<S183>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode Sum/Passthrough'
//  '<S184>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Integral/Passthrough'
//  '<S185>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Ngain/Passthrough'
//  '<S186>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/postSat Signal/Forward_Path'
//  '<S187>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/preSat Signal/Forward_Path'
//  '<S188>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/yaw_D_DLPF/MATLAB Function'
//  '<S189>' : 'malt/Motor Mixing Algorithm/Saturation Dynamic'
//  '<S190>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller'
//  '<S191>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/2D rotation from NED_xy to body_xy'
//  '<S192>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem'
//  '<S193>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1'
//  '<S194>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling'
//  '<S195>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Discrete Derivative'
//  '<S196>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller'
//  '<S197>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/roll_D_DLPF'
//  '<S198>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/roll_D_DLPF1'
//  '<S199>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Anti-windup'
//  '<S200>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/D Gain'
//  '<S201>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Filter'
//  '<S202>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Filter ICs'
//  '<S203>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/I Gain'
//  '<S204>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Ideal P Gain'
//  '<S205>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Ideal P Gain Fdbk'
//  '<S206>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Integrator'
//  '<S207>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Integrator ICs'
//  '<S208>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/N Copy'
//  '<S209>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/N Gain'
//  '<S210>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/P Copy'
//  '<S211>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Parallel P Gain'
//  '<S212>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Reset Signal'
//  '<S213>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Saturation'
//  '<S214>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Saturation Fdbk'
//  '<S215>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Sum'
//  '<S216>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Sum Fdbk'
//  '<S217>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tracking Mode'
//  '<S218>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tracking Mode Sum'
//  '<S219>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tsamp - Integral'
//  '<S220>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tsamp - Ngain'
//  '<S221>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/postSat Signal'
//  '<S222>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/preSat Signal'
//  '<S223>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Anti-windup/Disc. Clamping Parallel'
//  '<S224>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S225>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S226>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/D Gain/Disabled'
//  '<S227>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Filter/Disabled'
//  '<S228>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Filter ICs/Disabled'
//  '<S229>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/I Gain/External Parameters'
//  '<S230>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Ideal P Gain/Passthrough'
//  '<S231>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Ideal P Gain Fdbk/Disabled'
//  '<S232>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Integrator/Discrete'
//  '<S233>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Integrator ICs/Internal IC'
//  '<S234>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/N Copy/Disabled wSignal Specification'
//  '<S235>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/N Gain/Disabled'
//  '<S236>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/P Copy/Disabled'
//  '<S237>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Parallel P Gain/External Parameters'
//  '<S238>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Reset Signal/External Reset'
//  '<S239>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Saturation/Enabled'
//  '<S240>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Saturation Fdbk/Disabled'
//  '<S241>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Sum/Sum_PI'
//  '<S242>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Sum Fdbk/Disabled'
//  '<S243>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tracking Mode/Disabled'
//  '<S244>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tracking Mode Sum/Passthrough'
//  '<S245>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tsamp - Integral/Passthrough'
//  '<S246>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tsamp - Ngain/Passthrough'
//  '<S247>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/postSat Signal/Forward_Path'
//  '<S248>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/preSat Signal/Forward_Path'
//  '<S249>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/roll_D_DLPF/MATLAB Function'
//  '<S250>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/roll_D_DLPF1/MATLAB Function'
//  '<S251>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Discrete Derivative'
//  '<S252>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller'
//  '<S253>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/roll_D_DLPF'
//  '<S254>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/roll_D_DLPF1'
//  '<S255>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Anti-windup'
//  '<S256>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/D Gain'
//  '<S257>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Filter'
//  '<S258>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Filter ICs'
//  '<S259>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/I Gain'
//  '<S260>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Ideal P Gain'
//  '<S261>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Ideal P Gain Fdbk'
//  '<S262>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Integrator'
//  '<S263>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Integrator ICs'
//  '<S264>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/N Copy'
//  '<S265>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/N Gain'
//  '<S266>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/P Copy'
//  '<S267>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Parallel P Gain'
//  '<S268>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Reset Signal'
//  '<S269>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Saturation'
//  '<S270>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Saturation Fdbk'
//  '<S271>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Sum'
//  '<S272>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Sum Fdbk'
//  '<S273>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tracking Mode'
//  '<S274>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tracking Mode Sum'
//  '<S275>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tsamp - Integral'
//  '<S276>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tsamp - Ngain'
//  '<S277>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/postSat Signal'
//  '<S278>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/preSat Signal'
//  '<S279>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Anti-windup/Disc. Clamping Parallel'
//  '<S280>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S281>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S282>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/D Gain/Disabled'
//  '<S283>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Filter/Disabled'
//  '<S284>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Filter ICs/Disabled'
//  '<S285>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/I Gain/External Parameters'
//  '<S286>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Ideal P Gain/Passthrough'
//  '<S287>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Ideal P Gain Fdbk/Disabled'
//  '<S288>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Integrator/Discrete'
//  '<S289>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Integrator ICs/Internal IC'
//  '<S290>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/N Copy/Disabled wSignal Specification'
//  '<S291>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/N Gain/Disabled'
//  '<S292>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/P Copy/Disabled'
//  '<S293>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Parallel P Gain/External Parameters'
//  '<S294>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Reset Signal/External Reset'
//  '<S295>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Saturation/Enabled'
//  '<S296>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Saturation Fdbk/Disabled'
//  '<S297>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Sum/Sum_PI'
//  '<S298>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Sum Fdbk/Disabled'
//  '<S299>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tracking Mode/Disabled'
//  '<S300>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tracking Mode Sum/Passthrough'
//  '<S301>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tsamp - Integral/Passthrough'
//  '<S302>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tsamp - Ngain/Passthrough'
//  '<S303>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/postSat Signal/Forward_Path'
//  '<S304>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/preSat Signal/Forward_Path'
//  '<S305>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/roll_D_DLPF/MATLAB Function'
//  '<S306>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/roll_D_DLPF1/MATLAB Function'
//  '<S307>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Compare To Constant'
//  '<S308>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Compare To Constant1'
//  '<S309>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Detect Change'
//  '<S310>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller'
//  '<S311>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/set_tar_pos when vel_cmd == 0'
//  '<S312>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller'
//  '<S313>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/horizontal_error_calculation '
//  '<S314>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2'
//  '<S315>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/convert to ve_cmd'
//  '<S316>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/inertial_to_body conversion'
//  '<S317>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Anti-windup'
//  '<S318>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/D Gain'
//  '<S319>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter'
//  '<S320>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter ICs'
//  '<S321>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/I Gain'
//  '<S322>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain'
//  '<S323>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain Fdbk'
//  '<S324>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator'
//  '<S325>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator ICs'
//  '<S326>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Copy'
//  '<S327>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Gain'
//  '<S328>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/P Copy'
//  '<S329>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Parallel P Gain'
//  '<S330>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Reset Signal'
//  '<S331>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation'
//  '<S332>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation Fdbk'
//  '<S333>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum'
//  '<S334>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum Fdbk'
//  '<S335>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode'
//  '<S336>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode Sum'
//  '<S337>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Integral'
//  '<S338>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Ngain'
//  '<S339>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/postSat Signal'
//  '<S340>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/preSat Signal'
//  '<S341>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Anti-windup/Disabled'
//  '<S342>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/D Gain/Disabled'
//  '<S343>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter/Disabled'
//  '<S344>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter ICs/Disabled'
//  '<S345>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/I Gain/Disabled'
//  '<S346>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain/Passthrough'
//  '<S347>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain Fdbk/Disabled'
//  '<S348>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator/Disabled'
//  '<S349>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator ICs/Disabled'
//  '<S350>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Copy/Disabled wSignal Specification'
//  '<S351>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Gain/Disabled'
//  '<S352>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/P Copy/Disabled'
//  '<S353>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Parallel P Gain/External Parameters'
//  '<S354>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Reset Signal/Disabled'
//  '<S355>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation/External'
//  '<S356>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation/External/Saturation Dynamic'
//  '<S357>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation Fdbk/Disabled'
//  '<S358>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum/Passthrough_P'
//  '<S359>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum Fdbk/Disabled'
//  '<S360>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode/Disabled'
//  '<S361>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode Sum/Passthrough'
//  '<S362>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Integral/Disabled wSignal Specification'
//  '<S363>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Ngain/Passthrough'
//  '<S364>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/postSat Signal/Forward_Path'
//  '<S365>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/preSat Signal/Forward_Path'
//  '<S366>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/inertial_to_body conversion/2D rotation from NED_xy to body_xy'
//  '<S367>' : 'malt/Stab_input_conversion/Compare To Constant'
//  '<S368>' : 'malt/Stab_input_conversion/remap from min_spin to max'
//  '<S369>' : 'malt/Stab_input_conversion/remap from min_spin to max/remap1'
//  '<S370>' : 'malt/Stab_input_conversion1/remap from min_spin to max1'
//  '<S371>' : 'malt/Stab_input_conversion1/remap from min_spin to max1/remap1'
//  '<S372>' : 'malt/Stab_input_conversion2/remap from min_spin to max'
//  '<S373>' : 'malt/Stab_input_conversion2/remap from min_spin to max/remap1'
//  '<S374>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV'
//  '<S375>' : 'malt/WAYPOINT CONTROLLER1/capture rising edge'
//  '<S376>' : 'malt/WAYPOINT CONTROLLER1/determine target'
//  '<S377>' : 'malt/WAYPOINT CONTROLLER1/wp_completion_check'
//  '<S378>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller'
//  '<S379>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller'
//  '<S380>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/deviation_calc'
//  '<S381>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/horizontal_error_calculation '
//  '<S382>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1'
//  '<S383>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2'
//  '<S384>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/convert to ve_cmd'
//  '<S385>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/convert to ve_cmd1'
//  '<S386>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/gnd_spd_constraint '
//  '<S387>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/inertial_to_body conversion'
//  '<S388>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Anti-windup'
//  '<S389>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/D Gain'
//  '<S390>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Filter'
//  '<S391>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Filter ICs'
//  '<S392>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/I Gain'
//  '<S393>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Ideal P Gain'
//  '<S394>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Ideal P Gain Fdbk'
//  '<S395>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Integrator'
//  '<S396>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Integrator ICs'
//  '<S397>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/N Copy'
//  '<S398>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/N Gain'
//  '<S399>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/P Copy'
//  '<S400>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Parallel P Gain'
//  '<S401>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Reset Signal'
//  '<S402>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Saturation'
//  '<S403>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Saturation Fdbk'
//  '<S404>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Sum'
//  '<S405>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Sum Fdbk'
//  '<S406>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tracking Mode'
//  '<S407>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tracking Mode Sum'
//  '<S408>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tsamp - Integral'
//  '<S409>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tsamp - Ngain'
//  '<S410>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/postSat Signal'
//  '<S411>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/preSat Signal'
//  '<S412>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Anti-windup/Disabled'
//  '<S413>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/D Gain/Disabled'
//  '<S414>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Filter/Disabled'
//  '<S415>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Filter ICs/Disabled'
//  '<S416>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/I Gain/Disabled'
//  '<S417>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Ideal P Gain/Passthrough'
//  '<S418>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S419>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Integrator/Disabled'
//  '<S420>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Integrator ICs/Disabled'
//  '<S421>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S422>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/N Gain/Disabled'
//  '<S423>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/P Copy/Disabled'
//  '<S424>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Parallel P Gain/External Parameters'
//  '<S425>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Reset Signal/Disabled'
//  '<S426>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Saturation/External'
//  '<S427>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Saturation/External/Saturation Dynamic'
//  '<S428>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Saturation Fdbk/Disabled'
//  '<S429>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Sum/Passthrough_P'
//  '<S430>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Sum Fdbk/Disabled'
//  '<S431>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tracking Mode/Disabled'
//  '<S432>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S433>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tsamp - Integral/Disabled wSignal Specification'
//  '<S434>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S435>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/postSat Signal/Forward_Path'
//  '<S436>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/preSat Signal/Forward_Path'
//  '<S437>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Anti-windup'
//  '<S438>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/D Gain'
//  '<S439>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter'
//  '<S440>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter ICs'
//  '<S441>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/I Gain'
//  '<S442>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain'
//  '<S443>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain Fdbk'
//  '<S444>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator'
//  '<S445>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator ICs'
//  '<S446>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Copy'
//  '<S447>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Gain'
//  '<S448>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/P Copy'
//  '<S449>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Parallel P Gain'
//  '<S450>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Reset Signal'
//  '<S451>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation'
//  '<S452>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation Fdbk'
//  '<S453>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum'
//  '<S454>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum Fdbk'
//  '<S455>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode'
//  '<S456>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode Sum'
//  '<S457>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Integral'
//  '<S458>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Ngain'
//  '<S459>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/postSat Signal'
//  '<S460>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/preSat Signal'
//  '<S461>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Anti-windup/Disabled'
//  '<S462>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/D Gain/Disabled'
//  '<S463>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter/Disabled'
//  '<S464>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter ICs/Disabled'
//  '<S465>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/I Gain/Disabled'
//  '<S466>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain/Passthrough'
//  '<S467>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain Fdbk/Disabled'
//  '<S468>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator/Disabled'
//  '<S469>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator ICs/Disabled'
//  '<S470>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Copy/Disabled wSignal Specification'
//  '<S471>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Gain/Disabled'
//  '<S472>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/P Copy/Disabled'
//  '<S473>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Parallel P Gain/External Parameters'
//  '<S474>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Reset Signal/Disabled'
//  '<S475>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation/External'
//  '<S476>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation/External/Saturation Dynamic'
//  '<S477>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation Fdbk/Disabled'
//  '<S478>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum/Passthrough_P'
//  '<S479>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum Fdbk/Disabled'
//  '<S480>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode/Disabled'
//  '<S481>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode Sum/Passthrough'
//  '<S482>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Integral/Disabled wSignal Specification'
//  '<S483>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Ngain/Passthrough'
//  '<S484>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/postSat Signal/Forward_Path'
//  '<S485>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/preSat Signal/Forward_Path'
//  '<S486>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/gnd_spd_constraint /Compare To Constant'
//  '<S487>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/inertial_to_body conversion/2D rotation from NED_xy to body_xy'
//  '<S488>' : 'malt/WAYPOINT CONTROLLER1/capture rising edge/Detect Change1'
//  '<S489>' : 'malt/WAYPOINT CONTROLLER1/determine target/determine_current_tar_pos'
//  '<S490>' : 'malt/WAYPOINT CONTROLLER1/wp_completion_check/Compare To Constant'
//  '<S491>' : 'malt/WAYPOINT CONTROLLER1/wp_completion_check/check_wp_reached'
//  '<S492>' : 'malt/cmd to raw pwm1/motor_PWM_denormalize'
//  '<S493>' : 'malt/cmd to raw pwm1/motor_PWM_denormalize/remap'
//  '<S494>' : 'malt/command selection/e_stop_norm'
//  '<S495>' : 'malt/command selection/mode_norm'
//  '<S496>' : 'malt/command selection/pitch_norm_deadband'
//  '<S497>' : 'malt/command selection/roll_norm_deadband'
//  '<S498>' : 'malt/command selection/throttle_norm'
//  '<S499>' : 'malt/command selection/yaw_norm_deadband'
//  '<S500>' : 'malt/command selection/e_stop_norm/remap'
//  '<S501>' : 'malt/command selection/mode_norm/remap'
//  '<S502>' : 'malt/command selection/pitch_norm_deadband/remap_with_deadband'
//  '<S503>' : 'malt/command selection/roll_norm_deadband/remap_with_deadband'
//  '<S504>' : 'malt/command selection/throttle_norm/remap'
//  '<S505>' : 'malt/command selection/yaw_norm_deadband/remap_with_deadband'
//  '<S506>' : 'malt/determine arm and mode selection/Failsafe_management'
//  '<S507>' : 'malt/determine arm and mode selection/Subsystem'
//  '<S508>' : 'malt/determine arm and mode selection/yaw_stick_arming'
//  '<S509>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe'
//  '<S510>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem'
//  '<S511>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem'
//  '<S512>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem/Compare To Constant'
//  '<S513>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem/e_stop counter'
//  '<S514>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem/e_stop counter/Compare To Constant'
//  '<S515>' : 'malt/determine arm and mode selection/Subsystem/Compare To Constant'
//  '<S516>' : 'malt/determine arm and mode selection/Subsystem/e_stop counter'
//  '<S517>' : 'malt/determine arm and mode selection/Subsystem/e_stop counter/Compare To Constant'
//  '<S518>' : 'malt/determine arm and mode selection/yaw_stick_arming/Compare To Constant'
//  '<S519>' : 'malt/determine arm and mode selection/yaw_stick_arming/Compare To Constant1'
//  '<S520>' : 'malt/determine arm and mode selection/yaw_stick_arming/Compare To Constant2'
//  '<S521>' : 'malt/determine arm and mode selection/yaw_stick_arming/Compare To Constant3'
//  '<S522>' : 'malt/determine arm and mode selection/yaw_stick_arming/Compare To Constant4'
//  '<S523>' : 'malt/determine arm and mode selection/yaw_stick_arming/Enabled Subsystem'
//  '<S524>' : 'malt/determine arm and mode selection/yaw_stick_arming/manual_arming'

#endif                                 // RTW_HEADER_autocode_h_

//
// File trailer for generated code.
//
// [EOF]
//
