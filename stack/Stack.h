
#ifndef CALCULATOR_STACK_H
#define CALCULATOR_STACK_H

#include <stdexcept>
#include "SimplexNode.h"

template <typename T>
class Stack {
private:
    SimplexNode<T>* top;
    int size;
public:
    Stack();

    void push(T value);

    T pop();

    T peek();

    int getSize();

    bool isEmpty();

    ~Stack();
};

#endif //CALCULATOR_STACK_H
