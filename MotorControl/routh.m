function [RouthTable,Conclusion] = routh(polequ)
%% 劳斯判据求解系统稳定性函数
% 输入：
% polequ = 特征方程向量;  例如：a3 a2 a1 a0
% 输出：
% RouthTable = 劳斯表
% Conclusion = 系统是否稳定或存在多少个不稳定的根的结论
% 例子:
% [RouthTable,Con] = routh([1 2 3 4 5]);
% RouthTable =
% 1 3 5
% 2 4 0
% 1 5 0
% -6 0 0
% 5 0 0
% Con =
% 所判定系统有 2 个不稳定根!

%% 
n=length(polequ);
polequ=reshape(polequ,1,n);
if mod(n,2)==0
    n1=n/2;
else
    n1=(n+1)/2;
    polequ=[polequ,0];
end
routh=reshape(polequ,2,n1);
RouthTable=zeros(n,n1);
RouthTable(1:2,:)=routh;
i=3;
while 1;
    % =========特殊情况1(第一列为0，其余列不为0)=====================
    if RouthTable(i-1,1)==0 && sum(RouthTable(i-1,2:n1))~=0
        polequ = conv(polequ,[1 3]);
        n=length(polequ);
        if mod(n,2)==0
            n1=n/2;
        else
            n1=(n+1)/2;
            polequ=[polequ,0];
        end
        routh=reshape(polequ,2,n1);
        RouthTable=zeros(n,n1);
        RouthTable(1:2,:)=routh;
        i=3;
    end
    % ==========计算劳斯表===========================================
    ai=RouthTable(i-2,1)/RouthTable(i-1,1);
    for j=1:n1-1
        RouthTable(i,j)=RouthTable(i-2,j+1)-ai*RouthTable(i-1,j+1);
    end
    % ==========特殊情况2(全0行)======================================
    if sum(RouthTable(i,:))==0
        k=0;
        l=1;
        F=zeros(1,n1);
        while n-i-k>=0
            F(l)=n-i+1-k;
            k=k+2;
            l=l+1;
        end
        RouthTable(i,:)=RouthTable(i-1,:).*F(1,:);
    end
    % =========更新==================================================
    i=i+1;
    if i>n
        break;
    end
end
% =============outhput===========
r=find(RouthTable(:,1)<0);
if isempty(r)==1
    Conclusion='所要判定系统稳定!';
else
    n2=length(r);
    m=n2;
    for i=1:n2-1
        if r(i+1)-r(i)==1
            m=m-1;
        end
    end
    str1='所判定系统有 ';
    if r(n2)==n
        str2=num2str(m*2-1);
    else
        str2=num2str(m*2);
    end
    str3=' 个不稳定根!';
    Conclusion = [str1,str2,str3];
end