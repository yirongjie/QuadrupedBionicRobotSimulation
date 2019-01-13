/*
 * ntrp45.h
 *
 * Code generation for function 'ntrp45'
 *
 */

#ifndef NTRP45_H
#define NTRP45_H

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
extern void ntrp45(const real_T t[3], real_T t0, const real_T b_y0[16], real_T h,
                   const real_T f[112], real_T y[48]);

#endif

/* End of code generation (ntrp45.h) */
