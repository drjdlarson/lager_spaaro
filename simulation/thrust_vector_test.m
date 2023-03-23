close all
clear
clc

inertial_z = [0; 0; 1];
thrust_vector_body = [0; 0; -1];
truth_ypr = [deg2rad(0) deg2rad(20) deg2rad(30)];
truth_ypr_deg = truth_ypr * 180/pi;

rotMatZYX = eul2rotm(truth_ypr);
thrust_vector_inertial = rotMatZYX * thrust_vector_body;

test_heading_rad = deg2rad(-370:370);
test_phi_rad = test_heading_rad;
test_theta_rad = test_phi_rad;
test_thrust_vector_inertial = zeros(3,size(test_theta_rad,2));
residual = test_thrust_vector_inertial;
for i = 1:size(test_heading_rad,2)
    [test_phi_rad(i), test_theta_rad(i)] = calc_tilt(thrust_vector_inertial, test_heading_rad(i));
end

test_ypr = [test_heading_rad', test_theta_rad', test_phi_rad'];
test_ypr_deg = test_ypr * 180/pi;

test_rotMatZYX = eul2rotm(test_ypr);
for i = 1:size(test_heading_rad,2)
    test_thrust_vector_inertial(:,i) = test_rotMatZYX(:,:,i) * thrust_vector_body;
    residual(:,i) = test_thrust_vector_inertial(:,i) - thrust_vector_inertial;
end

figure()
plot (residual(1,:))
hold on 
plot (residual(2,:))
plot (residual(3,:))
ylim([-1,1])
legend



%% Why the fuck does the math not work. Redo math
function [phi_rad, theta_rad] = calc_tilt (thrust_vector_ned, psi_rad)
    % Calculate the pitch and roll of the aircraft required to tilt the
    % thrust vector to match. Inputs are the unit thrust vector in NED and
    % the current heading in rad
    cpsi = cos(psi_rad);
    spsi = sin(psi_rad);
    theta_num = cpsi * thrust_vector_ned(1) + spsi * thrust_vector_ned(2);
    theta_denum = thrust_vector_ned(3);
    theta_rad = atan2(theta_num, theta_denum) + pi;
    ctheta = cos(theta_rad);
    stheta = sin(theta_rad);
    phi_num = stheta * cpsi * thrust_vector_ned(1) + ...
        stheta * spsi * thrust_vector_ned(2) + ctheta * thrust_vector_ned(3);
    phi_denum = spsi * thrust_vector_ned(1) - cpsi * thrust_vector_ned(2);
    phi_rad = atan2(phi_denum, phi_num) + pi;
end