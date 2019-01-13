/*
 * CPGNetWork.h
 *
 * Code generation for function 'CPGNetWork'
 *
 */

#ifndef CPGNETWORK_H
#define CPGNETWORK_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "CPGNetWork_types.h"

/* Function Declarations */
extern void CPGNetWork(const emlrtStack *sp, real_T acc_roll, real_T slope_alpha,
  real_T v, real_T T, real_T osc_x[16], real_T tfinal, real_T phi, real_T theta0,
  real_T beta, real_T phiRB, real_T phiLB, real_T alpha, real_T a, real_T k1,
  real_T k2, real_T joint_angle[16]);

#endif

/* End of code generation (CPGNetWork.h) */
