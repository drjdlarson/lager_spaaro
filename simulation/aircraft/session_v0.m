% Initialize a vehicle for use in the simulation
% A Quadplane model (Based off Iteration1 presented in SESSION's PDR)
%
% Aabhash Bhandari


%% Platform's name
Aircraft.name = 'session_v0';

%% Mass properties 
% CG is at the body origin
% Obtained from OpenVSP model SESSION_iter1

% Mass [kg]
Aircraft.Mass.mass_kg = 9.594;
% c.g. location [m]
Aircraft.Mass.cg_m = [0 0 0];

% Moments of inertia [kg*m^2] obtained from OpenVSP model 
Aircraft.Mass.ixx_kgm2 = 1.231;
Aircraft.Mass.iyy_kgm2 = 1.399;
Aircraft.Mass.izz_kgm2 = 2.602;
Aircraft.Mass.ixz_kgm2 = 0.07;
Aircraft.Mass.inertia_kgm2 = [Aircraft.Mass.ixx_kgm2    0   -Aircraft.Mass.ixz_kgm2;...
                              0          Aircraft.Mass.iyy_kgm2          0;...
                              -Aircraft.Mass.ixz_kgm2   0       Aircraft.Mass.izz_kgm2];

%% Geometric parameters

% NEED TO CHANGE THIS::: Copied from ultrastick25e

% Reference chord, m
Aircraft.Geom.c_m = 0.25;
% Reference span, m
Aircraft.Geom.b_m = 1.27;
% Reference area, m^2
Aircraft.Geom.s_m2 = 0.3097;
% Center of pressure [x y z], m
Aircraft.Geom.cp_m = [0.2175 0 0.046];

%% Effectors
% Number of PWM channels
Aircraft.Eff.nPwm = 8;
% Number of SBUS channels
Aircraft.Eff.nSbus = 16;
% Total number of channels
Aircraft.Eff.nCh = Aircraft.Eff.nPwm + Aircraft.Eff.nSbus;

%% Motor Maps 

% Number of motors
Aircraft.Motor.nMotor = 5;

% Assign a pwm channel to motor
Aircraft.Motor.map = [ 1 ; 2 ; 3 ; 4; 5];

% Motor positions relative to c.g in [m] [x,y,z](obtained from OpenVSP)
% First 4 Motor numbers and order using Arducopter convention (QUAD-H)
% 5th motor is the forward motor. (pusher configuration at the end of fuselage)
Aircraft.Motor.pos_m = [0.610   0.5    0;...
                        -0.6   -0.5   0;...
                        0.610    -0.5   0;...
                        -0.6   0.5    0;...
                        -0.55   0   0]; 

% Alignment of thrust with body frame x, y, z axis
% All hover rotors are aligned so that thrust is in -z
% The forward flight rotor has thrust on +x. 
Aircraft.Motor.align = [0, 0, -1;...
                            0, 0, -1;...
                            0, 0, -1;...
                            0, 0, -1;...
                            1, 0, 0];

% Motor rotation direction (right hand rule with z_body and x_body)
% Motor 1 and 2 are cw and motor 3 and 4 are ccw
% put 0 for forward motors
Aircraft.Motor.dir = [1; 1; -1; -1; 1];

% Use 1 for motors facing the forward direction. 
Aircraft.Motor.forward = [0; 0; 0; 0; 1];
Aircraft.Motor.forward = diag(Aircraft.Motor.forward);
Aircraft.Motor.hover = diag(1 - Aircraft.Motor.forward);

%% Hover Propulsion System

% Motor speed constant Kv
Aircraft.HoverMotor.kv = 320; % Kv of T-Motor MN605-S

% Motor zero load current [Amp]
Aircraft.HoverMotor.io = 2.2; 

% Motor internal resistance [Ohm]
Aircraft.HoverMotor.r = 0.021 ;


% Coef of torque of MN1005 motor based on T-Motor's website
Aircraft.HoverMotor.kq = 0.0411;     %N-m/A


% Motor mixing law for hover [hover_thrust, roll, pitch, yaw]
% The cmd vector [hover_thrust,roll,pitch, yaw] will by multiplied with the motor
% mixing matrix to result in the individual motor outputs which is then
% scaled to the PMW range that the ESC can decode
Aircraft.HoverMotor.motor_yaw_factor = 0.1;
Aircraft.HoverMotor.mix = [0.7,  -0.1, 0.1, -Aircraft.HoverMotor.motor_yaw_factor;...
                      0.7,   0.1,     -0.1,  -Aircraft.HoverMotor.motor_yaw_factor;...
                      0.7,   0.1,  0.1, Aircraft.HoverMotor.motor_yaw_factor;...
                      0.7,   -0.1,  -0.1, Aircraft.HoverMotor.motor_yaw_factor;...
                      0, 0, 0, 0;...
                      0, 0, 0, 0;...
                      0, 0, 0, 0;...
                      0, 0, 0, 0];

%% Rotors for Hover flight

% Diameter [inches]
Aircraft.HoverRotor.dia_in = 21;

% Coefficient of thrust constant obtained from T-motor's website data
Aircraft.HoverRotor.kt = 0.0388;   %N-m/N

% Thrust and torque models obtained from Tmotor's data
% for throttle 0-1
% 2nd order polyfit on thrust(N)
Aircraft.HoverRotor.poly_thrust = [40.5584, 28.3258, -4.1581];
% 2nd order polyfit on torque
Aircraft.HoverRotor.poly_torque = [0.5954, 1.0777, -0.2594];


%% Forward Flight Propulsion system

% NEED TO CHANGE THIS::: Copied from ultrastick25e

% Number of motors
Aircraft.ForwardMotor.nMotor = 1;
% PWM / SBUS channel number to motor mapping
% Array ordered as 8 PWM channels then 16 SBUS channels for a total of 24
% channels, 1-based indexing
Aircraft.ForwardMotor.map = 1;
% Position relative to c.g., m
Aircraft.ForwardMotor.pos_m(1, :) = [-0.075 0 0];
% Alignment with x, y, z axis
Aircraft.ForwardMotor.align(1, :) = [1 0 0];
% Speed constant, Kv [RPM/V]
Aircraft.ForwardMotor.kv = 870;
% Resistance [ohm]
Aircraft.ForwardMotor.r = 0.03;
% Zero torque current [Amp]
Aircraft.ForwardMotor.io = 2.4;

%% Forward Flight Propeller

% NEED TO CHANGE THIS::: Copied from ultrastick25e

% Diameter [inches]
Aircraft.ForwardProp.dia_in = 12;
% Coefficient of thrust polynomial coefficients
Aircraft.ForwardProp.ct = [-2.4822 4.1010 -2.6695 0.7331 -0.1958 0.0978];
% Coefficient of power polynomial coefficients
Aircraft.ForwardProp.cp = [-1.8863 2.5393 -1.3781 0.3089 -0.0358 0.0329];
% Electric motor and propeller combine moment of inertia [kg*m^2]
Aircraft.ForwardProp.Jmp_kgm2 = 0.00012991;



%% Battery

% Number of battery cells
Aircraft.Battery.nCell = 6;
% Maximum voltage per cell [V]
Aircraft.Battery.volt_per_cell = 4.2;
% Voltage available
Aircraft.Battery.voltage = Aircraft.Battery.nCell * Aircraft.Battery.volt_per_cell;
% Power module voltage gain. Gain between battery voltage and voltage
% output by power modele
Aircraft.Battery.voltage_gain = 18.95;
% Power module current to voltage gain. Gain between current draw and
% voltage output by power module
Aircraft.Battery.current_to_voltage_gain_vpma = 125.65 * 1000; %mA per volt

%% Sensors (copied from BFS existing model due to same FMS)

% MPU-9250 IMU
% Accel
Aircraft.Sensors.Imu.Accel.scale_factor = eye(3);
Aircraft.Sensors.Imu.Accel.bias_mps2 = [0 0 0]';
Aircraft.Sensors.Imu.Accel.noise_mps2 = 0.0785 * ones(3, 1);
Aircraft.Sensors.Imu.Accel.upper_limit_mps2 = 156.9064 * ones(3, 1);
Aircraft.Sensors.Imu.Accel.lower_limit_mps2 = -1 * Aircraft.Sensors.Imu.Accel.upper_limit_mps2;
% Gyro
Aircraft.Sensors.Imu.Gyro.scale_factor = eye(3);
Aircraft.Sensors.Imu.Gyro.bias_radps = [0 0 0]';
% G-sensitivity in rad/s per m/s/s
Aircraft.Sensors.Imu.Gyro.accel_sens_radps = [0 0 0]';  
Aircraft.Sensors.Imu.Gyro.noise_radps = deg2rad(0.1) * ones(3, 1);
Aircraft.Sensors.Imu.Gyro.upper_limit_radps = deg2rad(2000) * ones(3, 1);
Aircraft.Sensors.Imu.Gyro.lower_limit_radps = -1 * Aircraft.Sensors.Imu.Gyro.upper_limit_radps;
% Magnetometer
Aircraft.Sensors.Imu.Mag.scale_factor = eye(3);
Aircraft.Sensors.Imu.Mag.bias_ut = [0 0 0]';
Aircraft.Sensors.Imu.Mag.noise_ut =  0.6 * ones(3, 1);
Aircraft.Sensors.Imu.Mag.upper_limit_ut =  4800 * ones(3, 1);
Aircraft.Sensors.Imu.Mag.lower_limit_ut = -1 * Aircraft.Sensors.Imu.Mag.upper_limit_ut;
% GNSS model
Aircraft.Sensors.Gnss.sample_rate_hz = 5;
Aircraft.Sensors.Gnss.fix = 3; % 3D fix
Aircraft.Sensors.Gnss.num_satellites = 16;
Aircraft.Sensors.Gnss.horz_accuracy_m = 1.5;
Aircraft.Sensors.Gnss.vert_accuracy_m = 5.5;
Aircraft.Sensors.Gnss.vel_accuracy_mps = 0.05;
Aircraft.Sensors.Gnss.track_accuracy_rad = deg2rad(2);
Aircraft.Sensors.Gnss.hdop = 0.7;
Aircraft.Sensors.Gnss.vdop = 0.7;
% Air data model
% Static pressure
Aircraft.Sensors.PitotStaticInstalled = 0;
Aircraft.Sensors.StaticPres.scale_factor = 1;
Aircraft.Sensors.StaticPres.bias_pa = 0;
Aircraft.Sensors.StaticPres.upper_limit_pa = 120000;
Aircraft.Sensors.StaticPres.lower_limit_pa = 70000;
% 1% of the full-scale range
Aircraft.Sensors.StaticPres.noise_pa = 0.01 * (Aircraft.Sensors.StaticPres.upper_limit_pa - Aircraft.Sensors.StaticPres.lower_limit_pa);
% Differential pressure
Aircraft.Sensors.DiffPres.scale_factor = 1;
Aircraft.Sensors.DiffPres.bias_pa = 0;
Aircraft.Sensors.DiffPres.upper_limit_pa = 1000;
Aircraft.Sensors.DiffPres.lower_limit_pa = 0;
% 2% of the full-scale range
Aircraft.Sensors.DiffPres.noise_pa =  0.02 * (Aircraft.Sensors.DiffPres.upper_limit_pa - Aircraft.Sensors.DiffPres.lower_limit_pa);

%% Controller parameters
% allow values to come from telem bus or be hardcoded from this file
Aircraft.Control.hardcode_values = false;

% Motor minimum throttle 
% spin motor slowly when armed for safety reasons and anti lock-up
Aircraft.Control.motor_spin_min = 0.15; 

% Thorttle stick minimum
% Mimimum valid value of the throttle stick so that arming and gain reset
% occurs
Aircraft.Control.throttle_min = 0.05;

% Motor ramp time [s]
% Time so slowly ramp motor from 0 to motor_spin_min. Prevent initial
% voltage spike
Aircraft.Control.motor_ramp_time_s = 3;

