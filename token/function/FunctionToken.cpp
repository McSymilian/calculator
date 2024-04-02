#include "FunctionToken.h"

char *FunctionToken::toString() {
    return getValue();
}

FunctionToken::~FunctionToken() {
    delete getValue();
}
