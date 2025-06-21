cmake_minimum_required(VERSION 3.14) 
project(stankOS)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add all folders that have headers
include_directories(include bootloader external/Catch2/single_include)

# Main executable
add_executable(stankOS 
               src/main.cpp
               bootloader/bootloader.cpp)

# Unit test executable (no linking needed for Catch2 V2)
add_executable(test_bootloader
                tests/test_bootloader.cpp
                bootloader/bootloader.cpp)
