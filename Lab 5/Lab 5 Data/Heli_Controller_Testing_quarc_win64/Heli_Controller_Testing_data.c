/*
 * Heli_Controller_Testing_data.c
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

#include "Heli_Controller_Testing.h"
#include "Heli_Controller_Testing_private.h"

/* Block parameters (auto storage) */
P_Heli_Controller_Testing_T Heli_Controller_Testing_P = {
  0.017453292519943295,                /* Variable: D2R
                                        * Referenced by:
                                        *   '<Root>/Gain1'
                                        *   '<Root>/Gain3'
                                        *   '<Root>/deg to rad'
                                        *   '<Root>/deg to rad1'
                                        */
  24.25,                               /* Variable: ELEV_SLF
                                        * Referenced by: '<S7>/Takeoff'
                                        */
  -0.087890625,                        /* Variable: KE_C2D
                                        * Referenced by:
                                        *   '<S1>/Count2Degree'
                                        *   '<S8>/Count2Degree'
                                        */
  5.0,                                 /* Variable: K_CABLE
                                        * Referenced by:
                                        *   '<S6>/AMP GAIN'
                                        *   '<S6>/AMP GAIN1'
                                        */
  10.0,                                /* Variable: K_DAQ
                                        * Referenced by:
                                        *   '<S6>/Saturation'
                                        *   '<S6>/Saturation1'
                                        */
  28.0,                                /* Variable: Kd
                                        * Referenced by: '<S4>/Gain2'
                                        */
  539.5187,                            /* Variable: Kdt
                                        * Referenced by: '<S5>/Gain2'
                                        */
  45.0,                                /* Variable: Ki
                                        * Referenced by: '<S4>/Gain3'
                                        */
  63.4427,                             /* Variable: Kit
                                        * Referenced by: '<S5>/Gain3'
                                        */
  45.0,                                /* Variable: Kp
                                        * Referenced by: '<S4>/Gain'
                                        */
  351.0496,                            /* Variable: Kpt
                                        * Referenced by: '<S5>/Gain'
                                        */
  57.295779513082323,                  /* Variable: R2D
                                        * Referenced by:
                                        *   '<Root>/rad to deg'
                                        *   '<Root>/rad to deg1'
                                        */
  90.0,                                /* Variable: TRAV_SS
                                        * Referenced by: '<S10>/Step4'
                                        */
  6.6,                                 /* Variable: U_MAX
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  36.0,                                /* Variable: VSUM_MAX
                                        * Referenced by:
                                        *   '<S4>/Saturation1'
                                        *   '<S6>/VB_MAX'
                                        *   '<S6>/VF_MAX'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_final_analog_outp
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_final_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_set_other_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_set_other_outpu_a
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  3U,                                  /* Mask Parameter: HILReadEncoder_channels
                                        * Referenced by: '<S1>/HIL Read Encoder'
                                        */
  1U,                                  /* Mask Parameter: HILReadEncoder_channels_l
                                        * Referenced by: '<S8>/HIL Read Encoder'
                                        */
  3U,                                  /* Mask Parameter: HILWriteAnalog_channels
                                        * Referenced by: '<S6>/HIL Write Analog'
                                        */
  2U,                                  /* Mask Parameter: HILWriteAnalog1_channels
                                        * Referenced by: '<S6>/HIL Write Analog1'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_active
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_final_digital_out
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_output
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_analog_outp_f
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_outpu
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_digital_out_j
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_a
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_e
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.01,                                /* Expression: qc_get_step_size
                                        * Referenced by: '<S7>/step size'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S7>/Takeoff'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Takeoff'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Bias'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Integrator'
                                        */
  -10.0,                               /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S4>/Transfer Fcn'
                                        */
  -100.0,                              /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S4>/Transfer Fcn'
                                        */
  10.0,                                /* Computed Parameter: TransferFcn_D
                                        * Referenced by: '<S4>/Transfer Fcn'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S3>/Gain'
                                        */
  20.0,                                /* Expression: 20
                                        * Referenced by: '<S10>/Step4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Step4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Bias'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Integrator'
                                        */
  -10.0,                               /* Computed Parameter: TransferFcn_A_o
                                        * Referenced by: '<S5>/Transfer Fcn'
                                        */
  -100.0,                              /* Computed Parameter: TransferFcn_C_o
                                        * Referenced by: '<S5>/Transfer Fcn'
                                        */
  10.0,                                /* Computed Parameter: TransferFcn_D_a
                                        * Referenced by: '<S5>/Transfer Fcn'
                                        */
  1,                                   /* Computed Parameter: HILReadEncoder_Active
                                        * Referenced by: '<S1>/HIL Read Encoder'
                                        */
  1,                                   /* Computed Parameter: HILReadEncoder_Active_i
                                        * Referenced by: '<S8>/HIL Read Encoder'
                                        */
  0,                                   /* Computed Parameter: HILWriteAnalog_Active
                                        * Referenced by: '<S6>/HIL Write Analog'
                                        */
  0                                    /* Computed Parameter: HILWriteAnalog1_Active
                                        * Referenced by: '<S6>/HIL Write Analog1'
                                        */
};
