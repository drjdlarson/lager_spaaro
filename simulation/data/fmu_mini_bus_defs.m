function fmu_mini_bus_defs() 
% FMU_MINI initializes a set of bus objects in the MATLAB base workspace 

% header_file = 'flight/global_defs.h';
header_file = 'global_defs.h';
% Bus object: AdcData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'volt';
elems(1).Dimensions = 6;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'single';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Array of measured voltages.');

AdcData = Simulink.Bus;
AdcData.HeaderFile = header_file;
AdcData.Description = sprintf('Data from analog to digital converters.\nCould be used for control surface position sensing,\nangle of attack or angle of sideslip vanes, etc.');
AdcData.DataScope = 'Imported';
AdcData.Alignment = -1;
AdcData.PreserveElementDimensions = 0;
AdcData.Elements = elems;
clear elems;
assignin('base','AdcData', AdcData);

% Bus object: AirData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'initialized';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Whether the airdata state estimator has been initialized.');

elems(2) = Simulink.BusElement;
elems(2).Name = 'static_pres_pa';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'single';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Filtered static pressure, Pa');

elems(3) = Simulink.BusElement;
elems(3).Name = 'diff_pres_pa';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'single';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('Filtered differential pressure, Pa');

elems(4) = Simulink.BusElement;
elems(4).Name = 'alt_pres_m';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'single';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('Pressure altitude, m');

elems(5) = Simulink.BusElement;
elems(5).Name = 'ias_mps';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'single';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('Indicated Airspeed (IAS), m/s');

AirData = Simulink.Bus;
AirData.HeaderFile = header_file;
AirData.Description = sprintf('Estimated airdata states');
AirData.DataScope = 'Imported';
AirData.Alignment = -1;
AirData.PreserveElementDimensions = 0;
AirData.Elements = elems;
clear elems;
assignin('base','AirData', AirData);

% Bus object: AnalogData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'val';
elems(1).Dimensions = 6;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'single';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Analog voltages converted to other meaningful data (i.e. surface positions, alpha / beta vanes, etc). Used to record engineering unit data.');

AnalogData = Simulink.Bus;
AnalogData.HeaderFile = header_file;
AnalogData.Description = sprintf('Analog input from the VMS.');
AnalogData.DataScope = 'Imported';
AnalogData.Alignment = -1;
AnalogData.PreserveElementDimensions = 0;
AnalogData.Elements = elems;
clear elems;
assignin('base','AnalogData', AnalogData);

% Bus object: BatteryData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'voltage_v';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'single';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Battery voltage, V');

elems(2) = Simulink.BusElement;
elems(2).Name = 'current_ma';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'single';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Battery current draw, mA');

elems(3) = Simulink.BusElement;
elems(3).Name = 'consumed_mah';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'single';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('Battery capacity consumed, mAh');

elems(4) = Simulink.BusElement;
elems(4).Name = 'remaining_prcnt';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'single';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('Battery capacity remaining, %%');

elems(5) = Simulink.BusElement;
elems(5).Name = 'remaining_time_s';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'single';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('Battery capacity remaining, given as estimated flight time, s');

BatteryData = Simulink.Bus;
BatteryData.HeaderFile = header_file;
BatteryData.Description = sprintf('Battery data estimated from the VMS');
BatteryData.DataScope = 'Imported';
BatteryData.Alignment = -1;
BatteryData.PreserveElementDimensions = 0;
BatteryData.Elements = elems;
clear elems;
assignin('base','BatteryData', BatteryData);

% Bus object: GnssData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'installed';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = '';

elems(2) = Simulink.BusElement;
elems(2).Name = 'healthy';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'boolean';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Whether the GNSS is healthy.\nHealthy is determined as missing 5 frames in a row\nat the expected sample rate.');

elems(3) = Simulink.BusElement;
elems(3).Name = 'new_data';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'boolean';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('Whether new GNSS data has been received.');

elems(4) = Simulink.BusElement;
elems(4).Name = 'rel_pos_avail';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'boolean';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = '';

elems(5) = Simulink.BusElement;
elems(5).Name = 'rel_pos_moving_baseline';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'boolean';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = '';

elems(6) = Simulink.BusElement;
elems(6).Name = 'rel_pos_baseline_normalized';
elems(6).Dimensions = 1;
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'boolean';
elems(6).Complexity = 'real';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = '';
elems(6).Description = '';

elems(7) = Simulink.BusElement;
elems(7).Name = 'fix';
elems(7).Dimensions = 1;
elems(7).DimensionsMode = 'Fixed';
elems(7).DataType = 'int8';
elems(7).Complexity = 'real';
elems(7).Min = [];
elems(7).Max = [];
elems(7).DocUnits = '';
elems(7).Description = sprintf('GNSS fix:\n1: No fix\n2: 2D fix\n3: 3D fix\n4: 3D fix with differential GNSS\n5: 3D fix, RTK with floating integer ambiguity\n6: 3D fix, RTK with fixed integer ambiguity');

elems(8) = Simulink.BusElement;
elems(8).Name = 'num_sats';
elems(8).Dimensions = 1;
elems(8).DimensionsMode = 'Fixed';
elems(8).DataType = 'int8';
elems(8).Complexity = 'real';
elems(8).Min = [];
elems(8).Max = [];
elems(8).DocUnits = '';
elems(8).Description = sprintf('Number of satellites used in the solution.');

elems(9) = Simulink.BusElement;
elems(9).Name = 'gps_week';
elems(9).Dimensions = 1;
elems(9).DimensionsMode = 'Fixed';
elems(9).DataType = 'int16';
elems(9).Complexity = 'real';
elems(9).Min = [];
elems(9).Max = [];
elems(9).DocUnits = '';
elems(9).Description = sprintf('GNSS week number.');

elems(10) = Simulink.BusElement;
elems(10).Name = 'alt_wgs84_m';
elems(10).Dimensions = 1;
elems(10).DimensionsMode = 'Fixed';
elems(10).DataType = 'single';
elems(10).Complexity = 'real';
elems(10).Min = [];
elems(10).Max = [];
elems(10).DocUnits = '';
elems(10).Description = sprintf('Altitude above the WGS84 ellipsoid, m.');

elems(11) = Simulink.BusElement;
elems(11).Name = 'horz_acc_m';
elems(11).Dimensions = 1;
elems(11).DimensionsMode = 'Fixed';
elems(11).DataType = 'single';
elems(11).Complexity = 'real';
elems(11).Min = [];
elems(11).Max = [];
elems(11).DocUnits = '';
elems(11).Description = sprintf('Estimated horizontal position accuracy, m.');

elems(12) = Simulink.BusElement;
elems(12).Name = 'vert_acc_m';
elems(12).Dimensions = 1;
elems(12).DimensionsMode = 'Fixed';
elems(12).DataType = 'single';
elems(12).Complexity = 'real';
elems(12).Min = [];
elems(12).Max = [];
elems(12).DocUnits = '';
elems(12).Description = sprintf('Estimated vertical position accuracy, m.');

elems(13) = Simulink.BusElement;
elems(13).Name = 'vel_acc_mps';
elems(13).Dimensions = 1;
elems(13).DimensionsMode = 'Fixed';
elems(13).DataType = 'single';
elems(13).Complexity = 'real';
elems(13).Min = [];
elems(13).Max = [];
elems(13).DocUnits = '';
elems(13).Description = sprintf('Estimated velocity accuracy, m/s');

elems(14) = Simulink.BusElement;
elems(14).Name = 'ned_vel_mps';
elems(14).Dimensions = 3;
elems(14).DimensionsMode = 'Fixed';
elems(14).DataType = 'single';
elems(14).Complexity = 'real';
elems(14).Min = [];
elems(14).Max = [];
elems(14).DocUnits = '';
elems(14).Description = sprintf('North east down (NED) velocity, m/s.');

elems(15) = Simulink.BusElement;
elems(15).Name = 'rel_pos_acc_ned_m';
elems(15).Dimensions = 3;
elems(15).DimensionsMode = 'Fixed';
elems(15).DataType = 'single';
elems(15).Complexity = 'real';
elems(15).Min = [];
elems(15).Max = [];
elems(15).DocUnits = '';
elems(15).Description = '';

elems(16) = Simulink.BusElement;
elems(16).Name = 'gps_tow_s';
elems(16).Dimensions = 1;
elems(16).DimensionsMode = 'Fixed';
elems(16).DataType = 'int32';
elems(16).Complexity = 'real';
elems(16).Min = [];
elems(16).Max = [];
elems(16).DocUnits = '';
elems(16).Description = sprintf('GNSS time of week, ms.');

elems(17) = Simulink.BusElement;
elems(17).Name = 'lat_rad';
elems(17).Dimensions = 1;
elems(17).DimensionsMode = 'Fixed';
elems(17).DataType = 'double';
elems(17).Complexity = 'real';
elems(17).Min = [];
elems(17).Max = [];
elems(17).DocUnits = '';
elems(17).Description = sprintf('Latitude, rad.');

elems(18) = Simulink.BusElement;
elems(18).Name = 'lon_rad';
elems(18).Dimensions = 1;
elems(18).DimensionsMode = 'Fixed';
elems(18).DataType = 'double';
elems(18).Complexity = 'real';
elems(18).Min = [];
elems(18).Max = [];
elems(18).DocUnits = '';
elems(18).Description = sprintf('Longitude, rad.');

elems(19) = Simulink.BusElement;
elems(19).Name = 'rel_pos_ned_m';
elems(19).Dimensions = 3;
elems(19).DimensionsMode = 'Fixed';
elems(19).DataType = 'double';
elems(19).Complexity = 'real';
elems(19).Min = [];
elems(19).Max = [];
elems(19).DocUnits = '';
elems(19).Description = '';

GnssData = Simulink.Bus;
GnssData.HeaderFile = header_file;
GnssData.Description = sprintf('Data from a GNSS receiver.');
GnssData.DataScope = 'Imported';
GnssData.Alignment = -1;
GnssData.PreserveElementDimensions = 0;
GnssData.Elements = elems;
clear elems;
assignin('base','GnssData', GnssData);

% Bus object: ImuData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'installed';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Whether an IMU is installed');

elems(2) = Simulink.BusElement;
elems(2).Name = 'healthy';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'boolean';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Whether the accelerometer and gyro are healthy.\nHealthy is determined as missing 5 frames in a row\nat the expected sample rate.');

elems(3) = Simulink.BusElement;
elems(3).Name = 'new_data';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'boolean';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('Whether new data was received from the accelerometer and gyro.');

elems(4) = Simulink.BusElement;
elems(4).Name = 'die_temp_c';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'single';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('The IMU sensor die temperature, C');

elems(5) = Simulink.BusElement;
elems(5).Name = 'accel_mps2';
elems(5).Dimensions = 3;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'single';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('Three axis accelerometer data, m/s/s');

elems(6) = Simulink.BusElement;
elems(6).Name = 'gyro_radps';
elems(6).Dimensions = 3;
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'single';
elems(6).Complexity = 'real';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = '';
elems(6).Description = sprintf('Three axis gyro data, rad/s');

ImuData = Simulink.Bus;
ImuData.HeaderFile = header_file;
ImuData.Description = sprintf('Inertial Measurement Unit (IMU) data. Rotated into the body frame and\nanti-alias filtering applied. Pre-determined accelerometer and magnetometer\nscale factor and bias corrections applied. Gyro biases estimated and\nremoved during initialization. The navigation filter will typically apply\nreal-time estimated bias corrections and additional digital low pass filtering.');
ImuData.DataScope = 'Imported';
ImuData.Alignment = -1;
ImuData.PreserveElementDimensions = 0;
ImuData.Elements = elems;
clear elems;
assignin('base','ImuData', ImuData);

% Bus object: InceptorData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'healthy';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Whether if SBUS inceptor is healthy');

elems(2) = Simulink.BusElement;
elems(2).Name = 'new_data';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'boolean';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Whether new inceptor data was received.');

elems(3) = Simulink.BusElement;
elems(3).Name = 'lost_frame';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'boolean';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('Whether a frame of inceptor data was lost.');

elems(4) = Simulink.BusElement;
elems(4).Name = 'failsafe';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'boolean';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('Whether the inceptor has entered failsafe mode. \nThis occurs when several lost frames occur in a row. \nCan be used to command a Flight Termination System \nin the event of lost link with the pilot.');

elems(5) = Simulink.BusElement;
elems(5).Name = 'ch';
elems(5).Dimensions = 16;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'int16';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = '';

InceptorData = Simulink.Bus;
InceptorData.HeaderFile = header_file;
InceptorData.Description = sprintf('Pilot inceptors / commands.');
InceptorData.DataScope = 'Imported';
InceptorData.Alignment = -1;
InceptorData.PreserveElementDimensions = 0;
InceptorData.Elements = elems;
clear elems;
assignin('base','InceptorData', InceptorData);

% Bus object: InsData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'initialized';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Whether the navigation filter is healthy');

elems(2) = Simulink.BusElement;
elems(2).Name = 'pitch_rad';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'single';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Pitch angle, rad.');

elems(3) = Simulink.BusElement;
elems(3).Name = 'roll_rad';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'single';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('Roll angle, rad.');

elems(4) = Simulink.BusElement;
elems(4).Name = 'heading_rad';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'single';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('Heading angle relative to true north, rad.');

elems(5) = Simulink.BusElement;
elems(5).Name = 'alt_wgs84_m';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'single';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('Altitude above the WGS84 ellipsoid, m.');

elems(6) = Simulink.BusElement;
elems(6).Name = 'accel_mps2';
elems(6).Dimensions = 3;
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'single';
elems(6).Complexity = 'real';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = '';
elems(6).Description = sprintf('Accelerometer data with biases removed and low pass filtered, m/s/s.');

elems(7) = Simulink.BusElement;
elems(7).Name = 'gyro_radps';
elems(7).Dimensions = 3;
elems(7).DimensionsMode = 'Fixed';
elems(7).DataType = 'single';
elems(7).Complexity = 'real';
elems(7).Min = [];
elems(7).Max = [];
elems(7).DocUnits = '';
elems(7).Description = sprintf('Gyro data with biases removed and low pass filtered, rad/s.');

elems(8) = Simulink.BusElement;
elems(8).Name = 'mag_ut';
elems(8).Dimensions = 3;
elems(8).DimensionsMode = 'Fixed';
elems(8).DataType = 'single';
elems(8).Complexity = 'real';
elems(8).Min = [];
elems(8).Max = [];
elems(8).DocUnits = '';
elems(8).Description = sprintf('Magnetometer data, low pass filtered, uT.');

elems(9) = Simulink.BusElement;
elems(9).Name = 'ned_vel_mps';
elems(9).Dimensions = 3;
elems(9).DimensionsMode = 'Fixed';
elems(9).DataType = 'single';
elems(9).Complexity = 'real';
elems(9).Min = [];
elems(9).Max = [];
elems(9).DocUnits = '';
elems(9).Description = sprintf('North east down velocity, m/s.');

elems(10) = Simulink.BusElement;
elems(10).Name = 'lat_rad';
elems(10).Dimensions = 1;
elems(10).DimensionsMode = 'Fixed';
elems(10).DataType = 'double';
elems(10).Complexity = 'real';
elems(10).Min = [];
elems(10).Max = [];
elems(10).DocUnits = '';
elems(10).Description = sprintf('Latitude, rad.');

elems(11) = Simulink.BusElement;
elems(11).Name = 'lon_rad';
elems(11).Dimensions = 1;
elems(11).DimensionsMode = 'Fixed';
elems(11).DataType = 'double';
elems(11).Complexity = 'real';
elems(11).Min = [];
elems(11).Max = [];
elems(11).DocUnits = '';
elems(11).Description = sprintf('Longitude, rad.');

elems(12) = Simulink.BusElement;
elems(12).Name = 'home_alt_wgs84_m';
elems(12).Dimensions = 1;
elems(12).DimensionsMode = 'Fixed';
elems(12).DataType = 'single';
elems(12).Complexity = 'real';
elems(12).Min = [];
elems(12).Max = [];
elems(12).DocUnits = '';
elems(12).Description = '';

elems(13) = Simulink.BusElement;
elems(13).Name = 'home_lat_rad';
elems(13).Dimensions = 1;
elems(13).DimensionsMode = 'Fixed';
elems(13).DataType = 'double';
elems(13).Complexity = 'real';
elems(13).Min = [];
elems(13).Max = [];
elems(13).DocUnits = '';
elems(13).Description = '';

elems(14) = Simulink.BusElement;
elems(14).Name = 'home_lon_rad';
elems(14).Dimensions = 1;
elems(14).DimensionsMode = 'Fixed';
elems(14).DataType = 'double';
elems(14).Complexity = 'real';
elems(14).Min = [];
elems(14).Max = [];
elems(14).DocUnits = '';
elems(14).Description = '';

InsData = Simulink.Bus;
InsData.HeaderFile = header_file;
InsData.Description = sprintf('Data from the navigation filter.');
InsData.DataScope = 'Imported';
InsData.Alignment = -1;
InsData.PreserveElementDimensions = 0;
InsData.Elements = elems;
clear elems;
assignin('base','InsData', InsData);

% Bus object: MagData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'installed';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Whether a magnetometer is installed');

elems(2) = Simulink.BusElement;
elems(2).Name = 'healthy';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'boolean';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Whether the magnetometer is healthy.\nHealthy is determined as missing 5 frames in a row\nat the expected sample rate.');

elems(3) = Simulink.BusElement;
elems(3).Name = 'new_data';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'boolean';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('Whether new data was received from the magnetometer');

elems(4) = Simulink.BusElement;
elems(4).Name = 'die_temp_c';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'single';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('The magnetometer sensor die temperature, C');

elems(5) = Simulink.BusElement;
elems(5).Name = 'mag_ut';
elems(5).Dimensions = 3;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'single';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('Three axis magnetometer data, uT');

MagData = Simulink.Bus;
MagData.HeaderFile = header_file;
MagData.Description = '';
MagData.DataScope = 'Imported';
MagData.Alignment = -1;
MagData.PreserveElementDimensions = 0;
MagData.Elements = elems;
clear elems;
assignin('base','MagData', MagData);

% Bus object: MissionItem 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'autocontinue';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Whether to automatically continue to the next Mission Item.');

elems(2) = Simulink.BusElement;
elems(2).Name = 'frame';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'uint8';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('The coordinate frame of the Mission Item:\nhttps://mavlink.io/en/messages/common.html#MAV_FRAME');

elems(3) = Simulink.BusElement;
elems(3).Name = 'cmd';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'uint16';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('The command associated with the Mission Item:\nhttps://mavlink.io/en/messages/common.html#mav_commands');

elems(4) = Simulink.BusElement;
elems(4).Name = 'param1';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'single';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('Command dependent parameter.');

elems(5) = Simulink.BusElement;
elems(5).Name = 'param2';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'single';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('Command dependent parameter.');

elems(6) = Simulink.BusElement;
elems(6).Name = 'param3';
elems(6).Dimensions = 1;
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'single';
elems(6).Complexity = 'real';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = '';
elems(6).Description = sprintf('Command dependent parameter.');

elems(7) = Simulink.BusElement;
elems(7).Name = 'param4';
elems(7).Dimensions = 1;
elems(7).DimensionsMode = 'Fixed';
elems(7).DataType = 'single';
elems(7).Complexity = 'real';
elems(7).Min = [];
elems(7).Max = [];
elems(7).DocUnits = '';
elems(7).Description = sprintf('Command dependent parameter.');

elems(8) = Simulink.BusElement;
elems(8).Name = 'x';
elems(8).Dimensions = 1;
elems(8).DimensionsMode = 'Fixed';
elems(8).DataType = 'int32';
elems(8).Complexity = 'real';
elems(8).Min = [];
elems(8).Max = [];
elems(8).DocUnits = '';
elems(8).Description = sprintf('Typically latitude represented as 1e7 degrees, but can also be a command\ndependent parameter.');

elems(9) = Simulink.BusElement;
elems(9).Name = 'y';
elems(9).Dimensions = 1;
elems(9).DimensionsMode = 'Fixed';
elems(9).DataType = 'int32';
elems(9).Complexity = 'real';
elems(9).Min = [];
elems(9).Max = [];
elems(9).DocUnits = '';
elems(9).Description = sprintf('Typically longitude represented as 1e7 degrees, but can also be a command\ndependent parameter.');

elems(10) = Simulink.BusElement;
elems(10).Name = 'z';
elems(10).Dimensions = 1;
elems(10).DimensionsMode = 'Fixed';
elems(10).DataType = 'single';
elems(10).Complexity = 'real';
elems(10).Min = [];
elems(10).Max = [];
elems(10).DocUnits = '';
elems(10).Description = sprintf('Typically altitude, m, but can also be a command\ndependent parameter.');

MissionItem = Simulink.Bus;
MissionItem.HeaderFile = header_file;
MissionItem.Description = sprintf('Defines a Mission Item, which can be a waypoint in a flight plan,\na fence vertex, or a rally point.');
MissionItem.DataScope = 'Imported';
MissionItem.Alignment = -1;
MissionItem.PreserveElementDimensions = 0;
MissionItem.Elements = elems;
clear elems;
assignin('base','MissionItem', MissionItem);

% Bus object: PowerModuleData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'voltage_v';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'single';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Voltage measured from the power module voltage pin. Should be multiplied by the power module volts / volt to estimate the battery pack voltage.');

elems(2) = Simulink.BusElement;
elems(2).Name = 'current_ma';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'single';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Voltage measured from the power module current pin. Should be multiplied by the power module mA / volt to get an estimate of the battery pack current draw, mA');

PowerModuleData = Simulink.Bus;
PowerModuleData.HeaderFile = header_file;
PowerModuleData.Description = sprintf('Data from power module sensor.');
PowerModuleData.DataScope = 'Imported';
PowerModuleData.Alignment = -1;
PowerModuleData.PreserveElementDimensions = 0;
PowerModuleData.Elements = elems;
clear elems;
assignin('base','PowerModuleData', PowerModuleData);

% Bus object: PresData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'installed';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = '';

elems(2) = Simulink.BusElement;
elems(2).Name = 'is_static_pres';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'boolean';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = '';

elems(3) = Simulink.BusElement;
elems(3).Name = 'healthy';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'boolean';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('Whether the pressure transducer is healthy.\nHealthy is determined as missing 5 frames in a row\nat the expected sample rate.');

elems(4) = Simulink.BusElement;
elems(4).Name = 'new_data';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'boolean';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('Whether new pressure data was received.');

elems(5) = Simulink.BusElement;
elems(5).Name = 'die_temp_c';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'single';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('The pressure transducer die temperature, C.');

elems(6) = Simulink.BusElement;
elems(6).Name = 'pres_pa';
elems(6).Dimensions = 1;
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'single';
elems(6).Complexity = 'real';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = '';
elems(6).Description = sprintf('The pressure measurement, Pa.');

PresData = Simulink.Bus;
PresData.HeaderFile = header_file;
PresData.Description = sprintf('Pressure transducer data. \nDifferential pressure transducers have their bias\nestimated and removed during initialization.');
PresData.DataScope = 'Imported';
PresData.Alignment = -1;
PresData.PreserveElementDimensions = 0;
PresData.Elements = elems;
clear elems;
assignin('base','PresData', PresData);

% Bus object: PwmCmd 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'cnt';
elems(1).Dimensions = 8;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'int16';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('PWM commands converted to raw PWM values, these are sent directly to the PWM effectors.');

elems(2) = Simulink.BusElement;
elems(2).Name = 'cmd';
elems(2).Dimensions = 8;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'single';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('PWM control surface angle or motor PLA commands. Used by simulation.');

PwmCmd = Simulink.Bus;
PwmCmd.HeaderFile = header_file;
PwmCmd.Description = sprintf('PWM commands from the VMS.');
PwmCmd.DataScope = 'Imported';
PwmCmd.Alignment = -1;
PwmCmd.PreserveElementDimensions = 0;
PwmCmd.Elements = elems;
clear elems;
assignin('base','PwmCmd', PwmCmd);

% Bus object: SbusCmd 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'cnt';
elems(1).Dimensions = 16;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'int16';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('SBUS commands converted to raw SBUS values, these are sent directly to the SBUS effectors.');

elems(2) = Simulink.BusElement;
elems(2).Name = 'cmd';
elems(2).Dimensions = 16;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'single';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('SBUS control surface angle or motor PLA commands. Used by simulation.');

SbusCmd = Simulink.Bus;
SbusCmd.HeaderFile = header_file;
SbusCmd.Description = sprintf('SBUS commands from the VMS');
SbusCmd.DataScope = 'Imported';
SbusCmd.Alignment = -1;
SbusCmd.PreserveElementDimensions = 0;
SbusCmd.Elements = elems;
clear elems;
assignin('base','SbusCmd', SbusCmd);

% Bus object: SensorData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'inceptor';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'Bus: InceptorData';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Inceptor data.');

elems(2) = Simulink.BusElement;
elems(2).Name = 'fmu_imu';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'Bus: ImuData';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('The FMU-R integrated IMU sensor data.');

elems(3) = Simulink.BusElement;
elems(3).Name = 'fmu_mag';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'Bus: MagData';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = '';

elems(4) = Simulink.BusElement;
elems(4).Name = 'fmu_static_pres';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'Bus: PresData';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('Static pressure sensor data either from the FMU-R integrated static\npressure sensor or, if installed, a pitot-static sensor.');

elems(5) = Simulink.BusElement;
elems(5).Name = 'ext_gnss1';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'Bus: GnssData';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('GNSS data.');

elems(6) = Simulink.BusElement;
elems(6).Name = 'analog';
elems(6).Dimensions = 1;
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'Bus: AnalogData';
elems(6).Complexity = 'real';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = '';
elems(6).Description = sprintf('Analog data.');

elems(7) = Simulink.BusElement;
elems(7).Name = 'power_module';
elems(7).Dimensions = 1;
elems(7).DimensionsMode = 'Fixed';
elems(7).DataType = 'Bus: PowerModuleData';
elems(7).Complexity = 'real';
elems(7).Min = [];
elems(7).Max = [];
elems(7).DocUnits = '';
elems(7).Description = sprintf('Sensed power module data.');

SensorData = Simulink.Bus;
SensorData.HeaderFile = header_file;
SensorData.Description = sprintf('Aircraft sensor data.');
SensorData.DataScope = 'Imported';
SensorData.Alignment = -1;
SensorData.PreserveElementDimensions = 0;
SensorData.Elements = elems;
clear elems;
assignin('base','SensorData', SensorData);

% Bus object: SysData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'frame_time_us';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'int32';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Time the previous frame took to complete, us. Used to analyze CPU load.');

elems(2) = Simulink.BusElement;
elems(2).Name = 'sys_time_us';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'int64';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Time since boot, us.');

SysData = Simulink.Bus;
SysData.HeaderFile = header_file;
SysData.Description = sprintf('System data');
SysData.DataScope = 'Imported';
SysData.Alignment = -1;
SysData.PreserveElementDimensions = 0;
SysData.Elements = elems;
clear elems;
assignin('base','SysData', SysData);

% Bus object: TelemData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'waypoints_updated';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Whether the waypoints / flight plan has been updated.');

elems(2) = Simulink.BusElement;
elems(2).Name = 'fence_updated';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'boolean';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Whether the geofence has been updated.');

elems(3) = Simulink.BusElement;
elems(3).Name = 'rally_points_updated';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'boolean';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('Whether the rally points have been updated.');

elems(4) = Simulink.BusElement;
elems(4).Name = 'current_waypoint';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'int16';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('The index of the current waypoint / flight plan item.');

elems(5) = Simulink.BusElement;
elems(5).Name = 'num_waypoints';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'int16';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('The number of waypoints in the flight plan.');

elems(6) = Simulink.BusElement;
elems(6).Name = 'num_fence_items';
elems(6).Dimensions = 1;
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'int16';
elems(6).Complexity = 'real';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = '';
elems(6).Description = sprintf('The number of points describing the geofence.');

elems(7) = Simulink.BusElement;
elems(7).Name = 'num_rally_points';
elems(7).Dimensions = 1;
elems(7).DimensionsMode = 'Fixed';
elems(7).DataType = 'int16';
elems(7).Complexity = 'real';
elems(7).Min = [];
elems(7).Max = [];
elems(7).DocUnits = '';
elems(7).Description = sprintf('The number of rally points.');

elems(8) = Simulink.BusElement;
elems(8).Name = 'param';
elems(8).Dimensions = 24;
elems(8).DimensionsMode = 'Fixed';
elems(8).DataType = 'single';
elems(8).Complexity = 'real';
elems(8).Min = [];
elems(8).Max = [];
elems(8).DocUnits = '';
elems(8).Description = sprintf('Parameters set by the ground control station. The use of these\nparameters is not pre-defined. They can be used for\napplications like mode switching, in-flight tunable gains, etc.');

elems(9) = Simulink.BusElement;
elems(9).Name = 'flight_plan';
elems(9).Dimensions = 500;
elems(9).DimensionsMode = 'Fixed';
elems(9).DataType = 'Bus: MissionItem';
elems(9).Complexity = 'real';
elems(9).Min = [];
elems(9).Max = [];
elems(9).DocUnits = '';
elems(9).Description = sprintf('Array of mission items describing the flight plan.');

elems(10) = Simulink.BusElement;
elems(10).Name = 'fence';
elems(10).Dimensions = 100;
elems(10).DimensionsMode = 'Fixed';
elems(10).DataType = 'Bus: MissionItem';
elems(10).Complexity = 'real';
elems(10).Min = [];
elems(10).Max = [];
elems(10).DocUnits = '';
elems(10).Description = sprintf('Array of mission items describing geofences.');

elems(11) = Simulink.BusElement;
elems(11).Name = 'rally';
elems(11).Dimensions = 10;
elems(11).DimensionsMode = 'Fixed';
elems(11).DataType = 'Bus: MissionItem';
elems(11).Complexity = 'real';
elems(11).Min = [];
elems(11).Max = [];
elems(11).DocUnits = '';
elems(11).Description = sprintf('Array of mission items describing rally points.');

TelemData = Simulink.Bus;
TelemData.HeaderFile = header_file;
TelemData.Description = sprintf('Data from a ground control station.');
TelemData.DataScope = 'Imported';
TelemData.Alignment = -1;
TelemData.PreserveElementDimensions = 0;
TelemData.Elements = elems;
clear elems;
assignin('base','TelemData', TelemData);

% Bus object: VmsData 
clear elems;
elems(1) = Simulink.BusElement;
elems(1).Name = 'advance_waypoint';
elems(1).Dimensions = 1;
elems(1).DimensionsMode = 'Fixed';
elems(1).DataType = 'boolean';
elems(1).Complexity = 'real';
elems(1).Min = [];
elems(1).Max = [];
elems(1).DocUnits = '';
elems(1).Description = sprintf('Whether the current waypoint has been reached.');

elems(2) = Simulink.BusElement;
elems(2).Name = 'motors_enabled';
elems(2).Dimensions = 1;
elems(2).DimensionsMode = 'Fixed';
elems(2).DataType = 'boolean';
elems(2).Complexity = 'real';
elems(2).Min = [];
elems(2).Max = [];
elems(2).DocUnits = '';
elems(2).Description = sprintf('Whether motors are enabled. Used for telemetry and operator situational awareness. \nNOTE: this does not effect the outputs to the ESC / Motors, those must be controlled internally, this is simply output from the VMS letting\nthe rest of the system know whether the motors are enabled or not.');

elems(3) = Simulink.BusElement;
elems(3).Name = 'mode';
elems(3).Dimensions = 1;
elems(3).DimensionsMode = 'Fixed';
elems(3).DataType = 'int8';
elems(3).Complexity = 'real';
elems(3).Min = [];
elems(3).Max = [];
elems(3).DocUnits = '';
elems(3).Description = sprintf('The aircraft mode:\n0: Manual flight mode\n1: Stability augmented flight mode\n2: Attitude feedback flight mode\n3: Autonomous flight mode\n4: A test point or test flight mode');

elems(4) = Simulink.BusElement;
elems(4).Name = 'sbus';
elems(4).Dimensions = 1;
elems(4).DimensionsMode = 'Fixed';
elems(4).DataType = 'Bus: SbusCmd';
elems(4).Complexity = 'real';
elems(4).Min = [];
elems(4).Max = [];
elems(4).DocUnits = '';
elems(4).Description = sprintf('SBUS outputs from the VMS');

elems(5) = Simulink.BusElement;
elems(5).Name = 'pwm';
elems(5).Dimensions = 1;
elems(5).DimensionsMode = 'Fixed';
elems(5).DataType = 'Bus: PwmCmd';
elems(5).Complexity = 'real';
elems(5).Min = [];
elems(5).Max = [];
elems(5).DocUnits = '';
elems(5).Description = sprintf('PWM outputs from the VMS');

elems(6) = Simulink.BusElement;
elems(6).Name = 'throttle_cmd_prcnt';
elems(6).Dimensions = 1;
elems(6).DimensionsMode = 'Fixed';
elems(6).DataType = 'single';
elems(6).Complexity = 'real';
elems(6).Min = [];
elems(6).Max = [];
elems(6).DocUnits = '';
elems(6).Description = sprintf('Throttle command, %%. Used for telemetry.');

elems(7) = Simulink.BusElement;
elems(7).Name = 'battery';
elems(7).Dimensions = 1;
elems(7).DimensionsMode = 'Fixed';
elems(7).DataType = 'Bus: BatteryData';
elems(7).Complexity = 'real';
elems(7).Min = [];
elems(7).Max = [];
elems(7).DocUnits = '';
elems(7).Description = '';

elems(8) = Simulink.BusElement;
elems(8).Name = 'aux';
elems(8).Dimensions = 24;
elems(8).DimensionsMode = 'Fixed';
elems(8).DataType = 'single';
elems(8).Complexity = 'real';
elems(8).Min = [];
elems(8).Max = [];
elems(8).DocUnits = '';
elems(8).Description = sprintf('Aux data for logging. This can be used to store internal states of\nthe control laws for analysis and debugging.');

VmsData = Simulink.Bus;
VmsData.HeaderFile = header_file;
VmsData.Description = sprintf('Data from the Vehicle Management System (VMS).');
VmsData.DataScope = 'Imported';
VmsData.Alignment = -1;
VmsData.PreserveElementDimensions = 0;
VmsData.Elements = elems;
clear elems;
assignin('base','VmsData', VmsData);

