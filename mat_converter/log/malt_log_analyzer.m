close all
clear
clc

load malt8.mat;

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
plot (sys_time_s,vms_aux8,'DisplayName','vb y cmd')
hold on
plot(sys_time_s, vms_aux9,'DisplayName','vb y')
grid on
grid minor
legend

figure(3)
plot (sys_time_s, vms_aux14)