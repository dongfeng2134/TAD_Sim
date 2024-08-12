/*
 * File: softabs_sfunction.cpp
 *
 *
 *   --- THIS FILE GENERATED BY S-FUNCTION BUILDER: 3.0 ---
 *
 *   This file is an S-function produced by the S-Function
 *   Builder which only recognizes certain fields.  Changes made
 *   outside these fields will be lost the next time the block is
 *   used to load, edit, and resave this file. This file will be overwritten
 *   by the S-function Builder block. If you want to edit this file by hand,
 *   you must change it only in the area defined as:
 *
 *        %%%-SFUNWIZ_defines_Changes_BEGIN
 *        #define NAME 'replacement text'
 *        %%% SFUNWIZ_defines_Changes_END
 *
 *   DO NOT change NAME--Change the 'replacement text' only.
 *
 *   For better compatibility with the Simulink Coder, the
 *   "wrapper" S-function technique is used.  This is discussed
 *   in the Simulink Coder's Manual in the Chapter titled,
 *   "Wrapper S-functions".
 *
 *  -------------------------------------------------------------------------
 * | See matlabroot/simulink/src/sfuntmpl_doc.c for a more detailed template |
 *  -------------------------------------------------------------------------
 *
 * Created: Thu Jul 27 19:31:05 2023
 */

#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME softabs_sfunction

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
/* %%%-SFUNWIZ_defines_Changes_BEGIN --- EDIT HERE TO _END */
#define NUM_INPUTS 1

/* Input Port  0 */
#define IN_PORT_0_NAME ecu_in
#define INPUT_0_DIMS_ND \
  { 1, 1 }
#define INPUT_0_NUM_ELEMS 1
#define INPUT_0_WIDTH 1
#define INPUT_DIMS_0_COL 1
#define INPUT_0_DTYPE real_T
#define INPUT_0_COMPLEX COMPLEX_NO
#define IN_0_BUS_BASED 1
#define IN_0_BUS_NAME powecu_in
#define IN_0_DIMS 1 - D
#define INPUT_0_FEEDTHROUGH 1
#define IN_0_ISSIGNED 0
#define IN_0_WORDLENGTH 8
#define IN_0_FIXPOINTSCALING 1
#define IN_0_FRACTIONLENGTH 9
#define IN_0_BIAS 0
#define IN_0_SLOPE 0.125
#define NUM_OUTPUTS 1

/* Output Port  0 */
#define OUT_PORT_0_NAME ecu_out
#define OUTPUT_0_DIMS_ND \
  { 1, 1 }
#define OUTPUT_0_NUM_ELEMS 1
#define OUTPUT_0_WIDTH 1
#define OUTPUT_DIMS_0_COL 1
#define OUTPUT_0_DTYPE real_T
#define OUTPUT_0_COMPLEX COMPLEX_NO
#define OUT_0_BUS_BASED 1
#define OUT_0_BUS_NAME powecu_out
#define OUT_0_DIMS 1 - D
#define OUT_0_ISSIGNED 1
#define OUT_0_WORDLENGTH 8
#define OUT_0_FIXPOINTSCALING 1
#define OUT_0_FRACTIONLENGTH 3
#define OUT_0_BIAS 0
#define OUT_0_SLOPE 0.125
#define NPARAMS 2

/* Parameter 0 */
#define PARAMETER_0_NAME lic_path
#define PARAMETER_0_DTYPE int8_T
#define PARAMETER_0_COMPLEX COMPLEX_NO

/* Parameter 1 */
#define PARAMETER_1_NAME par_path
#define PARAMETER_1_DTYPE int8_T
#define PARAMETER_1_COMPLEX COMPLEX_NO
#define SAMPLE_TIME_0 0.001
#define NUM_DISC_STATES 0
#define DISC_STATES_IC [0]
#define NUM_CONT_STATES 0
#define CONT_STATES_IC [0]
#define SFUNWIZ_GENERATE_TLC 1
#define SOURCEFILES                                                                               \
  "__SFB__LIB_PATH ../../build_win/Release__SFB__LIB_PATH ../../deps/lib/Release__SFB__INC_PATH " \
  "../../inc/r2022b__SFB__INC_PATH ../../deps/__SFB__INC_PATH ../../src__SFB__INC_PATH ../../__SFB__tx_car.lib"
#define PANELINDEX N / A
#define USE_SIMSTRUCT 0
#define SHOW_COMPILE_STEPS 1
#define CREATE_DEBUG_MEXFILE 0
#define SAVE_CODE_ONLY 1
#define SFUNWIZ_REVISION 3.0

/* %%%-SFUNWIZ_defines_Changes_END --- EDIT HERE TO _BEGIN */
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
#include "simstruc.h"
#include "softabs_sfunction_bus.h"

/*
 * Code Generation Environment flag (simulation or standalone target).
 */
static int_T isSimulationTarget;

/* Utility function prototypes. */
static int_T GetRTWEnvironmentMode(SimStruct *S);

/* Macro used to check if Simulation mode is set to accelerator */
#define isBusDWorkPresent \
  (((!ssRTWGenIsCodeGen(S) || isSimulationTarget) && !ssIsExternalSim(S)) || ssIsRapidAcceleratorActive(S))

typedef struct {
  int_T offset;
  int_T elemSize;
  int_T numElems;
} busInfoStruct;

#define PARAM_DEF0(S) ssGetSFcnParam(S, 0)
#define PARAM_DEF1(S) ssGetSFcnParam(S, 1)
#define IS_PARAM_INT8(pVal)                                                                                  \
  (mxIsNumeric(pVal) && !mxIsLogical(pVal) && !mxIsEmpty(pVal) && !mxIsSparse(pVal) && !mxIsComplex(pVal) && \
   mxIsInt8(pVal))

extern void softabs_sfunction_Start_wrapper(const int8_T *lic_path, const int_T p_width0, const int8_T *par_path,
                                            const int_T p_width1);
extern void softabs_sfunction_Outputs_wrapper(const powecu_in *ecu_in, powecu_out *ecu_out, const int8_T *lic_path,
                                              const int_T p_width0, const int8_T *par_path, const int_T p_width1);
extern void softabs_sfunction_Terminate_wrapper(const int8_T *lic_path, const int_T p_width0, const int8_T *par_path,
                                                const int_T p_width1);

/*====================*
 * S-function methods *
 *====================*/
#define MDL_CHECK_PARAMETERS
#if defined(MDL_CHECK_PARAMETERS) && defined(MATLAB_MEX_FILE)

/* Function: mdlCheckParameters =============================================
 * Abstract:
 *     Verify parameter definitions and types.
 */
static void mdlCheckParameters(SimStruct *S) {
  int paramIndex = 0;
  bool invalidParam = false;

  /* All parameters must match the S-function Builder Dialog */
  {
    const mxArray *pVal0 = ssGetSFcnParam(S, 0);
    if (!IS_PARAM_INT8(pVal0)) {
      invalidParam = true;
      paramIndex = 0;
      goto EXIT_POINT;
    }
  }

  {
    const mxArray *pVal1 = ssGetSFcnParam(S, 1);
    if (!IS_PARAM_INT8(pVal1)) {
      invalidParam = true;
      paramIndex = 1;
      goto EXIT_POINT;
    }
  }

EXIT_POINT:
  if (invalidParam) {
    static char parameterErrorMsg[1024];
    sprintf(parameterErrorMsg,
            "The data type and or complexity of parameter %d does not match the "
            "information specified in the S-function Builder dialog. "
            "For non-double parameters you will need to cast them using int8, int16, "
            "int32, uint8, uint16, uint32 or boolean.",
            paramIndex + 1);
    ssSetLocalErrorStatus(S, parameterErrorMsg);
  }

  return;
}

#endif /* MDL_CHECK_PARAMETERS */

/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *   Setup sizes of the various vectors.
 */
static void mdlInitializeSizes(SimStruct *S) {
  DECL_AND_INIT_DIMSINFO(inputDimsInfo);
  DECL_AND_INIT_DIMSINFO(outputDimsInfo);
  ssSetNumSFcnParams(S, NPARAMS); /* Number of expected parameters */

#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {
    mdlCheckParameters(S);
    if (ssGetErrorStatus(S) != NULL) {
      return;
    }
  } else {
    return; /* Parameter mismatch will be reported by Simulink */
  }

#endif

  ssSetArrayLayoutForCodeGen(S, SS_COLUMN_MAJOR);
  ssSetOperatingPointCompliance(S, USE_DEFAULT_OPERATING_POINT);
  ssSetNumContStates(S, NUM_CONT_STATES);
  ssSetNumDiscStates(S, NUM_DISC_STATES);
  if (!ssSetNumInputPorts(S, NUM_INPUTS)) return;

    /* Input Port 0 */

    /* Register powecu_in datatype for Input port 0 */
#if defined(MATLAB_MEX_FILE)

  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    DTypeId dataTypeIdReg;
    ssRegisterTypeFromNamedObject(S, "powecu_in", &dataTypeIdReg);
    if (dataTypeIdReg == INVALID_DTYPE_ID) return;
    ssSetInputPortDataType(S, 0, dataTypeIdReg);
  }

#endif

  ssSetInputPortWidth(S, 0, INPUT_0_NUM_ELEMS);
  ssSetInputPortComplexSignal(S, 0, INPUT_0_COMPLEX);
  ssSetInputPortDirectFeedThrough(S, 0, INPUT_0_FEEDTHROUGH);
  ssSetInputPortRequiredContiguous(S, 0, 1); /*direct input signal access*/
  ssSetBusInputAsStruct(S, 0, IN_0_BUS_BASED);
  ssSetInputPortBusMode(S, 0, SL_BUS_MODE);
  if (!ssSetNumOutputPorts(S, NUM_OUTPUTS)) return;

    /* Output Port 0 */

    /* Register powecu_out datatype for Output port 0 */
#if defined(MATLAB_MEX_FILE)

  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    DTypeId dataTypeIdReg;
    ssRegisterTypeFromNamedObject(S, "powecu_out", &dataTypeIdReg);
    if (dataTypeIdReg == INVALID_DTYPE_ID) return;
    ssSetOutputPortDataType(S, 0, dataTypeIdReg);
  }

#endif

  ssSetOutputPortWidth(S, 0, OUTPUT_0_NUM_ELEMS);
  ssSetBusOutputObjectName(S, 0, (void *)"powecu_out");
  ssSetOutputPortComplexSignal(S, 0, OUTPUT_0_COMPLEX);
  ssSetBusOutputAsStruct(S, 0, OUT_0_BUS_BASED);
  ssSetOutputPortBusMode(S, 0, SL_BUS_MODE);
  if (ssRTWGenIsCodeGen(S)) {
    isSimulationTarget = GetRTWEnvironmentMode(S);
    if (isSimulationTarget == -1) {
      ssSetLocalErrorStatus(S, " Unable to determine a valid code generation environment mode");
      return;
    }

    isSimulationTarget |= ssRTWGenIsModelReferenceSimTarget(S);
  }

  /* Set the number of dworks */
  if (!ssSetNumDWork(S, 2)) return;

    /*
     * Configure the dwork 0 (ecu_inBUS)
     */
#if defined(MATLAB_MEX_FILE)

  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    DTypeId dataTypeIdReg;
    ssRegisterTypeFromNamedObject(S, "powecu_in", &dataTypeIdReg);
    if (dataTypeIdReg == INVALID_DTYPE_ID) return;
    if (isBusDWorkPresent) {
      ssSetDWorkDataType(S, 0, dataTypeIdReg);
    } else {
      ssSetDWorkDataType(S, 0, SS_POINTER);
    }
  }

#endif

  ssSetDWorkUsageType(S, 0, SS_DWORK_USED_AS_DWORK);
  ssSetDWorkName(S, 0, "ecu_inBUS");
  ssSetDWorkWidth(S, 0, DYNAMICALLY_SIZED);
  ssSetDWorkComplexSignal(S, 0, COMPLEX_NO);

  /*
   * Configure the dwork 1 (ecu_outBUS)
   */
#if defined(MATLAB_MEX_FILE)

  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    DTypeId dataTypeIdReg;
    ssRegisterTypeFromNamedObject(S, "powecu_out", &dataTypeIdReg);
    if (dataTypeIdReg == INVALID_DTYPE_ID) return;
    if (isBusDWorkPresent) {
      ssSetDWorkDataType(S, 1, dataTypeIdReg);
    } else {
      ssSetDWorkDataType(S, 1, SS_POINTER);
    }
  }

#endif

  ssSetDWorkUsageType(S, 1, SS_DWORK_USED_AS_DWORK);
  ssSetDWorkName(S, 1, "ecu_outBUS");
  ssSetDWorkWidth(S, 1, DYNAMICALLY_SIZED);
  ssSetDWorkComplexSignal(S, 1, COMPLEX_NO);
  ssSetNumPWork(S, 0);
  ssSetNumSampleTimes(S, 1);
  ssSetNumRWork(S, 0);
  ssSetNumIWork(S, 0);
  ssSetNumModes(S, 0);
  ssSetNumNonsampledZCs(S, 0);
  ssSetSimulinkVersionGeneratedIn(S, "10.6");

  /* Take care when specifying exception free code - see sfuntmpl_doc.c */
  ssSetOptions(S,
               (SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_USE_TLC_WITH_ACCELERATOR | SS_OPTION_WORKS_WITH_CODE_REUSE));
}

#if defined(MATLAB_MEX_FILE)
#  define MDL_SET_INPUT_PORT_DIMENSION_INFO

static void mdlSetInputPortDimensionInfo(SimStruct *S, int_T port, const DimsInfo_T *dimsInfo) {
  if (!ssSetInputPortDimensionInfo(S, port, dimsInfo)) return;
}

#endif

#define MDL_SET_OUTPUT_PORT_DIMENSION_INFO
#if defined(MDL_SET_OUTPUT_PORT_DIMENSION_INFO)

static void mdlSetOutputPortDimensionInfo(SimStruct *S, int_T port, const DimsInfo_T *dimsInfo) {
  if (!ssSetOutputPortDimensionInfo(S, port, dimsInfo)) return;
}

#endif

/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    Specifiy  the sample time.
 */
static void mdlInitializeSampleTimes(SimStruct *S) {
  ssSetSampleTime(S, 0, SAMPLE_TIME_0);
  ssSetModelReferenceSampleTimeDefaultInheritance(S);
  ssSetOffsetTime(S, 0, 0.0);
}

#define MDL_SET_INPUT_PORT_DATA_TYPE

static void mdlSetInputPortDataType(SimStruct *S, int port, DTypeId dType) { ssSetInputPortDataType(S, 0, dType); }

#define MDL_SET_OUTPUT_PORT_DATA_TYPE

static void mdlSetOutputPortDataType(SimStruct *S, int port, DTypeId dType) { ssSetOutputPortDataType(S, 0, dType); }

#define MDL_SET_DEFAULT_PORT_DATA_TYPES

static void mdlSetDefaultPortDataTypes(SimStruct *S) {
  ssSetInputPortDataType(S, 0, SS_DOUBLE);
  ssSetOutputPortDataType(S, 0, SS_DOUBLE);
}

#define MDL_SET_WORK_WIDTHS
#if defined(MDL_SET_WORK_WIDTHS) && defined(MATLAB_MEX_FILE)

static void mdlSetWorkWidths(SimStruct *S) {
  /* Set the width of DWork(s) used for marshalling the IOs */
  if (isBusDWorkPresent) {
    /* Update dwork 0 */
    ssSetDWorkWidth(S, 0, ssGetInputPortWidth(S, 0));

    /* Update dwork 1 */
    ssSetDWorkWidth(S, 1, ssGetOutputPortWidth(S, 0));
  }

  {
    const char_T *rtParamNames[] = {"P1", "P2"};

    ssRegAllTunableParamsAsRunTimeParams(S, rtParamNames);
  }
}

#endif

#define MDL_START /* Change to #undef to remove function */
#if defined(MDL_START)

/* Function: mdlStart =======================================================
 * Abstract:
 *    This function is called once at start of model execution. If you
 *    have states that should be initialized once, this is the place
 *    to do it.
 */
static void mdlStart(SimStruct *S) {
  /* Bus Information */
  slDataTypeAccess *dta = ssGetDataTypeAccess(S);
  const char *bpath = ssGetPath(S);
  DTypeId Ctrl_InputId = ssGetDataTypeId(S, "Ctrl_Input");
  DTypeId powecu_inId = ssGetDataTypeId(S, "powecu_in");
  DTypeId powecu_outId = ssGetDataTypeId(S, "powecu_out");
  busInfoStruct *busInfo = (busInfoStruct *)malloc(23 * sizeof(busInfoStruct));
  if (busInfo == NULL) {
    ssSetLocalErrorStatus(S, "Memory allocation failure");
    return;
  }

  /*offsets info for all unique bus structures*/
  busInfo[0].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_inId, 0);
  busInfo[0].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[0].numElems = 1;
  busInfo[1].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_inId, 1);
  busInfo[1].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[1].numElems = 1;
  busInfo[2].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_inId, 2);
  busInfo[2].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[2].numElems = 1;
  busInfo[3].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_inId, 3);
  busInfo[3].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[3].numElems = 1;
  busInfo[4].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_inId, 4);
  busInfo[4].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[4].numElems = 4;
  busInfo[5].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_inId, 5);
  busInfo[5].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[5].numElems = 1;
  busInfo[6].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_inId, 6);
  busInfo[6].elemSize = dtaGetDataTypeSize(dta, bpath, Ctrl_InputId);
  busInfo[6].numElems = 1;
  busInfo[7].offset = dtaGetDataTypeElementOffset(dta, bpath, Ctrl_InputId, 0);
  busInfo[7].elemSize = dtaGetDataTypeSize(dta, bpath, SS_UINT8);
  busInfo[7].numElems = 1;
  busInfo[8].offset = dtaGetDataTypeElementOffset(dta, bpath, Ctrl_InputId, 1);
  busInfo[8].elemSize = dtaGetDataTypeSize(dta, bpath, SS_UINT8);
  busInfo[8].numElems = 1;
  busInfo[9].offset = dtaGetDataTypeElementOffset(dta, bpath, Ctrl_InputId, 2);
  busInfo[9].elemSize = dtaGetDataTypeSize(dta, bpath, SS_UINT8);
  busInfo[9].numElems = 1;
  busInfo[10].offset = dtaGetDataTypeElementOffset(dta, bpath, Ctrl_InputId, 3);
  busInfo[10].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[10].numElems = 1;
  busInfo[11].offset = dtaGetDataTypeElementOffset(dta, bpath, Ctrl_InputId, 4);
  busInfo[11].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[11].numElems = 1;
  busInfo[12].offset = dtaGetDataTypeElementOffset(dta, bpath, Ctrl_InputId, 5);
  busInfo[12].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[12].numElems = 1;
  busInfo[13].offset = dtaGetDataTypeElementOffset(dta, bpath, Ctrl_InputId, 6);
  busInfo[13].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[13].numElems = 1;
  busInfo[14].offset = dtaGetDataTypeElementOffset(dta, bpath, Ctrl_InputId, 7);
  busInfo[14].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[14].numElems = 1;
  busInfo[15].offset = dtaGetDataTypeElementOffset(dta, bpath, Ctrl_InputId, 8);
  busInfo[15].elemSize = dtaGetDataTypeSize(dta, bpath, SS_UINT8);
  busInfo[15].numElems = 1;
  busInfo[16].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_outId, 0);
  busInfo[16].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[16].numElems = 1;
  busInfo[17].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_outId, 1);
  busInfo[17].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[17].numElems = 1;
  busInfo[18].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_outId, 2);
  busInfo[18].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[18].numElems = 4;
  busInfo[19].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_outId, 3);
  busInfo[19].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[19].numElems = 4;
  busInfo[20].offset = dtaGetDataTypeElementOffset(dta, bpath, powecu_outId, 4);
  busInfo[20].elemSize = dtaGetDataTypeSize(dta, bpath, SS_DOUBLE);
  busInfo[20].numElems = 1;
  busInfo[21].elemSize = dtaGetDataTypeSize(dta, bpath, powecu_inId);
  busInfo[21].numElems = 1;
  busInfo[22].elemSize = dtaGetDataTypeSize(dta, bpath, powecu_outId);
  busInfo[22].numElems = 1;
  ssSetUserData(S, busInfo);

  /* Allocate memory for arrays or nested arrays of buses DWork pointers */
  const int_T p_width0 = mxGetNumberOfElements(PARAM_DEF0(S));
  const int_T p_width1 = mxGetNumberOfElements(PARAM_DEF1(S));
  const int8_T *lic_path = (const int8_T *)mxGetData(PARAM_DEF0(S));
  const int8_T *par_path = (const int8_T *)mxGetData(PARAM_DEF1(S));
  softabs_sfunction_Start_wrapper(lic_path, p_width0, par_path, p_width1);
}

#endif /*  MDL_START */

/* Function: mdlOutputs =======================================================
 *
 */
static void mdlOutputs(SimStruct *S, int_T tid) {
  const char *ecu_in = (char *)ssGetInputPortSignal(S, 0);
  char *ecu_out = (char *)ssGetOutputPortSignal(S, 0);
  const int_T p_width0 = mxGetNumberOfElements(PARAM_DEF0(S));
  const int_T p_width1 = mxGetNumberOfElements(PARAM_DEF1(S));
  const int8_T *lic_path = (const int8_T *)mxGetData(PARAM_DEF0(S));
  const int8_T *par_path = (const int8_T *)mxGetData(PARAM_DEF1(S));
  busInfoStruct *busInfo = (busInfoStruct *)ssGetUserData(S);

  /* Temporary bus copy declarations */
  powecu_in _ecu_inBUS;
  powecu_out _ecu_outBUS;
  slDataTypeAccess *dta = ssGetDataTypeAccess(S);
  const char *bpath = ssGetPath(S);

  /*Copy from Simulink to bus structure*/

  /*Copy from Simulink to _ecu_inBUS for Input port 0*/
  (_ecu_inBUS).acc_feedback_m_s2 = *((real_T *)((char *)ecu_in + busInfo[0].offset));
  (_ecu_inBUS).eng_spd_rad_s = *((real_T *)((char *)ecu_in + busInfo[1].offset));
  (_ecu_inBUS).batt_soc_0_1 = *((real_T *)((char *)ecu_in + busInfo[2].offset));
  (_ecu_inBUS).diff_trq_req_Nm = *((real_T *)((char *)ecu_in + busInfo[3].offset));
  (void)memcpy((_ecu_inBUS).slip_ratio, (char *)ecu_in + busInfo[4].offset, 4 * busInfo[4].elemSize);
  (_ecu_inBUS).veh_speed_vx = *((real_T *)((char *)ecu_in + busInfo[5].offset));
  (_ecu_inBUS).driver_input.acc_control_mode = *((uint8_T *)((char *)ecu_in + busInfo[6].offset + busInfo[7].offset));
  (_ecu_inBUS).driver_input.brake_control_mode = *((uint8_T *)((char *)ecu_in + busInfo[6].offset + busInfo[8].offset));
  (_ecu_inBUS).driver_input.steer_control_mode = *((uint8_T *)((char *)ecu_in + busInfo[6].offset + busInfo[9].offset));
  (_ecu_inBUS).driver_input.target_acc_m_s2 = *((real_T *)((char *)ecu_in + busInfo[6].offset + busInfo[10].offset));
  (_ecu_inBUS).driver_input.request_torque = *((real_T *)((char *)ecu_in + busInfo[6].offset + busInfo[11].offset));
  (_ecu_inBUS).driver_input.brake_pressure_01 = *((real_T *)((char *)ecu_in + busInfo[6].offset + busInfo[12].offset));
  (_ecu_inBUS).driver_input.steer_request_torque =
      *((real_T *)((char *)ecu_in + busInfo[6].offset + busInfo[13].offset));
  (_ecu_inBUS).driver_input.steer_cmd_rad = *((real_T *)((char *)ecu_in + busInfo[6].offset + busInfo[14].offset));
  (_ecu_inBUS).driver_input.gear_cmd__0N1D2R3P =
      *((uint8_T *)((char *)ecu_in + busInfo[6].offset + busInfo[15].offset));
  softabs_sfunction_Outputs_wrapper(&_ecu_inBUS, &_ecu_outBUS, lic_path, p_width0, par_path, p_width1);

  /*Copy from bus structure to Simulink*/

  /*Copy from _ecu_outBUS to Simulink for Output port 0*/
  *((real_T *)((char *)ecu_out + busInfo[16].offset)) = (_ecu_outBUS).pt_trq_cmd_Nm;
  *((real_T *)((char *)ecu_out + busInfo[17].offset)) = (_ecu_outBUS).brake_pressure_0_1;
  (void)memcpy((char *)ecu_out + busInfo[18].offset, (_ecu_outBUS).brake_pressure_Pa, 4 * busInfo[18].elemSize);
  (void)memcpy((char *)ecu_out + busInfo[19].offset, (_ecu_outBUS).abs_flag, 4 * busInfo[19].elemSize);
  *((real_T *)((char *)ecu_out + busInfo[20].offset)) = (_ecu_outBUS).throttle_01;
}

/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S) {
  const int_T p_width0 = mxGetNumberOfElements(PARAM_DEF0(S));
  const int_T p_width1 = mxGetNumberOfElements(PARAM_DEF1(S));
  const int8_T *lic_path = (const int8_T *)mxGetData(PARAM_DEF0(S));
  const int8_T *par_path = (const int8_T *)mxGetData(PARAM_DEF1(S));
  softabs_sfunction_Terminate_wrapper(lic_path, p_width0, par_path, p_width1);

  /* Free stored bus information */
  busInfoStruct *busInfo = (busInfoStruct *)ssGetUserData(S);
  if (busInfo != NULL) {
    free(busInfo);
  }

  if (!isBusDWorkPresent) {
  }
}

static int_T GetRTWEnvironmentMode(SimStruct *S) {
  int_T status = -1;
  mxArray *plhs[1];
  mxArray *prhs[1];
  mxArray *err;

  /*
   * Get the name of the Simulink block diagram
   */
  prhs[0] = mxCreateString(ssGetBlockDiagramName(S));
  plhs[0] = NULL;

  /*
   * Call "isSimulationTarget = rtwenvironmentmode(modelName)" in MATLAB
   */
  err = mexCallMATLABWithTrap(1, plhs, 1, prhs, "rtwenvironmentmode");
  mxDestroyArray(prhs[0]);

  /*
   * Set the error status if an error occurred
   */
  if (err) {
    if (plhs[0]) {
      mxDestroyArray(plhs[0]);
      plhs[0] = NULL;
    }

    ssSetLocalErrorStatus(S, "Unknown error during call to 'rtwenvironmentmode'.");
    return -1;
  }

  /*
   * Get the value returned by rtwenvironmentmode(modelName)
   */
  if (plhs[0]) {
    status = (int_T)(mxGetScalar(plhs[0]) != 0);
    mxDestroyArray(plhs[0]);
    plhs[0] = NULL;
  }

  return (status);
}

#ifdef MATLAB_MEX_FILE  /* Is this file being compiled as a MEX-file? */
#  include "simulink.c" /* MEX-file interface mechanism */
#else
#  include "cg_sfun.h" /* Code generation registration function */
#endif