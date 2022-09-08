xout=out.simout;
yout=out.simout1;
zout=out.simout2;
xin=out.simout3;
yin= out.simout4;
zin=out.simout5;

figure(1)
subplot(2,1,1)
plot3(xout,yout,zout)
xlabel('X')
ylabel('Y')
zlabel('Z')
title('Output')
grid on

subplot(2,1,2)
plot3(xin,yin,zin)
xlabel('X')
ylabel('Y')
zlabel('Z')
title('Input')
grid on
%% from fucking workspace
qd1 = out.simout6;
qd2 = out.simout7;
qd3 = out.simout8;
