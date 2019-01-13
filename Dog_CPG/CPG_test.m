%% CPG测试
close all;
%初值
tfinal = 0.001;                  % 响应时间域（Time region of response）
osc_x = [0.1; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0];% 振荡器初始值（Initial value）
for i=1:100000
    [joint_angle, osc_x] = CPGNetWork(osc_x, tfinal);
end
