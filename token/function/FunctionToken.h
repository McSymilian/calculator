

#ifndef CALCULATOR_FUNCTIONTOKEN_H
#define CALCULATOR_FUNCTIONTOKEN_H


#include "../Token.h"

class FunctionToken: public Token<char*>{
public:
    explicit FunctionToken(char* value) : Token(TokenType::FUNCTION, value) {}
    ~FunctionToken() override;

    char* toString() override;
};


#endif //CALCULATOR_FUNCTIONTOKEN_H
