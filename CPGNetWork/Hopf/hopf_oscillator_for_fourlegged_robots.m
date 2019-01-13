%% hopf oscillator for four-legged robots
% x'=alpha*(miu-(x-u1)^2-(y-u2)^2)*(x-u1)-((1-beta)*omiga_sw/(beta*(1+exp(-a*y)))+omiga_sw/(1+exp(a*y)))*(y-u2);
% y'=alpha*(miu-(x-u1)^2-(y-u2)^2)*(y-u2)+((1-beta)*omiga_sw/(beta*(1+exp(-a*y)))+omiga_sw/(1+exp(a*y)))*(x-u1);
function xdot = hopf_oscillator_for_fourlegged_robots( t, x)
alpha=100;                      %控制振荡器收敛到极限环得到速度
u1=0;u2=0;                      %外部反馈项
beta=0.5;                       %负载因子
miu=1;                          %振荡器幅值 A=sqrt(miu)
omiga_sw=2*pi;                  %摆动相频率
a=50;                           %决定omiga在omiga_sw和omiga_st之间的变化速度
xdot = [ alpha*(miu-(x(1)-u1)^2-(x(2)-u2)^2)*(x(1)-u1)-((1-beta)*omiga_sw/(beta*(1+exp(-a*x(2))))+omiga_sw/(1+exp(a*x(2))))*(x(2)-u2);
         alpha*(miu-(x(1)-u1)^2-(x(2)-u2)^2)*(x(2)-u2)+((1-beta)*omiga_sw/(beta*(1+exp(-a*x(2))))+omiga_sw/(1+exp(a.*x(2))))*(x(1)-u1)];
end