cmake_minimum_required(VERSION 3.15)
project(Fibonacci_2.0)

enable_testing()

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest)

include_directories(libs)
include_directories(googletest/googletest/include)

set(SOURCE_FILES libs/lib.cpp)

add_executable(main main.cpp ${SOURCE_FILES})
add_executable(tests Tests.cpp ${SOURCE_FILES})

target_link_libraries(tests gtest)