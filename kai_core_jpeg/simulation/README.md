## JPEG Decoder Simulation

Verilator can convert Verilog module to a cycle-accurate behavioral model in C++.
The C++ wrapper file "sim_main.cpp" can be compiled and linked with the Verilated
files. It will instantiate jpeg_core top module, read JPEG file and feed data to
jpeg_core model, run and evaluate jpeg_core model, finally capture output data of
jpeg_core and save as PPM format file.


### Prerequisite Packages
* [Verilator](http://www.veripool.org/projects/verilator/wiki/Installing)
* [CMake](https://cmake.org/install/)

### Building / Usage
```
# Build
mkdir build
cd build
cmake ..
make

# Run
./jpeg_decode my_image.jpg bitmap.ppm
```
