cmake_minimum_required(VERSION 3.16)
project(daily_coding_problem)

set(CMAKE_CXX_STANDARD 17)

function(COMPILE_FILE FILE)
    add_executable(${FILE} ${FILE}.cpp)
endfunction(COMPILE_FILE)

COMPILE_FILE(001_array_sum)
