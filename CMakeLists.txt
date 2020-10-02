# cmake_minimum_required(VERSION <specify CMake version here>)
project(C_Projects C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(C_Projects
        Accumulate.c
        Caesar.c
        Coin.c
        Compare.c
        Find.c
        Letters.c
        Polygonal.c
        Quadratic.c
        Range.c
        SelectionSort.c)
