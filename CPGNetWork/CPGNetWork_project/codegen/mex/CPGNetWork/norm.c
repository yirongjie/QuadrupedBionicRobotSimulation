/*
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "norm.h"

/* Function Definitions */
real_T norm(const real_T x[16])
{
  real_T y;
  int32_T k;
  boolean_T exitg1;
  real_T absx;
  y = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 16)) {
    absx = muDoubleScalarAbs(x[k]);
    if (muDoubleScalarIsNaN(absx)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (absx > y) {
        y = absx;
      }

      k++;
    }
  }

  return y;
}

/* End of code generation (norm.c) */
