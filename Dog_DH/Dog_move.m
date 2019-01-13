close all;
clear;

global Dog_W_half; Dog_W_half = 0.3;
global Dog_L_half; Dog_L_half = 0.4;
global Dog_a1; Dog_a1 = 0.1;
global Dog_a2; Dog_a2 = 0.2;
global Dog_a3; Dog_a3 = 0.2;

global RF; RF=1;
global LF; LF=2;
global RH; RH=3;
global LH; LH=4;

global x; x =1;
global y; y =2;
global z; z =3;

global Point; Point =[Dog_L_half, -Dog_W_half,-(0.866*(Dog_a2 + Dog_a3) + Dog_a1);
                      Dog_L_half, Dog_W_half,-(0.866*(Dog_a2 + Dog_a3) + Dog_a1);
                      -Dog_L_half, -Dog_W_half,-(0.866*(Dog_a2 + Dog_a3) + Dog_a1);
                      -Dog_L_half, Dog_W_half,-(0.866*(Dog_a2 + Dog_a3) + Dog_a1);]; % 足端坐标
global KM; KM =[0.1, 0.1, 0.1, 0.1]; %各足运动学裕度

global Smin; Smin = 0.11; % 最小稳定裕度

% 时间
global T_BSP; T_BSP = 1;
global T_FSP; T_FSP = 2;
global T_P; T_P = T_BSP + T_FSP;
global t_sw; t_sw = T_FSP/2;

xCoM = zeros(1, (T_P)*200);
yCoM = zeros(1, (T_P)*200);
Vx0 = 0.1; Vy0 = 0;
% 1  _____=
% 2  __=___
% 3  ____=_
% 4  _=____
for t = 1:1:(T_P)*100  % 4 2 
   [ xCoM(t), yCoM(t) ] = CenterOfMassTrack( 0.01*t, Vx0, Vy0, LH, LF, RF, RH);
end 
XNow = xCoM((T_P)*100); YNow = yCoM((T_P)*100); 
for t = 1:1:(T_P)*100  % 3 1
   [ xt, yt ] = CenterOfMassTrack( 0.01*t, Vx0, Vy0, RH, RF, LF, LH);
    xCoM(t + (T_P)*100) = xt + XNow; yCoM(t + (T_P)*100) =yt + YNow;
end 


figure(1);
plot(xCoM);
figure(2);
plot(yCoM);
figure(3);
plot(xCoM, yCoM);