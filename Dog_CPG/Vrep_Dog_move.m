vrep=remApi('remoteApi'); % using the prototype file (remoteApiProto.m)
vrep.simxFinish(-1); % just in case, close all opened connections
clientID=vrep.simxStart('127.0.0.1',19997,true,true,5000,5);
if (clientID<0)
    disp('Failed connecting to remote API server');    
else
    disp('Succeed connecting to remote API server');
    vrep.simxStartSimulation(clientID,vrep.simx_opmode_oneshot);
    %设置驱动
    [~,MotorDog_LF_hs] = vrep.simxGetObjectHandle(clientID,'Dog_LF_hs_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_LF_h] = vrep.simxGetObjectHandle(clientID,'Dog_LF_h_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_LF_k] = vrep.simxGetObjectHandle(clientID,'Dog_LF_k_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_RF_hs] = vrep.simxGetObjectHandle(clientID,'Dog_RF_hs_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_RF_h] = vrep.simxGetObjectHandle(clientID,'Dog_RF_h_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_RF_k] = vrep.simxGetObjectHandle(clientID,'Dog_RF_k_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_RB_hs] = vrep.simxGetObjectHandle(clientID,'Dog_RB_hs_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_RB_h] = vrep.simxGetObjectHandle(clientID,'Dog_RB_h_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_RB_k] = vrep.simxGetObjectHandle(clientID,'Dog_RB_k_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_LB_hs] = vrep.simxGetObjectHandle(clientID,'Dog_LB_hs_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_LB_h] = vrep.simxGetObjectHandle(clientID,'Dog_LB_h_joint',vrep.simx_opmode_blocking);
    [~,MotorDog_LB_k] = vrep.simxGetObjectHandle(clientID,'Dog_LB_k_joint',vrep.simx_opmode_blocking);
    tic;%保存当前时间
    %初值
    tfinal = 0.05;                  % 响应时间域（Time region of response）
    osc_x = [0; 0; 0.00001; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0; 0];% 振荡器初始值（Initial value）
    while toc<100  %程序执行时间
        [joint_angle, osc_x] = CPGNetWork(osc_x, tfinal);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_LF_hs,0*joint_angle(9),vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_LF_h,joint_angle(1)-0.,vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_LF_k,joint_angle(2),vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_LB_hs,0*joint_angle(15),vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_LB_h,joint_angle(7),vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_LB_k,joint_angle(8)-0.,vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_RF_hs,0*joint_angle(11),vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_RF_h,joint_angle(3)-0.,vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_RF_k,joint_angle(4),vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_RB_hs,0*joint_angle(13),vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_RB_h,-joint_angle(5),vrep.simx_opmode_oneshot);
        vrep.simxSetJointTargetPosition(clientID,MotorDog_RB_k,joint_angle(6)-0.,vrep.simx_opmode_oneshot);
        pause(0.05);
    end
  
end
vrep.simxStopSimulation(clientID,vrep.simx_opmode_oneshot_wait);
vrep.simxFinish(clientID);
vrep.delete(); % call the destructor!