/*
 * Heli_Controller_Testing.c
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
#include "Heli_Controller_Testing_dt.h"

/* Block signals (auto storage) */
B_Heli_Controller_Testing_T Heli_Controller_Testing_B;

/* Continuous states */
X_Heli_Controller_Testing_T Heli_Controller_Testing_X;

/* Block states (auto storage) */
DW_Heli_Controller_Testing_T Heli_Controller_Testing_DW;

/* Real-time model */
RT_MODEL_Heli_Controller_Test_T Heli_Controller_Testing_M_;
RT_MODEL_Heli_Controller_Test_T *const Heli_Controller_Testing_M =
  &Heli_Controller_Testing_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  Heli_Controller_Testing_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for action system:
 *    '<S2>/If Action Subsystem'
 *    '<S9>/If Action Subsystem'
 */
void Heli_Controll_IfActionSubsystem(real_T rtu_In1, real_T rtu_In1_f,
  B_IfActionSubsystem_Heli_Cont_T *localB)
{
  /* Inport: '<S11>/In1' */
  localB->In1[0] = rtu_In1;
  localB->In1[1] = rtu_In1_f;
}

/*
 * Output and update for action system:
 *    '<S2>/If Action Subsystem1'
 *    '<S9>/If Action Subsystem1'
 */
void Heli_Control_IfActionSubsystem1(real_T rtu_In1, real_T rtu_In1_f, real_T
  rtu_In1_k, real_T rtu_In1_fr, B_IfActionSubsystem1_Heli_Con_T *localB)
{
  /* Inport: '<S12>/In1' */
  localB->In1[0] = rtu_In1;
  localB->In1[1] = rtu_In1_f;
  localB->In1[2] = rtu_In1_k;
  localB->In1[3] = rtu_In1_fr;
}

/* Model step function */
void Heli_Controller_Testing_step(void)
{
  /* local block i/o variables */
  real_T rtb_HILReadEncoder;
  real_T rtb_Subtract;
  real_T rtb_Sum1;
  real_T rtb_Takeoff;
  int8_T rtAction;
  real_T u0;
  real_T u1;
  real_T u2;
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    /* set solver stop time */
    if (!(Heli_Controller_Testing_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Heli_Controller_Testing_M->solverInfo,
                            ((Heli_Controller_Testing_M->Timing.clockTickH0 + 1)
        * Heli_Controller_Testing_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Heli_Controller_Testing_M->solverInfo,
                            ((Heli_Controller_Testing_M->Timing.clockTick0 + 1) *
        Heli_Controller_Testing_M->Timing.stepSize0 +
        Heli_Controller_Testing_M->Timing.clockTickH0 *
        Heli_Controller_Testing_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Heli_Controller_Testing_M)) {
    Heli_Controller_Testing_M->Timing.t[0] = rtsiGetT
      (&Heli_Controller_Testing_M->solverInfo);
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (Heli_Controller_Testing_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (Heli_Controller_Testing_DW.IfActionSubsystem1.IfActionSubsystem1_SubsysRanBC);
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    /* DigitalClock: '<S7>/Digital Clock1' */
    Heli_Controller_Testing_B.DigitalClock1 =
      (((Heli_Controller_Testing_M->Timing.clockTick1+
         Heli_Controller_Testing_M->Timing.clockTickH1* 4294967296.0)) * 0.01);
  }

  /* Step: '<S7>/Takeoff' */
  if (Heli_Controller_Testing_M->Timing.t[0] <
      Heli_Controller_Testing_P.Takeoff_Time) {
    rtb_Takeoff = Heli_Controller_Testing_P.Takeoff_Y0;
  } else {
    rtb_Takeoff = Heli_Controller_Testing_P.ELEV_SLF;
  }

  /* End of Step: '<S7>/Takeoff' */

  /* MATLAB Function: '<S7>/MATLAB Function1' incorporates:
   *  Constant: '<S7>/step size'
   */
  /* MATLAB Function 'Takeoff and Landing Logic/MATLAB Function1': '<S13>:1' */
  if (Heli_Controller_Testing_B.DigitalClock1 < 55.0) {
    /* '<S13>:1:9' */
    /* '<S13>:1:10' */
    Heli_Controller_Testing_DW.elevOut = rtb_Takeoff;
  } else {
    /* '<S13>:1:12' */
    Heli_Controller_Testing_DW.elevOut -= rtb_Takeoff /
      Heli_Controller_Testing_B.DigitalClock1 *
      Heli_Controller_Testing_P.stepsize_Value * 2.0;
  }

  /* '<S13>:1:14' */
  Heli_Controller_Testing_B.eOut = Heli_Controller_Testing_DW.elevOut;

  /* End of MATLAB Function: '<S7>/MATLAB Function1' */
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    /* S-Function (hil_read_encoder_block): '<S1>/HIL Read Encoder' */

    /* S-Function Block: Heli_Controller_Testing/Elev Feedback/HIL Read Encoder (hil_read_encoder_block) */
    {
      t_error result = hil_read_encoder
        (Heli_Controller_Testing_DW.HILInitialize_Card,
         &Heli_Controller_Testing_P.HILReadEncoder_channels, 1,
         &Heli_Controller_Testing_DW.HILReadEncoder_Buffer);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
      } else {
        rtb_HILReadEncoder = Heli_Controller_Testing_DW.HILReadEncoder_Buffer;
      }
    }

    /* Gain: '<Root>/Gain1' incorporates:
     *  Bias: '<S1>/Bias'
     *  Gain: '<S1>/Count2Degree'
     */
    Heli_Controller_Testing_B.Gain1 = (Heli_Controller_Testing_P.KE_C2D *
      rtb_HILReadEncoder + Heli_Controller_Testing_P.Bias_Bias) *
      Heli_Controller_Testing_P.D2R;

    /* Gain: '<Root>/rad to deg' */
    Heli_Controller_Testing_B.radtodeg = Heli_Controller_Testing_P.R2D *
      Heli_Controller_Testing_B.Gain1;
  }

  /* If: '<S2>/If' */
  rtAction = -1;
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    if (Heli_Controller_Testing_B.eOut == 24.25) {
      rtAction = 0;
    }

    Heli_Controller_Testing_DW.If_ActiveSubsystem = rtAction;
  } else {
    rtAction = Heli_Controller_Testing_DW.If_ActiveSubsystem;
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    Heli_Controll_IfActionSubsystem(Heli_Controller_Testing_B.eOut,
      Heli_Controller_Testing_B.radtodeg,
      &Heli_Controller_Testing_B.IfActionSubsystem);
    if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
      srUpdateBC
        (Heli_Controller_Testing_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
  }

  /* End of If: '<S2>/If' */
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
  }

  /* Sum: '<Root>/Sum' incorporates:
   *  Gain: '<Root>/deg to rad'
   */
  rtb_Takeoff = Heli_Controller_Testing_P.D2R * Heli_Controller_Testing_B.eOut -
    Heli_Controller_Testing_B.Gain1;

  /* Gain: '<S4>/Gain' */
  Heli_Controller_Testing_B.Kp = Heli_Controller_Testing_P.Kp * rtb_Takeoff;

  /* Integrator: '<S4>/Integrator' */
  Heli_Controller_Testing_B.Ki = Heli_Controller_Testing_X.Integrator_CSTATE;

  /* Gain: '<S4>/Gain2' */
  Heli_Controller_Testing_B.Gain2 = Heli_Controller_Testing_P.Kd * rtb_Takeoff;

  /* TransferFcn: '<S4>/Transfer Fcn' */
  Heli_Controller_Testing_B.Kd = 0.0;
  Heli_Controller_Testing_B.Kd += Heli_Controller_Testing_P.TransferFcn_C *
    Heli_Controller_Testing_X.TransferFcn_CSTATE;
  Heli_Controller_Testing_B.Kd += Heli_Controller_Testing_P.TransferFcn_D *
    Heli_Controller_Testing_B.Gain2;

  /* Sum: '<S4>/Sum' */
  u0 = (Heli_Controller_Testing_B.Kp + Heli_Controller_Testing_B.Ki) +
    Heli_Controller_Testing_B.Kd;

  /* Saturate: '<S4>/Saturation1' */
  if (u0 > Heli_Controller_Testing_P.VSUM_MAX) {
    Heli_Controller_Testing_B.KpKiKd = Heli_Controller_Testing_P.VSUM_MAX;
  } else if (u0 < -Heli_Controller_Testing_P.VSUM_MAX) {
    Heli_Controller_Testing_B.KpKiKd = -Heli_Controller_Testing_P.VSUM_MAX;
  } else {
    Heli_Controller_Testing_B.KpKiKd = u0;
  }

  /* End of Saturate: '<S4>/Saturation1' */

  /* If: '<S2>/If1' */
  rtAction = -1;
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    if (Heli_Controller_Testing_B.eOut == 24.25) {
      rtAction = 0;
    }

    Heli_Controller_Testing_DW.If1_ActiveSubsystem = rtAction;
  } else {
    rtAction = Heli_Controller_Testing_DW.If1_ActiveSubsystem;
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    Heli_Control_IfActionSubsystem1(Heli_Controller_Testing_B.Kp,
      Heli_Controller_Testing_B.Ki, Heli_Controller_Testing_B.Kd,
      Heli_Controller_Testing_B.KpKiKd,
      &Heli_Controller_Testing_B.IfActionSubsystem1);
    if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
      srUpdateBC
        (Heli_Controller_Testing_DW.IfActionSubsystem1.IfActionSubsystem1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
  }

  /* End of If: '<S2>/If1' */
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
  }

  /* Gain: '<S3>/Gain' */
  rtb_Subtract = Heli_Controller_Testing_P.Gain_Gain *
    Heli_Controller_Testing_B.KpKiKd;

  /* Step: '<S10>/Step4' */
  if (Heli_Controller_Testing_M->Timing.t[0] <
      Heli_Controller_Testing_P.Step4_Time) {
    u0 = Heli_Controller_Testing_P.Step4_Y0;
  } else {
    u0 = Heli_Controller_Testing_P.TRAV_SS;
  }

  /* End of Step: '<S10>/Step4' */

  /* Sum: '<S10>/Add' incorporates:
   *  Constant: '<S10>/Constant'
   */
  Heli_Controller_Testing_B.Add = u0 + Heli_Controller_Testing_P.Constant_Value;
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    /* S-Function (hil_read_encoder_block): '<S8>/HIL Read Encoder' */

    /* S-Function Block: Heli_Controller_Testing/Trav Feedback/HIL Read Encoder (hil_read_encoder_block) */
    {
      t_error result = hil_read_encoder
        (Heli_Controller_Testing_DW.HILInitialize_Card,
         &Heli_Controller_Testing_P.HILReadEncoder_channels_l, 1,
         &Heli_Controller_Testing_DW.HILReadEncoder_Buffer_e);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
      } else {
        rtb_HILReadEncoder = Heli_Controller_Testing_DW.HILReadEncoder_Buffer_e;
      }
    }

    /* Gain: '<Root>/Gain3' incorporates:
     *  Bias: '<S8>/Bias'
     *  Gain: '<S8>/Count2Degree'
     */
    Heli_Controller_Testing_B.Gain3 = (Heli_Controller_Testing_P.KE_C2D * 0.5 *
      rtb_HILReadEncoder + Heli_Controller_Testing_P.Bias_Bias_e) *
      Heli_Controller_Testing_P.D2R;
  }

  /* Sum: '<Root>/Sum1' incorporates:
   *  Gain: '<Root>/deg to rad1'
   */
  rtb_Sum1 = Heli_Controller_Testing_P.D2R * Heli_Controller_Testing_B.Add -
    Heli_Controller_Testing_B.Gain3;

  /* Gain: '<S5>/Gain' */
  Heli_Controller_Testing_B.Kpt = Heli_Controller_Testing_P.Kpt * rtb_Sum1;

  /* Integrator: '<S5>/Integrator' */
  Heli_Controller_Testing_B.Kti = Heli_Controller_Testing_X.Integrator_CSTATE_i;

  /* Gain: '<S5>/Gain2' */
  Heli_Controller_Testing_B.Gain2_e = Heli_Controller_Testing_P.Kdt * rtb_Sum1;

  /* TransferFcn: '<S5>/Transfer Fcn' */
  Heli_Controller_Testing_B.Kdt = 0.0;
  Heli_Controller_Testing_B.Kdt += Heli_Controller_Testing_P.TransferFcn_C_o *
    Heli_Controller_Testing_X.TransferFcn_CSTATE_h;
  Heli_Controller_Testing_B.Kdt += Heli_Controller_Testing_P.TransferFcn_D_a *
    Heli_Controller_Testing_B.Gain2_e;

  /* Sum: '<S5>/Sum' */
  u0 = (Heli_Controller_Testing_B.Kpt + Heli_Controller_Testing_B.Kti) +
    Heli_Controller_Testing_B.Kdt;

  /* Saturate: '<S5>/Saturation1' */
  if (u0 > Heli_Controller_Testing_P.U_MAX) {
    Heli_Controller_Testing_B.KptKitKdt = Heli_Controller_Testing_P.U_MAX;
  } else if (u0 < -Heli_Controller_Testing_P.U_MAX) {
    Heli_Controller_Testing_B.KptKitKdt = -Heli_Controller_Testing_P.U_MAX;
  } else {
    Heli_Controller_Testing_B.KptKitKdt = u0;
  }

  /* End of Saturate: '<S5>/Saturation1' */

  /* Sum: '<S3>/Add' */
  u0 = rtb_Subtract + Heli_Controller_Testing_B.KptKitKdt;

  /* Saturate: '<S6>/VF_MAX' */
  u1 = -Heli_Controller_Testing_P.VSUM_MAX * 0.5;
  u2 = Heli_Controller_Testing_P.VSUM_MAX * 0.5;
  if (u0 > u2) {
    u0 = u2;
  } else {
    if (u0 < u1) {
      u0 = u1;
    }
  }

  /* Gain: '<S6>/AMP GAIN' incorporates:
   *  Saturate: '<S6>/VF_MAX'
   */
  u0 *= 1.0 / Heli_Controller_Testing_P.K_CABLE;

  /* Saturate: '<S6>/Saturation' */
  u1 = -Heli_Controller_Testing_P.K_DAQ * 0.5;
  u2 = Heli_Controller_Testing_P.K_DAQ * 0.5;
  if (u0 > u2) {
    Heli_Controller_Testing_B.Saturation = u2;
  } else if (u0 < u1) {
    Heli_Controller_Testing_B.Saturation = u1;
  } else {
    Heli_Controller_Testing_B.Saturation = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    /* S-Function (hil_write_analog_block): '<S6>/HIL Write Analog' */

    /* S-Function Block: Heli_Controller_Testing/Real Plant/HIL Write Analog (hil_write_analog_block) */
    {
      t_error result;
      result = hil_write_analog(Heli_Controller_Testing_DW.HILInitialize_Card,
        &Heli_Controller_Testing_P.HILWriteAnalog_channels, 1,
        &Heli_Controller_Testing_B.Saturation);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
      }
    }
  }

  /* Sum: '<S3>/Subtract' */
  rtb_Subtract -= Heli_Controller_Testing_B.KptKitKdt;

  /* Saturate: '<S6>/VB_MAX' */
  u1 = -Heli_Controller_Testing_P.VSUM_MAX * 0.5;
  u2 = Heli_Controller_Testing_P.VSUM_MAX * 0.5;
  if (rtb_Subtract > u2) {
    rtb_Subtract = u2;
  } else {
    if (rtb_Subtract < u1) {
      rtb_Subtract = u1;
    }
  }

  /* Gain: '<S6>/AMP GAIN1' incorporates:
   *  Saturate: '<S6>/VB_MAX'
   */
  u0 = 1.0 / Heli_Controller_Testing_P.K_CABLE * rtb_Subtract;

  /* Saturate: '<S6>/Saturation1' */
  u1 = -Heli_Controller_Testing_P.K_DAQ * 0.5;
  u2 = Heli_Controller_Testing_P.K_DAQ * 0.5;
  if (u0 > u2) {
    Heli_Controller_Testing_B.Saturation1 = u2;
  } else if (u0 < u1) {
    Heli_Controller_Testing_B.Saturation1 = u1;
  } else {
    Heli_Controller_Testing_B.Saturation1 = u0;
  }

  /* End of Saturate: '<S6>/Saturation1' */
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    /* S-Function (hil_write_analog_block): '<S6>/HIL Write Analog1' */

    /* S-Function Block: Heli_Controller_Testing/Real Plant/HIL Write Analog1 (hil_write_analog_block) */
    {
      t_error result;
      result = hil_write_analog(Heli_Controller_Testing_DW.HILInitialize_Card,
        &Heli_Controller_Testing_P.HILWriteAnalog1_channels, 1,
        &Heli_Controller_Testing_B.Saturation1);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
      }
    }

    /* Gain: '<Root>/rad to deg1' */
    Heli_Controller_Testing_B.radtodeg1 = Heli_Controller_Testing_P.R2D *
      Heli_Controller_Testing_B.Gain3;
  }

  /* If: '<S9>/If' */
  rtAction = -1;
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    if (Heli_Controller_Testing_B.Add == 90.0) {
      rtAction = 0;
    }

    Heli_Controller_Testing_DW.If_ActiveSubsystem_m = rtAction;
  } else {
    rtAction = Heli_Controller_Testing_DW.If_ActiveSubsystem_m;
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    Heli_Controll_IfActionSubsystem(Heli_Controller_Testing_B.Add,
      Heli_Controller_Testing_B.radtodeg1,
      &Heli_Controller_Testing_B.IfActionSubsystem_g);
    if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
      srUpdateBC
        (Heli_Controller_Testing_DW.IfActionSubsystem_g.IfActionSubsystem_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem' */
  }

  /* End of If: '<S9>/If' */
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
  }

  /* If: '<S9>/If1' */
  rtAction = -1;
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    if (Heli_Controller_Testing_B.Add == 90.0) {
      rtAction = 0;
    }

    Heli_Controller_Testing_DW.If1_ActiveSubsystem_i = rtAction;
  } else {
    rtAction = Heli_Controller_Testing_DW.If1_ActiveSubsystem_i;
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    Heli_Control_IfActionSubsystem1(Heli_Controller_Testing_B.Kpt,
      Heli_Controller_Testing_B.Kti, Heli_Controller_Testing_B.Kdt,
      Heli_Controller_Testing_B.KptKitKdt,
      &Heli_Controller_Testing_B.IfActionSubsystem1_h);
    if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
      srUpdateBC
        (Heli_Controller_Testing_DW.IfActionSubsystem1_h.IfActionSubsystem1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem1' */
  }

  /* End of If: '<S9>/If1' */
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
  }

  /* Gain: '<S4>/Gain3' */
  Heli_Controller_Testing_B.Gain3_c = Heli_Controller_Testing_P.Ki * rtb_Takeoff;
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
  }

  /* Gain: '<S5>/Gain3' */
  Heli_Controller_Testing_B.Gain3_cq = Heli_Controller_Testing_P.Kit * rtb_Sum1;
  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    /* External mode */
    rtExtModeUploadCheckTrigger(2);

    {                                  /* Sample time: [0.0s, 0.0s] */
      rtExtModeUpload(0, Heli_Controller_Testing_M->Timing.t[0]);
    }

    if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {/* Sample time: [0.01s, 0.0s] */
      rtExtModeUpload(1, (((Heli_Controller_Testing_M->Timing.clockTick1+
                            Heli_Controller_Testing_M->Timing.clockTickH1*
                            4294967296.0)) * 0.01));
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(Heli_Controller_Testing_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(Heli_Controller_Testing_M)!=-1) &&
          !((rtmGetTFinal(Heli_Controller_Testing_M)-
             (((Heli_Controller_Testing_M->Timing.clockTick1+
                Heli_Controller_Testing_M->Timing.clockTickH1* 4294967296.0)) *
              0.01)) > (((Heli_Controller_Testing_M->Timing.clockTick1+
                          Heli_Controller_Testing_M->Timing.clockTickH1*
                          4294967296.0)) * 0.01) * (DBL_EPSILON))) {
        rtmSetErrorStatus(Heli_Controller_Testing_M, "Simulation finished");
      }

      if (rtmGetStopRequested(Heli_Controller_Testing_M)) {
        rtmSetErrorStatus(Heli_Controller_Testing_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&Heli_Controller_Testing_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Heli_Controller_Testing_M->Timing.clockTick0)) {
      ++Heli_Controller_Testing_M->Timing.clockTickH0;
    }

    Heli_Controller_Testing_M->Timing.t[0] = rtsiGetSolverStopTime
      (&Heli_Controller_Testing_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.01s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.01, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      Heli_Controller_Testing_M->Timing.clockTick1++;
      if (!Heli_Controller_Testing_M->Timing.clockTick1) {
        Heli_Controller_Testing_M->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void Heli_Controller_Testing_derivatives(void)
{
  XDot_Heli_Controller_Testing_T *_rtXdot;
  _rtXdot = ((XDot_Heli_Controller_Testing_T *)
             Heli_Controller_Testing_M->ModelData.derivs);

  /* Derivatives for Integrator: '<S4>/Integrator' */
  _rtXdot->Integrator_CSTATE = Heli_Controller_Testing_B.Gain3_c;

  /* Derivatives for TransferFcn: '<S4>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = 0.0;
  _rtXdot->TransferFcn_CSTATE += Heli_Controller_Testing_P.TransferFcn_A *
    Heli_Controller_Testing_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += Heli_Controller_Testing_B.Gain2;

  /* Derivatives for Integrator: '<S5>/Integrator' */
  _rtXdot->Integrator_CSTATE_i = Heli_Controller_Testing_B.Gain3_cq;

  /* Derivatives for TransferFcn: '<S5>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE_h = 0.0;
  _rtXdot->TransferFcn_CSTATE_h += Heli_Controller_Testing_P.TransferFcn_A_o *
    Heli_Controller_Testing_X.TransferFcn_CSTATE_h;
  _rtXdot->TransferFcn_CSTATE_h += Heli_Controller_Testing_B.Gain2_e;
}

/* Model initialize function */
void Heli_Controller_Testing_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Heli_Controller_Testing_M, 0,
                sizeof(RT_MODEL_Heli_Controller_Test_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Heli_Controller_Testing_M->solverInfo,
                          &Heli_Controller_Testing_M->Timing.simTimeStep);
    rtsiSetTPtr(&Heli_Controller_Testing_M->solverInfo, &rtmGetTPtr
                (Heli_Controller_Testing_M));
    rtsiSetStepSizePtr(&Heli_Controller_Testing_M->solverInfo,
                       &Heli_Controller_Testing_M->Timing.stepSize0);
    rtsiSetdXPtr(&Heli_Controller_Testing_M->solverInfo,
                 &Heli_Controller_Testing_M->ModelData.derivs);
    rtsiSetContStatesPtr(&Heli_Controller_Testing_M->solverInfo, (real_T **)
                         &Heli_Controller_Testing_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&Heli_Controller_Testing_M->solverInfo,
      &Heli_Controller_Testing_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Heli_Controller_Testing_M->solverInfo,
      &Heli_Controller_Testing_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Heli_Controller_Testing_M->solverInfo,
      &Heli_Controller_Testing_M->ModelData.periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Heli_Controller_Testing_M->solverInfo,
      &Heli_Controller_Testing_M->ModelData.periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Heli_Controller_Testing_M->solverInfo,
                          (&rtmGetErrorStatus(Heli_Controller_Testing_M)));
    rtsiSetRTModelPtr(&Heli_Controller_Testing_M->solverInfo,
                      Heli_Controller_Testing_M);
  }

  rtsiSetSimTimeStep(&Heli_Controller_Testing_M->solverInfo, MAJOR_TIME_STEP);
  Heli_Controller_Testing_M->ModelData.intgData.f[0] =
    Heli_Controller_Testing_M->ModelData.odeF[0];
  Heli_Controller_Testing_M->ModelData.contStates =
    ((X_Heli_Controller_Testing_T *) &Heli_Controller_Testing_X);
  rtsiSetSolverData(&Heli_Controller_Testing_M->solverInfo, (void *)
                    &Heli_Controller_Testing_M->ModelData.intgData);
  rtsiSetSolverName(&Heli_Controller_Testing_M->solverInfo,"ode1");
  rtmSetTPtr(Heli_Controller_Testing_M,
             &Heli_Controller_Testing_M->Timing.tArray[0]);
  rtmSetTFinal(Heli_Controller_Testing_M, 80.0);
  Heli_Controller_Testing_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  Heli_Controller_Testing_M->Sizes.checksums[0] = (2045649308U);
  Heli_Controller_Testing_M->Sizes.checksums[1] = (3739168011U);
  Heli_Controller_Testing_M->Sizes.checksums[2] = (1196716321U);
  Heli_Controller_Testing_M->Sizes.checksums[3] = (2897385578U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    Heli_Controller_Testing_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &Heli_Controller_Testing_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &Heli_Controller_Testing_DW.IfActionSubsystem1.IfActionSubsystem1_SubsysRanBC;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = (sysRanDType *)
      &Heli_Controller_Testing_DW.IfActionSubsystem_g.IfActionSubsystem_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &Heli_Controller_Testing_DW.IfActionSubsystem1_h.IfActionSubsystem1_SubsysRanBC;
    rteiSetModelMappingInfoPtr(Heli_Controller_Testing_M->extModeInfo,
      &Heli_Controller_Testing_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Heli_Controller_Testing_M->extModeInfo,
                        Heli_Controller_Testing_M->Sizes.checksums);
    rteiSetTPtr(Heli_Controller_Testing_M->extModeInfo, rtmGetTPtr
                (Heli_Controller_Testing_M));
  }

  /* block I/O */
  (void) memset(((void *) &Heli_Controller_Testing_B), 0,
                sizeof(B_Heli_Controller_Testing_T));

  /* states (continuous) */
  {
    (void) memset((void *)&Heli_Controller_Testing_X, 0,
                  sizeof(X_Heli_Controller_Testing_T));
  }

  /* states (dwork) */
  (void) memset((void *)&Heli_Controller_Testing_DW, 0,
                sizeof(DW_Heli_Controller_Testing_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Heli_Controller_Testing_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: Heli_Controller_Testing/HIL Initialize (hil_initialize_block) */
  {
    static const t_clock hardware_clocks[2U] = {
      HARDWARE_CLOCK_0
      , HARDWARE_CLOCK_1
    };

    static const t_clock_mode clock_modes[2U] = {
      CLOCK_TIMEBASE_MODE
      , CLOCK_TIMEBASE_MODE
    };

    static const t_uint analog_output_channels[4U] = {
      0
      , 1
      , 2
      , 3
    };

    static const t_double analog_output_minimums[4U] = {
      -10.0
      , -10.0
      , -10.0
      , -10.0
    };

    static const t_double analog_output_maximums[4U] = {
      10.0
      , 10.0
      , 10.0
      , 10.0
    };

    static const t_double initial_analog_outputs[4U] = {
      0.0
      , 0.0
      , 0.0
      , 0.0
    };

    static const t_uint encoder_input_channels[4U] = {
      0
      , 1
      , 2
      , 3
    };

    static const t_encoder_quadrature_mode encoder_quadrature[4U] = {
      ENCODER_QUADRATURE_4X
      , ENCODER_QUADRATURE_4X
      , ENCODER_QUADRATURE_4X
      , ENCODER_QUADRATURE_4X
    };

    static const t_double encoder_filter_frequency[4U] = {
      1.6666666666666668E+7
      , 1.6666666666666668E+7
      , 1.6666666666666668E+7
      , 1.6666666666666668E+7
    };

    static const t_int32 initial_encoder_counts[4U] = {
      0
      , 0
      , 0
      , 0
    };

    t_int result;
    t_boolean is_switching;
    result = hil_open("q4", "0", &Heli_Controller_Testing_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
      return;
    }

    is_switching = false;
    if (!is_switching) {
      result = hil_set_clock_mode(Heli_Controller_Testing_DW.HILInitialize_Card,
        (t_clock *) hardware_clocks, 2U, (t_clock_mode *) clock_modes);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
        return;
      }
    }

    result = hil_watchdog_clear(Heli_Controller_Testing_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
      return;
    }

    if (!is_switching) {
      result = hil_set_analog_output_ranges
        (Heli_Controller_Testing_DW.HILInitialize_Card, analog_output_channels,
         4U,
         analog_output_minimums, analog_output_maximums);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
        return;
      }
    }

    if (!is_switching) {
      result = hil_write_analog(Heli_Controller_Testing_DW.HILInitialize_Card,
        analog_output_channels, 4U, initial_analog_outputs);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
        return;
      }
    }

    if (!is_switching) {
      result = hil_set_encoder_quadrature_mode
        (Heli_Controller_Testing_DW.HILInitialize_Card, encoder_input_channels,
         4U, (t_encoder_quadrature_mode *) encoder_quadrature);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
        return;
      }

      result = hil_set_encoder_filter_frequency
        (Heli_Controller_Testing_DW.HILInitialize_Card, encoder_input_channels,
         4U, encoder_filter_frequency);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
        return;
      }
    }

    if (!is_switching) {
      result = hil_set_encoder_counts
        (Heli_Controller_Testing_DW.HILInitialize_Card, encoder_input_channels,
         4U, initial_encoder_counts);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for If: '<S2>/If' */
  Heli_Controller_Testing_DW.If_ActiveSubsystem = -1;

  /* Start for If: '<S2>/If1' */
  Heli_Controller_Testing_DW.If1_ActiveSubsystem = -1;

  /* Start for If: '<S9>/If' */
  Heli_Controller_Testing_DW.If_ActiveSubsystem_m = -1;

  /* Start for If: '<S9>/If1' */
  Heli_Controller_Testing_DW.If1_ActiveSubsystem_i = -1;

  /* InitializeConditions for MATLAB Function: '<S7>/MATLAB Function1' */
  Heli_Controller_Testing_DW.elevOut = 0.0;

  /* InitializeConditions for Integrator: '<S4>/Integrator' */
  Heli_Controller_Testing_X.Integrator_CSTATE =
    Heli_Controller_Testing_P.Integrator_IC;

  /* InitializeConditions for TransferFcn: '<S4>/Transfer Fcn' */
  Heli_Controller_Testing_X.TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S5>/Integrator' */
  Heli_Controller_Testing_X.Integrator_CSTATE_i =
    Heli_Controller_Testing_P.Integrator_IC_m;

  /* InitializeConditions for TransferFcn: '<S5>/Transfer Fcn' */
  Heli_Controller_Testing_X.TransferFcn_CSTATE_h = 0.0;
}

/* Model terminate function */
void Heli_Controller_Testing_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: Heli_Controller_Testing/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    static const t_uint analog_output_channels[4U] = {
      0
      , 1
      , 2
      , 3
    };

    hil_task_stop_all(Heli_Controller_Testing_DW.HILInitialize_Card);
    hil_monitor_stop_all(Heli_Controller_Testing_DW.HILInitialize_Card);
    is_switching = false;
    if ((Heli_Controller_Testing_P.HILInitialize_set_analog_outp_f &&
         !is_switching) ||
        (Heli_Controller_Testing_P.HILInitialize_set_analog_output &&
         is_switching)) {
      Heli_Controller_Testing_DW.HILInitialize_AOVoltages[0] =
        Heli_Controller_Testing_P.HILInitialize_final_analog_outp;
      Heli_Controller_Testing_DW.HILInitialize_AOVoltages[1] =
        Heli_Controller_Testing_P.HILInitialize_final_analog_outp;
      Heli_Controller_Testing_DW.HILInitialize_AOVoltages[2] =
        Heli_Controller_Testing_P.HILInitialize_final_analog_outp;
      Heli_Controller_Testing_DW.HILInitialize_AOVoltages[3] =
        Heli_Controller_Testing_P.HILInitialize_final_analog_outp;
      num_final_analog_outputs = 4U;
    }

    if (num_final_analog_outputs > 0) {
      result = hil_write_analog(Heli_Controller_Testing_DW.HILInitialize_Card,
        analog_output_channels, num_final_analog_outputs,
        &Heli_Controller_Testing_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Heli_Controller_Testing_M, _rt_error_message);
      }
    }

    hil_task_delete_all(Heli_Controller_Testing_DW.HILInitialize_Card);
    hil_monitor_delete_all(Heli_Controller_Testing_DW.HILInitialize_Card);
    hil_close(Heli_Controller_Testing_DW.HILInitialize_Card);
    Heli_Controller_Testing_DW.HILInitialize_Card = NULL;
  }
}
