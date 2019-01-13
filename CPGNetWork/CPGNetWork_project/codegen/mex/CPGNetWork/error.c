/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo f_emlrtRTEI = { 17, 9, "error",
  "D:\\MATLAB2016a\\toolbox\\eml\\eml\\+coder\\+internal\\error.m" };

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &f_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
}

void c_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &f_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, "acos");
}

void d_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &f_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, "asin");
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &f_emlrtRTEI,
    "Coder:toolbox:power_domainError", 0);
}

/* End of code generation (error.c) */
