#include <iostream>
#include <cstring>
#include <cstdlib>
#include "AbstractToken.h"
#include "SimpleOperatorToken.h"
#include "AdvancedOperatorToken.h"
#include "FunctionToken.h"
#include "OpenParenthesis.h"
#include "NumericToken.h"
#include "Stack.h"


void addNewOperator(Stack<AbstractToken *> &equasion, Stack<AbstractToken *> &operators, AbstractToken *token);

int main() {
    int N;
    std::cin >> N;
    while (N--) {
        char* str = {};

        Stack<AbstractToken*> equasion;
        Stack<AbstractToken*> operators;
        while (strcmp(str, ".") != 0) {
            std::cin >> str;

            if (isOperator(str)) {
                if (isSimpleOperator(str)) {
                    auto token = new SimpleOperatorToken(str);
                    addNewOperator(equasion, operators, token);
                }
                else {
                    auto token = new AdvancedOperatorToken(str);
                    addNewOperator(equasion, operators, token);
                }
            }
            else if (isFunction(str)) {
                auto token = new FunctionToken(str);

                addNewOperator(equasion, operators, token);
            }
            else if (isOpenParenthesis(str)) {
                operators.push(new OpenParenthesis());
            }
            else if (isCloseParenthesis(str)) {
                while (operators.peek()->getType() != TokenType::PARENTHESIS_OPEN) {
                    equasion.push(operators.pop());
                }
            }
            else
                equasion.push(new NumericToken(strtol(str, nullptr, 10)));

        }

        std::cout << "Equasion: ";
        while (!equasion.isEmpty()) {
            std::cout << equasion.pop()->toString() << " ";
        }
    }
    return 0;
}

void addNewOperator(Stack<AbstractToken *> &equasion, Stack<AbstractToken *> &operators, AbstractToken *token) {
    while (!operators.isEmpty() && operators.peek()->getType() <= token->getType())
        equasion.push(operators.pop());

    operators.push(token);
}
