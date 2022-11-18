close all
clear
clc

load malt88.mat;

% ind = 1:size(sys_time_s);
% figure(1)
% plot (sys_time_s, rad2deg(vms_aux10), 'DisplayName','cmd')
% hold on 
% plot (sys_time_s, rad2deg(bfs_ins_gyro_x_radps), 'DisplayName','actual')
% yyaxis right
% plot (sys_time_s, vms_aux7)
% grid on
% grid minor
% legend

figure(2)
plot (sys_time_s, rad2deg(vms_aux12), 'DisplayName','cmd')
hold on 
plot (sys_time_s, rad2deg(bfs_ins_gyro_y_radps), 'DisplayName','actual')
%yyaxis right
%plot (sys_time_s, vms_aux11)
grid on
grid minor
legend

% figure(3)
% plot (sys_time_s, rad2deg(vms_aux16), 'DisplayName','cmd')
% hold on 
% plot (sys_time_s, rad2deg(bfs_ins_gyro_z_radps), 'DisplayName','actual')
% grid on
% grid minor
% legend
% 
% figure(4)
% plot (sys_time_s, rad2deg(vms_aux8), 'DisplayName','cmd')
% hold on 
% plot (sys_time_s, rad2deg(bfs_ins_roll_rad), 'DisplayName','actual')
% grid on
% grid minor
% legend
% 
% figure(5)
% plot (sys_time_s, rad2deg(vms_aux12), 'DisplayName','cmd')
% hold on 
% plot (sys_time_s, rad2deg(bfs_ins_pitch_rad), 'DisplayName','actual')
% grid on
% grid minor
% legend
