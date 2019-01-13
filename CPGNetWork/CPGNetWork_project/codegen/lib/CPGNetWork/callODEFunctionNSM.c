/*
 * File: callODEFunctionNSM.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 10-Dec-2018 17:27:26
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "callODEFunctionNSM.h"
#include <stdio.h>

/* Function Definitions */

/*
 * Arguments    : const double y[16]
 *                double varargin_1
 *                double varargin_2
 *                double varargin_3
 *                double varargin_4
 *                double varargin_5
 *                double varargin_6
 *                double varargin_7
 *                const double varargin_8[16]
 *                double yp[16]
 * Return Type  : void
 */
void callODEFunctionNSM(const double y[16], double varargin_1, double varargin_2,
  double varargin_3, double varargin_4, double varargin_5, double varargin_6,
  double varargin_7, const double varargin_8[16], double yp[16])
{
  double phi2;
  double phi4;
  double theta12;
  double theta13;
  double theta14;
  double theta21;
  double theta22;
  double theta23;
  double theta24;
  double theta31;
  double theta32;
  double theta33;
  double theta34;
  double theta41;
  double theta42;
  double theta43;
  double theta44;
  double Q[16];
  double a;
  double b_a;
  double c_a;
  double d_a;
  double e_a;
  double f_a;
  double g_a;
  double h_a;
  double i_a;
  double j_a;
  double k_a;
  double l_a;
  double m_a;
  double n_a;
  double o_a;
  double p_a;
  double q_a;
  double r_a;
  double s_a;
  double t_a;
  double u_a;
  double v_a;
  double w_a;
  double x_a;
  double y_a;
  double ab_a;
  double bb_a;
  double cb_a;
  double db_a;
  double eb_a;
  double fb_a;
  double b_varargin_1[256];
  int i0;
  int i1;
  double b_Q[16];
  double dv0[256];
  double c_varargin_1[16];
  static const signed char iv0[128] = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

  /* 计算 LF RF RB LB */
  /* % CPG network base on hopf oscillator with lateral impact */
  /*  Q'= F(Q-U) + RQ */
  if (varargin_7 == 0.0) {
    phi2 = varargin_6;
    phi4 = 0.0;
  } else {
    phi2 = varargin_2 - varargin_6;
    phi4 = varargin_2;
  }

  /* 各角相位差 */
  theta12 = 6.2831853071795862 * (0.0 - phi2);
  theta13 = 6.2831853071795862 * (0.0 - varargin_6);
  theta14 = 6.2831853071795862 * (0.0 - phi4);
  theta21 = 6.2831853071795862 * phi2;
  theta22 = 6.2831853071795862 * (phi2 - phi2);
  theta23 = 6.2831853071795862 * (phi2 - varargin_6);
  theta24 = 6.2831853071795862 * (phi2 - phi4);
  theta31 = 6.2831853071795862 * varargin_6;
  theta32 = 6.2831853071795862 * (varargin_6 - phi2);
  theta33 = 6.2831853071795862 * (varargin_6 - varargin_6);
  theta34 = 6.2831853071795862 * (varargin_6 - phi4);
  theta41 = 6.2831853071795862 * phi4;
  theta42 = 6.2831853071795862 * (phi4 - phi2);
  theta43 = 6.2831853071795862 * (phi4 - varargin_6);
  theta44 = 6.2831853071795862 * (phi4 - phi4);
  memcpy(&Q[0], &y[0], sizeof(double) << 4);

  /* 状态变量 x1, y1(LF)   x2, y2(RF)    x3, y3(RB)    x4, y4(LB) ... */
  /* 系数矩阵 */
  phi4 = y[0] - varargin_8[0];
  a = y[1] - varargin_8[1];
  b_a = y[0] - varargin_8[0];
  c_a = y[1] - varargin_8[1];
  d_a = y[2] - varargin_8[2];
  e_a = y[3] - varargin_8[3];
  f_a = y[2] - varargin_8[2];
  g_a = y[3] - varargin_8[3];
  h_a = y[4] - varargin_8[4];
  i_a = y[5] - varargin_8[5];
  j_a = y[4] - varargin_8[4];
  k_a = y[5] - varargin_8[5];
  l_a = y[6] - varargin_8[6];
  m_a = y[7] - varargin_8[7];
  n_a = y[6] - varargin_8[6];
  o_a = y[7] - varargin_8[7];
  p_a = y[8] - varargin_8[8];
  q_a = y[9] - varargin_8[9];
  r_a = y[8] - varargin_8[8];
  s_a = y[9] - varargin_8[9];
  t_a = y[10] - varargin_8[10];
  u_a = y[11] - varargin_8[11];
  v_a = y[10] - varargin_8[10];
  w_a = y[11] - varargin_8[11];
  x_a = y[12] - varargin_8[12];
  y_a = y[13] - varargin_8[13];
  ab_a = y[12] - varargin_8[12];
  bb_a = y[13] - varargin_8[13];
  cb_a = y[14] - varargin_8[14];
  db_a = y[15] - varargin_8[15];
  eb_a = y[14] - varargin_8[14];
  fb_a = y[15] - varargin_8[15];

  /* 旋转矩阵 */
  /*  Q'= F*(Q-U) + R*Q */
  b_varargin_1[0] = varargin_1 * ((varargin_3 - phi4 * phi4) - a * a);
  b_varargin_1[16] = -((1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 +
    exp(-varargin_5 * (y[1] - varargin_8[1])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[1] - varargin_8[1]))));
  b_varargin_1[32] = 0.0;
  b_varargin_1[48] = 0.0;
  b_varargin_1[64] = 0.0;
  b_varargin_1[80] = 0.0;
  b_varargin_1[96] = 0.0;
  b_varargin_1[112] = 0.0;
  b_varargin_1[1] = (1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 + exp
    (-varargin_5 * (y[1] - varargin_8[1])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[1] - varargin_8[1])));
  b_varargin_1[17] = varargin_1 * ((varargin_3 - b_a * b_a) - c_a * c_a);
  b_varargin_1[33] = 0.0;
  b_varargin_1[49] = 0.0;
  b_varargin_1[65] = 0.0;
  b_varargin_1[81] = 0.0;
  b_varargin_1[97] = 0.0;
  b_varargin_1[113] = 0.0;
  b_varargin_1[2] = 0.0;
  b_varargin_1[18] = 0.0;
  b_varargin_1[34] = varargin_1 * ((varargin_3 - d_a * d_a) - e_a * e_a);
  b_varargin_1[50] = -((1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 +
    exp(-varargin_5 * (y[3] - varargin_8[3])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[3] - varargin_8[3]))));
  b_varargin_1[66] = 0.0;
  b_varargin_1[82] = 0.0;
  b_varargin_1[98] = 0.0;
  b_varargin_1[114] = 0.0;
  b_varargin_1[3] = 0.0;
  b_varargin_1[19] = 0.0;
  b_varargin_1[35] = (1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 + exp(
    -varargin_5 * (y[3] - varargin_8[3])))) + varargin_4 / (1.0 + exp(varargin_5
    * (y[3] - varargin_8[3])));
  b_varargin_1[51] = varargin_1 * ((varargin_3 - f_a * f_a) - g_a * g_a);
  b_varargin_1[67] = 0.0;
  b_varargin_1[83] = 0.0;
  b_varargin_1[99] = 0.0;
  b_varargin_1[115] = 0.0;
  b_varargin_1[4] = 0.0;
  b_varargin_1[20] = 0.0;
  b_varargin_1[36] = 0.0;
  b_varargin_1[52] = 0.0;
  b_varargin_1[68] = varargin_1 * ((varargin_3 - h_a * h_a) - i_a * i_a);
  b_varargin_1[84] = -((1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 +
    exp(-varargin_5 * (y[5] - varargin_8[5])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[5] - varargin_8[5]))));
  b_varargin_1[100] = 0.0;
  b_varargin_1[116] = 0.0;
  b_varargin_1[5] = 0.0;
  b_varargin_1[21] = 0.0;
  b_varargin_1[37] = 0.0;
  b_varargin_1[53] = 0.0;
  b_varargin_1[69] = (1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 + exp(
    -varargin_5 * (y[5] - varargin_8[5])))) + varargin_4 / (1.0 + exp(varargin_5
    * (y[5] - varargin_8[5])));
  b_varargin_1[85] = varargin_1 * ((varargin_3 - j_a * j_a) - k_a * k_a);
  b_varargin_1[101] = 0.0;
  b_varargin_1[117] = 0.0;
  b_varargin_1[6] = 0.0;
  b_varargin_1[22] = 0.0;
  b_varargin_1[38] = 0.0;
  b_varargin_1[54] = 0.0;
  b_varargin_1[70] = 0.0;
  b_varargin_1[86] = 0.0;
  b_varargin_1[102] = varargin_1 * ((varargin_3 - l_a * l_a) - m_a * m_a);
  b_varargin_1[118] = -((1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 +
    exp(-varargin_5 * (y[7] - varargin_8[7])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[7] - varargin_8[7]))));
  b_varargin_1[7] = 0.0;
  b_varargin_1[23] = 0.0;
  b_varargin_1[39] = 0.0;
  b_varargin_1[55] = 0.0;
  b_varargin_1[71] = 0.0;
  b_varargin_1[87] = 0.0;
  b_varargin_1[103] = (1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 + exp
    (-varargin_5 * (y[7] - varargin_8[7])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[7] - varargin_8[7])));
  b_varargin_1[119] = varargin_1 * ((varargin_3 - n_a * n_a) - o_a * o_a);
  for (i0 = 0; i0 < 8; i0++) {
    for (i1 = 0; i1 < 8; i1++) {
      b_varargin_1[i1 + ((i0 + 8) << 4)] = 0.0;
      b_varargin_1[(i1 + (i0 << 4)) + 8] = 0.0;
    }
  }

  b_varargin_1[136] = varargin_1 * ((varargin_3 - p_a * p_a) - q_a * q_a);
  b_varargin_1[152] = -((1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 +
    exp(-varargin_5 * (y[9] - varargin_8[9])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[9] - varargin_8[9]))));
  b_varargin_1[168] = 0.0;
  b_varargin_1[184] = 0.0;
  b_varargin_1[200] = 0.0;
  b_varargin_1[216] = 0.0;
  b_varargin_1[232] = 0.0;
  b_varargin_1[248] = 0.0;
  b_varargin_1[137] = (1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 + exp
    (-varargin_5 * (y[9] - varargin_8[9])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[9] - varargin_8[9])));
  b_varargin_1[153] = varargin_1 * ((varargin_3 - r_a * r_a) - s_a * s_a);
  b_varargin_1[169] = 0.0;
  b_varargin_1[185] = 0.0;
  b_varargin_1[201] = 0.0;
  b_varargin_1[217] = 0.0;
  b_varargin_1[233] = 0.0;
  b_varargin_1[249] = 0.0;
  b_varargin_1[138] = 0.0;
  b_varargin_1[154] = 0.0;
  b_varargin_1[170] = varargin_1 * ((varargin_3 - t_a * t_a) - u_a * u_a);
  b_varargin_1[186] = -((1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 +
    exp(-varargin_5 * (y[11] - varargin_8[11])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[11] - varargin_8[11]))));
  b_varargin_1[202] = 0.0;
  b_varargin_1[218] = 0.0;
  b_varargin_1[234] = 0.0;
  b_varargin_1[250] = 0.0;
  b_varargin_1[139] = 0.0;
  b_varargin_1[155] = 0.0;
  b_varargin_1[171] = (1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 + exp
    (-varargin_5 * (y[11] - varargin_8[11])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[11] - varargin_8[11])));
  b_varargin_1[187] = varargin_1 * ((varargin_3 - v_a * v_a) - w_a * w_a);
  b_varargin_1[203] = 0.0;
  b_varargin_1[219] = 0.0;
  b_varargin_1[235] = 0.0;
  b_varargin_1[251] = 0.0;
  b_varargin_1[140] = 0.0;
  b_varargin_1[156] = 0.0;
  b_varargin_1[172] = 0.0;
  b_varargin_1[188] = 0.0;
  b_varargin_1[204] = varargin_1 * ((varargin_3 - x_a * x_a) - y_a * y_a);
  b_varargin_1[220] = -((1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 +
    exp(-varargin_5 * (y[13] - varargin_8[13])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[13] - varargin_8[13]))));
  b_varargin_1[236] = 0.0;
  b_varargin_1[252] = 0.0;
  b_varargin_1[141] = 0.0;
  b_varargin_1[157] = 0.0;
  b_varargin_1[173] = 0.0;
  b_varargin_1[189] = 0.0;
  b_varargin_1[205] = (1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 + exp
    (-varargin_5 * (y[13] - varargin_8[13])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[13] - varargin_8[13])));
  b_varargin_1[221] = varargin_1 * ((varargin_3 - ab_a * ab_a) - bb_a * bb_a);
  b_varargin_1[237] = 0.0;
  b_varargin_1[253] = 0.0;
  b_varargin_1[142] = 0.0;
  b_varargin_1[158] = 0.0;
  b_varargin_1[174] = 0.0;
  b_varargin_1[190] = 0.0;
  b_varargin_1[206] = 0.0;
  b_varargin_1[222] = 0.0;
  b_varargin_1[238] = varargin_1 * ((varargin_3 - cb_a * cb_a) - db_a * db_a);
  b_varargin_1[254] = -((1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 +
    exp(-varargin_5 * (y[15] - varargin_8[15])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[15] - varargin_8[15]))));
  b_varargin_1[143] = 0.0;
  b_varargin_1[159] = 0.0;
  b_varargin_1[175] = 0.0;
  b_varargin_1[191] = 0.0;
  b_varargin_1[207] = 0.0;
  b_varargin_1[223] = 0.0;
  b_varargin_1[239] = (1.0 - varargin_2) * varargin_4 / (varargin_2 * (1.0 + exp
    (-varargin_5 * (y[15] - varargin_8[15])))) + varargin_4 / (1.0 + exp
    (varargin_5 * (y[15] - varargin_8[15])));
  b_varargin_1[255] = varargin_1 * ((varargin_3 - eb_a * eb_a) - fb_a * fb_a);
  for (i0 = 0; i0 < 16; i0++) {
    b_Q[i0] = Q[i0] - varargin_8[i0];
  }

  dv0[0] = 1.0;
  dv0[16] = -0.0;
  dv0[32] = cos(theta21);
  dv0[48] = -sin(theta21);
  dv0[64] = cos(theta31);
  dv0[80] = -sin(theta31);
  dv0[96] = cos(theta41);
  dv0[112] = -sin(theta41);
  dv0[1] = 0.0;
  dv0[17] = 1.0;
  dv0[33] = sin(theta21);
  dv0[49] = cos(theta21);
  dv0[65] = sin(theta31);
  dv0[81] = cos(theta31);
  dv0[97] = sin(theta41);
  dv0[113] = cos(theta41);
  dv0[2] = cos(theta12);
  dv0[18] = -sin(theta12);
  dv0[34] = cos(theta22);
  dv0[50] = -sin(theta22);
  dv0[66] = cos(theta32);
  dv0[82] = -sin(theta32);
  dv0[98] = cos(theta42);
  dv0[114] = -sin(theta42);
  dv0[3] = sin(theta12);
  dv0[19] = cos(theta12);
  dv0[35] = sin(theta22);
  dv0[51] = cos(theta22);
  dv0[67] = sin(theta32);
  dv0[83] = cos(theta32);
  dv0[99] = sin(theta42);
  dv0[115] = cos(theta42);
  dv0[4] = cos(theta13);
  dv0[20] = -sin(theta13);
  dv0[36] = cos(theta23);
  dv0[52] = -sin(theta23);
  dv0[68] = cos(theta33);
  dv0[84] = -sin(theta33);
  dv0[100] = cos(theta43);
  dv0[116] = -sin(theta43);
  dv0[5] = sin(theta13);
  dv0[21] = cos(theta13);
  dv0[37] = sin(theta23);
  dv0[53] = cos(theta23);
  dv0[69] = sin(theta33);
  dv0[85] = cos(theta33);
  dv0[101] = sin(theta43);
  dv0[117] = cos(theta43);
  dv0[6] = cos(theta14);
  dv0[22] = -sin(theta14);
  dv0[38] = cos(theta24);
  dv0[54] = -sin(theta24);
  dv0[70] = cos(theta34);
  dv0[86] = -sin(theta34);
  dv0[102] = cos(theta44);
  dv0[118] = -sin(theta44);
  dv0[7] = sin(theta14);
  dv0[23] = cos(theta14);
  dv0[39] = sin(theta24);
  dv0[55] = cos(theta24);
  dv0[71] = sin(theta34);
  dv0[87] = cos(theta34);
  dv0[103] = sin(theta44);
  dv0[119] = cos(theta44);
  for (i0 = 0; i0 < 8; i0++) {
    memset(&dv0[(i0 << 4) + 128], 0, sizeof(double) << 3);
  }

  for (i0 = 0; i0 < 16; i0++) {
    for (i1 = 0; i1 < 8; i1++) {
      dv0[(i1 + (i0 << 4)) + 8] = iv0[i1 + (i0 << 3)];
    }

    c_varargin_1[i0] = 0.0;
    for (i1 = 0; i1 < 16; i1++) {
      c_varargin_1[i0] += b_varargin_1[i0 + (i1 << 4)] * b_Q[i1];
    }
  }

  for (i0 = 0; i0 < 16; i0++) {
    b_Q[i0] = 0.0;
    for (i1 = 0; i1 < 16; i1++) {
      b_Q[i0] += dv0[i0 + (i1 << 4)] * Q[i1];
    }

    yp[i0] = c_varargin_1[i0] + b_Q[i0];
  }
}

/*
 * File trailer for callODEFunctionNSM.c
 *
 * [EOF]
 */
