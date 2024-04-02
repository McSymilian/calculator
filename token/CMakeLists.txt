set(token_source_files
        Token.h Token.cpp
        TokenType.h TokenType.cpp
        AbstractToken.h AbstractToken.cpp)

add_library(token ${token_source_files})
add_subdirectory(function)
add_subdirectory(operator)
add_subdirectory(number)
add_subdirectory(parenthesis)
target_link_libraries(token function operator number parenthesis)
#link_directories(${CMAKE_CURRENT_SOURCE_DIR}/function)
#link_directories(${CMAKE_CURRENT_SOURCE_DIR}/operator)
#link_directories(${CMAKE_CURRENT_SOURCE_DIR}/number)
#link_directories(${CMAKE_CURRENT_SOURCE_DIR}/parenthesis)