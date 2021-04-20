      
cmake_minimum_required(VERSION 3.10)
project(IntentRecogniser)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD 99)
include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(googletest)
