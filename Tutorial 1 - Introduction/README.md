# Tutorial 1 - Introduction
This tutorial aims to introduce the SPAARO framework. Topics will include the different components such as MATLAB/Simulink code, the C++ code. By the end of the tutorial, one is expected to be able to understand the data structure of Spaaro and how they interact between C++ and MATLAB, and able to open and load an empty flight control model on Simulink.

## Hardware components
None

## C++ Code components
This section outlines the C++ codes and highlight the important components

### Flight code
The flight code to be uploaded exists in the ```/flight_code``` directory. This directory includes all the C++ source and header files. When compiling the project, SPAARO will automatically setup any dependencies such as hardware drivers, EKF, etc. from other repositories. The project utilize CMake to handle project builds. CMake also handle the dependencies as well as different build configuration depending on which vehicle is being built for. 

```/include/hardware_defs.h``` describes the hardware definitions to SPAARO. This is used to configure the project for different teensy and FMU version such as FMU-V1, FMU-V2 or FMU-MINI. Generally, no changes are needed to be made here. A useful parameter one can change in this file is the loop rate which is defined by ```FRAME_RATE_HZ``` and  ```FRAME_PERIOD_MS``` for the corresponding board. FMU-MINI have been tested with upto 200Hz rate. 




### Log converter code

## MATLAB/Simulink

### MATLAB code and setup

### Simulink model

