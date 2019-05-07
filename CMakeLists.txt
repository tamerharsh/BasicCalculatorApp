#Top level cmakelist file 
cmake_minimum_required(VERSION 3.4)

project(BasicCalculatorApp)
include_directories(include)

add_subdirectory(src)
add_subdirectory(googletest)

enable_testing()
add_subdirectory(test)
