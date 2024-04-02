#include "SimplexNode.h"

template<typename T>
SimplexNode<T> *SimplexNode<T>::getNext() {
    return next;
}

template<typename T>
void SimplexNode<T>::setNext(SimplexNode<T> *next) {
    this->next = next;
}

template<typename T>
SimplexNode<T>::SimplexNode(T data): value(data) {
    this->next = nullptr;
}

template<typename T>
T SimplexNode<T>::getValue() {
    return value;
}