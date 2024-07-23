# Simulink/C++ Platform for Aeronautics and Autonomy Research and Operations (SPAARO) Tutorial
SPAARO, when coupled with Bolder Flight control systems, enables engineers to quickly research, develop, and deploy control laws, autonomy algorithms, and flight software. This repo is a fork by the University of Alabama Laboratory for Autonomy, GNC, and Estimation Research (LAGER) for its internal systems and vehicles. 

This branch acts as a sandbox for new users to learn SPAARO platform. Although some tutorials is specific to LAGER hardwares, this tutorial will try to be as general as possible. This tutorial will focus on the Autocode functionalities as well as hardware integration to get a real vehicle operational. This tutorial will not focus on the Simulation aspect of SPAARO. More documentation can be found in the original [SPAARO](https://github.com/bolderflight/spaaro) repository.

## Getting started
Setup Git on your machine natively or in WSL. This repo has been tested with Ubuntu 18.04, 20.04, 22.04 native and WSL (WSL1 is recommended if using MATLAB Simulink functionalities). Currently, lager-spaaro is setup with MATLAB 2023A. Additionally, you need a serial monitor (i.e. Arduino built-in monitor) to recieve startup and debug messages from the microcontroller.

Clone this repo and switch to the tutorial branch by 

```git checkout -b tutorial origin/tutorial```

Create your own sandbox branch by 

```git checkout -b <sandbox-name>```

Your sandbox can be pushed to remote by

```git push --set-upstream origin <sandbox-name>```

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

## TO DOs
- [ ] How to setup Matlab + Simulink
- [ ] Outline of Simulink model
- [ ] Outline of input and outputs in Simulink
- [ ] Autocode to upload
- [ ] Telemetry interactions
- [ ] Datalog explanation
- [ ] Outline of C++ code
- [ ] CMakeList explain
- [ ] Add custom data to log
- [ ] EKF modifications
- [ ] Add new sensors and drivers
