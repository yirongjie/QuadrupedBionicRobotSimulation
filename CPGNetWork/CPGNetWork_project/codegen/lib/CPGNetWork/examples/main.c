/*
 * File: main.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 10-Dec-2018 17:27:26
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "main.h"
#include "CPGNetWork_terminate.h"
#include "CPGNetWork_initialize.h"
#include <stdio.h>

/* Function Declarations */
static void argInit_16x1_real_T(double result[16]);
static double argInit_real_T(void);
static void main_CPGNetWork(void);

/* Function Definitions */

/*
 * Arguments    : double result[16]
 * Return Type  : void
 */
static void argInit_16x1_real_T(double result[16])
{
  int idx0;

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 16; idx0++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result[idx0] = argInit_real_T();
  }
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_CPGNetWork(void)
{
  double acc_roll;
  double slope_alpha;
  double v;
  double T;
  double osc_x[16];
  double joint_angle[16];

  /* Initialize function 'CPGNetWork' input arguments. */
  acc_roll = argInit_real_T();
  slope_alpha = argInit_real_T();
  v = argInit_real_T();
  T = argInit_real_T();

  /* Initialize function input argument 'osc_x'. */
  argInit_16x1_real_T(osc_x);

  /* Call the entry-point 'CPGNetWork'. */
  CPGNetWork(acc_roll, slope_alpha, v, T, osc_x, argInit_real_T(),
             argInit_real_T(), argInit_real_T(), argInit_real_T(),
             argInit_real_T(), argInit_real_T(), argInit_real_T(),
             argInit_real_T(), argInit_real_T(), argInit_real_T(), joint_angle);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  CPGNetWork_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_CPGNetWork();

  /* Terminate the application.
     You do not need to do this more than one time. */
  CPGNetWork_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
