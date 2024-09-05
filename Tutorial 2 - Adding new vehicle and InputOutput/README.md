# Tutorial 2 - Autocode generation
This tutorial will outline the process to add a new vehicle to the framework as well as showcasing the input and output functionality and log review.

## Hardware components

* FMU-MINI
* SBUS receiver and transmitter
* Mavlink telemetry module

Make the appropriate connections between the hardwares and ensure that the radio modules are bound to each other. 

## Adding a new vehicle
When adding a new vehicle for development, several things needs to be updated within the C++ and MATLAB/Simulink portion of the code

For this tutorial, let's create a new vehicle name "test" with a correponding control law name "test_vms". It is noted several features in the normal SPAARO application has been disabled, i.e. GPS check, EKF, to ensure the minimum hardware needed to follow the this tutorial. Disabled code snippets are denoted as such in the corresponding C++ files. 

### C++ Modifications
A config file for the new vehicle must first be created to reflect the hardware setup. One can copy the baseline ```/flight_code/flight/config.cc``` to ```/flight_code/flight/config_test.cc``` and make any neccessary changes (everything is default in this tutorial).

Then in ```/flight_code/CMakeLists.txt```, one need to configure CMake to target the correct config file based on the ```-D VEHICLE``` argument. At around line 54 where there is an if expression ```if(VEHICLE STREQUAL "<VEHICLE_NAME>")```. For this example, add the following lines before the ```else()``` expression

```
elseif (VEHICLE STREQUAL "TEST")
  message("Using TEST config.cc")
  set(CONFIG_CC config_test.cc)
```

### MATLAB Modification
First, a vehicle specific matlab file definition is needed. One can copy the baseline ```/simulation/aircraft/tutorial.m``` to ```/simulation/aircraft/test.m```. In the new file, make sure to change to ```Aircraft.name='test'```. 

In ```/simulation/config.m``` file, toward the top where there are a list of vehicle to choose, add ```vehicle='test';```. Around line 19 where one configure which FMU to choose. Since we are targeting the *FMU-MINI* hardware, one can append the if expression corresponding to ```fmu_version='mini'``` with ``` || strcmpi(vehicle, 'test')```. This will add the new ```test``` vehicle to a list of existing vehicle supported by lager_spaaro as well as assign ```test``` to use *FMU-MINI*.

Make a new VMS or control law simulink model. Duplicate the ```/simulation/vms/tutorial_vms.slx``` to ```/simulation/vms/test_vms.slx```. 

In ```/simulation/setup.m``` file, around line 132 where one can select which VMS file to open if the ```vms_only``` option is set to true. Add the following line at the end of the if-elseif structure
```
elseif strcmp (vehicle,'test')
    test_vms()
```

This setup so that when running ```setup.m``` with the configuration prescribed in this tutorial, the ```/simulation/vms/test_vms.slx``` is opened.

### Build and upload
After these modification, a new vehicle is added to SPAARO and can be compiled and uploaded to the FMU for vehicle name ```test``` following the build instruction in Tutorial 1. Since the debug mode is set to true in ```/flight_code/flight/config_test.cc```, one needs to open a serial monitor for the rest of the flight code to proceed. After then, one can attempt to connect the FMU to a ground control software such as Mission Planner.

## Input and Output demonstration

This section mainly explain the contents of the ```/simulation/vms/tutorial_vms.slx``` which is the same as the ```/simulation/vms/test_vms.slx```. This tutorial hopes to explain the typical implementation for reading and processing inceptor signal(RC commands), telemetry parameters, logging. 
