/*
 * _coder_CPGNetWork_api.c
 *
 * Code generation for function '_coder_CPGNetWork_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "_coder_CPGNetWork_api.h"
#include "CPGNetWork_mexutil.h"
#include "CPGNetWork_data.h"

/* Function Declarations */
static void b_emlrt_marshallOut(const real_T u[16], const mxArray *y);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *osc_x,
  const char_T *identifier))[16];
static const mxArray *emlrt_marshallOut(const real_T u[16]);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[16];
static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[16];

/* Function Definitions */
static void b_emlrt_marshallOut(const real_T u[16], const mxArray *y)
{
  static const int32_T iv10[1] = { 16 };

  mxSetData((mxArray *)y, (void *)u);
  emlrtSetDimensions((mxArray *)y, iv10, 1);
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *osc_x,
  const char_T *identifier))[16]
{
  real_T (*y)[16];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(osc_x), &thisId);
  emlrtDestroyArray(&osc_x);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[16])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv8[2] = { 0, 0 };

  static const int32_T iv9[2] = { 1, 16 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv8, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u);
  emlrtSetDimensions((mxArray *)m2, iv9, 2);
  emlrtAssign(&y, m2);
  return y;
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[16]
{
  real_T (*y)[16];
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[16]
{
  real_T (*ret)[16];
  static const int32_T dims[1] = { 16 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  ret = (real_T (*)[16])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

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
  acc_roll = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "acc_roll");
  slope_alpha = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "slope_alpha");
  v = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "v");
  T = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "T");
  osc_x = e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "osc_x");
  tfinal = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "tfinal");
  phi = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "phi");
  theta0 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "theta0");
  beta = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "beta");
  phiRB = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "phiRB");
  phiLB = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "phiLB");
  alpha = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "alpha");
  a = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "a");
  k1 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "k1");
  k2 = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "k2");

  /* Invoke the target function */
  CPGNetWork(&st, acc_roll, slope_alpha, v, T, *osc_x, tfinal, phi, theta0, beta,
             phiRB, phiLB, alpha, a, k1, k2, *joint_angle);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*joint_angle);
  b_emlrt_marshallOut(*osc_x, prhs[4]);
  plhs[1] = prhs[4];
}

/* End of code generation (_coder_CPGNetWork_api.c) */
