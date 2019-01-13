/*
 * File: _coder_CPGNetWork_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 10-Dec-2018 17:27:26
 */

#ifndef _CODER_CPGNETWORK_API_H
#define _CODER_CPGNETWORK_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_CPGNetWork_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void CPGNetWork(real_T acc_roll, real_T slope_alpha, real_T v, real_T T,
  real_T osc_x[16], real_T tfinal, real_T phi, real_T theta0, real_T beta,
  real_T phiRB, real_T phiLB, real_T alpha, real_T a, real_T k1, real_T k2,
  real_T joint_angle[16]);
extern void CPGNetWork_api(const mxArray *prhs[15], const mxArray *plhs[2]);
extern void CPGNetWork_atexit(void);
extern void CPGNetWork_initialize(void);
extern void CPGNetWork_terminate(void);
extern void CPGNetWork_xil_terminate(void);

#endif

/*
 * File trailer for _coder_CPGNetWork_api.h
 *
 * [EOF]
 */
