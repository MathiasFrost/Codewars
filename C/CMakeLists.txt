cmake_minimum_required(VERSION 3.21)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C
        main.c
        src/roman_numerals.c src/roman_numerals.h
        src/get_loop.c src/get_loop.h
        src/histogram.c src/histogram.h
        src/next_bigger.c src/next_bigger.h
        src/alphabetical_addition.c src/alphabetical_addition.h
        src/bit_counting.c src/bit_counting.h
        src/play_pass.h src/play_pass.c)
