/*
 * CPGNetWork_hopf_oscillator_with_lateral_impact.c
 *
 * Code generation for function 'CPGNetWork_hopf_oscillator_with_lateral_impact'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "CPGNetWork_hopf_oscillator_with_lateral_impact.h"
#include "mpower.h"
#include "CPGNetWork_data.h"

/* Function Definitions */
void c_CPGNetWork_hopf_oscillator_wi(const real_T x[16], real_T alpha, real_T
  beta, real_T miu, real_T omiga_sw, real_T a, real_T phi3, real_T phi4, const
  real_T U[16], real_T xdot[16])
{
  real_T phi2;
  real_T theta12;
  real_T theta13;
  real_T theta14;
  real_T theta21;
  real_T theta22;
  real_T theta23;
  real_T theta24;
  real_T theta31;
  real_T theta32;
  real_T theta33;
  real_T theta34;
  real_T theta41;
  real_T theta42;
  real_T theta43;
  real_T theta44;
  real_T Q[16];
  real_T d0;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T d15;
  real_T Fp[64];
  real_T Fr[64];
  real_T b_Fp[256];
  int32_T i0;
  real_T b_Q[16];
  int32_T i1;
  real_T dv1[256];
  real_T c_Fp[16];
  static const int8_T iv2[128] = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0 };

  covrtLogFcn(&emlrtCoverageInstance, 1U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 0);

  /* % CPG network base on hopf oscillator with lateral impact */
  /*  Q'= F(Q-U) + RQ */
  /* 计算 LF RF RB LB */
  if (covrtLogIf(&emlrtCoverageInstance, 1U, 0U, 0, phi4 == 0.0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 1);
    phi2 = phi3;
    phi4 = 0.0;
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 2);
    phi2 = beta - phi3;
    phi4 = beta;
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 1U, 3);

  /* 各角相位差 */
  theta12 = 6.2831853071795862 * (0.0 - phi2);
  theta13 = 6.2831853071795862 * (0.0 - phi3);
  theta14 = 6.2831853071795862 * (0.0 - phi4);
  theta21 = 6.2831853071795862 * phi2;
  theta22 = 6.2831853071795862 * (phi2 - phi2);
  theta23 = 6.2831853071795862 * (phi2 - phi3);
  theta24 = 6.2831853071795862 * (phi2 - phi4);
  theta31 = 6.2831853071795862 * phi3;
  theta32 = 6.2831853071795862 * (phi3 - phi2);
  theta33 = 6.2831853071795862 * (phi3 - phi3);
  theta34 = 6.2831853071795862 * (phi3 - phi4);
  theta41 = 6.2831853071795862 * phi4;
  theta42 = 6.2831853071795862 * (phi4 - phi2);
  theta43 = 6.2831853071795862 * (phi4 - phi3);
  theta44 = 6.2831853071795862 * (phi4 - phi4);
  memcpy(&Q[0], &x[0], sizeof(real_T) << 4);

  /* 状态变量 x1, y1(LF)   x2, y2(RF)    x3, y3(RB)    x4, y4(LB) ... */
  /* 系数矩阵 */
  d0 = mpower(x[0] - U[0]);
  d1 = mpower(x[1] - U[1]);
  d2 = mpower(x[0] - U[0]);
  d3 = mpower(x[1] - U[1]);
  d4 = mpower(x[2] - U[2]);
  d5 = mpower(x[3] - U[3]);
  d6 = mpower(x[2] - U[2]);
  d7 = mpower(x[3] - U[3]);
  d8 = mpower(x[4] - U[4]);
  d9 = mpower(x[5] - U[5]);
  d10 = mpower(x[4] - U[4]);
  d11 = mpower(x[5] - U[5]);
  d12 = mpower(x[6] - U[6]);
  d13 = mpower(x[7] - U[7]);
  d14 = mpower(x[6] - U[6]);
  d15 = mpower(x[7] - U[7]);
  Fp[0] = alpha * ((miu - d0) - d1);
  Fp[8] = -((1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x[1]
    - U[1])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[1] - U[1]))));
  Fp[16] = 0.0;
  Fp[24] = 0.0;
  Fp[32] = 0.0;
  Fp[40] = 0.0;
  Fp[48] = 0.0;
  Fp[56] = 0.0;
  Fp[1] = (1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x[1]
    - U[1])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[1] - U[1])));
  Fp[9] = alpha * ((miu - d2) - d3);
  Fp[17] = 0.0;
  Fp[25] = 0.0;
  Fp[33] = 0.0;
  Fp[41] = 0.0;
  Fp[49] = 0.0;
  Fp[57] = 0.0;
  Fp[2] = 0.0;
  Fp[10] = 0.0;
  Fp[18] = alpha * ((miu - d4) - d5);
  Fp[26] = -((1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x
    [3] - U[3])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[3] - U[3]))));
  Fp[34] = 0.0;
  Fp[42] = 0.0;
  Fp[50] = 0.0;
  Fp[58] = 0.0;
  Fp[3] = 0.0;
  Fp[11] = 0.0;
  Fp[19] = (1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x[3]
    - U[3])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[3] - U[3])));
  Fp[27] = alpha * ((miu - d6) - d7);
  Fp[35] = 0.0;
  Fp[43] = 0.0;
  Fp[51] = 0.0;
  Fp[59] = 0.0;
  Fp[4] = 0.0;
  Fp[12] = 0.0;
  Fp[20] = 0.0;
  Fp[28] = 0.0;
  Fp[36] = alpha * ((miu - d8) - d9);
  Fp[44] = -((1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x
    [5] - U[5])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[5] - U[5]))));
  Fp[52] = 0.0;
  Fp[60] = 0.0;
  Fp[5] = 0.0;
  Fp[13] = 0.0;
  Fp[21] = 0.0;
  Fp[29] = 0.0;
  Fp[37] = (1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x[5]
    - U[5])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[5] - U[5])));
  Fp[45] = alpha * ((miu - d10) - d11);
  Fp[53] = 0.0;
  Fp[61] = 0.0;
  Fp[6] = 0.0;
  Fp[14] = 0.0;
  Fp[22] = 0.0;
  Fp[30] = 0.0;
  Fp[38] = 0.0;
  Fp[46] = 0.0;
  Fp[54] = alpha * ((miu - d12) - d13);
  Fp[62] = -((1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x
    [7] - U[7])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[7] - U[7]))));
  Fp[7] = 0.0;
  Fp[15] = 0.0;
  Fp[23] = 0.0;
  Fp[31] = 0.0;
  Fp[39] = 0.0;
  Fp[47] = 0.0;
  Fp[55] = (1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x[7]
    - U[7])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[7] - U[7])));
  Fp[63] = alpha * ((miu - d14) - d15);
  d0 = mpower(x[8] - U[8]);
  d1 = mpower(x[9] - U[9]);
  d2 = mpower(x[8] - U[8]);
  d3 = mpower(x[9] - U[9]);
  d4 = mpower(x[10] - U[10]);
  d5 = mpower(x[11] - U[11]);
  d6 = mpower(x[10] - U[10]);
  d7 = mpower(x[11] - U[11]);
  d8 = mpower(x[12] - U[12]);
  d9 = mpower(x[13] - U[13]);
  d10 = mpower(x[12] - U[12]);
  d11 = mpower(x[13] - U[13]);
  d12 = mpower(x[14] - U[14]);
  d13 = mpower(x[15] - U[15]);
  d14 = mpower(x[14] - U[14]);
  d15 = mpower(x[15] - U[15]);
  Fr[0] = alpha * ((miu - d0) - d1);
  Fr[8] = -((1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x[9]
    - U[9])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[9] - U[9]))));
  Fr[16] = 0.0;
  Fr[24] = 0.0;
  Fr[32] = 0.0;
  Fr[40] = 0.0;
  Fr[48] = 0.0;
  Fr[56] = 0.0;
  Fr[1] = (1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x[9]
    - U[9])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[9] - U[9])));
  Fr[9] = alpha * ((miu - d2) - d3);
  Fr[17] = 0.0;
  Fr[25] = 0.0;
  Fr[33] = 0.0;
  Fr[41] = 0.0;
  Fr[49] = 0.0;
  Fr[57] = 0.0;
  Fr[2] = 0.0;
  Fr[10] = 0.0;
  Fr[18] = alpha * ((miu - d4) - d5);
  Fr[26] = -((1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x
    [11] - U[11])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[11] - U[11]))));
  Fr[34] = 0.0;
  Fr[42] = 0.0;
  Fr[50] = 0.0;
  Fr[58] = 0.0;
  Fr[3] = 0.0;
  Fr[11] = 0.0;
  Fr[19] = (1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x[11]
    - U[11])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[11] - U[11])));
  Fr[27] = alpha * ((miu - d6) - d7);
  Fr[35] = 0.0;
  Fr[43] = 0.0;
  Fr[51] = 0.0;
  Fr[59] = 0.0;
  Fr[4] = 0.0;
  Fr[12] = 0.0;
  Fr[20] = 0.0;
  Fr[28] = 0.0;
  Fr[36] = alpha * ((miu - d8) - d9);
  Fr[44] = -((1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x
    [13] - U[13])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[13] - U[13]))));
  Fr[52] = 0.0;
  Fr[60] = 0.0;
  Fr[5] = 0.0;
  Fr[13] = 0.0;
  Fr[21] = 0.0;
  Fr[29] = 0.0;
  Fr[37] = (1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x[13]
    - U[13])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[13] - U[13])));
  Fr[45] = alpha * ((miu - d10) - d11);
  Fr[53] = 0.0;
  Fr[61] = 0.0;
  Fr[6] = 0.0;
  Fr[14] = 0.0;
  Fr[22] = 0.0;
  Fr[30] = 0.0;
  Fr[38] = 0.0;
  Fr[46] = 0.0;
  Fr[54] = alpha * ((miu - d12) - d13);
  Fr[62] = -((1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x
    [15] - U[15])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[15] - U[15]))));
  Fr[7] = 0.0;
  Fr[15] = 0.0;
  Fr[23] = 0.0;
  Fr[31] = 0.0;
  Fr[39] = 0.0;
  Fr[47] = 0.0;
  Fr[55] = (1.0 - beta) * omiga_sw / (beta * (1.0 + muDoubleScalarExp(-a * (x[15]
    - U[15])))) + omiga_sw / (1.0 + muDoubleScalarExp(a * (x[15] - U[15])));
  Fr[63] = alpha * ((miu - d14) - d15);

  /* 旋转矩阵 */
  for (i0 = 0; i0 < 8; i0++) {
    for (i1 = 0; i1 < 8; i1++) {
      b_Fp[i1 + (i0 << 4)] = Fp[i1 + (i0 << 3)];
      b_Fp[i1 + ((i0 + 8) << 4)] = 0.0;
      b_Fp[(i1 + (i0 << 4)) + 8] = 0.0;
      b_Fp[(i1 + ((i0 + 8) << 4)) + 8] = Fr[i1 + (i0 << 3)];
    }
  }

  for (i0 = 0; i0 < 16; i0++) {
    b_Q[i0] = Q[i0] - U[i0];
  }

  dv1[0] = 1.0;
  dv1[16] = -0.0;
  dv1[32] = muDoubleScalarCos(theta21);
  dv1[48] = -muDoubleScalarSin(theta21);
  dv1[64] = muDoubleScalarCos(theta31);
  dv1[80] = -muDoubleScalarSin(theta31);
  dv1[96] = muDoubleScalarCos(theta41);
  dv1[112] = -muDoubleScalarSin(theta41);
  dv1[1] = 0.0;
  dv1[17] = 1.0;
  dv1[33] = muDoubleScalarSin(theta21);
  dv1[49] = muDoubleScalarCos(theta21);
  dv1[65] = muDoubleScalarSin(theta31);
  dv1[81] = muDoubleScalarCos(theta31);
  dv1[97] = muDoubleScalarSin(theta41);
  dv1[113] = muDoubleScalarCos(theta41);
  dv1[2] = muDoubleScalarCos(theta12);
  dv1[18] = -muDoubleScalarSin(theta12);
  dv1[34] = muDoubleScalarCos(theta22);
  dv1[50] = -muDoubleScalarSin(theta22);
  dv1[66] = muDoubleScalarCos(theta32);
  dv1[82] = -muDoubleScalarSin(theta32);
  dv1[98] = muDoubleScalarCos(theta42);
  dv1[114] = -muDoubleScalarSin(theta42);
  dv1[3] = muDoubleScalarSin(theta12);
  dv1[19] = muDoubleScalarCos(theta12);
  dv1[35] = muDoubleScalarSin(theta22);
  dv1[51] = muDoubleScalarCos(theta22);
  dv1[67] = muDoubleScalarSin(theta32);
  dv1[83] = muDoubleScalarCos(theta32);
  dv1[99] = muDoubleScalarSin(theta42);
  dv1[115] = muDoubleScalarCos(theta42);
  dv1[4] = muDoubleScalarCos(theta13);
  dv1[20] = -muDoubleScalarSin(theta13);
  dv1[36] = muDoubleScalarCos(theta23);
  dv1[52] = -muDoubleScalarSin(theta23);
  dv1[68] = muDoubleScalarCos(theta33);
  dv1[84] = -muDoubleScalarSin(theta33);
  dv1[100] = muDoubleScalarCos(theta43);
  dv1[116] = -muDoubleScalarSin(theta43);
  dv1[5] = muDoubleScalarSin(theta13);
  dv1[21] = muDoubleScalarCos(theta13);
  dv1[37] = muDoubleScalarSin(theta23);
  dv1[53] = muDoubleScalarCos(theta23);
  dv1[69] = muDoubleScalarSin(theta33);
  dv1[85] = muDoubleScalarCos(theta33);
  dv1[101] = muDoubleScalarSin(theta43);
  dv1[117] = muDoubleScalarCos(theta43);
  dv1[6] = muDoubleScalarCos(theta14);
  dv1[22] = -muDoubleScalarSin(theta14);
  dv1[38] = muDoubleScalarCos(theta24);
  dv1[54] = -muDoubleScalarSin(theta24);
  dv1[70] = muDoubleScalarCos(theta34);
  dv1[86] = -muDoubleScalarSin(theta34);
  dv1[102] = muDoubleScalarCos(theta44);
  dv1[118] = -muDoubleScalarSin(theta44);
  dv1[7] = muDoubleScalarSin(theta14);
  dv1[23] = muDoubleScalarCos(theta14);
  dv1[39] = muDoubleScalarSin(theta24);
  dv1[55] = muDoubleScalarCos(theta24);
  dv1[71] = muDoubleScalarSin(theta34);
  dv1[87] = muDoubleScalarCos(theta34);
  dv1[103] = muDoubleScalarSin(theta44);
  dv1[119] = muDoubleScalarCos(theta44);
  for (i0 = 0; i0 < 8; i0++) {
    memset(&dv1[(i0 << 4) + 128], 0, sizeof(real_T) << 3);
  }

  for (i0 = 0; i0 < 16; i0++) {
    for (i1 = 0; i1 < 8; i1++) {
      dv1[(i1 + (i0 << 4)) + 8] = iv2[i1 + (i0 << 3)];
    }

    c_Fp[i0] = 0.0;
    for (i1 = 0; i1 < 16; i1++) {
      c_Fp[i0] += b_Fp[i0 + (i1 << 4)] * b_Q[i1];
    }
  }

  for (i0 = 0; i0 < 16; i0++) {
    b_Q[i0] = 0.0;
    for (i1 = 0; i1 < 16; i1++) {
      b_Q[i0] += dv1[i0 + (i1 << 4)] * Q[i1];
    }

    xdot[i0] = c_Fp[i0] + b_Q[i0];
  }

  /*  Q'= F*(Q-U) + R*Q */
}

/* End of code generation (CPGNetWork_hopf_oscillator_with_lateral_impact.c) */
