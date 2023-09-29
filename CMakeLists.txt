cmake_minimum_required(VERSION 3.26)
project(crack_c C)

set(CMAKE_C_STANDARD 11)

add_executable(crack_c
        "c programmes.c"
        "name,email ID,approx age.c"
        "swap 2 numbers.c"
        "c programmes.c"
        "print triangle pattern.c"
        "ASCII VALUE.c"
        "area of circle.c"
        "swapping numbers using +- operators.c"
        "celcius to farenhite.c"
        helloworld.c)
