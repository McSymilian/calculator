
#ifndef CALCULATOR_SIMPLEOPERATORTOKEN_H
#define CALCULATOR_SIMPLEOPERATORTOKEN_H

#include "OperatorToken.h"

class SimpleOperatorToken: public OperatorToken {
public:
    explicit SimpleOperatorToken(char* value) : OperatorToken(TokenType::SIMPLE_OPERATOR, value) {}
    explicit SimpleOperatorToken(char value) : OperatorToken(TokenType::SIMPLE_OPERATOR, new char {value}) {}
    ~SimpleOperatorToken() override = default;
};


#endif //CALCULATOR_SIMPLEOPERATORTOKEN_H
