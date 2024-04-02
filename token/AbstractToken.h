#ifndef CALCULATOR_ABSTRACTTOKEN_H
#define CALCULATOR_ABSTRACTTOKEN_H

#include "TokenType.h"

class AbstractToken {
private:
    TokenType type;
public:
    explicit AbstractToken(TokenType type) : type(type) {}

    virtual char* toString() = 0;

    TokenType getType() const;

    virtual ~AbstractToken() = default;
};

#endif //CALCULATOR_ABSTRACTTOKEN_H
