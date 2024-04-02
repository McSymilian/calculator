

#ifndef CALCULATOR_NUMERICTOKEN_H
#define CALCULATOR_NUMERICTOKEN_H


#include "../Token.h"

class NumericToken: public Token<int> {
public:
    explicit NumericToken(int value) : Token(TokenType::NUMBER, value) {}
    ~NumericToken() override = default;

    char* toString() override;
};


#endif //CALCULATOR_NUMERICTOKEN_H
