/*
 * CPGNetWork_data.c
 *
 * Code generation for function 'CPGNetWork_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "CPGNetWork_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
covrtInstance emlrtCoverageInstance;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "CPGNetWork",
  NULL, false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

emlrtRSInfo j_emlrtRSI = { 37, "mpower",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m" };

emlrtRSInfo k_emlrtRSI = { 49, "power",
  "D:\\MATLAB2016a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

emlrtRSInfo bb_emlrtRSI = { 20, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo cb_emlrtRSI = { 21, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo db_emlrtRSI = { 22, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo eb_emlrtRSI = { 23, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo fb_emlrtRSI = { 24, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo gb_emlrtRSI = { 25, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo hb_emlrtRSI = { 26, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo ib_emlrtRSI = { 27, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo jb_emlrtRSI = { 28, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo kb_emlrtRSI = { 29, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo lb_emlrtRSI = { 30, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo mb_emlrtRSI = { 31, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo nb_emlrtRSI = { 32, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo ob_emlrtRSI = { 33, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo pb_emlrtRSI = { 34, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

emlrtRSInfo qb_emlrtRSI = { 35, "CPGNetWork_hopf_oscillator_with_lateral_impact",
  "E:\\\\folder\\\\\xe6\x9c\xba\xe5\x99\xa8\xe4\xba\xba\xe9\x98\x9f\\\\MAT\\\\CPGNetWork\\\\CPGNetWork_hopf_oscillator_with_lateral_impact.m"
};

/* End of code generation (CPGNetWork_data.c) */
