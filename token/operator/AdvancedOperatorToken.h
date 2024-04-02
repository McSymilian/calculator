#ifndef CALCULATOR_ADVANCEDOPERATORTOKEN_H
#define CALCULATOR_ADVANCEDOPERATORTOKEN_H


#include "OperatorToken.h"

class AdvancedOperatorToken: public OperatorToken {
public:
    explicit AdvancedOperatorToken(char* value) : OperatorToken(TokenType::ADVANCED_OPERATOR, value) {}
    explicit AdvancedOperatorToken(char value) : OperatorToken(TokenType::ADVANCED_OPERATOR, new char{value}) {}
    ~AdvancedOperatorToken() override = default;
};



#endif //CALCULATOR_ADVANCEDOPERATORTOKEN_H
