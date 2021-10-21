cmake_minimum_required(VERSION 3.11)

#add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(poker1 poker1.cpp card.hpp deck.hpp)
add_executable(poker2 poker2.cpp card.hpp deck.hpp)
add_executable(poker3 poker3.cpp card.hpp deck.hpp eval.hpp)

# Building on Windows with CMake and MinGW
# Run on (cmd)
#
# mkdir build
# cd build
# cmake .. -G "MinGW Makefiles"
# mingw32-make
