close all
clear
clc

load malt39.mat;

filtered_vbx = vms_aux7;

vbx_iir = IIR;
vbx_iir = vbx_iir.init_filter(200,1,0);

filtered_vbx(1) = 0;
for i = 2:size(vms_aux7,1)
    vbx_iir = vbx_iir.apply_filter(vms_aux10(i));
    filtered_vbx(i) = vbx_iir.output;
end

figure(1)
plot(sys_time_s, vms_aux6,'DisplayName','vb x cmd')
hold on
plot (sys_time_s,vms_aux7,'DisplayName','vb x')
grid on
grid minor
legend

figure(2)
plot (sys_time_s,vms_aux9,'DisplayName','vb y')
hold on
plot(sys_time_s, vms_aux8,'DisplayName','vb y cmd')
grid on
grid minor
legend

figure(3)
plot(sys_time_s, rad2deg(vms_aux10),'DisplayName','pitch_cmd')
hold on
plot (sys_time_s,rad2deg(bfs_ins_pitch_rad),'DisplayName','pitch')
grid on
grid minor
legend

figure(4)
plot (sys_time_s, filtered_vbx, sys_time_s, vms_aux10);
grid on
grid minor

figure(5)
plot (sys_time_s, fmu_imu_gyro_x_radps,'DisplayName','raw')
hold on
plot (sys_time_s, bfs_ins_gyro_x_radps,'DisplayName','filtered')
legend
grid on 
grid minor

figure(6)
plot (sys_time_s, vms_aux15, 'DisplayName','target pos')
hold on
plot (sys_time_s, aux_ins_ned_pos_north_m, 'DisplayName','actual')
legend
grid on
grid minor

figure(7)
plot (sys_time_s, vms_aux16, 'DisplayName','target pos')
hold on
plot (sys_time_s, aux_ins_ned_pos_east_m, 'DisplayName','actual')
legend
grid on
grid minor

figure(8)
plot (sys_time_s, vms_pwm_cmd0, sys_time_s, vms_pwm_cmd1, sys_time_s, vms_pwm_cmd2,...
    sys_time_s, vms_pwm_cmd3)
legend
grid on
grid minor
