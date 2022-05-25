cmake_minimum_required(VERSION 3.21)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C main.c Source/RomanNumerals.c Source/RomanNumerals.h Source/GetLoop.c Source/GetLoop.h Source/BallUpwards.c Source/BallUpwards.h Source/Histogram.c Source/Histogram.h Source/NextBigger.c Source/NextBigger.h Source/AlphabeticalAddition.c Source/AlphabeticalAddition.h)
