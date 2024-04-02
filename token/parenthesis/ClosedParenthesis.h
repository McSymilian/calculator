//
// Created by maksy on 02.04.2024.
//

#ifndef CALCULATOR_CLOSEDPARENTHESIS_H
#define CALCULATOR_CLOSEDPARENTHESIS_H

#include "Parenthesis.h"

class ClosedParenthesis: public Parenthesis {
public:
    ClosedParenthesis(): Parenthesis(TokenType::PARENTHESIS_CLOSE, new char{')'}) {}
    ~ClosedParenthesis() override = default;

};
#endif //CALCULATOR_CLOSEDPARENTHESIS_H
