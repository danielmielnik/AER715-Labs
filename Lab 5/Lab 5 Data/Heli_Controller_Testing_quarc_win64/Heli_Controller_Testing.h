/*
 * Heli_Controller_Testing.h
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

#ifndef RTW_HEADER_Heli_Controller_Testing_h_
#define RTW_HEADER_Heli_Controller_Testing_h_
#include <float.h>
#include <string.h>
#ifndef Heli_Controller_Testing_COMMON_INCLUDES_
# define Heli_Controller_Testing_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_extern.h"
#endif                                 /* Heli_Controller_Testing_COMMON_INCLUDES_ */

#include "Heli_Controller_Testing_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals for system '<S2>/If Action Subsystem' */
typedef struct {
  real_T In1[2];                       /* '<S11>/In1' */
} B_IfActionSubsystem_Heli_Cont_T;

/* Block states (auto storage) for system '<S2>/If Action Subsystem' */
typedef struct {
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S2>/If Action Subsystem' */
} DW_IfActionSubsystem_Heli_Con_T;

/* Block signals for system '<S2>/If Action Subsystem1' */
typedef struct {
  real_T In1[4];                       /* '<S12>/In1' */
} B_IfActionSubsystem1_Heli_Con_T;

/* Block states (auto storage) for system '<S2>/If Action Subsystem1' */
typedef struct {
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S2>/If Action Subsystem1' */
} DW_IfActionSubsystem1_Heli_Co_T;

/* Block signals (auto storage) */
typedef struct {
  real_T DigitalClock1;                /* '<S7>/Digital Clock1' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T radtodeg;                     /* '<Root>/rad to deg' */
  real_T Kp;                           /* '<S4>/Gain' */
  real_T Ki;                           /* '<S4>/Integrator' */
  real_T Gain2;                        /* '<S4>/Gain2' */
  real_T Kd;                           /* '<S4>/Transfer Fcn' */
  real_T KpKiKd;                       /* '<S4>/Saturation1' */
  real_T Add;                          /* '<S10>/Add' */
  real_T Gain3;                        /* '<Root>/Gain3' */
  real_T Kpt;                          /* '<S5>/Gain' */
  real_T Kti;                          /* '<S5>/Integrator' */
  real_T Gain2_e;                      /* '<S5>/Gain2' */
  real_T Kdt;                          /* '<S5>/Transfer Fcn' */
  real_T KptKitKdt;                    /* '<S5>/Saturation1' */
  real_T Saturation;                   /* '<S6>/Saturation' */
  real_T Saturation1;                  /* '<S6>/Saturation1' */
  real_T radtodeg1;                    /* '<Root>/rad to deg1' */
  real_T Gain3_c;                      /* '<S4>/Gain3' */
  real_T Gain3_cq;                     /* '<S5>/Gain3' */
  real_T eOut;                         /* '<S7>/MATLAB Function1' */
  B_IfActionSubsystem1_Heli_Con_T IfActionSubsystem1_h;/* '<S9>/If Action Subsystem1' */
  B_IfActionSubsystem_Heli_Cont_T IfActionSubsystem_g;/* '<S9>/If Action Subsystem' */
  B_IfActionSubsystem1_Heli_Con_T IfActionSubsystem1;/* '<S2>/If Action Subsystem1' */
  B_IfActionSubsystem_Heli_Cont_T IfActionSubsystem;/* '<S2>/If Action Subsystem' */
} B_Heli_Controller_Testing_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize_AOVoltages[4];  /* '<Root>/HIL Initialize' */
  real_T elevOut;                      /* '<S7>/MATLAB Function1' */
  t_card HILInitialize_Card;           /* '<Root>/HIL Initialize' */
  void *HILReadEncoder_PWORK;          /* '<S1>/HIL Read Encoder' */
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S2>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S2>/To Workspace1' */

  void *HILReadEncoder_PWORK_a;        /* '<S8>/HIL Read Encoder' */
  void *HILWriteAnalog_PWORK;          /* '<S6>/HIL Write Analog' */
  void *HILWriteAnalog1_PWORK;         /* '<S6>/HIL Write Analog1' */
  struct {
    void *LoggedData;
  } Scope_Elev_PWORK;                  /* '<Root>/Scope_Elev' */

  struct {
    void *LoggedData;
  } Scope_Trav_PWORK;                  /* '<Root>/Scope_Trav' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_j;               /* '<S9>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK_h;              /* '<S9>/To Workspace1' */

  struct {
    void *LoggedData[4];
  } Scope_PWORK;                       /* '<S4>/Scope' */

  struct {
    void *LoggedData[4];
  } Scope_PWORK_g;                     /* '<S5>/Scope' */

  int32_T HILReadEncoder_Buffer;       /* '<S1>/HIL Read Encoder' */
  int32_T HILReadEncoder_Buffer_e;     /* '<S8>/HIL Read Encoder' */
  int8_T If_ActiveSubsystem;           /* '<S2>/If' */
  int8_T If1_ActiveSubsystem;          /* '<S2>/If1' */
  int8_T If_ActiveSubsystem_m;         /* '<S9>/If' */
  int8_T If1_ActiveSubsystem_i;        /* '<S9>/If1' */
  DW_IfActionSubsystem1_Heli_Co_T IfActionSubsystem1_h;/* '<S9>/If Action Subsystem1' */
  DW_IfActionSubsystem_Heli_Con_T IfActionSubsystem_g;/* '<S9>/If Action Subsystem' */
  DW_IfActionSubsystem1_Heli_Co_T IfActionSubsystem1;/* '<S2>/If Action Subsystem1' */
  DW_IfActionSubsystem_Heli_Con_T IfActionSubsystem;/* '<S2>/If Action Subsystem' */
} DW_Heli_Controller_Testing_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S4>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S4>/Transfer Fcn' */
  real_T Integrator_CSTATE_i;          /* '<S5>/Integrator' */
  real_T TransferFcn_CSTATE_h;         /* '<S5>/Transfer Fcn' */
} X_Heli_Controller_Testing_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S4>/Integrator' */
  real_T TransferFcn_CSTATE;           /* '<S4>/Transfer Fcn' */
  real_T Integrator_CSTATE_i;          /* '<S5>/Integrator' */
  real_T TransferFcn_CSTATE_h;         /* '<S5>/Transfer Fcn' */
} XDot_Heli_Controller_Testing_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S4>/Integrator' */
  boolean_T TransferFcn_CSTATE;        /* '<S4>/Transfer Fcn' */
  boolean_T Integrator_CSTATE_i;       /* '<S5>/Integrator' */
  boolean_T TransferFcn_CSTATE_h;      /* '<S5>/Transfer Fcn' */
} XDis_Heli_Controller_Testing_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Parameters (auto storage) */
struct P_Heli_Controller_Testing_T_ {
  real_T D2R;                          /* Variable: D2R
                                        * Referenced by:
                                        *   '<Root>/Gain1'
                                        *   '<Root>/Gain3'
                                        *   '<Root>/deg to rad'
                                        *   '<Root>/deg to rad1'
                                        */
  real_T ELEV_SLF;                     /* Variable: ELEV_SLF
                                        * Referenced by: '<S7>/Takeoff'
                                        */
  real_T KE_C2D;                       /* Variable: KE_C2D
                                        * Referenced by:
                                        *   '<S1>/Count2Degree'
                                        *   '<S8>/Count2Degree'
                                        */
  real_T K_CABLE;                      /* Variable: K_CABLE
                                        * Referenced by:
                                        *   '<S6>/AMP GAIN'
                                        *   '<S6>/AMP GAIN1'
                                        */
  real_T K_DAQ;                        /* Variable: K_DAQ
                                        * Referenced by:
                                        *   '<S6>/Saturation'
                                        *   '<S6>/Saturation1'
                                        */
  real_T Kd;                           /* Variable: Kd
                                        * Referenced by: '<S4>/Gain2'
                                        */
  real_T Kdt;                          /* Variable: Kdt
                                        * Referenced by: '<S5>/Gain2'
                                        */
  real_T Ki;                           /* Variable: Ki
                                        * Referenced by: '<S4>/Gain3'
                                        */
  real_T Kit;                          /* Variable: Kit
                                        * Referenced by: '<S5>/Gain3'
                                        */
  real_T Kp;                           /* Variable: Kp
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Kpt;                          /* Variable: Kpt
                                        * Referenced by: '<S5>/Gain'
                                        */
  real_T R2D;                          /* Variable: R2D
                                        * Referenced by:
                                        *   '<Root>/rad to deg'
                                        *   '<Root>/rad to deg1'
                                        */
  real_T TRAV_SS;                      /* Variable: TRAV_SS
                                        * Referenced by: '<S10>/Step4'
                                        */
  real_T U_MAX;                        /* Variable: U_MAX
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T VSUM_MAX;                     /* Variable: VSUM_MAX
                                        * Referenced by:
                                        *   '<S4>/Saturation1'
                                        *   '<S6>/VB_MAX'
                                        *   '<S6>/VF_MAX'
                                        */
  real_T HILInitialize_final_analog_outp;/* Mask Parameter: HILInitialize_final_analog_outp
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_final_pwm_outputs;/* Mask Parameter: HILInitialize_final_pwm_outputs
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outputs;/* Mask Parameter: HILInitialize_set_other_outputs
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outpu_a;/* Mask Parameter: HILInitialize_set_other_outpu_a
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  uint32_T HILReadEncoder_channels;    /* Mask Parameter: HILReadEncoder_channels
                                        * Referenced by: '<S1>/HIL Read Encoder'
                                        */
  uint32_T HILReadEncoder_channels_l;  /* Mask Parameter: HILReadEncoder_channels_l
                                        * Referenced by: '<S8>/HIL Read Encoder'
                                        */
  uint32_T HILWriteAnalog_channels;    /* Mask Parameter: HILWriteAnalog_channels
                                        * Referenced by: '<S6>/HIL Write Analog'
                                        */
  uint32_T HILWriteAnalog1_channels;   /* Mask Parameter: HILWriteAnalog1_channels
                                        * Referenced by: '<S6>/HIL Write Analog1'
                                        */
  boolean_T HILInitialize_active;      /* Mask Parameter: HILInitialize_active
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  boolean_T HILInitialize_final_digital_out;/* Mask Parameter: HILInitialize_final_digital_out
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_output;/* Mask Parameter: HILInitialize_set_analog_output
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_f;/* Mask Parameter: HILInitialize_set_analog_outp_f
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_outpu;/* Mask Parameter: HILInitialize_set_digital_outpu
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_j;/* Mask Parameter: HILInitialize_set_digital_out_j
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_a;/* Mask Parameter: HILInitialize_set_pwm_outputs_a
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_e;/* Mask Parameter: HILInitialize_set_pwm_outputs_e
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  real_T stepsize_Value;               /* Expression: qc_get_step_size
                                        * Referenced by: '<S7>/step size'
                                        */
  real_T Takeoff_Time;                 /* Expression: 1
                                        * Referenced by: '<S7>/Takeoff'
                                        */
  real_T Takeoff_Y0;                   /* Expression: 0
                                        * Referenced by: '<S7>/Takeoff'
                                        */
  real_T Bias_Bias;                    /* Expression: 0
                                        * Referenced by: '<S1>/Bias'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S4>/Integrator'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<S4>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<S4>/Transfer Fcn'
                                        */
  real_T TransferFcn_D;                /* Computed Parameter: TransferFcn_D
                                        * Referenced by: '<S4>/Transfer Fcn'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.5
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Step4_Time;                   /* Expression: 20
                                        * Referenced by: '<S10>/Step4'
                                        */
  real_T Step4_Y0;                     /* Expression: 0
                                        * Referenced by: '<S10>/Step4'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T Bias_Bias_e;                  /* Expression: 0
                                        * Referenced by: '<S8>/Bias'
                                        */
  real_T Integrator_IC_m;              /* Expression: 0
                                        * Referenced by: '<S5>/Integrator'
                                        */
  real_T TransferFcn_A_o;              /* Computed Parameter: TransferFcn_A_o
                                        * Referenced by: '<S5>/Transfer Fcn'
                                        */
  real_T TransferFcn_C_o;              /* Computed Parameter: TransferFcn_C_o
                                        * Referenced by: '<S5>/Transfer Fcn'
                                        */
  real_T TransferFcn_D_a;              /* Computed Parameter: TransferFcn_D_a
                                        * Referenced by: '<S5>/Transfer Fcn'
                                        */
  boolean_T HILReadEncoder_Active;     /* Computed Parameter: HILReadEncoder_Active
                                        * Referenced by: '<S1>/HIL Read Encoder'
                                        */
  boolean_T HILReadEncoder_Active_i;   /* Computed Parameter: HILReadEncoder_Active_i
                                        * Referenced by: '<S8>/HIL Read Encoder'
                                        */
  boolean_T HILWriteAnalog_Active;     /* Computed Parameter: HILWriteAnalog_Active
                                        * Referenced by: '<S6>/HIL Write Analog'
                                        */
  boolean_T HILWriteAnalog1_Active;    /* Computed Parameter: HILWriteAnalog1_Active
                                        * Referenced by: '<S6>/HIL Write Analog1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Heli_Controller_Testi_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    X_Heli_Controller_Testing_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeF[1][4];
    ODE1_IntgData intgData;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Heli_Controller_Testing_T Heli_Controller_Testing_P;

/* Block signals (auto storage) */
extern B_Heli_Controller_Testing_T Heli_Controller_Testing_B;

/* Continuous states (auto storage) */
extern X_Heli_Controller_Testing_T Heli_Controller_Testing_X;

/* Block states (auto storage) */
extern DW_Heli_Controller_Testing_T Heli_Controller_Testing_DW;

/* Model entry point functions */
extern void Heli_Controller_Testing_initialize(void);
extern void Heli_Controller_Testing_step(void);
extern void Heli_Controller_Testing_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Heli_Controller_Test_T *const Heli_Controller_Testing_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Heli_Controller_Testing'
 * '<S1>'   : 'Heli_Controller_Testing/Elev Feedback'
 * '<S2>'   : 'Heli_Controller_Testing/Elevation Data Recording'
 * '<S3>'   : 'Heli_Controller_Testing/Junction'
 * '<S4>'   : 'Heli_Controller_Testing/PID  CONTROLLER'
 * '<S5>'   : 'Heli_Controller_Testing/PID  CONTROLLER1'
 * '<S6>'   : 'Heli_Controller_Testing/Real Plant'
 * '<S7>'   : 'Heli_Controller_Testing/Takeoff and Landing Logic'
 * '<S8>'   : 'Heli_Controller_Testing/Trav Feedback'
 * '<S9>'   : 'Heli_Controller_Testing/Travel Data Recording'
 * '<S10>'  : 'Heli_Controller_Testing/Travel Input'
 * '<S11>'  : 'Heli_Controller_Testing/Elevation Data Recording/If Action Subsystem'
 * '<S12>'  : 'Heli_Controller_Testing/Elevation Data Recording/If Action Subsystem1'
 * '<S13>'  : 'Heli_Controller_Testing/Takeoff and Landing Logic/MATLAB Function1'
 * '<S14>'  : 'Heli_Controller_Testing/Travel Data Recording/If Action Subsystem'
 * '<S15>'  : 'Heli_Controller_Testing/Travel Data Recording/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_Heli_Controller_Testing_h_ */
