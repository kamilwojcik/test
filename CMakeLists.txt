cmake_minimum_required(VERSION 3.0)

project(projekt0)

add_executable(projekt0 main.cpp klasa1.cpp)

install(TARGETS projekt0 RUNTIME DESTINATION bin)
