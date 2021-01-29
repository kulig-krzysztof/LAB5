cmake_minimum_required( VERSION 3.19.0 )
project( LAB5 )

#include files
include_directories( ./include/LAB5  ./src )

#target
add_executable(main ./src/main.cpp  ./src/matrix.cpp )