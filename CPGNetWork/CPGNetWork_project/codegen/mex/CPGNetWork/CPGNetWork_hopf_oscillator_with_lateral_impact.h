/*
 * CPGNetWork_hopf_oscillator_with_lateral_impact.h
 *
 * Code generation for function 'CPGNetWork_hopf_oscillator_with_lateral_impact'
 *
 */

#ifndef CPGNETWORK_HOPF_OSCILLATOR_WITH_LATERAL_IMPACT_H
#define CPGNETWORK_HOPF_OSCILLATOR_WITH_LATERAL_IMPACT_H

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
extern void c_CPGNetWork_hopf_oscillator_wi(const real_T x[16], real_T alpha,
  real_T beta, real_T miu, real_T omiga_sw, real_T a, real_T phi3, real_T phi4,
  const real_T U[16], real_T xdot[16]);

#endif

/* End of code generation (CPGNetWork_hopf_oscillator_with_lateral_impact.h) */
