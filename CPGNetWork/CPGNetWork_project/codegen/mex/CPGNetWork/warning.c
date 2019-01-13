/*
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "warning.h"

/* Variable Definitions */
static emlrtMCInfo b_emlrtMCI = { 14, 25, "warning",
  "D:\\MATLAB2016a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

static emlrtMCInfo c_emlrtMCI = { 14, 9, "warning",
  "D:\\MATLAB2016a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

static emlrtRSInfo wb_emlrtRSI = { 14, "warning",
  "D:\\MATLAB2016a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

/* Function Declarations */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);

/* Function Definitions */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m4;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m4, 4, pArrays, "feval", true, location);
}

void warning(const emlrtStack *sp, const char_T varargin_1[23], const char_T
             varargin_2[23])
{
  int32_T i2;
  const mxArray *y;
  char_T u[7];
  static const char_T cv2[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m1;
  static const int32_T iv3[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static const char_T cv3[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv4[2] = { 1, 7 };

  const mxArray *c_y;
  char_T c_u[33];
  static const char_T msgID[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 'd',
    'e', '4', '5', ':', 'I', 'n', 't', 'e', 'g', 'r', 'a', 't', 'i', 'o', 'n',
    'T', 'o', 'l', 'N', 'o', 't', 'M', 'e', 't' };

  static const int32_T iv5[2] = { 1, 33 };

  const mxArray *d_y;
  char_T d_u[23];
  static const int32_T iv6[2] = { 1, 23 };

  const mxArray *e_y;
  char_T e_u[23];
  static const int32_T iv7[2] = { 1, 23 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i2 = 0; i2 < 7; i2++) {
    u[i2] = cv2[i2];
  }

  y = NULL;
  m1 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 7, m1, &u[0]);
  emlrtAssign(&y, m1);
  for (i2 = 0; i2 < 7; i2++) {
    b_u[i2] = cv3[i2];
  }

  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv4);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  for (i2 = 0; i2 < 33; i2++) {
    c_u[i2] = msgID[i2];
  }

  c_y = NULL;
  m1 = emlrtCreateCharArray(2, iv5);
  emlrtInitCharArrayR2013a(sp, 33, m1, &c_u[0]);
  emlrtAssign(&c_y, m1);
  for (i2 = 0; i2 < 23; i2++) {
    d_u[i2] = varargin_1[i2];
  }

  d_y = NULL;
  m1 = emlrtCreateCharArray(2, iv6);
  emlrtInitCharArrayR2013a(sp, 23, m1, &d_u[0]);
  emlrtAssign(&d_y, m1);
  for (i2 = 0; i2 < 23; i2++) {
    e_u[i2] = varargin_2[i2];
  }

  e_y = NULL;
  m1 = emlrtCreateCharArray(2, iv7);
  emlrtInitCharArrayR2013a(sp, 23, m1, &e_u[0]);
  emlrtAssign(&e_y, m1);
  st.site = &wb_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, d_y, e_y, &b_emlrtMCI), &c_emlrtMCI);
}

/* End of code generation (warning.c) */
