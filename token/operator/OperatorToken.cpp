#include "OperatorToken.h"

char *OperatorToken::toString() {
    return getValue();
}

OperatorToken::~OperatorToken() {
    delete[] getValue();
}
