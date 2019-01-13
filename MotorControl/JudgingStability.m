close all;
clear;
%% PARAM
%电机参数 DC Maxon
L = 0.5730;
R = 0.9780;
J = 1.35e-5;
B = 2.7e-5;
ka = 5;
kb = 0.0021;
% PID
Kp = 0.0002;
Ki = 0.030;
Kd = 0.000049;
% tf
P = L*J/ka;
Q = (R*J + L* B)/ka;
M = (R*B +ka*kb)/ka;
Qx = Q + Kd;
Mx = M + Kp;

syms s Ps;
syms P1s P2s P3s P4s;
syms PHI1p PHI2p PHI3p PHI4p;
syms PHI1b PHI2b PHI3b PHI4b PHI5b PHI6b PHI7b PHI8b;
%% 原系统
Ps = Ki + Mx*s + Qx*s^2 + P*s^3;
% 利用劳斯判据判断Ps系统是否稳定
[~,Con_Customary] = routh([P Qx Mx Ki]);
Con_Customary
%% Kharitonov's theorem 
% 摄动范围
Pm = P*1.2; Pn = P*0.8;
Qm = Qx*1.15; Qn = Qx*0.85;
Mm = Mx*1.05; Mn = Mx*0.95;
P1s = Ki + Mn*s + Qm*s^2 + Pm*s^3;
P2s = Ki + Mm*s + Qm*s^2 + Pn*s^3;
P3s = Ki + Mm*s + Qn*s^2 + Pn*s^3;
P4s = Ki + Mn*s + Qn*s^2 + Pm*s^3;
[~,Con_Kharitonov1] = routh([Pm Qm Mn Ki]);
[~,Con_Kharitonov2] = routh([Pn Qm Mm Ki]);
[~,Con_Kharitonov3] = routh([Pn Qn Mm Ki]);
[~,Con_Kharitonov4] = routh([Pm Qn Mn Ki]);
Con_Kharitonov1
Con_Kharitonov2
Con_Kharitonov3
Con_Kharitonov4
%% Generalized Kharitonov's theorem 
% 必要条件
PHI1p = Ki + (Mn + Kp)*s + (Qn + Kd)*s^2 + Pm*s^3;
PHI2p = Ki + (Mn + Kp)*s + (Qm + Kd)*s^2 + Pm*s^3;
PHI3p = Ki + (Mm + Kp)*s + (Qm + Kd)*s^2 + Pn*s^3;
PHI4p = Ki + (Mm + Kp)*s + (Qn + Kd)*s^2 + Pn*s^3;
[~,Con_Kharitonov1p] = routh([Pm (Qn + Kd) (Mn + Kp) Ki]);
[~,Con_Kharitonov2p] = routh([Pm (Qm + Kd) (Mn + Kp) Ki]);
[~,Con_Kharitonov3p] = routh([Pn (Qm + Kd) (Mm + Kp) Ki]);
[~,Con_Kharitonov4p] = routh([Pn (Qn + Kd) (Mm + Kp) Ki]);
Con_Kharitonov1p
Con_Kharitonov2p
Con_Kharitonov3p
Con_Kharitonov4p
% 充要条件
lambda = 0.5;
PHI1b = Ki + (Mn + Kp)*s + (Qn + Kd)*s^2 + Pm*s^3;
PHI2b = Ki + (Mn + Kp)*s + (Qm + Kd)*s^2 + Pm*s^3;
PHI3b = Ki + (Mm + Kp)*s + (Qm + Kd)*s^2 + Pn*s^3;
PHI4b = Ki + (Mm + Kp)*s + (Qn + Kd)*s^2 + Pn*s^3;
PHI5b = Ki + (Mn + Kp)*s + ((1-lambda)*Qn + lambda*Qm + Kd)*s^2 + Pm*s^3;
PHI6b = Ki + (Mn + Kp)*s + (Qm + Kd)*s^2 + ((1-lambda)*Pm + lambda*Pn)*s^3;
PHI7b = Ki + (Mm + Kp)*s + ((1-lambda)*Qm + lambda*Qn + Kd)*s^2 + Pn*s^3;
PHI8b = Ki + (Mm + Kp)*s + (Qn + Kd)*s^2 + ((1-lambda)*Pn + lambda*Pm)*s^3;
[~,Con_Kharitonov1b] = routh([Pm (Qn + Kd) (Mn + Kp) Ki]);
[~,Con_Kharitonov2b] = routh([Pm (Qm + Kd) (Mn + Kp) Ki]);
[~,Con_Kharitonov3b] = routh([Pn (Qm + Kd) (Mm + Kp) Ki]);
[~,Con_Kharitonov4b] = routh([Pn (Qn + Kd) (Mm + Kp) Ki]);
[~,Con_Kharitonov5b] = routh([Pm ((1-lambda)*Qn + lambda*Qm + Kd) (Mn + Kp) Ki]);
[~,Con_Kharitonov6b] = routh([((1-lambda)*Pm + lambda*Pn) (Qm + Kd) (Mn + Kp) Ki]);
[~,Con_Kharitonov7b] = routh([Pn ((1-lambda)*Qm + lambda*Qn + Kd) (Mm + Kp) Ki]);
[~,Con_Kharitonov8b] = routh([((1-lambda)*Pn + lambda*Pm) (Qn + Kd) (Mm + Kp) Ki]);
Con_Kharitonov1b
Con_Kharitonov2b
Con_Kharitonov3b
Con_Kharitonov4b
Con_Kharitonov5b
Con_Kharitonov6b
Con_Kharitonov7b
Con_Kharitonov8b