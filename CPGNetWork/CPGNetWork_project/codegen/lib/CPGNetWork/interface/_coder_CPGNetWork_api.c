/*
 * File: _coder_CPGNetWork_api.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 10-Dec-2018 17:27:26
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_CPGNetWork_api.h"
#include "_coder_CPGNetWork_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "CPGNetWork",
  NULL, false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void b_emlrt_marshallOut(const real_T u[16], const mxArray *y);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *osc_x,
  const char_T *identifier))[16];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[16];
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *acc_roll,
  const char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u[16]);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[16];

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const real_T u[16]
 *                const mxArray *y
 * Return Type  : void
 */
static void b_emlrt_marshallOut(const real_T u[16], const mxArray *y)
{
  static const int32_T iv2[1] = { 16 };

  mxSetData((mxArray *)y, (void *)u);
  emlrtSetDimensions((mxArray *)y, iv2, 1);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *osc_x
 *                const char_T *identifier
 * Return Type  : real_T (*)[16]
 */
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *osc_x,
  const char_T *identifier))[16]
{
  real_T (*y)[16];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(osc_x), &thisId);
  emlrtDestroyArray(&osc_x);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T (*)[16]
 */
  static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[16]
{
  real_T (*y)[16];
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *acc_roll
 *                const char_T *identifier
 * Return Type  : real_T
 */
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *acc_roll,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(acc_roll), &thisId);
  emlrtDestroyArray(&acc_roll);
  return y;
}

/*
 * Arguments    : const real_T u[16]
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const real_T u[16])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 1, 16 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T (*)[16]
 */
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[16]
{
  real_T (*ret)[16];
  static const int32_T dims[1] = { 16 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[16])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const mxArray *prhs[15]
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
  void CPGNetWork_api(const mxArray *prhs[15], const mxArray *plhs[2])
{
  real_T (*joint_angle)[16];
  real_T acc_roll;
  real_T slope_alpha;
  real_T v;
  real_T T;
  real_T (*osc_x)[16];
  real_T tfinal;
  real_T phi;
  real_T theta0;
  real_T beta;
  real_T phiRB;
  real_T phiLB;
  real_T alpha;
  real_T a;
  real_T k1;
  real_T k2;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  joint_angle = (real_T (*)[16])mxMalloc(sizeof(real_T [16]));
  prhs[4] = emlrtProtectR2012b(prhs[4], 4, true, -1);

  /* Marshall function inputs */
  acc_roll = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "acc_roll");
  slope_alpha = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "slope_alpha");
  v = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "v");
  T = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "T");
  osc_x = c_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "osc_x");
  tfinal = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "tfinal");
  phi = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "phi");
  theta0 = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "theta0");
  beta = emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "beta");
  phiRB = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "phiRB");
  phiLB = emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "phiLB");
  alpha = emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "alpha");
  a = emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "a");
  k1 = emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "k1");
  k2 = emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "k2");

  /* Invoke the target function */
  CPGNetWork(acc_roll, slope_alpha, v, T, *osc_x, tfinal, phi, theta0, beta,
             phiRB, phiLB, alpha, a, k1, k2, *joint_angle);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*joint_angle);
  b_emlrt_marshallOut(*osc_x, prhs[4]);
  plhs[1] = prhs[4];
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void CPGNetWork_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  CPGNetWork_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void CPGNetWork_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void CPGNetWork_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_CPGNetWork_api.c
 *
 * [EOF]
 */
