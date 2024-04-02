#ifndef CALCULATOR_PARENTHESIS_H
#define CALCULATOR_PARENTHESIS_H

#include "../Token.h"

class Parenthesis: public Token<char*> {
protected:
    explicit Parenthesis(TokenType type, char* value) : Token(type, value) {}
public:
    char* toString() override;
    ~Parenthesis() override = default;
};

#endif //CALCULATOR_PARENTHESIS_H
