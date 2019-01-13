/*
 * CPGNetWork_terminate.c
 *
 * Code generation for function 'CPGNetWork_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "CPGNetWork_terminate.h"
#include "_coder_CPGNetWork_mex.h"
#include "CPGNetWork_data.h"

/* Function Definitions */
void CPGNetWork_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void CPGNetWork_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (CPGNetWork_terminate.c) */
