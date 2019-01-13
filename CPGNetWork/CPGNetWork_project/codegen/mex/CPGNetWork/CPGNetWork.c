/*
 * CPGNetWork.c
 *
 * Code generation for function 'CPGNetWork'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "mpower.h"
#include "error.h"
#include "CPGNetWork_emxutil.h"
#include "_coder_CPGNetWork_api.h"
#include "ode45.h"
#include "CPGNetWork_mexutil.h"
#include "CPGNetWork_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 10, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtRSInfo b_emlrtRSI = { 14, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtRSInfo c_emlrtRSI = { 15, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtRSInfo d_emlrtRSI = { 17, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtRSInfo e_emlrtRSI = { 30, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtRSInfo f_emlrtRSI = { 48, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtRSInfo g_emlrtRSI = { 49, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtRSInfo h_emlrtRSI = { 50, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtRSInfo i_emlrtRSI = { 51, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtRSInfo m_emlrtRSI = { 12, "sqrt",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" };

static emlrtRSInfo n_emlrtRSI = { 13, "acos",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\elfun\\acos.m" };

static emlrtRSInfo o_emlrtRSI = { 13, "asin",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\elfun\\asin.m" };

static emlrtRSInfo ub_emlrtRSI = { 34, "fprintf",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" };

static emlrtMCInfo d_emlrtMCI = { 65, 18, "fprintf",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" };

static emlrtRTEInfo d_emlrtRTEI = { 30, 5, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 1, 33, "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 47, 20, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 47, 44, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 47, 68, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 47, 92, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 47, 116, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 47, 140, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 47, 164, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 47, 188, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 47, 212, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 47, 236, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 47, 261, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 47, 286, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 47, 311, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 47, 336, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 47, 361, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 47, 386, "x_out", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 38, 14, "x", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 41, 15, "x", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 39, 36, "x", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 39, 15, "x", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 33, 16, "x", "CPGNetWork",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork.m",
  0 };

static emlrtRSInfo vb_emlrtRSI = { 65, "fprintf",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" };

/* Function Declarations */
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, emlrtMCInfo *location)
{
  const mxArray *pArrays[6];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 6, pArrays, "feval", true, location);
}

void CPGNetWork(const emlrtStack *sp, real_T acc_roll, real_T slope_alpha,
                real_T v, real_T T, real_T osc_x[16], real_T tfinal, real_T phi,
                real_T theta0, real_T beta, real_T phiRB, real_T phiLB, real_T
                alpha, real_T a, real_T k1, real_T k2, real_T joint_angle[16])
{
  real_T omiga_sw;
  real_T h;
  real_T x;
  real_T B;
  real_T Ak;
  emxArray_real_T *b_x;
  emxArray_real_T *t;
  real_T Ah;
  real_T miu;
  real_T delte_theta;
  real_T U[16];
  real_T dv2[2];
  int32_T i;
  int32_T i3;
  int32_T i4;
  int32_T b_i;
  int32_T j;
  const mxArray *y;
  char_T u[7];
  static const char_T cv4[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *m6;
  static const int32_T iv11[2] = { 1, 7 };

  const mxArray *b_y;
  const mxArray *c_y;
  char_T b_u[40];
  static const char_T formatSpec[40] = { 'L', 'F', ' ', ' ', 'h', 'i', 'p', '-',
    'p', 'i', 't', 'c', 'h', ':', '%', 'f', ' ', ' ', 'k', 'n', 'e', 'e', ':',
    '%', 'f', ' ', ' ', 'h', 'i', 'p', '-', 'r', 'o', 'l', 'l', ':', '%', 'f',
    ' ', ' ' };

  static const int32_T iv12[2] = { 1, 40 };

  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  char_T c_u[7];
  static const int32_T iv13[2] = { 1, 7 };

  const mxArray *h_y;
  const mxArray *i_y;
  char_T d_u[40];
  static const char_T b_formatSpec[40] = { 'R', 'F', ' ', ' ', 'h', 'i', 'p',
    '-', 'p', 'i', 't', 'c', 'h', ':', '%', 'f', ' ', ' ', 'k', 'n', 'e', 'e',
    ':', '%', 'f', ' ', ' ', 'h', 'i', 'p', '-', 'r', 'o', 'l', 'l', ':', '%',
    'f', ' ', ' ' };

  static const int32_T iv14[2] = { 1, 40 };

  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m_y;
  char_T e_u[7];
  static const int32_T iv15[2] = { 1, 7 };

  const mxArray *n_y;
  const mxArray *o_y;
  char_T f_u[40];
  static const char_T c_formatSpec[40] = { 'R', 'B', ' ', ' ', 'h', 'i', 'p',
    '-', 'p', 'i', 't', 'c', 'h', ':', '%', 'f', ' ', ' ', 'k', 'n', 'e', 'e',
    ':', '%', 'f', ' ', ' ', 'h', 'i', 'p', '-', 'r', 'o', 'l', 'l', ':', '%',
    'f', ' ', ' ' };

  static const int32_T iv16[2] = { 1, 40 };

  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  char_T g_u[7];
  static const int32_T iv17[2] = { 1, 7 };

  const mxArray *t_y;
  const mxArray *u_y;
  char_T h_u[40];
  static const char_T d_formatSpec[40] = { 'R', 'L', ' ', ' ', 'h', 'i', 'p',
    '-', 'p', 'i', 't', 'c', 'h', ':', '%', 'f', ' ', ' ', 'k', 'n', 'e', 'e',
    ':', '%', 'f', ' ', ' ', 'h', 'i', 'p', '-', 'r', 'o', 'l', 'l', ':', '%',
    'f', '\\', 'n' };

  static const int32_T iv18[2] = { 1, 40 };

  const mxArray *v_y;
  const mxArray *w_y;
  const mxArray *x_y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);

  /* % 参数 */
  /* 体态参数 */
  /* 体长  m */
  /* 体宽  m */
  /* 腿节长度  m */
  /* 步态参数 */
  omiga_sw = 1.0 / (beta * T);

  /* 摆动相频率 */
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, acc_roll > 0.959595959)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
    st.site = &emlrtRSI;
    b_st.site = &j_emlrtRSI;
    c_st.site = &k_emlrtRSI;
    st.site = &emlrtRSI;
    x = mpower(acc_roll);
    B = 4.0 * muDoubleScalarPower(omiga_sw, 4.0);
    st.site = &emlrtRSI;
    if (1.0 - x / B < 0.0) {
      b_st.site = &m_emlrtRSI;
      b_error(&b_st);
    }

    st.site = &emlrtRSI;
    B = 2.0 * mpower(omiga_sw) * muDoubleScalarSqrt(1.0 - x / B);
    h = acc_roll * 0.48564293117863211 / B;

    /* 摆动腿足端高度  m */
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2);
    h = 0.02;
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3);
  x = (0.3 * muDoubleScalarCos(theta0) - h) / 0.3;
  st.site = &b_emlrtRSI;
  if ((x < -1.0) || (x > 1.0)) {
    b_st.site = &n_emlrtRSI;
    c_error(&b_st);
  }

  Ak = muDoubleScalarAcos(x) - theta0;

  /* 髋关节幅值 */
  x = beta * v * T / (1.2 / muDoubleScalarCos(theta0));
  st.site = &c_emlrtRSI;
  if ((x < -1.0) || (x > 1.0)) {
    b_st.site = &o_emlrtRSI;
    d_error(&b_st);
  }

  emxInit_real_T(&st, &b_x, 2, &d_emlrtRTEI, true);
  emxInit_real_T1(&st, &t, 1, &e_emlrtRTEI, true);
  Ah = muDoubleScalarAsin(x);

  /* 膝关节幅值 */
  /* 振荡器参数 */
  st.site = &d_emlrtRSI;
  miu = mpower(Ah);

  /* 振荡器幅值 A=sqrt(miu) */
  /* 反馈项参数 */
  /* 前庭反射 */
  delte_theta = phi * k2 * k1 * slope_alpha;

  /* 原平衡位置改变量 */
  /* 外部反馈项(feed) 对应x1 y1 x2 y2 x3 y3 x4 y4 */
  U[0] = -(delte_theta / 2.0 - k1 * slope_alpha);
  U[1] = delte_theta;
  U[2] = -(delte_theta / 2.0 - k1 * slope_alpha);
  U[3] = delte_theta;
  U[4] = -(delte_theta / 2.0 - k1 * slope_alpha);
  U[5] = delte_theta;
  U[6] = -(delte_theta / 2.0 - k1 * slope_alpha);
  U[7] = delte_theta;
  memset(&U[8], 0, sizeof(real_T) << 3);

  /* % 初值 */
  /*  响应时间域（Time region of response） */
  /* % 求解 */
  /*  求解Hopf振荡器微分方程的数值解（Numerical solution of differential equation） */
  dv2[0] = 0.0;
  dv2[1] = tfinal;
  st.site = &e_emlrtRSI;
  ode45(&st, dv2, osc_x, alpha, beta, miu, omiga_sw, a, phiRB, phiLB, U, t, b_x);

  /* 振荡器输出 */
  i = 0;
  emxFree_real_T(&t);
  while (i < 16) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4);
    i3 = b_x->size[0];
    i4 = b_x->size[0];
    if (!((i4 >= 1) && (i4 <= i3))) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &u_emlrtBCI, sp);
    }

    osc_x[i] = b_x->data[(i4 + b_x->size[0] * i) - 1];
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);

  /* 修改振荡器输出y为膝关节，振荡器输出x为髋关节 */
  i = 0;
  while (i < 4) {
    b_i = 1 + (i << 1);
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 1);
    i3 = b_x->size[0];
    j = 1;
    while (j - 1 <= i3 - 1) {
      covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 1);
      i4 = b_x->size[0];
      if (!((j >= 1) && (j <= i4))) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i4, &q_emlrtBCI, sp);
      }

      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 1, b_x->data[(j + b_x->
            size[0] * b_i) - 1] <= U[b_i])) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 5);
        i4 = b_x->size[0];
        if (!((j >= 1) && (j <= i4))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i4, &s_emlrtBCI, sp);
        }

        i4 = b_x->size[0];
        if (!((j >= 1) && (j <= i4))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i4, &t_emlrtBCI, sp);
        }

        b_x->data[(j + b_x->size[0] * b_i) - 1] = -phi * (Ak / Ah) * (b_x->data
          [(j + b_x->size[0] * b_i) - 1] - U[b_i]) + U[b_i];
      } else {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 6);
        i4 = b_x->size[0];
        if (!((j >= 1) && (j <= i4))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i4, &r_emlrtBCI, sp);
        }

        b_x->data[(j + b_x->size[0] * b_i) - 1] = U[b_i];
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 0);
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 7);

  /*  振荡器关节输出 */
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &emlrtBCI, sp);
  }

  joint_angle[0] = b_x->data[i4 - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &b_emlrtBCI, sp);
  }

  joint_angle[1] = b_x->data[(i4 + b_x->size[0]) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &c_emlrtBCI, sp);
  }

  joint_angle[2] = b_x->data[(i4 + (b_x->size[0] << 1)) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &d_emlrtBCI, sp);
  }

  joint_angle[3] = b_x->data[(i4 + b_x->size[0] * 3) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &e_emlrtBCI, sp);
  }

  joint_angle[4] = b_x->data[(i4 + (b_x->size[0] << 2)) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &f_emlrtBCI, sp);
  }

  joint_angle[5] = b_x->data[(i4 + b_x->size[0] * 5) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &g_emlrtBCI, sp);
  }

  joint_angle[6] = b_x->data[(i4 + b_x->size[0] * 6) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &h_emlrtBCI, sp);
  }

  joint_angle[7] = b_x->data[(i4 + b_x->size[0] * 7) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &i_emlrtBCI, sp);
  }

  joint_angle[8] = b_x->data[(i4 + (b_x->size[0] << 3)) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &j_emlrtBCI, sp);
  }

  joint_angle[9] = b_x->data[(i4 + b_x->size[0] * 9) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &k_emlrtBCI, sp);
  }

  joint_angle[10] = b_x->data[(i4 + b_x->size[0] * 10) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &l_emlrtBCI, sp);
  }

  joint_angle[11] = b_x->data[(i4 + b_x->size[0] * 11) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &m_emlrtBCI, sp);
  }

  joint_angle[12] = b_x->data[(i4 + b_x->size[0] * 12) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &n_emlrtBCI, sp);
  }

  joint_angle[13] = b_x->data[(i4 + b_x->size[0] * 13) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &o_emlrtBCI, sp);
  }

  joint_angle[14] = b_x->data[(i4 + b_x->size[0] * 14) - 1];
  i3 = b_x->size[0];
  i4 = b_x->size[0];
  if (!((i4 >= 1) && (i4 <= i3))) {
    emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &p_emlrtBCI, sp);
  }

  joint_angle[15] = b_x->data[(i4 + b_x->size[0] * 15) - 1];
  st.site = &f_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  emxFree_real_T(&b_x);
  for (i3 = 0; i3 < 7; i3++) {
    u[i3] = cv4[i3];
  }

  y = NULL;
  m6 = emlrtCreateCharArray(2, iv11);
  emlrtInitCharArrayR2013a(&b_st, 7, m6, &u[0]);
  emlrtAssign(&y, m6);
  b_y = NULL;
  m6 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m6);
  for (i3 = 0; i3 < 40; i3++) {
    b_u[i3] = formatSpec[i3];
  }

  c_y = NULL;
  m6 = emlrtCreateCharArray(2, iv12);
  emlrtInitCharArrayR2013a(&b_st, 40, m6, &b_u[0]);
  emlrtAssign(&c_y, m6);
  d_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[0]);
  emlrtAssign(&d_y, m6);
  e_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[1]);
  emlrtAssign(&e_y, m6);
  f_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[8]);
  emlrtAssign(&f_y, m6);
  c_st.site = &vb_emlrtRSI;
  c_emlrt_marshallIn(&c_st, c_feval(&c_st, y, b_y, c_y, d_y, e_y, f_y,
    &d_emlrtMCI), "feval");
  st.site = &g_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  for (i3 = 0; i3 < 7; i3++) {
    c_u[i3] = cv4[i3];
  }

  g_y = NULL;
  m6 = emlrtCreateCharArray(2, iv13);
  emlrtInitCharArrayR2013a(&b_st, 7, m6, &c_u[0]);
  emlrtAssign(&g_y, m6);
  h_y = NULL;
  m6 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&h_y, m6);
  for (i3 = 0; i3 < 40; i3++) {
    d_u[i3] = b_formatSpec[i3];
  }

  i_y = NULL;
  m6 = emlrtCreateCharArray(2, iv14);
  emlrtInitCharArrayR2013a(&b_st, 40, m6, &d_u[0]);
  emlrtAssign(&i_y, m6);
  j_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[2]);
  emlrtAssign(&j_y, m6);
  k_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[3]);
  emlrtAssign(&k_y, m6);
  l_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[10]);
  emlrtAssign(&l_y, m6);
  c_st.site = &vb_emlrtRSI;
  c_emlrt_marshallIn(&c_st, c_feval(&c_st, g_y, h_y, i_y, j_y, k_y, l_y,
    &d_emlrtMCI), "feval");
  st.site = &h_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  for (i3 = 0; i3 < 7; i3++) {
    e_u[i3] = cv4[i3];
  }

  m_y = NULL;
  m6 = emlrtCreateCharArray(2, iv15);
  emlrtInitCharArrayR2013a(&b_st, 7, m6, &e_u[0]);
  emlrtAssign(&m_y, m6);
  n_y = NULL;
  m6 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&n_y, m6);
  for (i3 = 0; i3 < 40; i3++) {
    f_u[i3] = c_formatSpec[i3];
  }

  o_y = NULL;
  m6 = emlrtCreateCharArray(2, iv16);
  emlrtInitCharArrayR2013a(&b_st, 40, m6, &f_u[0]);
  emlrtAssign(&o_y, m6);
  p_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[4]);
  emlrtAssign(&p_y, m6);
  q_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[5]);
  emlrtAssign(&q_y, m6);
  r_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[12]);
  emlrtAssign(&r_y, m6);
  c_st.site = &vb_emlrtRSI;
  c_emlrt_marshallIn(&c_st, c_feval(&c_st, m_y, n_y, o_y, p_y, q_y, r_y,
    &d_emlrtMCI), "feval");
  st.site = &i_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  for (i3 = 0; i3 < 7; i3++) {
    g_u[i3] = cv4[i3];
  }

  s_y = NULL;
  m6 = emlrtCreateCharArray(2, iv17);
  emlrtInitCharArrayR2013a(&b_st, 7, m6, &g_u[0]);
  emlrtAssign(&s_y, m6);
  t_y = NULL;
  m6 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&t_y, m6);
  for (i3 = 0; i3 < 40; i3++) {
    h_u[i3] = d_formatSpec[i3];
  }

  u_y = NULL;
  m6 = emlrtCreateCharArray(2, iv18);
  emlrtInitCharArrayR2013a(&b_st, 40, m6, &h_u[0]);
  emlrtAssign(&u_y, m6);
  v_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[6]);
  emlrtAssign(&v_y, m6);
  w_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[7]);
  emlrtAssign(&w_y, m6);
  x_y = NULL;
  m6 = emlrtCreateDoubleScalar(joint_angle[14]);
  emlrtAssign(&x_y, m6);
  c_st.site = &vb_emlrtRSI;
  c_emlrt_marshallIn(&c_st, c_feval(&c_st, s_y, t_y, u_y, v_y, w_y, x_y,
    &d_emlrtMCI), "feval");
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (CPGNetWork.c) */
