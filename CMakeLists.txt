cmake_minimum_required(VERSION 3.15)
project(beginning_c_plus_plus_programming)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(beginning_c_plus_plus_programming
        .gitattributes
        README.md section4/FirstProgram.cpp section6/Declaring_Variables.cpp section6/sec6Exercise1.cpp section6/sec6_SizeOf.cpp section6/sec6_constants.cpp section7/sec7_56.cpp section7/sec7_58_vectors.cpp section8/cast_bool_relational_logical_operators.cpp section9/if_else_loops_switch.cpp section10/sec10_strings.cpp section11/functions_math.cpp section11/functions_part2_vid108.cpp section12/PointersSec12.cpp section12/pointers_functions_pass_returning.cpp section19/stream218_boolean.cpp section19/section19_integers.cpp section19/sec19_stream_align_and_fill.cpp section19/sec19_floating_points.cpp section19/sec19_challenge1.cpp section19/sec_read_from_file.cpp section19/sec19_read_text_file_live_demo.cpp section19/sec19_226_readfile2.cpp section19/sec19_challenge2.cpp section19/229challenge3.cpp section19/232_write_to_text_file.cpp section19/fcc.cpp)
