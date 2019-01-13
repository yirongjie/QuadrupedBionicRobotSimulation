/*
 * ode45.h
 *
 * Code generation for function 'ode45'
 *
 */

#ifndef ODE45_H
#define ODE45_H

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
extern void ode45(const emlrtStack *sp, const real_T tspan[2], const real_T
                  b_y0[16], real_T varargin_1, real_T varargin_2, real_T
                  varargin_3, real_T varargin_4, real_T varargin_5, real_T
                  varargin_6, real_T varargin_7, const real_T varargin_8[16],
                  emxArray_real_T *varargout_1, emxArray_real_T *varargout_2);

#endif

/* End of code generation (ode45.h) */
