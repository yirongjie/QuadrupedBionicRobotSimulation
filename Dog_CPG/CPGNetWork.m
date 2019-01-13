function [joint_angle, osc_x] = CPGNetWork( osc_x, tfinal)
%% 参数
%姿态参数
acc_roll=0;slope_alpha=0;
%步态参数
T = 0.4;                        %运动周期 m 
v = 1;                          %运动速度  m/s
phi = 1;                        %关节类型,1代表肘式,-1代表膝式
theta0 = pi/6;                  %腿与垂直方向（立足面）夹角，原平衡位置
beta=0.5;                       %负载因子，表示支撑相所占比例
phiRB=0.; phiLB=0.5;             %RB LB相位, 与beta一同决定步态
%振荡器
alpha=100;                      %控制振荡器收敛到极限环得到速度
a=50;                           %决定omiga在omiga_sw和omiga_st之间的变化速度
%反馈
k2=2.26;                        %平衡位置改变量/躯体姿态角
k1=0.24;                        %躯体姿态角/坡度角
%体态参数
length = 0.9;                   %体长  m
width = 0.5;                    %体宽  m
l = 0.3;                        %腿节长度  m
%步态参数
omiga_sw=1/(beta*T);            %摆动相频率
if(acc_roll>0.959595959)
    h = acc_roll*sin(atan(width/length))/(2*omiga_sw^2*sqrt(1-acc_roll^2/(4*omiga_sw^4)));                       %摆动腿足端高度  m
else
    h=0.02;
end
Ak = acos((l*cos(theta0)-h)/l)-theta0;       %髋关节幅值
Ah = asin((beta*v*T)/(4*l/cos(theta0)));     %膝关节幅值
%振荡器参数
miu=Ah^2;                       %振荡器幅值 A=sqrt(miu)
%反馈项参数
%前庭反射
delte_theta=phi*k2*k1*slope_alpha;  %原平衡位置改变量
U = [-(delte_theta/2-k1*slope_alpha); delte_theta;     %外部反馈项(feed) 对应x1 y1 x2 y2 x3 y3 x4 y4
     -(delte_theta/2-k1*slope_alpha); delte_theta; 
     -(delte_theta/2-k1*slope_alpha); delte_theta; 
     -(delte_theta/2-k1*slope_alpha); delte_theta;
     0;0;0;0;0;0;0;0];
%% 初值
t0 = 0;              % 响应时间域（Time region of response）
%% 求解
% 求解Hopf振荡器微分方程的数值解（Numerical solution of differential equation）
[t, x] = ode45('CPGNetWork_hopf_oscillator_with_lateral_impact', [t0, tfinal], osc_x,[],alpha, beta, miu, omiga_sw, a, phiRB, phiLB, U);
%振荡器输出
for i = 1:16
    osc_x(i)=x(size(x,1), i);
end
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
x_out=x;
% 振荡器关节输出
joint_angle=0.5*[x_out(size(x_out,1), 1),x_out(size(x_out,1), 2),x_out(size(x_out,1), 3),x_out(size(x_out,1), 4),x_out(size(x_out,1), 5),x_out(size(x_out,1), 6),x_out(size(x_out,1), 7),x_out(size(x_out,1), 8),x_out(size(x_out,1), 9),x_out(size(x_out,1), 10),x_out(size(x_out,1), 11),x_out(size(x_out,1), 12),x_out(size(x_out,1), 13),x_out(size(x_out,1), 14),x_out(size(x_out,1), 15),x_out(size(x_out,1), 16)];
if(acc_roll<0.959595959)
    joint_angle(9)=0;
    joint_angle(11)=0;
    joint_angle(13)=0;
    joint_angle(15)=0;
fprintf('LF  hip-pitch:%f  knee:%f  hip-roll:%f  ', joint_angle(1),joint_angle(2),joint_angle(9));
fprintf('RF  hip-pitch:%f  knee:%f  hip-roll:%f  ', joint_angle(3),joint_angle(4),joint_angle(11));
fprintf('RB  hip-pitch:%f  knee:%f  hip-roll:%f  ', joint_angle(5),joint_angle(6),joint_angle(13));
fprintf('LB  hip-pitch:%f  knee:%f  hip-roll:%f\n', joint_angle(7),joint_angle(8),joint_angle(15));
end

