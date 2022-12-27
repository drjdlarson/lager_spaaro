//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: autocode.h
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
      MissionItem Selector;            // '<S381>/Selector'
      MissionItem Selector1;           // '<S380>/Selector1'
      std::array<real_T, 8> emergency_switch;// '<S16>/emergency_switch'
      std::array<real_T, 8> Switch;    // '<S2>/Switch'
      std::array<real_T, 8> Switch_k;  // '<S193>/Switch'
      std::array<real_T, 8> Switch2;   // '<S193>/Switch2'
      std::array<real_T, 3> Subtract;  // '<S385>/Subtract'
      std::array<real_T, 2> Transpose; // '<S385>/Transpose'
      std::array<real_T, 2> TmpSignalConversionAtNormalizat;
      std::array<real_T, 2> Square;    // '<S390>/Square'
      std::array<real_T, 2> Switch_d;  // '<S390>/Switch'
      std::array<real_T, 2> vb_xy;     // '<S391>/Product'
      std::array<real_T, 2> Normalization1;// '<S390>/Normalization1'
      std::array<real_T, 2> Gain_f;    // '<S390>/Gain'
      std::array<real_T, 2> Subtract_o;// '<S317>/Subtract'
      std::array<real_T, 2> Transpose_o;// '<S317>/Transpose'
      std::array<real_T, 2> Switch_db; // '<S198>/Switch'
      std::array<real_T, 2> pos_xy_m;  // '<S315>/pos_xy_m'
      std::array<real_T, 2> TmpSignalConversionAtProductInp;
      std::array<real_T, 2> vb_xy_o;   // '<S320>/Product'
      std::array<real_T, 3> Subtract_DWORK1;// '<S385>/Subtract'
      real_T Add;                      // '<S514>/Add'
      real_T Gain;                     // '<S514>/Gain'
      real_T Abs1;                     // '<S515>/Abs1'
      real_T vb_x_cmd_mps;             // '<Root>/Switch1'
      real_T vb_y_cmd_mps;             // '<Root>/Switch1'
      real_T DiscreteTimeIntegrator;   // '<S517>/Discrete-Time Integrator'
      real_T Gain_d;                   // '<S517>/Gain'
      real_T Gain_n;                   // '<S380>/Gain'
      real_T Gain1;                    // '<S380>/Gain1'
      real_T MatrixMultiply;           // '<S385>/MatrixMultiply'
      real_T Sqrt;                     // '<S385>/Sqrt'
      real_T Saturation;               // '<S383>/Saturation'
      real_T PProdOut;                 // '<S477>/PProd Out'
      real_T Switch2_o;                // '<S480>/Switch2'
      real_T Atan2;                    // '<S385>/Atan2'
      real_T Cos;                      // '<S388>/Cos'
      real_T Product;                  // '<S388>/Product'
      real_T Sum;                      // '<S383>/Sum'
      real_T Sin;                      // '<S388>/Sin'
      real_T Product1;                 // '<S388>/Product1'
      real_T Sum1;                     // '<S383>/Sum1'
      real_T SumofElements;            // '<S390>/Sum of Elements'
      real_T Sqrt_p;                   // '<S390>/Sqrt'
      real_T Switch_f;                 // '<S480>/Switch'
      real_T MatrixMultiply_i;         // '<S317>/MatrixMultiply'
      real_T Sqrt_p1;                  // '<S317>/Sqrt'
      real_T Saturation_k;             // '<S316>/Saturation'
      real_T PProdOut_b;               // '<S357>/PProd Out'
      real_T Atan2_m;                  // '<S317>/Atan2'
      real_T Sin_f;                    // '<S319>/Sin'
      real_T Switch2_p;                // '<S360>/Switch2'
      real_T Product1_b;               // '<S319>/Product1'
      real_T Cos_m;                    // '<S319>/Cos'
      real_T Product_g;                // '<S319>/Product'
      real_T Switch_p;                 // '<S360>/Switch'
      real_T DiscreteTimeIntegrator_DSTATE;// '<S517>/Discrete-Time Integrator'
      real_T Add_DWORK1;               // '<S514>/Add'
      std::array<real32_T, 2> CastToSingle_p;// '<Root>/Cast To Single'
      std::array<real32_T, 24> aux;
      std::array<real32_T, 4> Reshape; // '<S2>/Reshape'
      std::array<real32_T, 8> Command; // '<S2>/Multiply'
      std::array<real32_T, 8> raw_out; // '<S496>/remap'
      std::array<real32_T, 3> UnitDelay_j;// '<S380>/Unit Delay'
      std::array<real32_T, 3> cur_target_pos;// '<S380>/determine_current_tar_pos' 
      std::array<real32_T, 4> Reshape_a;// '<S491>/Reshape'
      std::array<real32_T, 4> Reshape_g;// '<S195>/Reshape'
      std::array<real32_T, 2> vb_xy_k; // '<S194>/Product'
      std::array<real32_T, 4> Reshape_au;// '<S370>/Reshape'
      std::array<real32_T, 2> CastToSingle_o;// '<S198>/Cast To Single'
      std::array<real32_T, 3> UnitDelay_DSTATE_m;// '<S380>/Unit Delay'
      real32_T DataTypeConversion1;    // '<S10>/Data Type Conversion1'
      real32_T DataTypeConversion2;    // '<S10>/Data Type Conversion2'
      real32_T DataTypeConversion5;    // '<S10>/Data Type Conversion5'
      real32_T DataTypeConversion7;    // '<S10>/Data Type Conversion7'
      real32_T DataTypeConversion4;    // '<S10>/Data Type Conversion4'
      real32_T DataTypeConversion3;    // '<S10>/Data Type Conversion3'
      real32_T Abs1_d;                 // '<S511>/Abs1'
      real32_T CastToSingle;           // '<S514>/Cast To Single'
      real32_T UnitDelay;              // '<S512>/Unit Delay'
      real32_T Abs;                    // '<S512>/Abs'
      real32_T CastToSingle_a;         // '<S512>/Cast To Single'
      real32_T Sum_p;                  // '<S512>/Sum'
      real32_T ve_z_cmd_mps;           // '<Root>/Switch1'
      real32_T yaw_rate_cmd_radps;     // '<Root>/Switch1'
      real32_T UnitDelay_g;            // '<S80>/Unit Delay'
      real32_T roll_angle_cmd_rad;     // '<Root>/Switch'
      real32_T roll_angle_error;       // '<S18>/stab_roll_angle_error_calc'
      real32_T Product1_e;             // '<S18>/Product1'
      real32_T Switch2_e;              // '<S78>/Switch2'
      real32_T UnitDelay_i;            // '<S23>/Unit Delay'
      real32_T pitch_angle_cmd_rad;    // '<Root>/Switch'
      real32_T pitcherror;             // '<S17>/stab_pitch_angle_error_calc'
      real32_T Product1_o;             // '<S17>/Product1'
      real32_T Switch2_o0;             // '<S21>/Switch2'
      real32_T yaw_rate_cmd_radps_o;   // '<Root>/Switch'
      real32_T yaw_rate_cmd;           // '<S19>/Switch'
      real32_T throttle_cc;            // '<Root>/Switch'
      real32_T roll_angle_error_b;   // '<S18>/stab_roll_angle_rate_error_calc'
      real32_T PProdOut_p;             // '<S122>/PProd Out'
      real32_T Integrator;             // '<S117>/Integrator'
      real32_T Sum_l;                  // '<S126>/Sum'
      real32_T Saturation_m;           // '<S124>/Saturation'
      real32_T UnitDelay_if;           // '<S79>/Unit Delay'
      real32_T TSamp;                  // '<S77>/TSamp'
      real32_T Uk1;                    // '<S77>/UD'
      real32_T pitcherror_k;        // '<S17>/stab_pitch_angle_rate_error_calc'
      real32_T PProdOut_i;             // '<S65>/PProd Out'
      real32_T Integrator_g;           // '<S60>/Integrator'
      real32_T Sum_lv;                 // '<S69>/Sum'
      real32_T Saturation_p;           // '<S67>/Saturation'
      real32_T UnitDelay_l;            // '<S22>/Unit Delay'
      real32_T TSamp_j;                // '<S20>/TSamp'
      real32_T Uk1_j;                  // '<S20>/UD'
      real32_T stab_yaw_rate_error_calc;// '<S19>/stab_yaw_rate_error_calc'
      real32_T PProdOut_j;             // '<S180>/PProd Out'
      real32_T Integrator_i;           // '<S175>/Integrator'
      real32_T Sum_g;                  // '<S184>/Sum'
      real32_T Saturation_b;           // '<S182>/Saturation'
      real32_T UnitDelay_m;            // '<S140>/Unit Delay'
      real32_T TSamp_jb;               // '<S135>/TSamp'
      real32_T Uk1_e;                  // '<S135>/UD'
      real32_T DeadZone;               // '<S168>/DeadZone'
      real32_T IProdOut;               // '<S172>/IProd Out'
      real32_T Switch_c;               // '<S166>/Switch'
      real32_T DeadZone_j;             // '<S53>/DeadZone'
      real32_T IProdOut_c;             // '<S57>/IProd Out'
      real32_T Switch_g;               // '<S51>/Switch'
      real32_T DeadZone_n;             // '<S110>/DeadZone'
      real32_T IProdOut_g;             // '<S114>/IProd Out'
      real32_T Switch_b;               // '<S108>/Switch'
      real32_T Diff;                   // '<S135>/Diff'
      real32_T Product_k;              // '<S19>/Product'
      real32_T Sum_b;                  // '<S19>/Sum'
      real32_T Diff_f;                 // '<S20>/Diff'
      real32_T Product_c;              // '<S17>/Product'
      real32_T Sum_gf;                 // '<S17>/Sum'
      real32_T Diff_k;                 // '<S77>/Diff'
      real32_T Product_e;              // '<S18>/Product'
      real32_T Sum_n;                  // '<S18>/Sum'
      real32_T DiscreteTimeIntegrator_o;// '<S527>/Discrete-Time Integrator'
      real32_T DiscreteTimeIntegrator_oc;// '<S520>/Discrete-Time Integrator'
      real32_T Gain_a;                 // '<S520>/Gain'
      real32_T norm_out;               // '<S503>/remap_with_deadband'
      real32_T norm_out_p;             // '<S502>/remap'
      real32_T norm_out_d;             // '<S501>/remap_with_deadband'
      real32_T norm_out_o;             // '<S500>/remap_with_deadband'
      real32_T norm_out_n;             // '<S499>/remap'
      real32_T norm_out_dm;            // '<S498>/remap'
      real32_T ve_z_cmd_mps_p;
                     // '<S8>/BusConversion_InsertedFor_wp_command_at_inport_0'
      real32_T yaw_rate_cmd_radps_c;
                     // '<S8>/BusConversion_InsertedFor_wp_command_at_inport_0'
      real32_T CastToSingle1;          // '<S380>/Cast To Single1'
      real32_T CastToSingle2;          // '<S380>/Cast To Single2'
      real32_T Cos_g;                  // '<S491>/Cos'
      real32_T Sin_o;                  // '<S491>/Sin'
      real32_T Gain_c;                 // '<S491>/Gain'
      real32_T PProdOut_o;             // '<S428>/PProd Out'
      real32_T Switch2_l;              // '<S431>/Switch2'
      real32_T Cos_h;                  // '<S389>/Cos'
      real32_T Product_g5;             // '<S389>/Product'
      real32_T Sin_d;                  // '<S389>/Sin'
      real32_T Product1_h;             // '<S389>/Product1'
      real32_T ve_z_cmd_mps_p0;
                  // '<S378>/BusConversion_InsertedFor_Command out_at_inport_0'
      real32_T yaw_rate_cmd_radps_c5;
                  // '<S378>/BusConversion_InsertedFor_Command out_at_inport_0'
      real32_T dev_dist_m;             // '<S382>/deviation_calc'
      real32_T dev_bearing_rad;        // '<S382>/deviation_calc'
      real32_T Switch_dd;              // '<S431>/Switch'
      real32_T yaw_rate_cmd_radps_l;   // '<S6>/Product'
      real32_T norm_out_i;             // '<S376>/remap1'
      real32_T yaw_rate_cmd_radps_o5;  // '<S5>/Product'
      real32_T vb_x_cmd_mps_b;         // '<S5>/Product1'
      real32_T vb_y_cmd_mps_a;         // '<S5>/Product2'
      real32_T norm_out_b;             // '<S374>/remap1'
      real32_T Gain_cj;                // '<S4>/Gain'
      real32_T pitch_angle_cmd_rad_g;  // '<S4>/Product1'
      real32_T yaw_rate_cmd_radps_o5m; // '<S4>/Product'
      real32_T roll_angle_cmd_rad_d;   // '<S4>/Product2'
      real32_T norm_out_j;             // '<S372>/remap1'
      real32_T Cos_a;                  // '<S195>/Cos'
      real32_T Sin_n;                  // '<S195>/Sin'
      real32_T Gain_l;                 // '<S195>/Gain'
      real32_T UnitDelay_e;            // '<S201>/Unit Delay'
      real32_T TSamp_d;                // '<S199>/TSamp'
      real32_T Uk1_o;                  // '<S199>/UD'
      real32_T Diff_fd;                // '<S199>/Diff'
      real32_T Product_j;              // '<S196>/Product'
      real32_T UnitDelay_k;            // '<S202>/Unit Delay'
      real32_T Sum_h;                  // '<S196>/Sum'
      real32_T PProdOut_e;             // '<S241>/PProd Out'
      real32_T Integrator_d;           // '<S236>/Integrator'
      real32_T Sum_j;                  // '<S245>/Sum'
      real32_T Saturation_g;           // '<S243>/Saturation'
      real32_T Sum1_f;                 // '<S196>/Sum1'
      real32_T Saturation_f;           // '<S196>/Saturation'
      real32_T Gain_m;                 // '<S196>/Gain'
      real32_T DeadZone_i;             // '<S229>/DeadZone'
      real32_T IProdOut_e;             // '<S233>/IProd Out'
      real32_T Switch_gh;              // '<S227>/Switch'
      real32_T UnitDelay_b;            // '<S257>/Unit Delay'
      real32_T TSamp_a;                // '<S255>/TSamp'
      real32_T Uk1_h;                  // '<S255>/UD'
      real32_T Diff_kq;                // '<S255>/Diff'
      real32_T Product_l;              // '<S197>/Product'
      real32_T UnitDelay_j2;           // '<S258>/Unit Delay'
      real32_T Sum_m;                  // '<S197>/Sum'
      real32_T PProdOut_g;             // '<S297>/PProd Out'
      real32_T Integrator_o;           // '<S292>/Integrator'
      real32_T Sum_nw;                 // '<S301>/Sum'
      real32_T Saturation_pq;          // '<S299>/Saturation'
      real32_T Sum1_l;                 // '<S197>/Sum1'
      real32_T Saturation_a;           // '<S197>/Saturation'
      real32_T DeadZone_k;             // '<S285>/DeadZone'
      real32_T IProdOut_eh;            // '<S289>/IProd Out'
      real32_T Switch_f2;              // '<S283>/Switch'
      real32_T yaw_rate_cmd_radps_c53;
                    // '<S3>/BusConversion_InsertedFor_Command out_at_inport_0'
      real32_T throttle_cc_i;          // '<S3>/Gain'
      real32_T Sin_os;                 // '<S370>/Sin'
      real32_T Gain_b;                 // '<S370>/Gain'
      real32_T Cos_e;                  // '<S370>/Cos'
      real32_T filtered_val;           // '<S258>/MATLAB Function'
      real32_T filtered_val_o;         // '<S257>/MATLAB Function'
      real32_T filtered_val_p;         // '<S202>/MATLAB Function'
      real32_T filtered_val_l;         // '<S201>/MATLAB Function'
      real32_T filtered_val_k;         // '<S140>/MATLAB Function'
      real32_T heading_rad;            // '<S138>/heading_rad'
      real32_T Subtract_c;             // '<S137>/Subtract'
      real32_T Abs_m;                  // '<S137>/Abs'
      real32_T Switch_e;               // '<S137>/Switch'
      real32_T Product1_n;             // '<S19>/Product1'
      real32_T Switch2_j;              // '<S136>/Switch2'
      real32_T Sign;                   // '<S137>/Sign'
      real32_T Product_en;             // '<S137>/Product'
      real32_T Subtract1;              // '<S137>/Subtract1'
      real32_T Switch_j;               // '<S136>/Switch'
      real32_T filtered_val_g;         // '<S80>/MATLAB Function'
      real32_T filtered_val_e;         // '<S79>/MATLAB Function'
      real32_T Switch_n;               // '<S78>/Switch'
      real32_T filtered_val_f;         // '<S23>/MATLAB Function'
      real32_T filtered_val_lj;        // '<S22>/MATLAB Function'
      real32_T Switch_a;               // '<S21>/Switch'
      real32_T UnitDelay_DSTATE;       // '<S512>/Unit Delay'
      real32_T UnitDelay_DSTATE_k;     // '<S80>/Unit Delay'
      real32_T UnitDelay_DSTATE_o;     // '<S23>/Unit Delay'
      real32_T Integrator_DSTATE;      // '<S117>/Integrator'
      real32_T UnitDelay_DSTATE_h;     // '<S79>/Unit Delay'
      real32_T UD_DSTATE;              // '<S77>/UD'
      real32_T Integrator_DSTATE_d;    // '<S60>/Integrator'
      real32_T UnitDelay_DSTATE_c;     // '<S22>/Unit Delay'
      real32_T UD_DSTATE_l;            // '<S20>/UD'
      real32_T Integrator_DSTATE_dd;   // '<S175>/Integrator'
      real32_T UnitDelay_DSTATE_l;     // '<S140>/Unit Delay'
      real32_T UD_DSTATE_d;            // '<S135>/UD'
      real32_T DiscreteTimeIntegrator_DSTATE_m;// '<S527>/Discrete-Time Integrator' 
      real32_T DiscreteTimeIntegrator_DSTATE_i;// '<S520>/Discrete-Time Integrator' 
      real32_T UnitDelay_DSTATE_b;     // '<S201>/Unit Delay'
      real32_T UD_DSTATE_o;            // '<S199>/UD'
      real32_T UnitDelay_DSTATE_g;     // '<S202>/Unit Delay'
      real32_T Integrator_DSTATE_p;    // '<S236>/Integrator'
      real32_T UnitDelay_DSTATE_e;     // '<S257>/Unit Delay'
      real32_T UD_DSTATE_p;            // '<S255>/UD'
      real32_T UnitDelay_DSTATE_d;     // '<S258>/Unit Delay'
      real32_T Integrator_DSTATE_o;    // '<S292>/Integrator'
      std::array<int16_T, 16> sbus;
      int16_T cur_wp;                  // '<S8>/Sum'
      int16_T Uk1_ei;                  // '<S492>/Delay Input1'
      int16_T Sum_by;                  // '<S381>/Sum'
      int16_T Sum_pz;                  // '<S380>/Sum'
      int16_T DelayInput1_DSTATE;      // '<S492>/Delay Input1'
      int8_T mode_type_conversion;     // '<S15>/mode_type_conversion'
      int8_T Switch1;                  // '<S166>/Switch1'
      int8_T Switch2_a;                // '<S166>/Switch2'
      int8_T Switch1_e;                // '<S51>/Switch1'
      int8_T Switch2_at;               // '<S51>/Switch2'
      int8_T Switch1_p;                // '<S108>/Switch1'
      int8_T Switch2_or;               // '<S108>/Switch2'
      int8_T Cast;                     // '<S527>/Cast'
      int8_T Switch1_l;                // '<S227>/Switch1'
      int8_T Switch2_an;               // '<S227>/Switch2'
      int8_T Switch1_a;                // '<S283>/Switch1'
      int8_T Switch2_ei;               // '<S283>/Switch2'
      int8_T Integrator_PrevResetState;// '<S117>/Integrator'
      int8_T Integrator_PrevResetState_e;// '<S60>/Integrator'
      int8_T Integrator_PrevResetState_i;// '<S175>/Integrator'
      int8_T Integrator_PrevResetState_k;// '<S236>/Integrator'
      int8_T Integrator_PrevResetState_c;// '<S292>/Integrator'
      std::array<boolean_T, 8> UpperRelop;// '<S193>/UpperRelop'
      std::array<boolean_T, 8> LowerRelop1_n;// '<S193>/LowerRelop1'
      boolean_T Compare;               // '<S519>/Compare'
      boolean_T NOT;                   // '<S510>/NOT'
      boolean_T Compare_p;             // '<S516>/Compare'
      boolean_T NOT1;                  // '<S513>/NOT1'
      boolean_T OR1;                   // '<S15>/OR1'
      boolean_T Compare_d;             // '<S526>/Compare'
      boolean_T Compare_g;             // '<S523>/Compare'
      boolean_T Compare_j;             // '<S525>/Compare'
      boolean_T AND;                   // '<S512>/AND'
      boolean_T Compare_l;             // '<S524>/Compare'
      boolean_T Compare_h;             // '<S522>/Compare'
      boolean_T OR;                    // '<S512>/OR'
      boolean_T Switch_m;              // '<S512>/Switch'
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
      boolean_T LowerRelop1;           // '<S78>/LowerRelop1'
      boolean_T LowerRelop1_i;         // '<S21>/LowerRelop1'
      boolean_T Compare_mw;            // '<S134>/Compare'
      boolean_T NOT_a;                 // '<S19>/NOT'
      boolean_T RelationalOperator;    // '<S166>/Relational Operator'
      boolean_T fixforDTpropagationissue;// '<S166>/fix for DT propagation issue' 
      boolean_T fixforDTpropagationissue1;
                                      // '<S166>/fix for DT propagation issue1'
      boolean_T Equal1;                // '<S166>/Equal1'
      boolean_T AND3;                  // '<S166>/AND3'
      boolean_T RelationalOperator_o;  // '<S51>/Relational Operator'
      boolean_T fixforDTpropagationissue_m;// '<S51>/fix for DT propagation issue' 
      boolean_T fixforDTpropagationissue1_d;// '<S51>/fix for DT propagation issue1' 
      boolean_T Equal1_n;              // '<S51>/Equal1'
      boolean_T AND3_i;                // '<S51>/AND3'
      boolean_T RelationalOperator_h;  // '<S108>/Relational Operator'
      boolean_T fixforDTpropagationissue_k;// '<S108>/fix for DT propagation issue' 
      boolean_T fixforDTpropagationissue1_k;
                                      // '<S108>/fix for DT propagation issue1'
      boolean_T Equal1_j;              // '<S108>/Equal1'
      boolean_T AND3_e;                // '<S108>/AND3'
      boolean_T yaw_arm;               // '<S528>/yaw_arm'
      boolean_T Compare_k;             // '<S521>/Compare'
      boolean_T Compare_d5;            // '<S518>/Compare'
      boolean_T FixPtRelationalOperator;// '<S492>/FixPt Relational Operator'
      boolean_T UnitDelay_o;           // '<S8>/Unit Delay'
      boolean_T enable;                // '<S8>/OR'
      boolean_T Compare_e;             // '<S494>/Compare'
      boolean_T reached;               // '<S381>/check_wp_reached'
      boolean_T LowerRelop1_j;         // '<S480>/LowerRelop1'
      boolean_T LowerRelop1_jy;        // '<S431>/LowerRelop1'
      boolean_T Compare_c;             // '<S490>/Compare'
      boolean_T UpperRelop_p;          // '<S480>/UpperRelop'
      boolean_T UpperRelop_i;          // '<S431>/UpperRelop'
      boolean_T Compare_f;             // '<S371>/Compare'
      boolean_T Compare_a0;            // '<S311>/Compare'
      boolean_T Compare_md;            // '<S312>/Compare'
      boolean_T AND_e;                 // '<S198>/AND'
      boolean_T UnitDelay_kx;          // '<S198>/Unit Delay'
      boolean_T Uk1_ev;                // '<S313>/Delay Input1'
      boolean_T FixPtRelationalOperator_j;// '<S313>/FixPt Relational Operator'
      boolean_T OR_c;                  // '<S198>/OR'
      boolean_T NOT_h;                 // '<S198>/NOT'
      boolean_T RelationalOperator_l;  // '<S227>/Relational Operator'
      boolean_T fixforDTpropagationissue_p;// '<S227>/fix for DT propagation issue' 
      boolean_T fixforDTpropagationissue1_o;
                                      // '<S227>/fix for DT propagation issue1'
      boolean_T Equal1_g;              // '<S227>/Equal1'
      boolean_T AND3_p;                // '<S227>/AND3'
      boolean_T RelationalOperator_a;  // '<S283>/Relational Operator'
      boolean_T fixforDTpropagationissue_md;// '<S283>/fix for DT propagation issue' 
      boolean_T fixforDTpropagationissue1_a;
                                      // '<S283>/fix for DT propagation issue1'
      boolean_T Equal1_f;              // '<S283>/Equal1'
      boolean_T AND3_g;                // '<S283>/AND3'
      boolean_T LowerRelop1_jw;        // '<S360>/LowerRelop1'
      boolean_T UpperRelop_i3;         // '<S360>/UpperRelop'
      boolean_T Compare_ma;            // '<S141>/Compare'
      boolean_T LowerRelop1_d;         // '<S136>/LowerRelop1'
      boolean_T UpperRelop_g;          // '<S136>/UpperRelop'
      boolean_T UpperRelop_b;          // '<S78>/UpperRelop'
      boolean_T UpperRelop_e;          // '<S21>/UpperRelop'
      boolean_T UnitDelay_DSTATE_o4;   // '<S8>/Unit Delay'
      boolean_T UnitDelay_DSTATE_gw;   // '<S198>/Unit Delay'
      boolean_T DelayInput1_DSTATE_p;  // '<S313>/Delay Input1'
      boolean_T EnabledSubsystem_MODE; // '<S512>/Enabled Subsystem'
      boolean_T e_stopcounter_MODE;    // '<S511>/e_stop counter'
      boolean_T e_stopcounter_MODE_d;  // '<S515>/e_stop counter'
      boolean_T WAYPOINTCONTROLLER1_MODE;// '<Root>/WAYPOINT CONTROLLER1'
      boolean_T POS_HOLDCONTROLLER_MODE;// '<Root>/POS_HOLD CONTROLLER'
    };

    // Zero-crossing (trigger) state
    struct PrevZCX {
      ZCSigState manual_arming_Trig_ZCE;// '<S512>/manual_arming'
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

    // private member function(s) for subsystem '<S202>/MATLAB Function'
    static void MATLABFunction_i(real32_T rtu_prev_val, real_T rtu_raw_val,
      real32_T rtu_freq_cut, real32_T rtu_samp_freq, real32_T *rty_filtered_val);

    // private member function(s) for subsystem '<S372>/remap1'
    static void remap1(real32_T rtu_raw_in, real32_T rtu_in_min, real32_T
                       rtu_in_max, real32_T rtu_out_min, real32_T rtu_out_max,
                       real32_T *rty_norm_out);

    // private member function(s) for subsystem '<S500>/remap_with_deadband'
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
//  Block '<S77>/Data Type Duplicate' : Unused code path elimination
//  Block '<S78>/Data Type Duplicate' : Unused code path elimination
//  Block '<S78>/Data Type Propagation' : Unused code path elimination
//  Block '<S135>/Data Type Duplicate' : Unused code path elimination
//  Block '<S136>/Data Type Duplicate' : Unused code path elimination
//  Block '<S136>/Data Type Propagation' : Unused code path elimination
//  Block '<S193>/Data Type Duplicate' : Unused code path elimination
//  Block '<S193>/Data Type Propagation' : Unused code path elimination
//  Block '<S199>/Data Type Duplicate' : Unused code path elimination
//  Block '<S255>/Data Type Duplicate' : Unused code path elimination
//  Block '<S316>/Constant2' : Unused code path elimination
//  Block '<S360>/Data Type Duplicate' : Unused code path elimination
//  Block '<S360>/Data Type Propagation' : Unused code path elimination
//  Block '<S6>/Constant1' : Unused code path elimination
//  Block '<S6>/Constant4' : Unused code path elimination
//  Block '<S6>/Product1' : Unused code path elimination
//  Block '<S6>/Product2' : Unused code path elimination
//  Block '<S431>/Data Type Duplicate' : Unused code path elimination
//  Block '<S431>/Data Type Propagation' : Unused code path elimination
//  Block '<S480>/Data Type Duplicate' : Unused code path elimination
//  Block '<S480>/Data Type Propagation' : Unused code path elimination
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
//  '<S23>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/pitch_input_DLPF'
//  '<S24>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID'
//  '<S25>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/pitch_D_DLPF/MATLAB Function'
//  '<S26>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/pitch_input_DLPF/MATLAB Function'
//  '<S27>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Anti-windup'
//  '<S28>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/D Gain'
//  '<S29>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Filter'
//  '<S30>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Filter ICs'
//  '<S31>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/I Gain'
//  '<S32>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Ideal P Gain'
//  '<S33>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Ideal P Gain Fdbk'
//  '<S34>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Integrator'
//  '<S35>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Integrator ICs'
//  '<S36>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/N Copy'
//  '<S37>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/N Gain'
//  '<S38>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/P Copy'
//  '<S39>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Parallel P Gain'
//  '<S40>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Reset Signal'
//  '<S41>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Saturation'
//  '<S42>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Saturation Fdbk'
//  '<S43>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Sum'
//  '<S44>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Sum Fdbk'
//  '<S45>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tracking Mode'
//  '<S46>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tracking Mode Sum'
//  '<S47>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tsamp - Integral'
//  '<S48>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tsamp - Ngain'
//  '<S49>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/postSat Signal'
//  '<S50>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/preSat Signal'
//  '<S51>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Anti-windup/Disc. Clamping Parallel'
//  '<S52>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S53>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S54>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/D Gain/Disabled'
//  '<S55>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Filter/Disabled'
//  '<S56>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Filter ICs/Disabled'
//  '<S57>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/I Gain/External Parameters'
//  '<S58>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Ideal P Gain/Passthrough'
//  '<S59>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Ideal P Gain Fdbk/Disabled'
//  '<S60>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Integrator/Discrete'
//  '<S61>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Integrator ICs/Internal IC'
//  '<S62>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/N Copy/Disabled wSignal Specification'
//  '<S63>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/N Gain/Disabled'
//  '<S64>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/P Copy/Disabled'
//  '<S65>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Parallel P Gain/External Parameters'
//  '<S66>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Reset Signal/External Reset'
//  '<S67>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Saturation/Enabled'
//  '<S68>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Saturation Fdbk/Disabled'
//  '<S69>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Sum/Sum_PI'
//  '<S70>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Sum Fdbk/Disabled'
//  '<S71>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tracking Mode/Disabled'
//  '<S72>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tracking Mode Sum/Passthrough'
//  '<S73>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tsamp - Integral/Passthrough'
//  '<S74>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/Tsamp - Ngain/Passthrough'
//  '<S75>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/postSat Signal/Forward_Path'
//  '<S76>'  : 'malt/ANGLE CONTROLLER1/Pitch Controller/stab_pitch_PID/preSat Signal/Forward_Path'
//  '<S77>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/Discrete Derivative'
//  '<S78>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/Saturation Dynamic'
//  '<S79>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/roll_D_DLPF'
//  '<S80>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/roll_input_DLPF'
//  '<S81>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID'
//  '<S82>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/roll_D_DLPF/MATLAB Function'
//  '<S83>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/roll_input_DLPF/MATLAB Function'
//  '<S84>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Anti-windup'
//  '<S85>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/D Gain'
//  '<S86>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Filter'
//  '<S87>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Filter ICs'
//  '<S88>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/I Gain'
//  '<S89>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Ideal P Gain'
//  '<S90>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Ideal P Gain Fdbk'
//  '<S91>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Integrator'
//  '<S92>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Integrator ICs'
//  '<S93>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/N Copy'
//  '<S94>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/N Gain'
//  '<S95>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/P Copy'
//  '<S96>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Parallel P Gain'
//  '<S97>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Reset Signal'
//  '<S98>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Saturation'
//  '<S99>'  : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Saturation Fdbk'
//  '<S100>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Sum'
//  '<S101>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Sum Fdbk'
//  '<S102>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tracking Mode'
//  '<S103>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tracking Mode Sum'
//  '<S104>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tsamp - Integral'
//  '<S105>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tsamp - Ngain'
//  '<S106>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/postSat Signal'
//  '<S107>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/preSat Signal'
//  '<S108>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Anti-windup/Disc. Clamping Parallel'
//  '<S109>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S110>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S111>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/D Gain/Disabled'
//  '<S112>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Filter/Disabled'
//  '<S113>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Filter ICs/Disabled'
//  '<S114>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/I Gain/External Parameters'
//  '<S115>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Ideal P Gain/Passthrough'
//  '<S116>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Ideal P Gain Fdbk/Disabled'
//  '<S117>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Integrator/Discrete'
//  '<S118>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Integrator ICs/Internal IC'
//  '<S119>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/N Copy/Disabled wSignal Specification'
//  '<S120>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/N Gain/Disabled'
//  '<S121>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/P Copy/Disabled'
//  '<S122>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Parallel P Gain/External Parameters'
//  '<S123>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Reset Signal/External Reset'
//  '<S124>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Saturation/Enabled'
//  '<S125>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Saturation Fdbk/Disabled'
//  '<S126>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Sum/Sum_PI'
//  '<S127>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Sum Fdbk/Disabled'
//  '<S128>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tracking Mode/Disabled'
//  '<S129>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tracking Mode Sum/Passthrough'
//  '<S130>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tsamp - Integral/Passthrough'
//  '<S131>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/Tsamp - Ngain/Passthrough'
//  '<S132>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/postSat Signal/Forward_Path'
//  '<S133>' : 'malt/ANGLE CONTROLLER1/Roll Controller/stab_roll_PID/preSat Signal/Forward_Path'
//  '<S134>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/Compare To Constant1'
//  '<S135>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/Discrete Derivative'
//  '<S136>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/Saturation Dynamic'
//  '<S137>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/heading_error'
//  '<S138>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/set_tar_heading when heading_rate_cmd == 0'
//  '<S139>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID'
//  '<S140>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/yaw_D_DLPF'
//  '<S141>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/heading_error/Compare To Constant'
//  '<S142>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup'
//  '<S143>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/D Gain'
//  '<S144>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Filter'
//  '<S145>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Filter ICs'
//  '<S146>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/I Gain'
//  '<S147>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain'
//  '<S148>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain Fdbk'
//  '<S149>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Integrator'
//  '<S150>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Integrator ICs'
//  '<S151>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/N Copy'
//  '<S152>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/N Gain'
//  '<S153>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/P Copy'
//  '<S154>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Parallel P Gain'
//  '<S155>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Reset Signal'
//  '<S156>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Saturation'
//  '<S157>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Saturation Fdbk'
//  '<S158>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Sum'
//  '<S159>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Sum Fdbk'
//  '<S160>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode'
//  '<S161>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode Sum'
//  '<S162>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Integral'
//  '<S163>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Ngain'
//  '<S164>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/postSat Signal'
//  '<S165>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/preSat Signal'
//  '<S166>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup/Disc. Clamping Parallel'
//  '<S167>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S168>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S169>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/D Gain/Disabled'
//  '<S170>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Filter/Disabled'
//  '<S171>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Filter ICs/Disabled'
//  '<S172>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/I Gain/External Parameters'
//  '<S173>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain/Passthrough'
//  '<S174>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Ideal P Gain Fdbk/Disabled'
//  '<S175>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Integrator/Discrete'
//  '<S176>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Integrator ICs/Internal IC'
//  '<S177>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/N Copy/Disabled wSignal Specification'
//  '<S178>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/N Gain/Disabled'
//  '<S179>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/P Copy/Disabled'
//  '<S180>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Parallel P Gain/External Parameters'
//  '<S181>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Reset Signal/External Reset'
//  '<S182>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Saturation/Enabled'
//  '<S183>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Saturation Fdbk/Disabled'
//  '<S184>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Sum/Sum_PI'
//  '<S185>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Sum Fdbk/Disabled'
//  '<S186>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode/Disabled'
//  '<S187>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tracking Mode Sum/Passthrough'
//  '<S188>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Integral/Passthrough'
//  '<S189>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/Tsamp - Ngain/Passthrough'
//  '<S190>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/postSat Signal/Forward_Path'
//  '<S191>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/stab_yaw_rate_PID/preSat Signal/Forward_Path'
//  '<S192>' : 'malt/ANGLE CONTROLLER1/Yaw Rate Controller/yaw_D_DLPF/MATLAB Function'
//  '<S193>' : 'malt/Motor Mixing Algorithm/Saturation Dynamic'
//  '<S194>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller'
//  '<S195>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/2D rotation from NED_xy to body_xy'
//  '<S196>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem'
//  '<S197>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1'
//  '<S198>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling'
//  '<S199>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Discrete Derivative'
//  '<S200>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller'
//  '<S201>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/roll_D_DLPF'
//  '<S202>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/roll_D_DLPF1'
//  '<S203>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Anti-windup'
//  '<S204>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/D Gain'
//  '<S205>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Filter'
//  '<S206>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Filter ICs'
//  '<S207>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/I Gain'
//  '<S208>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Ideal P Gain'
//  '<S209>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Ideal P Gain Fdbk'
//  '<S210>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Integrator'
//  '<S211>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Integrator ICs'
//  '<S212>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/N Copy'
//  '<S213>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/N Gain'
//  '<S214>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/P Copy'
//  '<S215>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Parallel P Gain'
//  '<S216>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Reset Signal'
//  '<S217>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Saturation'
//  '<S218>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Saturation Fdbk'
//  '<S219>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Sum'
//  '<S220>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Sum Fdbk'
//  '<S221>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tracking Mode'
//  '<S222>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tracking Mode Sum'
//  '<S223>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tsamp - Integral'
//  '<S224>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tsamp - Ngain'
//  '<S225>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/postSat Signal'
//  '<S226>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/preSat Signal'
//  '<S227>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Anti-windup/Disc. Clamping Parallel'
//  '<S228>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S229>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S230>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/D Gain/Disabled'
//  '<S231>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Filter/Disabled'
//  '<S232>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Filter ICs/Disabled'
//  '<S233>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/I Gain/External Parameters'
//  '<S234>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Ideal P Gain/Passthrough'
//  '<S235>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Ideal P Gain Fdbk/Disabled'
//  '<S236>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Integrator/Discrete'
//  '<S237>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Integrator ICs/Internal IC'
//  '<S238>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/N Copy/Disabled wSignal Specification'
//  '<S239>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/N Gain/Disabled'
//  '<S240>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/P Copy/Disabled'
//  '<S241>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Parallel P Gain/External Parameters'
//  '<S242>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Reset Signal/External Reset'
//  '<S243>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Saturation/Enabled'
//  '<S244>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Saturation Fdbk/Disabled'
//  '<S245>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Sum/Sum_PI'
//  '<S246>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Sum Fdbk/Disabled'
//  '<S247>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tracking Mode/Disabled'
//  '<S248>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tracking Mode Sum/Passthrough'
//  '<S249>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tsamp - Integral/Passthrough'
//  '<S250>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/Tsamp - Ngain/Passthrough'
//  '<S251>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/postSat Signal/Forward_Path'
//  '<S252>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/Pitch angle controller/preSat Signal/Forward_Path'
//  '<S253>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/roll_D_DLPF/MATLAB Function'
//  '<S254>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem/roll_D_DLPF1/MATLAB Function'
//  '<S255>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Discrete Derivative'
//  '<S256>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller'
//  '<S257>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/roll_D_DLPF'
//  '<S258>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/roll_D_DLPF1'
//  '<S259>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Anti-windup'
//  '<S260>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/D Gain'
//  '<S261>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Filter'
//  '<S262>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Filter ICs'
//  '<S263>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/I Gain'
//  '<S264>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Ideal P Gain'
//  '<S265>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Ideal P Gain Fdbk'
//  '<S266>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Integrator'
//  '<S267>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Integrator ICs'
//  '<S268>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/N Copy'
//  '<S269>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/N Gain'
//  '<S270>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/P Copy'
//  '<S271>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Parallel P Gain'
//  '<S272>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Reset Signal'
//  '<S273>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Saturation'
//  '<S274>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Saturation Fdbk'
//  '<S275>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Sum'
//  '<S276>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Sum Fdbk'
//  '<S277>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tracking Mode'
//  '<S278>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tracking Mode Sum'
//  '<S279>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tsamp - Integral'
//  '<S280>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tsamp - Ngain'
//  '<S281>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/postSat Signal'
//  '<S282>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/preSat Signal'
//  '<S283>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Anti-windup/Disc. Clamping Parallel'
//  '<S284>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
//  '<S285>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
//  '<S286>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/D Gain/Disabled'
//  '<S287>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Filter/Disabled'
//  '<S288>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Filter ICs/Disabled'
//  '<S289>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/I Gain/External Parameters'
//  '<S290>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Ideal P Gain/Passthrough'
//  '<S291>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Ideal P Gain Fdbk/Disabled'
//  '<S292>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Integrator/Discrete'
//  '<S293>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Integrator ICs/Internal IC'
//  '<S294>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/N Copy/Disabled wSignal Specification'
//  '<S295>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/N Gain/Disabled'
//  '<S296>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/P Copy/Disabled'
//  '<S297>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Parallel P Gain/External Parameters'
//  '<S298>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Reset Signal/External Reset'
//  '<S299>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Saturation/Enabled'
//  '<S300>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Saturation Fdbk/Disabled'
//  '<S301>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Sum/Sum_PI'
//  '<S302>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Sum Fdbk/Disabled'
//  '<S303>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tracking Mode/Disabled'
//  '<S304>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tracking Mode Sum/Passthrough'
//  '<S305>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tsamp - Integral/Passthrough'
//  '<S306>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/Tsamp - Ngain/Passthrough'
//  '<S307>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/postSat Signal/Forward_Path'
//  '<S308>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/Roll angle controller/preSat Signal/Forward_Path'
//  '<S309>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/roll_D_DLPF/MATLAB Function'
//  '<S310>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/Subsystem1/roll_D_DLPF1/MATLAB Function'
//  '<S311>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Compare To Constant'
//  '<S312>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Compare To Constant1'
//  '<S313>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Detect Change'
//  '<S314>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller'
//  '<S315>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/set_tar_pos when vel_cmd == 0'
//  '<S316>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller'
//  '<S317>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/horizontal_error_calculation '
//  '<S318>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2'
//  '<S319>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/convert to ve_cmd'
//  '<S320>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/inertial_to_body conversion'
//  '<S321>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Anti-windup'
//  '<S322>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/D Gain'
//  '<S323>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter'
//  '<S324>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter ICs'
//  '<S325>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/I Gain'
//  '<S326>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain'
//  '<S327>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain Fdbk'
//  '<S328>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator'
//  '<S329>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator ICs'
//  '<S330>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Copy'
//  '<S331>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Gain'
//  '<S332>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/P Copy'
//  '<S333>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Parallel P Gain'
//  '<S334>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Reset Signal'
//  '<S335>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation'
//  '<S336>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation Fdbk'
//  '<S337>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum'
//  '<S338>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum Fdbk'
//  '<S339>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode'
//  '<S340>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode Sum'
//  '<S341>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Integral'
//  '<S342>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Ngain'
//  '<S343>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/postSat Signal'
//  '<S344>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/preSat Signal'
//  '<S345>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Anti-windup/Disabled'
//  '<S346>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/D Gain/Disabled'
//  '<S347>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter/Disabled'
//  '<S348>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter ICs/Disabled'
//  '<S349>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/I Gain/Disabled'
//  '<S350>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain/Passthrough'
//  '<S351>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain Fdbk/Disabled'
//  '<S352>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator/Disabled'
//  '<S353>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator ICs/Disabled'
//  '<S354>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Copy/Disabled wSignal Specification'
//  '<S355>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Gain/Disabled'
//  '<S356>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/P Copy/Disabled'
//  '<S357>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Parallel P Gain/External Parameters'
//  '<S358>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Reset Signal/Disabled'
//  '<S359>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation/External'
//  '<S360>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation/External/Saturation Dynamic'
//  '<S361>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation Fdbk/Disabled'
//  '<S362>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum/Passthrough_P'
//  '<S363>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum Fdbk/Disabled'
//  '<S364>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode/Disabled'
//  '<S365>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode Sum/Passthrough'
//  '<S366>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Integral/Disabled wSignal Specification'
//  '<S367>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Ngain/Passthrough'
//  '<S368>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/postSat Signal/Forward_Path'
//  '<S369>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/PID Controller2/preSat Signal/Forward_Path'
//  '<S370>' : 'malt/POS_HOLD CONTROLLER/Horizontal speed controller/zero_vel_handling/Horizontal position controller/Horizontal_position_controller/inertial_to_body conversion/2D rotation from NED_xy to body_xy'
//  '<S371>' : 'malt/Stab_input_conversion/Compare To Constant'
//  '<S372>' : 'malt/Stab_input_conversion/remap from min_spin to max'
//  '<S373>' : 'malt/Stab_input_conversion/remap from min_spin to max/remap1'
//  '<S374>' : 'malt/Stab_input_conversion1/remap from min_spin to max1'
//  '<S375>' : 'malt/Stab_input_conversion1/remap from min_spin to max1/remap1'
//  '<S376>' : 'malt/Stab_input_conversion2/remap from min_spin to max'
//  '<S377>' : 'malt/Stab_input_conversion2/remap from min_spin to max/remap1'
//  '<S378>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV'
//  '<S379>' : 'malt/WAYPOINT CONTROLLER1/capture rising edge'
//  '<S380>' : 'malt/WAYPOINT CONTROLLER1/determine target'
//  '<S381>' : 'malt/WAYPOINT CONTROLLER1/wp_completion_check'
//  '<S382>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller'
//  '<S383>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller'
//  '<S384>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/deviation_calc'
//  '<S385>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/horizontal_error_calculation '
//  '<S386>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1'
//  '<S387>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2'
//  '<S388>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/convert to ve_cmd'
//  '<S389>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/convert to ve_cmd1'
//  '<S390>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/gnd_spd_constraint '
//  '<S391>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/inertial_to_body conversion'
//  '<S392>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Anti-windup'
//  '<S393>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/D Gain'
//  '<S394>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Filter'
//  '<S395>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Filter ICs'
//  '<S396>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/I Gain'
//  '<S397>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Ideal P Gain'
//  '<S398>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Ideal P Gain Fdbk'
//  '<S399>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Integrator'
//  '<S400>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Integrator ICs'
//  '<S401>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/N Copy'
//  '<S402>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/N Gain'
//  '<S403>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/P Copy'
//  '<S404>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Parallel P Gain'
//  '<S405>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Reset Signal'
//  '<S406>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Saturation'
//  '<S407>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Saturation Fdbk'
//  '<S408>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Sum'
//  '<S409>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Sum Fdbk'
//  '<S410>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tracking Mode'
//  '<S411>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tracking Mode Sum'
//  '<S412>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tsamp - Integral'
//  '<S413>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tsamp - Ngain'
//  '<S414>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/postSat Signal'
//  '<S415>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/preSat Signal'
//  '<S416>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Anti-windup/Disabled'
//  '<S417>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/D Gain/Disabled'
//  '<S418>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Filter/Disabled'
//  '<S419>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Filter ICs/Disabled'
//  '<S420>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/I Gain/Disabled'
//  '<S421>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Ideal P Gain/Passthrough'
//  '<S422>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S423>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Integrator/Disabled'
//  '<S424>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Integrator ICs/Disabled'
//  '<S425>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S426>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/N Gain/Disabled'
//  '<S427>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/P Copy/Disabled'
//  '<S428>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Parallel P Gain/External Parameters'
//  '<S429>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Reset Signal/Disabled'
//  '<S430>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Saturation/External'
//  '<S431>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Saturation/External/Saturation Dynamic'
//  '<S432>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Saturation Fdbk/Disabled'
//  '<S433>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Sum/Passthrough_P'
//  '<S434>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Sum Fdbk/Disabled'
//  '<S435>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tracking Mode/Disabled'
//  '<S436>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S437>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tsamp - Integral/Disabled wSignal Specification'
//  '<S438>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S439>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/postSat Signal/Forward_Path'
//  '<S440>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller1/preSat Signal/Forward_Path'
//  '<S441>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Anti-windup'
//  '<S442>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/D Gain'
//  '<S443>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter'
//  '<S444>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter ICs'
//  '<S445>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/I Gain'
//  '<S446>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain'
//  '<S447>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain Fdbk'
//  '<S448>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator'
//  '<S449>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator ICs'
//  '<S450>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Copy'
//  '<S451>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Gain'
//  '<S452>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/P Copy'
//  '<S453>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Parallel P Gain'
//  '<S454>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Reset Signal'
//  '<S455>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation'
//  '<S456>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation Fdbk'
//  '<S457>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum'
//  '<S458>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum Fdbk'
//  '<S459>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode'
//  '<S460>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode Sum'
//  '<S461>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Integral'
//  '<S462>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Ngain'
//  '<S463>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/postSat Signal'
//  '<S464>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/preSat Signal'
//  '<S465>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Anti-windup/Disabled'
//  '<S466>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/D Gain/Disabled'
//  '<S467>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter/Disabled'
//  '<S468>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Filter ICs/Disabled'
//  '<S469>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/I Gain/Disabled'
//  '<S470>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain/Passthrough'
//  '<S471>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Ideal P Gain Fdbk/Disabled'
//  '<S472>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator/Disabled'
//  '<S473>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Integrator ICs/Disabled'
//  '<S474>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Copy/Disabled wSignal Specification'
//  '<S475>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/N Gain/Disabled'
//  '<S476>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/P Copy/Disabled'
//  '<S477>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Parallel P Gain/External Parameters'
//  '<S478>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Reset Signal/Disabled'
//  '<S479>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation/External'
//  '<S480>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation/External/Saturation Dynamic'
//  '<S481>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Saturation Fdbk/Disabled'
//  '<S482>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum/Passthrough_P'
//  '<S483>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Sum Fdbk/Disabled'
//  '<S484>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode/Disabled'
//  '<S485>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tracking Mode Sum/Passthrough'
//  '<S486>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Integral/Disabled wSignal Specification'
//  '<S487>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/Tsamp - Ngain/Passthrough'
//  '<S488>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/postSat Signal/Forward_Path'
//  '<S489>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/PID Controller2/preSat Signal/Forward_Path'
//  '<S490>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/gnd_spd_constraint /Compare To Constant'
//  '<S491>' : 'malt/WAYPOINT CONTROLLER1/WP_NAV/Horizontal position controller/Horizontal_position_controller/inertial_to_body conversion/2D rotation from NED_xy to body_xy'
//  '<S492>' : 'malt/WAYPOINT CONTROLLER1/capture rising edge/Detect Change1'
//  '<S493>' : 'malt/WAYPOINT CONTROLLER1/determine target/determine_current_tar_pos'
//  '<S494>' : 'malt/WAYPOINT CONTROLLER1/wp_completion_check/Compare To Constant'
//  '<S495>' : 'malt/WAYPOINT CONTROLLER1/wp_completion_check/check_wp_reached'
//  '<S496>' : 'malt/cmd to raw pwm1/motor_PWM_denormalize'
//  '<S497>' : 'malt/cmd to raw pwm1/motor_PWM_denormalize/remap'
//  '<S498>' : 'malt/command selection/e_stop_norm'
//  '<S499>' : 'malt/command selection/mode_norm'
//  '<S500>' : 'malt/command selection/pitch_norm_deadband'
//  '<S501>' : 'malt/command selection/roll_norm_deadband'
//  '<S502>' : 'malt/command selection/throttle_norm'
//  '<S503>' : 'malt/command selection/yaw_norm_deadband'
//  '<S504>' : 'malt/command selection/e_stop_norm/remap'
//  '<S505>' : 'malt/command selection/mode_norm/remap'
//  '<S506>' : 'malt/command selection/pitch_norm_deadband/remap_with_deadband'
//  '<S507>' : 'malt/command selection/roll_norm_deadband/remap_with_deadband'
//  '<S508>' : 'malt/command selection/throttle_norm/remap'
//  '<S509>' : 'malt/command selection/yaw_norm_deadband/remap_with_deadband'
//  '<S510>' : 'malt/determine arm and mode selection/Failsafe_management'
//  '<S511>' : 'malt/determine arm and mode selection/Subsystem'
//  '<S512>' : 'malt/determine arm and mode selection/yaw_stick_arming'
//  '<S513>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe'
//  '<S514>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem'
//  '<S515>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem'
//  '<S516>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem/Compare To Constant'
//  '<S517>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem/e_stop counter'
//  '<S518>' : 'malt/determine arm and mode selection/Failsafe_management/Radio failsafe/Subsystem/Subsystem/e_stop counter/Compare To Constant'
//  '<S519>' : 'malt/determine arm and mode selection/Subsystem/Compare To Constant'
//  '<S520>' : 'malt/determine arm and mode selection/Subsystem/e_stop counter'
//  '<S521>' : 'malt/determine arm and mode selection/Subsystem/e_stop counter/Compare To Constant'
//  '<S522>' : 'malt/determine arm and mode selection/yaw_stick_arming/Compare To Constant'
//  '<S523>' : 'malt/determine arm and mode selection/yaw_stick_arming/Compare To Constant1'
//  '<S524>' : 'malt/determine arm and mode selection/yaw_stick_arming/Compare To Constant2'
//  '<S525>' : 'malt/determine arm and mode selection/yaw_stick_arming/Compare To Constant3'
//  '<S526>' : 'malt/determine arm and mode selection/yaw_stick_arming/Compare To Constant4'
//  '<S527>' : 'malt/determine arm and mode selection/yaw_stick_arming/Enabled Subsystem'
//  '<S528>' : 'malt/determine arm and mode selection/yaw_stick_arming/manual_arming'

#endif                                 // RTW_HEADER_autocode_h_

//
// File trailer for generated code.
//
// [EOF]
//
