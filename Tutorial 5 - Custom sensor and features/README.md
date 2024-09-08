# Tutorial 5 - Custom sensor and features in SPAARO

This tutorial outline the processes needed to modify/add functionalities to SPAARO. This include adding new variables such as sensors, or estimation datas for processing and loggin and adding new dependency from external repositories. These are only for advanced users looking to develop new drivers for new sensors or modify the dependencies. Only control law development might not need any information from this tutorial.

NOTE: The examples provide in this tutorial is for reference only and the project may not build with only the additions in this example without appropriate implementations.

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

Each data is saved as uint64_t in the DatalogMsg buffer to ensure all types of data can fit in the 64-bit slot without changing the size of the preallocated buffer. Here the variable ```bar``` is defined but is only expected to use ony 32-bit since it has type float. Therefore ```bar``` is followed by ``` : 32``` which is a bit-field operator telling the code to know how many bit the data need when compressing it for storage. 

### Update datalog.cc

Now that the new variable is made aware to the datalog system, it needs to be copied from the SPAARO data struct to the datalog struct. The code to do it is in line 557 in ```/flight_code/flight/datalog.cc``` and is shown below

```
datalog_msg_.bar = Scale(ref.sensor.foo.bar, 0.0f, 1000.0f, 10.0f, 0.0f);
```

It is noted that we are using the scaled function which is defined in ```/flight_code/flight/datalog.cc``` as
```
template<typename T>
uint64_t Scale(T val, T min, T max, T sf, T bias) {
  static_assert(std::is_floating_point<T>::value,
                "Only floating point types supported");
  if (val < min) {val = min;}
  if (val > max) {val = max;}
  return static_cast<uint64_t>(val * sf + bias);
}
```

Calling ```Scale()``` is only needed if the ```val``` to be logged is of type float or double. It clamps ```val``` between ```min``` and ```max```. Then scale ```val``` up by ```sf``` factor which should be greater than 1 and then add a ```bias```. Since all the values in SPARRO are logged as unsigned integer, this function allow a float number to retains some decimal points and its sign (if the value has negative values) during compression to unsigned interger. 

This process encode the data from the FMU and log it into the micro SD card.

### Update mat_converter.cc

With the new variable being logged, one must update the mat_converter to account for this new variable during conversion. 

First a new vector to store the new ```bar``` data must be defined by adding (line 374 in ```/mat_converter/mat_converter.cc```)

```
std::vector<float> bar;
```

Then during the portion of the code that decode the compressed log, one needs to add a function to append ```bar``` values in the SD card to the previously defined vector (line 893 in ```/mat_converter/mat_converter.cc```)

```
bar.push_back(Scale(datalog_msg_.sensor.foo.bar, 0.0f, 1000.0f, 10.0f, 0.0f));
```

It is noted that another ```Scale()``` function is called. Its definition in ```/mat_converter/mat_converter.cc``` is the inverse of its definition in ```/flight_code/flight/datalog.cc```. It is used to obtain the original value of the variable prior to compression to unsigned integer given that we use the exact same value for ```min```, ```max```, ```sf```, ```bias```.

After decoding the entire log file, its contents needs to be writen to a ```.mat``` file to be viewed in MATLAB. (line 1237 in ```/mat_converter/mat_converter.cc```)

```
bfs::MatWrite("bar_matlab", bar, output);
```

This will add a variable in the workspace name "bar_matlab" which contains value for ```bar``` during the runtime of SPAARO.

## Add new variables interface with MATLAB/Simulink

The varible ```bar``` from the previous sections are added to the C++ components of SPAARO. However, there are currently no way to access ```bar``` in MATLAB/Simulink. To add the new variables, one must update the bus definitions in the ```/simulation/data/``` directory(MATLAB/Simulink equivalent to C++ data structs).

There are multiple bus definitions for different FMU version. This tutorial will only add ```bar``` to the bus definition of the *FMU-MINI* which is defined in ```/simulation/data/fmu_mini_bus_defs.mat```.

Open MATLAB and load ```/simulation/data/fmu_mini_bus_defs.mat``` to the workspace. Each data struct are stored as "Bus" objects in MATLAB. For this example, we need to create a ```FooData``` bus object and add it to the ```SensorData```. To our current knowledge, the best way to edit bus objects in MATLAB is to double-click any bus in the workspace to open the "Type Editor" GUI. 

To create a new ```FooData``` bus, the easiest method is to duplicate and rename aother sensor bus such as ```AnalogData```. Then in the drop down options for ```FooData```, modify by adding, removing and renaming the elements within. For this example, we have an element name ```bar``` which is type single and has dimension 1. The type and dimension will match with the variable type and dimension in the C++ definition.

To add the created ```FooData``` bus into ```SensorData``` bus, the easiest method again is to select the drop down option for ```SensorData```, duplicate and rename an existing bus such as ```AnalogData```. Then change the "Name" of the bus to ```foo```. Change the "Data Type" to ```Bus: FooData```. 

Save this new bus definition by exporting to a new ```.mat``` file which will replace the original ```/simulation/data/fmu_mini_bus_defs.mat```. Now, the control law in Simulink will have access to the variable ```bar``` from sensor ```foo```.

## Modify/Add dependencies

If one needs to add a new sensor drivers or modify an external SPAARO module such as PWM drivers or navigation filters, SPAARO need to be made aware of these changes via updating CMake.

External dependencies are handled using CMake [FetchContent](https://cmake.org/cmake/help/latest/module/FetchContent.html) functionality. Essentially, CMake gets external dependencies by downloading the corresponding code from relevant github repos and build them with the main SPAARO project.

In this example, given the repo of the external dependency is ```https://github.com/example/foobar.git``` and we want version 1.2.3. We add the following in ```/flight_code/CMakeLists.txt```  (line 273 in ```/flight_code/CMakeLists.txt```)

```
FetchContent_Declare(
  foobar
  GIT_REPOSITORY https://github.com/example/foobar.git
  GIT_TAG v1.2.3
)
FetchContent_MakeAvailable(foobar)
```

This code copy the content of the ```https://github.com/example/foobar.git``` with the release tag 1.2.3 and configure the code of that repo to be built under a project/library name ```foobar```. 

Another way to FetchContent that might be better during initial testing is to target the fork local copy on your machine so you does not to have to push a change before the new library is updated. This can be done with

```
FetchContent_Declare(
  foobar
  SOURCE_DIR /path/to/foobar/
)
FetchContent_MakeAvailable(foobar)
```
 Remember to push and update the release tag of the library so that other people can build SPAARO with the correct library.

Then to allow SPAARO to link the flight code to ```foobar```, it needs to be added as shown in line 387 in ```/flight_code/CMakeLists.txt```. After this, all the functionalities implemented in ```https://github.com/example/foobar.git``` become available to any files in ```/flight_code/``` without even needing to reference it by ```include "foobar.h"```

If one needs to modify an external depency instead, one can fork the neccessary repositories and make the needed change. Then one needs to change the CMake FetchContent command to target the correct GIT_REPOSITORY and GIT_TAG. In lager_spaaro, the following external dependencies or modified or added from the default BFS spaaro project
* sbus - optionally target https://github.com/TL-4319/sbus is ```-D SBUS_SRC=XBEE``` to allow for controlling swarm of vehicle using XBEE Digimesh hardwares. If not define then default to original BFS SBUS library
* mavlink - targets https://github.com/TL-4319/mavlink.git to correct flight mode enumeration for use with Mission Planner
* navigation - targets https://github.com/TL-4319/navigation.git to add moving baseline and indoor beacon support for the ES-EKF