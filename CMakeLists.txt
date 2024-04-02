cmake_minimum_required(VERSION 3.27)
project(calculator CXX)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES main.cpp)
add_subdirectory(stack)
add_subdirectory(token)

#link_directories(stack token)
#
#include_directories(stack token)


add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} stack token)