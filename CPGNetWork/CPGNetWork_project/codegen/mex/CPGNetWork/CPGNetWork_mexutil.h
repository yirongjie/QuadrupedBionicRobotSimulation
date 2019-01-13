/*
 * CPGNetWork_mexutil.h
 *
 * Code generation for function 'CPGNetWork_mexutil'
 *
 */

#ifndef CPGNETWORK_MEXUTIL_H
#define CPGNETWORK_MEXUTIL_H

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
extern real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_feval,
  const char_T *identifier);

#ifdef __WATCOMC__

#pragma aux c_emlrt_marshallIn value [8087];

#endif

extern real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);

#ifdef __WATCOMC__

#pragma aux d_emlrt_marshallIn value [8087];

#endif

extern real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

#ifdef __WATCOMC__

#pragma aux h_emlrt_marshallIn value [8087];

#endif
#endif

/* End of code generation (CPGNetWork_mexutil.h) */
