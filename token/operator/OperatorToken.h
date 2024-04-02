//
// Created by maksy on 02.04.2024.
//

#ifndef CALCULATOR_OPERATORTOKEN_H
#define CALCULATOR_OPERATORTOKEN_H

#include "../Token.h"

class OperatorToken: public Token<char*> {
protected:
    explicit OperatorToken(TokenType type, char* value) : Token(type, value) {}
public:
    char* toString() override;
    ~OperatorToken() override;

};


#endif //CALCULATOR_OPERATORTOKEN_H
