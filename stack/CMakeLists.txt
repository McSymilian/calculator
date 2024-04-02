cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)
set(stack_source_files
        Stack.h
        Stack.cpp
        SimplexNode.h
        SimplexNode.cpp
)
add_library(stack ${stack_source_files})
target_include_directories(stack PUBLIC ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/..)
