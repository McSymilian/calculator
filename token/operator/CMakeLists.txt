set(operator_source_files
        OperatorToken.h OperatorToken.cpp
        SimpleOperatorToken.h
        AdvancedOperatorToken.h
)
add_library(operator ${operator_source_files})
target_include_directories(operator PUBLIC ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/..)
target_link_libraries(operator token)
