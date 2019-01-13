%% CPG network base on hopf oscillator
% Q'= F(Q-U) + RQ
function xdot = CPGNetWork_hopf_oscillator( t, x,flag, alpha, beta, miu, omiga_sw, a, phi3, phi4, U)
%计算 LF RF RB LB
phi1=0;
if phi4 ~= 0
    phi2=beta-phi3;phi4=beta;
else
    phi2=phi3;phi4=phi1;
end    
%各角相位差
theta11=2*pi*(phi1-phi1); theta12=2*pi*(phi1-phi2); theta13=2*pi*(phi1-phi3); theta14=2*pi*(phi1-phi4);     
theta21=2*pi*(phi2-phi1); theta22=2*pi*(phi2-phi2); theta23=2*pi*(phi2-phi3); theta24=2*pi*(phi2-phi4);
theta31=2*pi*(phi3-phi1); theta32=2*pi*(phi3-phi2); theta33=2*pi*(phi3-phi3); theta34=2*pi*(phi3-phi4);
theta41=2*pi*(phi4-phi1); theta42=2*pi*(phi4-phi2); theta43=2*pi*(phi4-phi3); theta44=2*pi*(phi4-phi4);
Q = [x(1); x(2); x(3); x(4); x(5); x(6); x(7); x(8)];   %状态变量 x1, y1(LF)   x2, y2(RF)    x3, y3(RB)    x4, y4(LB)
%系数矩阵
F = [alpha*(miu-(x(1)-U(1))^2-(x(2)-U(2))^2), -((1-beta)*omiga_sw/(beta*(1+exp(-a*(x(2)-U(2)))))+omiga_sw/(1+exp(a*(x(2)-U(2))))), 0, 0, 0, 0, 0, 0;  
     (1-beta)*omiga_sw/(beta*(1+exp(-a*(x(2)-U(2)))))+omiga_sw/(1+exp(a*(x(2)-U(2)))), alpha*(miu-(x(1)-U(1))^2-(x(2)-U(2))^2),    0, 0, 0, 0, 0, 0;
     0, 0, alpha*(miu-(x(3)-U(3))^2-(x(4)-U(4))^2), -((1-beta)*omiga_sw/(beta*(1+exp(-a*(x(4)-U(4)))))+omiga_sw/(1+exp(a*(x(4)-U(4))))), 0, 0, 0, 0;
     0, 0, (1-beta)*omiga_sw/(beta*(1+exp(-a*(x(4)-U(4)))))+omiga_sw/(1+exp(a*(x(4)-U(4)))), alpha*(miu-(x(3)-U(3))^2-(x(4)-U(4))^2),    0, 0, 0, 0;
     0, 0, 0, 0, alpha*(miu-(x(5)-U(5))^2-(x(6)-U(6))^2), -((1-beta)*omiga_sw/(beta*(1+exp(-a*(x(6)-U(6)))))+omiga_sw/(1+exp(a*(x(6)-U(6))))), 0, 0;
     0, 0, 0, 0, (1-beta)*omiga_sw/(beta*(1+exp(-a*(x(6)-U(6)))))+omiga_sw/(1+exp(a*(x(6)-U(6)))), alpha*(miu-(x(5)-U(5))^2-(x(6)-U(6))^2),    0, 0;
     0, 0, 0, 0, 0, 0, alpha*(miu-(x(7)-U(7))^2-(x(8)-U(8))^2), -((1-beta)*omiga_sw/(beta*(1+exp(-a*(x(8)-U(8)))))+omiga_sw/(1+exp(a*(x(8)-U(8)))));
     0, 0, 0, 0, 0, 0, (1-beta)*omiga_sw/(beta*(1+exp(-a*(x(8)-U(8)))))+omiga_sw/(1+exp(a*(x(8)-U(8)))), alpha*(miu-(x(7)-U(7))^2-(x(8)-U(8))^2)   ];
%旋转矩阵
R = [cos(theta11), -sin(theta11),  cos(theta21), -sin(theta21),  cos(theta31), -sin(theta31),  cos(theta41), -sin(theta41);
     sin(theta11),  cos(theta11),  sin(theta21),  cos(theta21),  sin(theta31),  cos(theta31),  sin(theta41),  cos(theta41);
     cos(theta12), -sin(theta12),  cos(theta22), -sin(theta22),  cos(theta32), -sin(theta32),  cos(theta42), -sin(theta42);
     sin(theta12),  cos(theta12),  sin(theta22),  cos(theta22),  sin(theta32),  cos(theta32),  sin(theta42),  cos(theta42);
     cos(theta13), -sin(theta13),  cos(theta23), -sin(theta23),  cos(theta33), -sin(theta33),  cos(theta43), -sin(theta43);
     sin(theta13),  cos(theta13),  sin(theta23),  cos(theta23),  sin(theta33),  cos(theta33),  sin(theta43),  cos(theta43);
     cos(theta14), -sin(theta14),  cos(theta24), -sin(theta24),  cos(theta34), -sin(theta34),  cos(theta44), -sin(theta44);
     sin(theta14),  cos(theta14),  sin(theta24),  cos(theta24),  sin(theta34),  cos(theta34),  sin(theta44),  cos(theta44)]; 
xdot=F*(Q-U)+R*Q;   % Q'= F*(Q-U) + R*Q