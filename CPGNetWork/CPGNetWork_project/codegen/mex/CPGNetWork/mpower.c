/*
 * mpower.c
 *
 * Code generation for function 'mpower'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "mpower.h"
#include "error.h"
#include "CPGNetWork_data.h"

/* Variable Definitions */
static emlrtRSInfo l_emlrtRSI = { 61, "power",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

/* Function Definitions */
real_T b_mpower(const emlrtStack *sp, real_T a)
{
  real_T c;
  boolean_T p;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &j_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &k_emlrtRSI;
  c = muDoubleScalarPower(a, 0.2);
  p = false;
  if (a < 0.0) {
    p = true;
  }

  if (p) {
    c_st.site = &l_emlrtRSI;
    error(&c_st);
  }

  return c;
}

real_T mpower(real_T a)
{
  return a * a;
}

/* End of code generation (mpower.c) */
