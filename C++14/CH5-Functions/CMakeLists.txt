cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(avg avg.cpp)
add_executable(avg2 avg2.cpp)
add_executable(dice dice.cpp)
add_executable(gcf gcf.cpp)
add_executable(nim2 nim2.cpp)
add_executable(prime2 prime2.cpp)
add_executable(tower tower.cpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
