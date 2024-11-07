/*
 * Heli_Controller_Testing_private.h
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

#ifndef RTW_HEADER_Heli_Controller_Testing_private_h_
#define RTW_HEADER_Heli_Controller_Testing_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

/* A global buffer for storing error messages (defined in quanser_common library) */
EXTERN char _rt_error_message[512];
extern void Heli_Controll_IfActionSubsystem(real_T rtu_In1, real_T rtu_In1_f,
  B_IfActionSubsystem_Heli_Cont_T *localB);
extern void Heli_Control_IfActionSubsystem1(real_T rtu_In1, real_T rtu_In1_f,
  real_T rtu_In1_k, real_T rtu_In1_fr, B_IfActionSubsystem1_Heli_Con_T *localB);

/* private model entry point functions */
extern void Heli_Controller_Testing_derivatives(void);

#endif                                 /* RTW_HEADER_Heli_Controller_Testing_private_h_ */
