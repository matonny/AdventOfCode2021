cmake_minimum_required(VERSION 3.16)
project(AdventOfCode2021)

set(CMAKE_CXX_STANDARD 14)

IF(CMAKE_COMPILER_IS_GNUCC)
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")
ENDIF(CMAKE_COMPILER_IS_GNUCC)

add_executable(AdventOfCode2021 main.cpp Reader.cpp Reader.h D1.cpp D1.h D2.cpp D2.h D3.cpp D3.h D4.cpp D4.h D5.cpp D5.h D6.cpp D6.h D7.cpp D7.h D8.cpp D8.h D9.cpp D9.h D10.cpp D10.h D11.cpp D11.h D12.cpp D12.h D13.cpp D13.h D14.cpp D14.h D15.cpp D15.h Node.cpp Node.h)