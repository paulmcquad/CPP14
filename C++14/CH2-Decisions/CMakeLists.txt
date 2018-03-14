cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(count1 count1.cpp)
add_executable(count2 count2.cpp)
add_executable(even1 even1.cpp)
add_executable(even2 even2.cpp)
add_executable(nim nim.cpp)
add_executable(prime1 prime1.cpp)
add_executable(range range.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
