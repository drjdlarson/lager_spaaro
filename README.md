# Simulink/C++ Platform for Aeronautics and Autonomy Research and Operations (SPAARO) Tutorial
SPAARO, when coupled with Bolder Flight control systems, enables engineers to quickly research, develop, and deploy control laws, autonomy algorithms, and flight software. This repo is a fork by the University of Alabama Laboratory for Autonomy, GNC, and Estimation Research (LAGER) for its internal systems and vehicles. 

This branch acts as a sandbox for new users to learn SPAARO platform. Although some tutorials is specific to LAGER hardwares, this tutorial will try to be as general as possible. This tutorial will focus on the Autocode functionalities as well as hardware integration to get a real vehicle operational. This tutorial will not focus on the Simulation aspect of SPAARO. More documentation can be found in the original [SPAARO](https://github.com/bolderflight/spaaro) repository.

## Getting started
Setup Git on your machine natively or in WSL. This repo has been tested with Ubuntu 18.04, 20.04, 22.04 native and WSL (WSL1 is recommended if using MATLAB Simulink functionalities). Currently, lager-spaaro is setup with MATLAB 2023A. Additionally, you need a serial monitor (i.e. Arduino built-in monitor) to recieve startup and debug messages from the microcontroller.

Clone this repo and rreate your own sandbox branch by 

```git checkout -b <sandbox-name> origin/tutorial```

Your sandbox can be pushed to remote by

```git push --set-upstream origin <sandbox-name>```

!!! Please make sure to push your sandbox to a new branch in remote and not to the tutorial branch !!!

Run the setup script with

```sudo ./setup.sh```

I recommend VSCode as it comes with built in terminal and has Serial Monitor extension to ease development and testing. 

### Troubleshooting
These are tips from BFS build-tools [repository](https://github.com/bolderflight/build-tools)
#### WSL
If this is install in WSL and you're having issues running git on the Windows file system, you can edit or create */etc/wsl.conf* in WSL and add:

```
[automount]
options = "metadata" 
```

Then reboot Windows. 

#### Linux
You may need to download udev rules to enable uploading code to the microcontrollers. Download the [udev rules](https://www.pjrc.com/teensy/00-teensy.rules) and copy the file to */etc/udev/rules.d* 

```
sudo cp 00-teensy.rules /etc/udev/rules.d/
```

## Tutorials 
The tutorials are separated into their own directories. It is noted that the file structure in each tutorial directory is identical to the main spaaro repository. Separating tutorial into different directory aims to provide an isolated sandbox relavent to the topics of each tutorial. 

## TO DOs
- [x] How to setup Matlab + Simulink
- [X] Outline of Simulink model
- [X] Outline of input and outputs in Simulink
- [X] Autocode to upload
- [ ] Telemetry interactions
- [ ] Datalog explanation
- [x] Outline of C++ code
- [ ] CMakeList explain
- [ ] Add vehicle
- [ ] Add custom data to log
- [ ] EKF modifications
- [ ] Add new sensors and drivers
