
#ifndef CALCULATOR_TOKENTYPE_H
#define CALCULATOR_TOKENTYPE_H
enum class TokenType {
    NUMBER = 0b0,
    SIMPLE_OPERATOR = 0b11,
    ADVANCED_OPERATOR = 0b111,
    FUNCTION = 0b1001,
    PARENTHESIS_OPEN = 0b10001,
    PARENTHESIS_CLOSE = 0b100001,
};

bool isParenthesis(char* c);
bool isParenthesis(char c);
bool isOpenParenthesis(char c);
bool isOpenParenthesis(char* c);
bool isCloseParenthesis(char c);
bool isCloseParenthesis(char* c);
bool isOperator(char c);
bool isOperator(char* c);
bool isSimpleOperator(char c);
bool isSimpleOperator(char* c);
bool isAdvancedOperator(char c);
bool isAdvancedOperator(char* c);
bool isDigit(char c);
bool isNumber(char* c);
bool isWhitespace(char c);
bool isFunction(char* c);

#endif //CALCULATOR_TOKENTYPE_H
