cmake_minimum_required(VERSION 3.21)
project(Cpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(Cpp main.cpp
        src/roman_numerals.cpp src/roman_numerals.hpp
        src/get_loop.cpp src/get_loop.hpp
        src/histogram.cpp src/histogram.hpp
        src/beggars.cpp src/beggars.hpp
        src/play_pass.cpp src/play_pass.hpp
        src/decimal_time_conversion.cpp src/decimal_time_conversion.hpp)
