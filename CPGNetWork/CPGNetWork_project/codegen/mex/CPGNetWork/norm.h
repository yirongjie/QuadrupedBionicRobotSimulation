/*
 * norm.h
 *
 * Code generation for function 'norm'
 *
 */

#ifndef NORM_H
#define NORM_H

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
extern real_T norm(const real_T x[16]);

#ifdef __WATCOMC__

#pragma aux norm value [8087];

#endif
#endif

/* End of code generation (norm.h) */
