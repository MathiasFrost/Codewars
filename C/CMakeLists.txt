cmake_minimum_required(VERSION 3.21)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C main.c src/RomanNumerals.c src/RomanNumerals.h src/GetLoop.c src/GetLoop.h src/Histogram.c src/Histogram.h src/NextBigger.c src/NextBigger.h src/AlphabeticalAddition.c src/AlphabeticalAddition.h src/BitCounting.c src/BitCounting.h)
