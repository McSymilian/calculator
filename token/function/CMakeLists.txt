set(function_source_files
        FunctionToken.h
        FunctionToken.cpp
)

add_library(function ${function_source_files})
target_include_directories(function PUBLIC ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/..)
target_link_libraries(function token)