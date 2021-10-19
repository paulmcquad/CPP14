cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(readbin readbin.cpp)
add_executable(readtxt readtxt.cpp)
add_executable(writebin writebin.cpp)
add_executable(writetxt writetxt.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
