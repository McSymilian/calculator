#include "TokenType.h"
#include <regex>

bool isParenthesis(char* c) {
    return isParenthesis(c[0]);
}

bool isParenthesis(char c) {
    return c == '(' || c == ')';
}

bool isOpenParenthesis(char c) {
    return c == '(';
}
bool isOpenParenthesis(char* c) {
    return isOpenParenthesis(c[0]);
}

bool isCloseParenthesis(char c) {
    return c == ')';
}
bool isCloseParenthesis(char* c) {
    return isCloseParenthesis(c[0]);
}

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isWhitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

bool isNumber(char* c) {
    for (int i = 0; c[i] != '\0'; i++) {
        if (!isDigit(c[i])) {
            return false;
        }
    }
    return true;
}
bool isOperator(char* c) {
    return isOperator(c[0]);
}
bool isSimpleOperator(char c) {
    return c == '+' || c == '-';
}
bool isSimpleOperator(char* c) {
    return isSimpleOperator(c[0]);
}
bool isAdvancedOperator(char c) {
    return c == '*' || c == '/';
}
bool isAdvancedOperator(char* c) {
    return isAdvancedOperator(c[0]);
}

bool isFunction(char* c) {
    std::regex pattern("MAX|MIN|IF|N");
    return std::regex_match(&c[0], pattern);
}