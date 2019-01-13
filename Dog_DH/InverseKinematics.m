function [ theta1, theta2, theta3 ] = InverseKinematics( oPx, oPy, oPz, a1, a2, a3, leg_dir)

%INPUT:
%oP(x,y,z)以中间系O（髋关节）为参考系 oPx, oPy, oPz为足端在O系下的坐标
%a1, a2, a3为连杆长度（髋，大腿，小腿）
%leg_dir 前腿为0， 后腿为1
%OUTPUT:
%theta1 theta2 theta3 为三个关节角度（侧摆，髋，膝）

theta1 = atan(oPy/oPz);
if leg_dir == 0 % 前腿
    theta3 = acos(( a2^2 + a3^2 - oPx^2 - (sqrt(oPy^2 + oPz^2) - a1^2)^2)/(2 * a2 * a3));
    theta2 = -pi + acos(((oPx^2 + (sqrt(oPy^2 + oPz^2)-a1)) + a2^2 - a3^2)/(2*a2*sqrt(oPx^2 + (sqrt(oPy^2 + oPz^2)-a1)))) - atan(oPx/(sqrt(oPy^2 + oPz^2)-a1));
elseif leg_dir == 1 % 后腿    
    theta3 = -acos(( a2^2 + a3^2 - oPx^2 - (sqrt(oPy^2 + oPz^2) - a1^2)^2)/(2 * a2 * a3));
    theta2 = pi - acos(((oPx^2 + (sqrt(oPy^2 + oPz^2)-a1)) + a2^2 - a3^2)/(2*a2*sqrt(oPx^2 + (sqrt(oPy^2 + oPz^2)-a1)))) + atan(oPx/(sqrt(oPy^2 + oPz^2)-a1));
end % end of if

end % end of function

