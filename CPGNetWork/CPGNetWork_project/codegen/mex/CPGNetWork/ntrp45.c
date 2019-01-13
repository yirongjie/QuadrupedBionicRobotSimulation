/*
 * ntrp45.c
 *
 * Code generation for function 'ntrp45'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "ntrp45.h"

/* Function Definitions */
void ntrp45(const real_T t[3], real_T t0, const real_T b_y0[16], real_T h, const
            real_T f[112], real_T y[48])
{
  real_T fhBI1[16];
  int32_T j;
  real_T fhBI2[16];
  real_T fhBI3[16];
  real_T s;
  real_T fhBI4[16];
  int32_T k;
  static const real_T b[7] = { -2.859375, 0.0, 4.0431266846361185, -3.90625,
    2.7939268867924527, -1.5714285714285714, 1.5 };

  static const real_T b_b[7] = { 3.0833333333333335, 0.0, -6.2893081761006293,
    10.416666666666666, -6.8773584905660377, 3.6666666666666665, -4.0 };

  static const real_T c_b[7] = { -1.1328125, 0.0, 2.6954177897574123, -5.859375,
    3.7610554245283021, -1.9642857142857142, 2.5 };

  for (j = 0; j < 16; j++) {
    fhBI1[j] = f[j] * h;
    fhBI2[j] = 0.0;
    fhBI3[j] = 0.0;
    fhBI4[j] = 0.0;
    for (k = 0; k < 7; k++) {
      fhBI2[j] += f[j + (k << 4)] * (h * b[k]);
      fhBI3[j] += f[j + (k << 4)] * (h * b_b[k]);
      fhBI4[j] += f[j + (k << 4)] * (h * c_b[k]);
    }
  }

  for (j = 0; j < 3; j++) {
    s = (t[j] - t0) / h;
    for (k = 0; k < 16; k++) {
      y[k + (j << 4)] = (((fhBI4[k] * s + fhBI3[k]) * s + fhBI2[k]) * s +
                         fhBI1[k]) * s + b_y0[k];
    }
  }
}

/* End of code generation (ntrp45.c) */
