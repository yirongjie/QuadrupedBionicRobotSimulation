/*
 * ode45.c
 *
 * Code generation for function 'ode45'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "ode45.h"
#include "CPGNetWork_hopf_oscillator_with_lateral_impact.h"
#include "CPGNetWork_emxutil.h"
#include "mpower.h"
#include "ntrp45.h"
#include "warning.h"
#include "norm.h"
#include "ode2345.h"

/* Variable Definitions */
static emlrtRSInfo p_emlrtRSI = { 17, "ode45",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\ode45.m" };

static emlrtRSInfo q_emlrtRSI = { 515, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRSInfo r_emlrtRSI = { 454, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRSInfo s_emlrtRSI = { 379, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRSInfo t_emlrtRSI = { 366, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRSInfo u_emlrtRSI = { 369, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRSInfo v_emlrtRSI = { 368, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRSInfo w_emlrtRSI = { 338, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRSInfo x_emlrtRSI = { 327, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRSInfo y_emlrtRSI = { 84, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRSInfo ab_emlrtRSI = { 11, "callODEFunctionNSM",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\callODEFunctionNSM.m"
};

static emlrtRSInfo rb_emlrtRSI = { 15, "num2str",
  "D:\\MATLAB2016a\\toolbox\\eml\\eml\\+coder\\+internal\\num2str.m" };

static emlrtRSInfo sb_emlrtRSI = { 23, "cat",
  "D:\\MATLAB2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" };

static emlrtRSInfo tb_emlrtRSI = { 101, "cat",
  "D:\\MATLAB2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" };

static emlrtMCInfo emlrtMCI = { 52, 19, "flt2str",
  "D:\\MATLAB2016a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 22, "ode45",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\ode45.m" };

static emlrtRTEInfo b_emlrtRTEI = { 216, 5, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRTEInfo c_emlrtRTEI = { 217, 5, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRTEInfo g_emlrtRTEI = { 47, 1, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRTEInfo h_emlrtRTEI = { 49, 15, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRTEInfo i_emlrtRTEI = { 268, 15, "ode2345",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ode2345.m" };

static emlrtRSInfo xb_emlrtRSI = { 52, "flt2str",
  "D:\\MATLAB2016a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[23]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[23]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[23]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[23])
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m3;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m3, 2, pArrays, "sprintf", true, location);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[23])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(c_sprintf), &thisId, y);
  emlrtDestroyArray(&c_sprintf);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[23])
{
  static const int32_T dims[2] = { 1, 23 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, ret, 23);
  emlrtDestroyArray(&src);
}

void ode45(const emlrtStack *sp, const real_T tspan[2], const real_T b_y0[16],
           real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
           varargin_4, real_T varargin_5, real_T varargin_6, real_T varargin_7,
           const real_T varargin_8[16], emxArray_real_T *varargout_1,
           emxArray_real_T *varargout_2)
{
  real_T tfinal;
  boolean_T MinStepExit;
  emxArray_real_T *tout;
  real_T f0[16];
  int32_T ia;
  emxArray_real_T *yout;
  int32_T nout;
  real_T hmax;
  real_T absh;
  real_T ynew[16];
  int32_T Bcolidx;
  real_T rh;
  boolean_T exitg3;
  real_T absx;
  real_T t;
  real_T y[16];
  real_T f[112];
  real_T tdir;
  boolean_T Done;
  emxArray_real_T *b_yout;
  int32_T exitg1;
  int32_T exponent;
  real_T hmin;
  boolean_T NoFailedAttempts;
  int32_T exitg2;
  int32_T j;
  real_T tnew;
  int32_T outidx;
  int32_T c;
  int32_T iac;
  static const real_T x[21] = { 0.2, 0.075, 0.225, 0.97777777777777775,
    -3.7333333333333334, 3.5555555555555554, 2.9525986892242035,
    -11.595793324188385, 9.8228928516994358, -0.29080932784636487,
    2.8462752525252526, -10.757575757575758, 8.9064227177434727,
    0.27840909090909088, -0.2735313036020583, 0.091145833333333329, 0.0,
    0.44923629829290207, 0.65104166666666663, -0.322376179245283,
    0.13095238095238096 };

  int32_T iy;
  real_T b_f[16];
  real_T err;
  static const real_T b[7] = { 0.0012326388888888888, 0.0,
    -0.0042527702905061394, 0.036979166666666667, -0.05086379716981132,
    0.0419047619047619, -0.025 };

  const mxArray *b_y;
  char_T u[7];
  static const char_T rfmt[7] = { '%', '2', '3', '.', '1', '5', 'e' };

  real_T tref[3];
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 7 };

  real_T toutnew[4];
  const mxArray *c_y;
  real_T dv0[48];
  char_T cv0[23];
  real_T youtnew[64];
  const mxArray *d_y;
  char_T b_u[7];
  static const int32_T iv1[2] = { 1, 7 };

  const mxArray *e_y;
  int8_T reshapes_f2[3200];
  char_T cv1[23];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &p_emlrtRSI;
  tfinal = tspan[1];
  if (!(0.0 == tspan[1])) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &g_emlrtRTEI,
      "MATLAB:odearguments:TspanEndpointsNotDistinct", 0);
  }

  MinStepExit = true;
  if ((tspan[1] > 0.0) || (0.0 > tspan[1])) {
  } else {
    MinStepExit = false;
  }

  if (MinStepExit) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &h_emlrtRTEI,
      "MATLAB:odearguments:TspanNotMonotonic", 0);
  }

  emxInit_real_T(&st, &tout, 2, &b_emlrtRTEI, true);
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  c_CPGNetWork_hopf_oscillator_wi(b_y0, varargin_1, varargin_2, varargin_3,
    varargin_4, varargin_5, varargin_6, varargin_7, varargin_8, f0);
  ia = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = 200;
  emxEnsureCapacity(&st, (emxArray__common *)tout, ia, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (ia = 0; ia < 200; ia++) {
    tout->data[ia] = 0.0;
  }

  emxInit_real_T(&st, &yout, 2, &c_emlrtRTEI, true);
  ia = yout->size[0] * yout->size[1];
  yout->size[0] = 16;
  yout->size[1] = 200;
  emxEnsureCapacity(&st, (emxArray__common *)yout, ia, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (ia = 0; ia < 3200; ia++) {
    yout->data[ia] = 0.0;
  }

  nout = 1;
  tout->data[0] = 0.0;
  for (ia = 0; ia < 16; ia++) {
    yout->data[ia] = b_y0[ia];
  }

  hmax = muDoubleScalarMin(muDoubleScalarAbs(tspan[1]), muDoubleScalarAbs(0.1 *
    tspan[1]));
  if (hmax > 0.0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &i_emlrtRTEI,
      "MATLAB:odearguments:MaxStepLEzero", 0);
  }

  absh = muDoubleScalarMin(hmax, muDoubleScalarAbs(tspan[1]));
  for (Bcolidx = 0; Bcolidx < 16; Bcolidx++) {
    ynew[Bcolidx] = f0[Bcolidx] / muDoubleScalarMax(muDoubleScalarAbs
      (b_y0[Bcolidx]), 0.001);
  }

  rh = 0.0;
  Bcolidx = 0;
  exitg3 = false;
  while ((!exitg3) && (Bcolidx < 16)) {
    absx = muDoubleScalarAbs(ynew[Bcolidx]);
    if (muDoubleScalarIsNaN(absx)) {
      rh = rtNaN;
      exitg3 = true;
    } else {
      if (absx > rh) {
        rh = absx;
      }

      Bcolidx++;
    }
  }

  rh /= 0.20095091452076641;
  if (absh * rh > 1.0) {
    absh = 1.0 / rh;
  }

  absh = muDoubleScalarMax(absh, 7.90505033345994E-323);
  t = 0.0;
  memcpy(&y[0], &b_y0[0], sizeof(real_T) << 4);
  memset(&f[0], 0, 112U * sizeof(real_T));
  memcpy(&f[0], &f0[0], sizeof(real_T) << 4);
  tdir = muDoubleScalarSign(tspan[1]);
  MinStepExit = false;
  Done = false;
  emxInit_real_T(&st, &b_yout, 2, &emlrtRTEI, true);
  do {
    exitg1 = 0;
    rh = muDoubleScalarAbs(t);
    if ((!muDoubleScalarIsInf(rh)) && (!muDoubleScalarIsNaN(rh))) {
      if (rh <= 2.2250738585072014E-308) {
        rh = 4.94065645841247E-324;
      } else {
        frexp(rh, &exponent);
        rh = ldexp(1.0, exponent - 53);
      }
    } else {
      rh = rtNaN;
    }

    hmin = 16.0 * rh;
    absh = muDoubleScalarMin(hmax, muDoubleScalarMax(hmin, absh));
    rh = tdir * absh;
    if (1.1 * absh >= muDoubleScalarAbs(tfinal - t)) {
      rh = tfinal - t;
      absh = muDoubleScalarAbs(rh);
      Done = true;
    }

    NoFailedAttempts = true;
    do {
      exitg2 = 0;
      Bcolidx = 6;
      for (j = 0; j < 5; j++) {
        Bcolidx += j;
        memcpy(&f0[0], &y[0], sizeof(real_T) << 4);
        if (rh == 0.0) {
        } else {
          outidx = Bcolidx;
          c = j << 4;
          for (iac = 1; iac <= c + 1; iac += 16) {
            absx = rh * x[outidx - 6];
            iy = 0;
            for (ia = iac; ia <= iac + 15; ia++) {
              f0[iy] += f[ia - 1] * absx;
              iy++;
            }

            outidx++;
          }
        }

        b_st.site = &x_emlrtRSI;
        c_st.site = &ab_emlrtRSI;
        c_CPGNetWork_hopf_oscillator_wi(f0, varargin_1, varargin_2, varargin_3,
          varargin_4, varargin_5, varargin_6, varargin_7, varargin_8, *(real_T (*)
          [16])&f[(j + 1) << 4]);
      }

      tnew = t + rh;
      if (Done) {
        tnew = tfinal;
      }

      memcpy(&ynew[0], &y[0], sizeof(real_T) << 4);
      if (rh == 0.0) {
      } else {
        for (iac = 0; iac <= 81; iac += 16) {
          absx = rh * x[Bcolidx - 1];
          iy = 0;
          for (ia = iac; ia + 1 <= iac + 16; ia++) {
            ynew[iy] += f[ia] * absx;
            iy++;
          }

          Bcolidx++;
        }
      }

      b_st.site = &w_emlrtRSI;
      c_st.site = &ab_emlrtRSI;
      c_CPGNetWork_hopf_oscillator_wi(ynew, varargin_1, varargin_2, varargin_3,
        varargin_4, varargin_5, varargin_6, varargin_7, varargin_8, f0);
      memcpy(&f[96], &f0[0], sizeof(real_T) << 4);
      maxAbsThresh(y, ynew, f0);
      for (ia = 0; ia < 16; ia++) {
        rh = 0.0;
        for (iy = 0; iy < 7; iy++) {
          rh += f[ia + (iy << 4)] * b[iy];
        }

        b_f[ia] = rh / f0[ia];
      }

      err = absh * norm(b_f);
      if (err > 0.001) {
        if (absh <= hmin) {
          b_st.site = &v_emlrtRSI;
          c_st.site = &rb_emlrtRSI;
          for (ia = 0; ia < 7; ia++) {
            u[ia] = rfmt[ia];
          }

          b_y = NULL;
          m0 = emlrtCreateCharArray(2, iv0);
          emlrtInitCharArrayR2013a(&c_st, 7, m0, &u[0]);
          emlrtAssign(&b_y, m0);
          c_y = NULL;
          m0 = emlrtCreateDoubleScalar(t);
          emlrtAssign(&c_y, m0);
          d_st.site = &xb_emlrtRSI;
          emlrt_marshallIn(&d_st, b_sprintf(&d_st, b_y, c_y, &emlrtMCI),
                           "sprintf", cv0);
          b_st.site = &u_emlrtRSI;
          c_st.site = &rb_emlrtRSI;
          for (ia = 0; ia < 7; ia++) {
            b_u[ia] = rfmt[ia];
          }

          d_y = NULL;
          m0 = emlrtCreateCharArray(2, iv1);
          emlrtInitCharArrayR2013a(&c_st, 7, m0, &b_u[0]);
          emlrtAssign(&d_y, m0);
          e_y = NULL;
          m0 = emlrtCreateDoubleScalar(hmin);
          emlrtAssign(&e_y, m0);
          d_st.site = &xb_emlrtRSI;
          emlrt_marshallIn(&d_st, b_sprintf(&d_st, d_y, e_y, &emlrtMCI),
                           "sprintf", cv1);
          b_st.site = &t_emlrtRSI;
          warning(&b_st, cv0, cv1);
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            b_st.site = &s_emlrtRSI;
            rh = 0.8 * b_mpower(&b_st, 0.001 / err);
            absh = muDoubleScalarMax(hmin, absh * muDoubleScalarMax(0.1, rh));
          } else {
            absh = muDoubleScalarMax(hmin, 0.5 * absh);
          }

          rh = tdir * absh;
          Done = false;
        }
      } else {
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (MinStepExit) {
      exitg1 = 1;
    } else {
      outidx = nout;
      rh = tnew - t;
      for (ia = 0; ia < 3; ia++) {
        absx = t + rh * (0.25 + 0.25 * (real_T)ia);
        toutnew[ia] = absx;
        tref[ia] = absx;
      }

      toutnew[3] = tnew;
      ntrp45(tref, t, y, tnew - t, f, dv0);
      for (ia = 0; ia < 3; ia++) {
        memcpy(&youtnew[ia << 4], &dv0[ia << 4], sizeof(real_T) << 4);
      }

      memcpy(&youtnew[48], &ynew[0], sizeof(real_T) << 4);
      nout += 4;
      if (nout > tout->size[1]) {
        Bcolidx = tout->size[1];
        ia = tout->size[0] * tout->size[1];
        tout->size[1] = Bcolidx + 200;
        emxEnsureCapacity(&st, (emxArray__common *)tout, ia, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (ia = 0; ia < 200; ia++) {
          tout->data[Bcolidx + ia] = 0.0;
        }

        b_st.site = &r_emlrtRSI;
        c_st.site = &sb_emlrtRSI;
        d_st.site = &tb_emlrtRSI;
        memset(&reshapes_f2[0], 0, 3200U * sizeof(int8_T));
        Bcolidx = yout->size[1];
        ia = b_yout->size[0] * b_yout->size[1];
        b_yout->size[0] = 16;
        b_yout->size[1] = Bcolidx + 200;
        emxEnsureCapacity(&c_st, (emxArray__common *)b_yout, ia, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        for (ia = 0; ia < Bcolidx; ia++) {
          for (iy = 0; iy < 16; iy++) {
            b_yout->data[iy + b_yout->size[0] * ia] = yout->data[iy + (ia << 4)];
          }
        }

        for (ia = 0; ia < 200; ia++) {
          for (iy = 0; iy < 16; iy++) {
            b_yout->data[iy + b_yout->size[0] * (ia + Bcolidx)] = reshapes_f2[iy
              + (ia << 4)];
          }
        }

        ia = yout->size[0] * yout->size[1];
        yout->size[0] = 16;
        yout->size[1] = b_yout->size[1];
        emxEnsureCapacity(&c_st, (emxArray__common *)yout, ia, (int32_T)sizeof
                          (real_T), &emlrtRTEI);
        iac = b_yout->size[1];
        for (ia = 0; ia < iac; ia++) {
          for (iy = 0; iy < 16; iy++) {
            yout->data[iy + yout->size[0] * ia] = b_yout->data[iy + b_yout->
              size[0] * ia];
          }
        }
      }

      for (Bcolidx = 0; Bcolidx < 4; Bcolidx++) {
        tout->data[Bcolidx + outidx] = toutnew[Bcolidx];
        for (j = 0; j < 16; j++) {
          yout->data[j + yout->size[0] * (Bcolidx + outidx)] = youtnew[j +
            (Bcolidx << 4)];
        }
      }

      if (Done) {
        exitg1 = 1;
      } else {
        if (NoFailedAttempts) {
          b_st.site = &q_emlrtRSI;
          rh = 1.25 * b_mpower(&b_st, err / 0.001);
          if (rh > 0.2) {
            absh /= rh;
          } else {
            absh *= 5.0;
          }
        }

        t = tnew;
        for (Bcolidx = 0; Bcolidx < 16; Bcolidx++) {
          y[Bcolidx] = ynew[Bcolidx];
          f[Bcolidx] = f[96 + Bcolidx];
        }
      }
    }
  } while (exitg1 == 0);

  emxFree_real_T(&b_yout);
  if (1 > nout) {
    iac = 0;
  } else {
    iac = nout;
  }

  if (1 > nout) {
    Bcolidx = 0;
  } else {
    Bcolidx = nout;
  }

  ia = varargout_1->size[0];
  varargout_1->size[0] = iac;
  emxEnsureCapacity(sp, (emxArray__common *)varargout_1, ia, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (ia = 0; ia < iac; ia++) {
    varargout_1->data[ia] = tout->data[ia];
  }

  emxFree_real_T(&tout);
  ia = varargout_2->size[0] * varargout_2->size[1];
  varargout_2->size[0] = Bcolidx;
  varargout_2->size[1] = 16;
  emxEnsureCapacity(sp, (emxArray__common *)varargout_2, ia, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (ia = 0; ia < 16; ia++) {
    for (iy = 0; iy < Bcolidx; iy++) {
      varargout_2->data[iy + varargout_2->size[0] * ia] = yout->data[ia +
        yout->size[0] * iy];
    }
  }

  emxFree_real_T(&yout);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (ode45.c) */
