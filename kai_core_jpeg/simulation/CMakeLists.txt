cmake_minimum_required(VERSION 3.8)
project(jpeg_decode)

find_package(verilator HINTS $ENV{VERILATOR_ROOT} ${VERILATOR_ROOT})
if (NOT verilator_FOUND)
  message(FATAL_ERROR "Verilator was not found. Either install it, or set the VERILATOR_ROOT environment variable")
endif()

# Create a new executable target that will contain all your sources
add_executable(jpeg_decode ./sim_main.cpp)

# Add the Verilated circuit to the target
verilate(jpeg_decode TRACE
  INCLUDE_DIRS "../src_v"
  SOURCES ../src_v/jpeg_core.v)
