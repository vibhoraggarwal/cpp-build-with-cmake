cmake_minimum_required (VERSION 3.5)
project (project_name)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)
include_directories(include)
add_executable(helloworld src/main.cpp)