function [ xCoM, yCoM  ] = CenterOfMassTrack( t, Vx0, Vy0, FSF, IF, CF, CH)
% global RF; global LF; global RH; global LH; 
global x; global y; 
global Point; % 足端坐标
global KM; %各足运动学裕度
global Smin; % 最小稳定裕度
global T_BSP; global t_sw; 
% FSF(Following Swing Foot)：迈步顺序决定的下一摆动相足
% IF(Ipsilateral Foot)：与FSF位于身体同侧的足
% CF(Contralateral Front)：与FSF位于身体不同侧的前足
% CH(Contralateral Hind)：与FSF位于身体不同侧的后足
% 各足末端坐标
xFSF = Point(FSF,x);yFSF = Point(FSF,y);
xIF = Point(IF,x);yIF = Point(IF,y);
xCF = Point(CF,x);yCF = Point(CF,y);
xCH = Point(CH,x);yCH = Point(CH,y);
% KM_FSF,KM_IF,KM_CF,KM_CH：各足运动学裕度
KM_FSF = KM(FSF);
KM_IF = KM(IF); 
% FSP(Foot Swing Phase)：足摆动阶段        BSP(Body Sway Phase)：重心调整阶段
% FFSP(Following FSP)                     FBSP(Following BSP)
% xM_FBSP：FBSP阶段重心沿Px方向的移动量     yM_FBSP：FBSP阶段重心沿Py方向的移动量
xM_FBSP = KM_FSF;
yFBSP = (xM_FBSP - Smin)*(yIF - yCH)/(xIF - xCH) + yIF -(yIF - yCH)*xIF/(xIF - xCH);% L_IF_CH
yM_FBSP = yFBSP;
% Vx0：躯干初始x方向速度                   Vy0：躯干初始y方向速度              【Vx0, Vy0个人认为是上一个tP周期结束时（tFFSP）的速度】
% Vx：FBSP终止位置和FFSP阶段在Px方向的速度  Vy：FBSP终止位置和FFSP阶段在Py方向的速度
Vx = (KM_IF - xM_FBSP)/t_sw;
xM_FFSP = 2*(KM_IF - xM_FBSP);
xFFSP = xM_FBSP + xM_FFSP;
yFFSP = (xFFSP - Smin)*(yIF - yCH)/(xIF - xCH) + yIF -(yIF - yCH)*xIF/(xIF - xCH);% L_IF_CH
Vy = (yFFSP - yFBSP)/(2*t_sw);
xFBSP_t = ((6*xM_FBSP - 3*Vx*T_BSP - 3*Vx0*T_BSP)/(T_BSP^5)) * t^5 + ((-15*xM_FBSP + 7*Vx*T_BSP + 8*Vx0*T_BSP)/(T_BSP^4)) * t^4 + ((10*xM_FBSP - 4*Vx*T_BSP - 6*Vx0*T_BSP)/(T_BSP^3)) * t^3 + Vx0*t;
yFBSP_t = ((6*yM_FBSP - 3*Vy*T_BSP - 3*Vy0*T_BSP)/(T_BSP^5)) * t^5 + ((-15*yM_FBSP + 7*Vy*T_BSP + 8*Vy0*T_BSP)/(T_BSP^4)) * t^4 + ((10*yM_FBSP - 4*Vy*T_BSP - 6*Vy0*T_BSP)/(T_BSP^3)) * t^3 + Vy0*t;
xFFSP_t = Vx0*(t - T_BSP) + xM_FBSP;
yFFSP_t = Vy0*(t - T_BSP) + yM_FBSP;    
if t<=T_BSP  % 0<t<T_BSP
    xCoM = xFBSP_t;
    yCoM = yFBSP_t;
elseif  t<=(T_BSP + t_sw)      % T_BSP<t<T_BSP + t_sw
    xCoM = xFFSP_t;
    yCoM = yFFSP_t;
else   % T_BSP + t_sw<t<T_P
    xCoM = xFFSP_t;
    yCoM = yFFSP_t;
end % end of if
end % end of function

