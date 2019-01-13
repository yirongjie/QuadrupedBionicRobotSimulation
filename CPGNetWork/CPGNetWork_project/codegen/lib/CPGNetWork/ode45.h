/*
 * File: ode45.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 10-Dec-2018 17:27:26
 */

#ifndef ODE45_H
#define ODE45_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "CPGNetWork_types.h"

/* Function Declarations */
extern void ode45(const double tspan[2], const double b_y0[16], double
                  varargin_1, double varargin_2, double varargin_3, double
                  varargin_4, double varargin_5, double varargin_6, double
                  varargin_7, const double varargin_8[16], emxArray_real_T
                  *varargout_1, emxArray_real_T *varargout_2);

#endif

/*
 * File trailer for ode45.h
 *
 * [EOF]
 */
