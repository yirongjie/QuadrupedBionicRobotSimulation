/*
 * File: ode45.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 10-Dec-2018 17:27:26
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "ode45.h"
#include "callODEFunctionNSM.h"
#include "CPGNetWork_emxutil.h"
#include "CPGNetWork_rtwutil.h"
#include <stdio.h>

/* Function Definitions */

/*
 * Arguments    : const double tspan[2]
 *                const double b_y0[16]
 *                double varargin_1
 *                double varargin_2
 *                double varargin_3
 *                double varargin_4
 *                double varargin_5
 *                double varargin_6
 *                double varargin_7
 *                const double varargin_8[16]
 *                emxArray_real_T *varargout_1
 *                emxArray_real_T *varargout_2
 * Return Type  : void
 */
void ode45(const double tspan[2], const double b_y0[16], double varargin_1,
           double varargin_2, double varargin_3, double varargin_4, double
           varargin_5, double varargin_6, double varargin_7, const double
           varargin_8[16], emxArray_real_T *varargout_1, emxArray_real_T
           *varargout_2)
{
  emxArray_real_T *tout;
  double tfinal;
  double f0[16];
  int ia;
  emxArray_real_T *yout;
  int nout;
  double rh;
  double absx;
  double hmax;
  double absh;
  double fhBI2[16];
  int Bcolidx;
  boolean_T exitg4;
  double b_rh;
  double t;
  double y[16];
  double f[112];
  double tdir;
  boolean_T MinStepExit;
  boolean_T Done;
  emxArray_real_T *b_yout;
  int exitg1;
  int exponent;
  double hmin;
  double h;
  boolean_T NoFailedAttempts;
  int exitg2;
  int j;
  double tnew;
  double ynew[16];
  int outidx;
  int c;
  int iac;
  static const double x[21] = { 0.2, 0.075, 0.225, 0.97777777777777775,
    -3.7333333333333334, 3.5555555555555554, 2.9525986892242035,
    -11.595793324188385, 9.8228928516994358, -0.29080932784636487,
    2.8462752525252526, -10.757575757575758, 8.9064227177434727,
    0.27840909090909088, -0.2735313036020583, 0.091145833333333329, 0.0,
    0.44923629829290207, 0.65104166666666663, -0.322376179245283,
    0.13095238095238096 };

  int iy;
  double a;
  boolean_T exitg3;
  static const double b[7] = { 0.0012326388888888888, 0.0,
    -0.0042527702905061394, 0.036979166666666667, -0.05086379716981132,
    0.0419047619047619, -0.025 };

  double d0;
  double tref[3];
  double toutnew[4];
  double b_y[48];
  double fhBI3[16];
  double youtnew[64];
  double fhBI4[16];
  static const double b_b[7] = { -2.859375, 0.0, 4.0431266846361185, -3.90625,
    2.7939268867924527, -1.5714285714285714, 1.5 };

  static const double c_b[7] = { 3.0833333333333335, 0.0, -6.2893081761006293,
    10.416666666666666, -6.8773584905660377, 3.6666666666666665, -4.0 };

  static const double d_b[7] = { -1.1328125, 0.0, 2.6954177897574123, -5.859375,
    3.7610554245283021, -1.9642857142857142, 2.5 };

  signed char reshapes_f2[3200];
  emxInit_real_T(&tout, 2);
  tfinal = tspan[1];
  callODEFunctionNSM(b_y0, varargin_1, varargin_2, varargin_3, varargin_4,
                     varargin_5, varargin_6, varargin_7, varargin_8, f0);
  ia = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = 200;
  emxEnsureCapacity((emxArray__common *)tout, ia, (int)sizeof(double));
  for (ia = 0; ia < 200; ia++) {
    tout->data[ia] = 0.0;
  }

  emxInit_real_T(&yout, 2);
  ia = yout->size[0] * yout->size[1];
  yout->size[0] = 16;
  yout->size[1] = 200;
  emxEnsureCapacity((emxArray__common *)yout, ia, (int)sizeof(double));
  for (ia = 0; ia < 3200; ia++) {
    yout->data[ia] = 0.0;
  }

  nout = 1;
  tout->data[0] = 0.0;
  for (ia = 0; ia < 16; ia++) {
    yout->data[ia] = b_y0[ia];
  }

  rh = fabs(tspan[1]);
  absx = fabs(0.1 * tspan[1]);
  if ((rh <= absx) || rtIsNaN(absx)) {
    hmax = rh;
  } else {
    hmax = absx;
  }

  absx = fabs(tspan[1]);
  if ((hmax <= absx) || rtIsNaN(absx)) {
    absh = hmax;
  } else {
    absh = absx;
  }

  for (Bcolidx = 0; Bcolidx < 16; Bcolidx++) {
    rh = fabs(b_y0[Bcolidx]);
    if (rh >= 0.001) {
      b_rh = rh;
    } else {
      b_rh = 0.001;
    }

    fhBI2[Bcolidx] = f0[Bcolidx] / b_rh;
  }

  rh = 0.0;
  Bcolidx = 0;
  exitg4 = false;
  while ((!exitg4) && (Bcolidx < 16)) {
    absx = fabs(fhBI2[Bcolidx]);
    if (rtIsNaN(absx)) {
      rh = rtNaN;
      exitg4 = true;
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

  if (absh >= 7.90505033345994E-323) {
  } else {
    absh = 7.90505033345994E-323;
  }

  t = 0.0;
  memcpy(&y[0], &b_y0[0], sizeof(double) << 4);
  memset(&f[0], 0, 112U * sizeof(double));
  memcpy(&f[0], &f0[0], sizeof(double) << 4);
  if (tspan[1] < 0.0) {
    tdir = -1.0;
  } else if (tspan[1] > 0.0) {
    tdir = 1.0;
  } else if (tspan[1] == 0.0) {
    tdir = 0.0;
  } else {
    tdir = tspan[1];
  }

  MinStepExit = false;
  Done = false;
  emxInit_real_T(&b_yout, 2);
  do {
    exitg1 = 0;
    rh = fabs(t);
    if ((!rtIsInf(rh)) && (!rtIsNaN(rh))) {
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
    if ((hmin >= absh) || rtIsNaN(absh)) {
      rh = hmin;
    } else {
      rh = absh;
    }

    if ((hmax <= rh) || rtIsNaN(rh)) {
      absh = hmax;
    } else {
      absh = rh;
    }

    h = tdir * absh;
    if (1.1 * absh >= fabs(tfinal - t)) {
      h = tfinal - t;
      absh = fabs(h);
      Done = true;
    }

    NoFailedAttempts = true;
    do {
      exitg2 = 0;
      Bcolidx = 6;
      for (j = 0; j < 5; j++) {
        Bcolidx += j;
        memcpy(&f0[0], &y[0], sizeof(double) << 4);
        if (h == 0.0) {
        } else {
          outidx = Bcolidx;
          c = j << 4;
          for (iac = 1; iac <= c + 1; iac += 16) {
            rh = h * x[outidx - 6];
            iy = 0;
            for (ia = iac; ia <= iac + 15; ia++) {
              f0[iy] += f[ia - 1] * rh;
              iy++;
            }

            outidx++;
          }
        }

        callODEFunctionNSM(f0, varargin_1, varargin_2, varargin_3, varargin_4,
                           varargin_5, varargin_6, varargin_7, varargin_8,
                           *(double (*)[16])&f[(j + 1) << 4]);
      }

      tnew = t + h;
      if (Done) {
        tnew = tfinal;
      }

      memcpy(&ynew[0], &y[0], sizeof(double) << 4);
      if (h == 0.0) {
      } else {
        for (iac = 0; iac <= 81; iac += 16) {
          rh = h * x[Bcolidx - 1];
          iy = 0;
          for (ia = iac; ia + 1 <= iac + 16; ia++) {
            ynew[iy] += f[ia] * rh;
            iy++;
          }

          Bcolidx++;
        }
      }

      callODEFunctionNSM(ynew, varargin_1, varargin_2, varargin_3, varargin_4,
                         varargin_5, varargin_6, varargin_7, varargin_8,
                         *(double (*)[16])&f[96]);
      h = tnew - t;
      for (Bcolidx = 0; Bcolidx < 16; Bcolidx++) {
        a = fabs(y[Bcolidx]);
        rh = fabs(ynew[Bcolidx]);
        if ((a > rh) || rtIsNaN(rh)) {
          if (a >= 0.001) {
            rh = a;
          } else {
            rh = 0.001;
          }
        } else if (rh >= 0.001) {
        } else {
          rh = 0.001;
        }

        f0[Bcolidx] = rh;
        rh = 0.0;
        for (ia = 0; ia < 7; ia++) {
          rh += f[Bcolidx + (ia << 4)] * b[ia];
        }

        fhBI2[Bcolidx] = rh / f0[Bcolidx];
      }

      rh = 0.0;
      Bcolidx = 0;
      exitg3 = false;
      while ((!exitg3) && (Bcolidx < 16)) {
        absx = fabs(fhBI2[Bcolidx]);
        if (rtIsNaN(absx)) {
          rh = rtNaN;
          exitg3 = true;
        } else {
          if (absx > rh) {
            rh = absx;
          }

          Bcolidx++;
        }
      }

      absx = absh * rh;
      if (absx > 0.001) {
        if (absh <= hmin) {
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            absx = 0.8 * rt_powd_snf(0.001 / absx, 0.2);
            if (0.1 >= absx) {
              d0 = 0.1;
            } else {
              d0 = absx;
            }

            absx = absh * d0;
            if ((hmin >= absx) || rtIsNaN(absx)) {
              absh = hmin;
            } else {
              absh = absx;
            }
          } else {
            absx = 0.5 * absh;
            if ((hmin >= absx) || rtIsNaN(absx)) {
              absh = hmin;
            } else {
              absh = absx;
            }
          }

          h = tdir * absh;
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
      a = tnew - t;
      for (ia = 0; ia < 3; ia++) {
        rh = t + a * (0.25 + 0.25 * (double)ia);
        toutnew[ia] = rh;
        tref[ia] = rh;
      }

      toutnew[3] = tnew;
      for (ia = 0; ia < 16; ia++) {
        f0[ia] = f[ia] * h;
        fhBI2[ia] = 0.0;
        fhBI3[ia] = 0.0;
        fhBI4[ia] = 0.0;
        for (iy = 0; iy < 7; iy++) {
          fhBI2[ia] += f[ia + (iy << 4)] * (h * b_b[iy]);
          fhBI3[ia] += f[ia + (iy << 4)] * (h * c_b[iy]);
          fhBI4[ia] += f[ia + (iy << 4)] * (h * d_b[iy]);
        }
      }

      for (j = 0; j < 3; j++) {
        rh = (tref[j] - t) / h;
        for (Bcolidx = 0; Bcolidx < 16; Bcolidx++) {
          b_y[Bcolidx + (j << 4)] = (((fhBI4[Bcolidx] * rh + fhBI3[Bcolidx]) *
            rh + fhBI2[Bcolidx]) * rh + f0[Bcolidx]) * rh + y[Bcolidx];
          youtnew[Bcolidx + (j << 4)] = b_y[Bcolidx + (j << 4)];
        }
      }

      memcpy(&youtnew[48], &ynew[0], sizeof(double) << 4);
      nout += 4;
      if (nout > tout->size[1]) {
        Bcolidx = tout->size[1];
        ia = tout->size[0] * tout->size[1];
        tout->size[1] = Bcolidx + 200;
        emxEnsureCapacity((emxArray__common *)tout, ia, (int)sizeof(double));
        for (ia = 0; ia < 200; ia++) {
          tout->data[Bcolidx + ia] = 0.0;
        }

        memset(&reshapes_f2[0], 0, 3200U * sizeof(signed char));
        Bcolidx = yout->size[1];
        ia = b_yout->size[0] * b_yout->size[1];
        b_yout->size[0] = 16;
        b_yout->size[1] = Bcolidx + 200;
        emxEnsureCapacity((emxArray__common *)b_yout, ia, (int)sizeof(double));
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
        emxEnsureCapacity((emxArray__common *)yout, ia, (int)sizeof(double));
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
          rh = 1.25 * rt_powd_snf(absx / 0.001, 0.2);
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
  emxEnsureCapacity((emxArray__common *)varargout_1, ia, (int)sizeof(double));
  for (ia = 0; ia < iac; ia++) {
    varargout_1->data[ia] = tout->data[ia];
  }

  emxFree_real_T(&tout);
  ia = varargout_2->size[0] * varargout_2->size[1];
  varargout_2->size[0] = Bcolidx;
  varargout_2->size[1] = 16;
  emxEnsureCapacity((emxArray__common *)varargout_2, ia, (int)sizeof(double));
  for (ia = 0; ia < 16; ia++) {
    for (iy = 0; iy < Bcolidx; iy++) {
      varargout_2->data[iy + varargout_2->size[0] * ia] = yout->data[ia +
        yout->size[0] * iy];
    }
  }

  emxFree_real_T(&yout);
}

/*
 * File trailer for ode45.c
 *
 * [EOF]
 */
