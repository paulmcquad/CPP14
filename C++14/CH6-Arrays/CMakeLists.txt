cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(dealer dealer.cpp)
add_executable(print_arr print_arr.cpp)
add_executable(print_n_arr print_n_arr.cpp)
add_executable(stats stats.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
