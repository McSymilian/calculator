set(number_source_files
        NumericToken.h
        NumericToken.cpp
)

add_library(number ${number_source_files})
target_include_directories(operator PUBLIC ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/..)
target_link_libraries(number token)