/*
 * File: CPGNetWork.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 10-Dec-2018 17:27:26
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "CPGNetWork.h"
#include "CPGNetWork_emxutil.h"
#include "fprintf.h"
#include "ode45.h"
#include "CPGNetWork_rtwutil.h"
#include <stdio.h>

/* Function Definitions */

/*
 * % 参数
 * 体态参数
 * Arguments    : double acc_roll
 *                double slope_alpha
 *                double v
 *                double T
 *                double osc_x[16]
 *                double tfinal
 *                double phi
 *                double theta0
 *                double beta
 *                double phiRB
 *                double phiLB
 *                double alpha
 *                double a
 *                double k1
 *                double k2
 *                double joint_angle[16]
 * Return Type  : void
 */
void CPGNetWork(double acc_roll, double slope_alpha, double v, double T, double
                osc_x[16], double tfinal, double phi, double theta0, double beta,
                double phiRB, double phiLB, double alpha, double a, double k1,
                double k2, double joint_angle[16])
{
  double omiga_sw;
  double h;
  emxArray_real_T *x;
  emxArray_real_T *t;
  double Ak;
  double Ah;
  double delte_theta;
  double U[16];
  double dv1[2];
  int i;
  int b_i;
  int i2;
  int j;

  /* 体长  m */
  /* 体宽  m */
  /* 腿节长度  m */
  /* 步态参数 */
  omiga_sw = 1.0 / (beta * T);

  /* 摆动相频率 */
  if (acc_roll > 0.959595959) {
    h = acc_roll * 0.48564293117863211 / (2.0 * (omiga_sw * omiga_sw) * sqrt(1.0
      - acc_roll * acc_roll / (4.0 * rt_powd_snf(omiga_sw, 4.0))));

    /* 摆动腿足端高度  m */
  } else {
    h = 0.02;
  }

  emxInit_real_T(&x, 2);
  emxInit_real_T1(&t, 1);
  Ak = acos((0.3 * cos(theta0) - h) / 0.3) - theta0;

  /* 髋关节幅值 */
  Ah = asin(beta * v * T / (1.2 / cos(theta0)));

  /* 膝关节幅值 */
  /* 振荡器参数 */
  /* 振荡器幅值 A=sqrt(miu) */
  /* 反馈项参数 */
  /* 前庭反射 */
  delte_theta = phi * k2 * k1 * slope_alpha;

  /* 原平衡位置改变量 */
  /* 外部反馈项(feed) 对应x1 y1 x2 y2 x3 y3 x4 y4 */
  U[0] = -(delte_theta / 2.0 - k1 * slope_alpha);
  U[1] = delte_theta;
  U[2] = -(delte_theta / 2.0 - k1 * slope_alpha);
  U[3] = delte_theta;
  U[4] = -(delte_theta / 2.0 - k1 * slope_alpha);
  U[5] = delte_theta;
  U[6] = -(delte_theta / 2.0 - k1 * slope_alpha);
  U[7] = delte_theta;
  memset(&U[8], 0, sizeof(double) << 3);

  /* % 初值 */
  /*  响应时间域（Time region of response） */
  /* % 求解 */
  /*  求解Hopf振荡器微分方程的数值解（Numerical solution of differential equation） */
  dv1[0] = 0.0;
  dv1[1] = tfinal;
  ode45(dv1, osc_x, alpha, beta, Ah * Ah, omiga_sw, a, phiRB, phiLB, U, t, x);

  /* 振荡器输出 */
  emxFree_real_T(&t);
  for (i = 0; i < 16; i++) {
    osc_x[i] = x->data[(x->size[0] + x->size[0] * i) - 1];
  }

  /* 修改振荡器输出y为膝关节，振荡器输出x为髋关节 */
  for (i = 0; i < 4; i++) {
    b_i = 1 + (i << 1);
    i2 = x->size[0];
    for (j = 0; j < i2; j++) {
      if (x->data[j + x->size[0] * b_i] <= U[b_i]) {
        x->data[j + x->size[0] * b_i] = -phi * (Ak / Ah) * (x->data[j + x->size
          [0] * b_i] - U[b_i]) + U[b_i];
      } else {
        x->data[j + x->size[0] * b_i] = U[b_i];
      }
    }
  }

  /*  振荡器关节输出 */
  joint_angle[0] = x->data[x->size[0] - 1];
  joint_angle[1] = x->data[(x->size[0] + x->size[0]) - 1];
  joint_angle[2] = x->data[(x->size[0] + (x->size[0] << 1)) - 1];
  joint_angle[3] = x->data[(x->size[0] + x->size[0] * 3) - 1];
  joint_angle[4] = x->data[(x->size[0] + (x->size[0] << 2)) - 1];
  joint_angle[5] = x->data[(x->size[0] + x->size[0] * 5) - 1];
  joint_angle[6] = x->data[(x->size[0] + x->size[0] * 6) - 1];
  joint_angle[7] = x->data[(x->size[0] + x->size[0] * 7) - 1];
  joint_angle[8] = x->data[(x->size[0] + (x->size[0] << 3)) - 1];
  joint_angle[9] = x->data[(x->size[0] + x->size[0] * 9) - 1];
  joint_angle[10] = x->data[(x->size[0] + x->size[0] * 10) - 1];
  joint_angle[11] = x->data[(x->size[0] + x->size[0] * 11) - 1];
  joint_angle[12] = x->data[(x->size[0] + x->size[0] * 12) - 1];
  joint_angle[13] = x->data[(x->size[0] + x->size[0] * 13) - 1];
  joint_angle[14] = x->data[(x->size[0] + x->size[0] * 14) - 1];
  joint_angle[15] = x->data[(x->size[0] + x->size[0] * 15) - 1];
  cfprintf(joint_angle[0], joint_angle[1], joint_angle[8]);
  b_cfprintf(joint_angle[2], joint_angle[3], joint_angle[10]);
  c_cfprintf(joint_angle[4], joint_angle[5], joint_angle[12]);
  d_cfprintf(joint_angle[6], joint_angle[7], joint_angle[14]);
  emxFree_real_T(&x);
}

/*
 * File trailer for CPGNetWork.c
 *
 * [EOF]
 */
