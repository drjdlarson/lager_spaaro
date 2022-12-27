//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: zero_crossing_types.h
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

#ifndef ZERO_CROSSING_TYPES_H
#define ZERO_CROSSING_TYPES_H
#include "rtwtypes.h"

// Trigger directions: falling, either, and rising
typedef enum {
  FALLING_ZERO_CROSSING = -1,
  ANY_ZERO_CROSSING = 0,
  RISING_ZERO_CROSSING = 1
} ZCDirection;

// Previous state of a trigger signal
typedef uint8_T ZCSigState;

// Initial value of a trigger zero crossing signal
#define UNINITIALIZED_ZCSIG            0x03U
#define NEG_ZCSIG                      0x02U
#define POS_ZCSIG                      0x01U
#define ZERO_ZCSIG                     0x00U

// Current state of a trigger signal
typedef enum { FALLING_ZCEVENT = -1, NO_ZCEVENT = 0, RISING_ZCEVENT = 1 }
  ZCEventType;

#endif                                 // ZERO_CROSSING_TYPES_H

//
// File trailer for generated code.
//
// [EOF]
//
