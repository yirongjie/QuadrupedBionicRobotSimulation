/*
 * ode2345.c
 *
 * Code generation for function 'ode2345'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "ode2345.h"

/* Function Definitions */
void maxAbsThresh(const real_T a[16], const real_T b[16], real_T y[16])
{
  int32_T k;
  real_T b_a;
  real_T b_b;
  for (k = 0; k < 16; k++) {
    b_a = muDoubleScalarAbs(a[k]);
    b_b = muDoubleScalarAbs(b[k]);
    if ((b_a > b_b) || muDoubleScalarIsNaN(b_b)) {
      b_a = muDoubleScalarMax(b_a, 0.001);
    } else {
      b_a = muDoubleScalarMax(b_b, 0.001);
    }

    y[k] = b_a;
  }
}

/* End of code generation (ode2345.c) */
