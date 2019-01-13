%% CPG网络控制器(侧面冲击)
close all;
%% 参数
%体态参数
length = 0.9;                   %体长  m
width = 0.5;                    %体宽  m
l = 0.3;                        %腿节长度  m
phi = 1;                        %关节类型,1代表肘式,-1代表膝式
%运动特征参数
acc_roll=2;                     %横滚角加速度  m/s^2
%步态参数
v = 1;                          %运动速度  m/s
T = 0.4;                        %运动周期  s 
theta0 = pi/6;                  %腿与垂直方向（立足面）夹角，原平衡位置
beta=0.5;                       %负载因子，表示支撑相所占比例
omiga_sw=1/(beta*T);            %摆动相频率
h = acc_roll*sin(atan(width/length))/(2*omiga_sw^2*sqrt(1-acc_roll^2/(4*omiga_sw^4)));                       %摆动腿足端高度  m
phiRB=0; phiLB=0.5;             %RB LB相位, 与beta一同决定步态
Ak = acos((l*cos(theta0)-h)/l)-theta0;       %髋关节幅值
Ah = asin((beta*v*T)/(4*l/cos(theta0)));     %膝关节幅值
%振荡器参数
alpha=100;                      %控制振荡器收敛到极限环得到速度
miu=Ah^2;                       %振荡器幅值 A=sqrt(miu)
a=50;                           %决定omiga在omiga_sw和omiga_st之间的变化速度
%反馈项参数
%前庭反射
slope_alpha = 0;                %坡度角
k2=2.26;                        %平衡位置改变量/躯体姿态角
k1=0.24;                        %躯体姿态角/坡度角
delte_theta=phi*k2*k1*slope_alpha;  %原平衡位置改变量
U = [-(delte_theta/2-k1*slope_alpha); delte_theta;     %外部反馈项(feed) 对应x1 y1 x2 y2 x3 y3 x4 y4
     -(delte_theta/2-k1*slope_alpha); delte_theta; 
     -(delte_theta/2-k1*slope_alpha); delte_theta; 
     -(delte_theta/2-k1*slope_alpha); delte_theta;
     0; 0; 0; 0; 0; 0; 0; 0];   
%% 初值
t0 = 0; tfinal = 5;             % 响应时间域（Time region of response）
x0 = [0.1; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0];% 振荡器初始值（Initial value）
%% 求解
% 求解Hopf振荡器微分方程的数值解（Numerical solution of differential equation）
[t, x] = ode45(@(t,x)CPGNetWork_hopf_oscillator_with_lateral_impact(t, x, alpha, beta, miu, omiga_sw, a, phiRB, phiLB, U), [t0, tfinal], x0);
%修改振荡器输出y为膝关节，振荡器输出x为髋关节
for i=2:2:9
    for j=1:size(x,1)
        if x(j,i)<=U(i)
            x(j,i)=-phi*(Ak/Ah)*(x(j,i)-U(i))+U(i);
        else
            x(j,i)=U(i);
        end
    end
end
%% 绘制振荡器输出图
subplot(4,1,1);
plot(t,x(:, 1));
xlabel('t/s'); ylabel('LF');
hold on;
plot(t,x(:, 9));
hold on;
plot(t,x(:, 2));

subplot(4,1,2);
plot(t,x(:, 3));
xlabel('t/s'); ylabel('RF');
hold on;
plot(t,x(:, 11));
hold on;
plot(t,x(:, 4));

subplot(4,1,3);
plot(t,x(:, 5));
xlabel('t/s'); ylabel('RB');
hold on;
plot(t,x(:, 13));
hold on;
plot(t,x(:, 6));

subplot(4,1,4);
plot(t,x(:, 7));
xlabel('t/s'); ylabel('LB');
hold on;
plot(t,x(:, 15));
hold on;
plot(t,x(:, 8));
legend('hip-pitch','hip-roll','knee');
