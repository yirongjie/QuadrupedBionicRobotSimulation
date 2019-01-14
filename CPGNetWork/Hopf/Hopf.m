%% PARAM: 
%      omiga:振荡器频率       omiga_sw:摆动相频率         omiga_st:支撑相频率      a:决定omiga在omiga_sw和omiga_st之间的变化速度
%      beta:负载因子          miu:振荡器幅值 A=sqrt(miu)  u1\u2:外部反馈项         alpha:控制振荡器收敛到极限环得到速度
%      x\y:状态变量           r:极限圆半径
%% 极限环相图
clear;
alpha=100;                      %控制振荡器收敛到极限环得到速度
u1=0;u2=0;                      %外部反馈项
beta=0.5;                       %负载因子
miu=1;                          %振荡器幅值 A=sqrt(miu)
omiga_sw=2*pi;                  %摆动相频率
a=50;                           %决定omiga在omiga_sw和omiga_st之间的变化速度
%绘制极限环相图
figure(1)
[x,y]=meshgrid(linspace(-1.5,1.5));
h=streamslice(x,y,alpha.*(1-(x-u1).^2-(y-u2).^2).*(x-u1)-((1-beta).*omiga_sw./(beta.*(1+exp(-a.*y)))+omiga_sw./(1+exp(a.*y))).*(y-u2),alpha.*(1-(x-u1).^2-(y-u2).^2).*(y-u2)+((1-beta).*omiga_sw./(beta.*(1+exp(-a.*y)))+omiga_sw./(1+exp(a.*y))).*(x-u1));
set(h,'Color','k');
xlabel('x'); ylabel('y');
title('Hopf极限环相图');
axis([-1.5 1.5 -1.5 1.5]);
%% 极限环测试
clear
% 响应时间域（Time region of response）
t0 = 0; tfinal = 10;
% 振荡器初始值（Initial value）
x0 = [0.1; 0.2];
% 求解微分方程的数值解（Numerical solution of differential equation）
[t, x] = ode45('hopf_oscillator_for_fourlegged_robots', [t0, tfinal], x0);
% 绘制极限环图（Phase diagram）
figure(2);
plot(x(:, 1), x(:, 2));
xlabel('x'); ylabel('y');
title('Hopf极限环');
grid on;
%绘制振荡器输出图
figure(3);
plot(t,x(:, 1));
xlabel('t/s'); ylabel('Output x y');
title('Hopf振荡器输出');
hold on;
plot(t,x(:, 2));
legend('x','y');