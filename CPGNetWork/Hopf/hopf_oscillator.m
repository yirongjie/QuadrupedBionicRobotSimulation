%% hopf oscillator 
% x' = (miu - x^2 - y^2)*x - omega * y
% y' = (miu - x^2 - y^2)*y + omega * x
function xdot = hopf_oscillator(t, x)
miu = 1;    %Õñµ´Æ÷·ùÖµ A=sqrt(miu) 
omega = 1;  %Õñµ´Æ÷ÆµÂÊ
xdot = [(miu - x(1)^2 - x(2)^2)*x(1) - omega*x(2);
        (miu - x(1)^2 - x(2)^2)*x(2) + omega*x(1)];
end