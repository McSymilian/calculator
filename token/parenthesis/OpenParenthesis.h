//
// Created by maksy on 02.04.2024.
//

#ifndef CALCULATOR_OPENPARENTHESIS_H
#define CALCULATOR_OPENPARENTHESIS_H

#include "Parenthesis.h"

class OpenParenthesis: public Parenthesis {
public:
    OpenParenthesis(): Parenthesis(TokenType::PARENTHESIS_OPEN, new char{'('}) {}
    ~OpenParenthesis() override = default;
};
#endif //CALCULATOR_OPENPARENTHESIS_H
