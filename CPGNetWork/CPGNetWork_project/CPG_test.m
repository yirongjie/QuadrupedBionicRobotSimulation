%% CPG测试
close all;
%姿态参数
acc_roll=0;slope_alpha=0;
%步态参数
T = 0.4;                        %运动周期 m 
v = 1;                          %运动速度  m/s
phi = 1;                        %关节类型,1代表肘式,-1代表膝式
theta0 = pi/6;                  %腿与垂直方向（立足面）夹角，原平衡位置
beta=0.5;                       %负载因子，表示支撑相所占比例
phiRB=0; phiLB=0.5;             %RB LB相位, 与beta一同决定步态
%振荡器
alpha=100;                      %控制振荡器收敛到极限环得到速度
a=50;                           %决定omiga在omiga_sw和omiga_st之间的变化速度
%反馈
k2=2.26;                        %平衡位置改变量/躯体姿态角
k1=0.24;                        %躯体姿态角/坡度角
%初值
tfinal = 0.001;                  % 响应时间域（Time region of response）
osc_x = [0.1; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0];% 振荡器初始值（Initial value）
for i=1:T/tfinal
    [joint_angle, osc_x] = CPGNetWork( acc_roll,slope_alpha, v, T, osc_x, tfinal, phi, theta0, beta, phiRB, phiLB, alpha, a, k1 ,k2);
end
