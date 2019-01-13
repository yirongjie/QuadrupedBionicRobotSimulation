/*
 * File: fprintf.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 10-Dec-2018 17:27:26
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "fprintf.h"
#include "fileManager.h"
#include <stdio.h>

/* Function Definitions */

/*
 * Arguments    : double varargin_1
 *                double varargin_2
 *                double varargin_3
 * Return Type  : int
 */
int b_cfprintf(double varargin_1, double varargin_2, double varargin_3)
{
  int nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char cfmt[41] = { 'R', 'F', ' ', ' ', 'h', 'i', 'p', '-', 'p',
    'i', 't', 'c', 'h', ':', '%', 'f', ' ', ' ', 'k', 'n', 'e', 'e', ':', '%',
    'f', ' ', ' ', 'h', 'i', 'p', '-', 'r', 'o', 'l', 'l', ':', '%', 'f', ' ',
    ' ', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  b_fileManager(&filestar, &autoflush);
  if (filestar == b_NULL) {
  } else {
    nbytesint = fprintf(filestar, cfmt, varargin_1, varargin_2, varargin_3);
    fflush(filestar);
  }

  return nbytesint;
}

/*
 * Arguments    : double varargin_1
 *                double varargin_2
 *                double varargin_3
 * Return Type  : int
 */
int c_cfprintf(double varargin_1, double varargin_2, double varargin_3)
{
  int nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char cfmt[41] = { 'R', 'B', ' ', ' ', 'h', 'i', 'p', '-', 'p',
    'i', 't', 'c', 'h', ':', '%', 'f', ' ', ' ', 'k', 'n', 'e', 'e', ':', '%',
    'f', ' ', ' ', 'h', 'i', 'p', '-', 'r', 'o', 'l', 'l', ':', '%', 'f', ' ',
    ' ', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  c_fileManager(&filestar, &autoflush);
  if (filestar == b_NULL) {
  } else {
    nbytesint = fprintf(filestar, cfmt, varargin_1, varargin_2, varargin_3);
    fflush(filestar);
  }

  return nbytesint;
}

/*
 * Arguments    : double varargin_1
 *                double varargin_2
 *                double varargin_3
 * Return Type  : int
 */
int cfprintf(double varargin_1, double varargin_2, double varargin_3)
{
  int nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char cfmt[41] = { 'L', 'F', ' ', ' ', 'h', 'i', 'p', '-', 'p',
    'i', 't', 'c', 'h', ':', '%', 'f', ' ', ' ', 'k', 'n', 'e', 'e', ':', '%',
    'f', ' ', ' ', 'h', 'i', 'p', '-', 'r', 'o', 'l', 'l', ':', '%', 'f', ' ',
    ' ', '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  fileManager(&filestar, &autoflush);
  if (filestar == b_NULL) {
  } else {
    nbytesint = fprintf(filestar, cfmt, varargin_1, varargin_2, varargin_3);
    fflush(filestar);
  }

  return nbytesint;
}

/*
 * Arguments    : double varargin_1
 *                double varargin_2
 *                double varargin_3
 * Return Type  : int
 */
int d_cfprintf(double varargin_1, double varargin_2, double varargin_3)
{
  int nbytesint;
  FILE * b_NULL;
  FILE * filestar;
  boolean_T autoflush;
  static const char cfmt[40] = { 'R', 'L', ' ', ' ', 'h', 'i', 'p', '-', 'p',
    'i', 't', 'c', 'h', ':', '%', 'f', ' ', ' ', 'k', 'n', 'e', 'e', ':', '%',
    'f', ' ', ' ', 'h', 'i', 'p', '-', 'r', 'o', 'l', 'l', ':', '%', 'f', '\x0a',
    '\x00' };

  b_NULL = NULL;
  nbytesint = 0;
  d_fileManager(&filestar, &autoflush);
  if (filestar == b_NULL) {
  } else {
    nbytesint = fprintf(filestar, cfmt, varargin_1, varargin_2, varargin_3);
    fflush(filestar);
  }

  return nbytesint;
}

/*
 * File trailer for fprintf.c
 *
 * [EOF]
 */
