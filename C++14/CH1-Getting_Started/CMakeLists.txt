cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(convert1 convert1.cpp)
add_executable(convert2 convert2.cpp)
add_executable(convert3 convert3.cpp)
add_executable(print1 print1.cpp)
add_executable(print2 print2.cpp)
add_executable(square square.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
