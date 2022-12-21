close all
clear
clc

load malt48.mat;

R2D = 180 / pi;

figure(1)
plot (sys_time_s, vms_aux6 * R2D,'DisplayName','roll ang cmd')
hold on 
plot (sys_time_s, vms_aux7 * R2D,'DisplayName','roll ang')
%plot (sys_time_s, vms_mode,'DisplayName','mode')
legend
grid on 
grid minor

figure(2)
plot (sys_time_s, vms_aux8 * R2D,'DisplayName','roll rate cmd')
hold on 
plot (sys_time_s, vms_aux9 * R2D,'DisplayName','roll rate')
%plot (sys_time_s, vms_mode,'DisplayName','mode')
legend
grid on 
grid minor

figure(3)
plot (sys_time_s, vms_aux10 * R2D,'DisplayName','pitch ang cmd')
hold on 
plot (sys_time_s, vms_aux11 * R2D,'DisplayName','pitch ang')
%plot (sys_time_s, vms_mode,'DisplayName','mode')
legend
grid on 
grid minor

figure(4)
plot (sys_time_s, vms_aux12 * R2D,'DisplayName','pitch rate cmd')
hold on 
plot (sys_time_s, vms_aux13 * R2D,'DisplayName','pitch rate')
%plot (sys_time_s, vms_mode,'DisplayName','mode')
legend
grid on 
grid minor

figure(5)
plot (sys_time_s, vms_aux16,'DisplayName','vb x cmd')
hold on 
plot (sys_time_s, vms_aux17,'DisplayName','vb x')
plot (sys_time_s, vms_mode,'DisplayName','mode')
legend
grid on 
grid minor

figure(6)
plot (sys_time_s, vms_aux18,'DisplayName','vb y cmd')
hold on 
plot (sys_time_s, vms_aux19,'DisplayName','vb y')
plot (sys_time_s, vms_mode,'DisplayName','mode')
legend
grid on 
grid minor

figure(7)
subplot(2,1,1)
plot (sys_time_s, vms_aux20, 'DisplayName','x target')
hold on
plot (sys_time_s, aux_ins_ned_pos_north_m,'DisplayName','cur x')
legend
grid on
grid minor
subplot(2,1,2)
plot (sys_time_s, vms_aux21, 'DisplayName','y target')
hold on
plot (sys_time_s, aux_ins_ned_pos_east_m,'DisplayName','cur y')
legend
grid on
grid minor

figure(8)
plot (sys_time_s, vms_aux14 * R2D,'DisplayName','yaw rate cmd')
hold on 
plot (sys_time_s, vms_aux15 * R2D,'DisplayName','yaw rate')
%plot (sys_time_s, vms_mode,'DisplayName','mode')
legend
grid on 
grid minor