cmake_minimum_required(VERSION 2.6) 

project(lab-1)

include_directories(include)

set(SOURCE_EXE examples/main.cpp)

set(SOURCE_LIB sources/print_hello_world.cpp)

set(SOURCE_TEST test/main.cpp)

add_library(hw STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

add_executable(test ${SOURCE_TEST})

target_link_libraries(main hw)