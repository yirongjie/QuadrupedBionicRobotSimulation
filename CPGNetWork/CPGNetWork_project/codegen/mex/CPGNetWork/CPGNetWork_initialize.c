/*
 * CPGNetWork_initialize.c
 *
 * Code generation for function 'CPGNetWork_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "CPGNetWork_initialize.h"
#include "_coder_CPGNetWork_mex.h"
#include "CPGNetWork_data.h"

/* Function Declarations */
static void CPGNetWork_once(void);

/* Function Definitions */
static void CPGNetWork_once(void)
{
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "E:\\\\folder\\\\\xbb\xfa\xc6\xf7\xc8\xcb\xb6\xd3\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
                  0, 1, 8, 2, 0, 0, 0, 3, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "CPGNetWork", 0, -1, 2324);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 7, 1497, -1, 2319);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 6, 1460, -1, 1471);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 5, 1395, -1, 1433);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 4, 1270, -1, 1294);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 3, 485, -1, 1244);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 2, 473, -1, 479);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 343, -1, 428);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 150, -1, 294);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0, 0, 314, 338, 464, 484);
  covrtIfInit(&emlrtCoverageInstance, 0, 1, 1367, 1382, 1443, 1484);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 1253, 1266, 1299);
  covrtForInit(&emlrtCoverageInstance, 0, 1, 1325, 1337, 1496);
  covrtForInit(&emlrtCoverageInstance, 0, 2, 1341, 1359, 1492);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "E:\\\\folder\\\\\xbb\xfa\xc6\xf7\xc8\xcb\xb6\xd3\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m",
                  1, 1, 4, 1, 0, 0, 0, 0, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 1, 0,
               "CPGNetWork_hopf_oscillator_with_lateral_impact", 77, -1, 4475);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 1, 3, 315, -1, 4474);
  covrtBasicBlockInit(&emlrtCoverageInstance, 1, 2, 274, -1, 298);
  covrtBasicBlockInit(&emlrtCoverageInstance, 1, 1, 234, -1, 253);
  covrtBasicBlockInit(&emlrtCoverageInstance, 1, 0, 209, -1, 215);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 1, 0, 217, 229, 255, 303);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 1U);
}

void CPGNetWork_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    CPGNetWork_once();
  }
}

/* End of code generation (CPGNetWork_initialize.c) */
