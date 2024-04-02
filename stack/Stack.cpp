#include "Stack.h"

template<typename T>
T Stack<T>::pop() {
    if (top == nullptr) {
        throw std::runtime_error("Stack is empty");
    }
    T topValue = top->getValue();
    auto* temp = top;
    top = top->getNext();
    delete temp;
    size--;
    return topValue;
}

template<typename T>
T Stack<T>::peek() {
    if (top == nullptr) {
        throw std::runtime_error("Stack is empty");
    }
    return top->getValue();
}

template<typename T>
Stack<T>::~Stack() {
    while (top != nullptr) {
        auto *temp = top;
        top = top->getNext();
        delete temp;
    }
}

template<typename T>
int Stack<T>::getSize() {
    return size;
}

template<typename T>
bool Stack<T>::isEmpty() {
    return size == 0;
}

template<typename T>
void Stack<T>::push(T value) {
    top = new SimplexNode<T>(value, top);
    size++;
}

template<typename T>
Stack<T>::Stack() {
    top = nullptr;
    size = 0;
}
