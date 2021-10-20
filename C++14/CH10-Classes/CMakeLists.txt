cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(fract2 fract2.cpp)
add_executable(fract3 fract3.cpp)
add_executable(point point.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
