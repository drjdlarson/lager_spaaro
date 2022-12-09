close all
clear
clc

load malt24.mat;

filtered_vbx = vms_aux7;
test_wp = [2 1 0;
           6 1 0;
           6 3 0;
           2 3 0];
cage_coor_lla = [33.2154770, -87.5436600, 0];
mav_lla = [rad2deg(ext_gnss1_lat_rad), rad2deg(ext_gnss1_lon_rad), zeros(size(ext_gnss1_lat_rad))];
mav_pos_ned = lla2ned(mav_lla, cage_coor_lla,'flat');
mav_pos_ned(:,2) = -mav_pos_ned(:,2);
vbx_iir = IIR;
vbx_iir = vbx_iir.init_filter(200,1,0);

filtered_vbx(1) = 0;
for i = 2:size(vms_aux7,1)
    vbx_iir = vbx_iir.apply_filter(vms_aux10(i));
    filtered_vbx(i) = vbx_iir.output;
end

figure(1)
plot(sys_time_s, vms_aux6,'DisplayName','vb z cmd')
hold on
plot (sys_time_s,vms_aux7,'DisplayName','vb z')
grid on
grid minor
legend

% figure(2)
% plot (sys_time_s,vms_aux8,'DisplayName','vb y cmd')
% hold on
% plot(sys_time_s, vms_aux9,'DisplayName','vb y')
% grid on
% grid minor
% legend

% figure(3)
% plot (test_wp(:,1), test_wp(:,2),'*');
% hold on
% plot (mav_pos_ned(:,1), mav_pos_ned(:,2))
% xlim([0 8])
% ylim([0 5])