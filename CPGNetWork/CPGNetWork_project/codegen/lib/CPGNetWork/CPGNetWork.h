/*
 * File: CPGNetWork.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 10-Dec-2018 17:27:26
 */

#ifndef CPGNETWORK_H
#define CPGNETWORK_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "CPGNetWork_types.h"

/* Function Declarations */
extern void CPGNetWork(double acc_roll, double slope_alpha, double v, double T,
  double osc_x[16], double tfinal, double phi, double theta0, double beta,
  double phiRB, double phiLB, double alpha, double a, double k1, double k2,
  double joint_angle[16]);

#endif

/*
 * File trailer for CPGNetWork.h
 *
 * [EOF]
 */
