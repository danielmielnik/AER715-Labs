/*
 * Heli_Controller_Testing_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Heli_Controller_Testing".
 *
 * Model version              : 1.269
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Wed Nov 06 15:59:35 2024
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(t_card)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "t_card"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&Heli_Controller_Testing_B.DigitalClock1), 0, 0, 21 },

  { (char_T *)(&Heli_Controller_Testing_B.IfActionSubsystem1_h.In1[0]), 0, 0, 4
  },

  { (char_T *)(&Heli_Controller_Testing_B.IfActionSubsystem_g.In1[0]), 0, 0, 2 },

  { (char_T *)(&Heli_Controller_Testing_B.IfActionSubsystem1.In1[0]), 0, 0, 4 },

  { (char_T *)(&Heli_Controller_Testing_B.IfActionSubsystem.In1[0]), 0, 0, 2 }
  ,

  { (char_T *)(&Heli_Controller_Testing_DW.HILInitialize_AOVoltages[0]), 0, 0, 5
  },

  { (char_T *)(&Heli_Controller_Testing_DW.HILInitialize_Card), 14, 0, 1 },

  { (char_T *)(&Heli_Controller_Testing_DW.HILReadEncoder_PWORK), 11, 0, 18 },

  { (char_T *)(&Heli_Controller_Testing_DW.HILReadEncoder_Buffer), 6, 0, 2 },

  { (char_T *)(&Heli_Controller_Testing_DW.If_ActiveSubsystem), 2, 0, 4 },

  { (char_T *)
    (&Heli_Controller_Testing_DW.IfActionSubsystem1_h.IfActionSubsystem1_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&Heli_Controller_Testing_DW.IfActionSubsystem_g.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&Heli_Controller_Testing_DW.IfActionSubsystem1.IfActionSubsystem1_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&Heli_Controller_Testing_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  14U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Heli_Controller_Testing_P.D2R), 0, 0, 19 },

  { (char_T *)(&Heli_Controller_Testing_P.HILReadEncoder_channels), 7, 0, 4 },

  { (char_T *)(&Heli_Controller_Testing_P.HILInitialize_active), 8, 0, 8 },

  { (char_T *)(&Heli_Controller_Testing_P.stepsize_Value), 0, 0, 17 },

  { (char_T *)(&Heli_Controller_Testing_P.HILReadEncoder_Active), 8, 0, 4 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] Heli_Controller_Testing_dt.h */
