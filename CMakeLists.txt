cmake_minimum_required(VERSION 3.15)
project(beginning_c_plus_plus_programming)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(beginning_c_plus_plus_programming
        .gitattributes
        README.md section4/FirstProgram.cpp section6/Declaring_Variables.cpp section6/sec6Exercise1.cpp)
