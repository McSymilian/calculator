set(parenthesis_source_files
        Parenthesis.h
        Parenthesis.cpp
        OpenParenthesis.h
        ClosedParenthesis.h
)
add_library(parenthesis ${parenthesis_source_files})
target_include_directories(parenthesis PUBLIC ${CMAKE_CURRENT_LIST_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/..)
target_link_libraries(parenthesis token)