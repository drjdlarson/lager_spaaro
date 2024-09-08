# Tutorial 5 - Custom sensor and features in SPAARO

This tutorial outline the processes needed to modify/add functionalities to SPAARO. This include adding new variables such as sensors, or estimation datas for processing and loggin and adding new dependency from external repositories. These are only for advanced users looking to develop new drivers for new sensors or modify the dependencies. Only control law development might not need any information from this tutorial

## Hardware components

* None

## Add new variables to data structure in C++ code

All the data used by SPAARO are defined in ```/flight_code/include/global_defs.h```. For this example, let's add a new data struct for a new sensor called ```foo``` and the data coming from this sensor is a float ```bar```. Since this is a sensor data, it will be added to the ```SensorData``` structure. 

Defining a new structure for the ```foo``` sensor (line 441 in ```/flight_code/include/global_defs.h```)
```
struct FooData {
  float bar;
};
```

Add the ```foo``` structure to ```SensorData``` structure (line 477 in ```/flight_code/include/global_defs.h```)
```
struct SensorData {
  InceptorData inceptor;
  ImuData fmu_imu;
  MagData fmu_mag;
  ...
  FooData foo;
};
```

Now the float ```bar``` can be accessed from other C++ functions in SPAARO by referencing ```sensor.foo.bar```. It is up to the developer to implement the sensor drivers including how the data are read, what data structures is needed and how the driver should be initialized and called back in the relevant C++ code (for this example, since ```foo``` is a sensor, the relevant driver implementation for initialization and update needs to be added to ```/flight_code/flight/sensor.cc```)

## Add new variables to be logged by datalog system

While ```foo``` sensor with data ```bar``` exists to be used by SPAARO C++ components, it is not logged into the data flash by default. One can add ```bar``` signal into one of the ```aux``` signal in the ```vms``` data structure. However, it can also be added directly to the datalog system with a custom names instead of being abstracted to an ```vms.aux``` signal. 

### Update DatalogMsg structure

Firstly, ```bar``` needs to be added to the DatalogMsg defined in ```/common/datalog_fmu.h``` which is the definition used by SPAARO for all the logged messages. For this example, add the following line in the file (line 371 in ```/common/datalog_fmu.h```)
```
uint64_t bar : 32;
```