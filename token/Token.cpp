#include "Token.h"
template<typename T>
void Token<T>::setValue(T value) {
    this->value = value;
}

template<typename T>
T Token<T>::getValue() const {
    return value;
}
