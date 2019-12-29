cmake_minimum_required(VERSION 3.15)
project(beginning_c_plus_plus_programming)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(beginning_c_plus_plus_programming
        .gitattributes
        README.md section4/FirstProgram.cpp section6/Declaring_Variables.cpp section6/sec6Exercise1.cpp section6/sec6_SizeOf.cpp section6/sec6_constants.cpp section7/sec7_56.cpp section7/sec7_58_vectors.cpp section8/cast_bool_relational_logical_operators.cpp section9/if_else_loops_switch.cpp section10/sec10_strings.cpp)
