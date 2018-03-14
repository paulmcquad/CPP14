cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(count2 count2.cpp)
add_executable(count3 count3.cpp)
add_executable(prime2 prime2.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
