#ifndef CALCULATOR_SIMPLEXNODE_H
#define CALCULATOR_SIMPLEXNODE_H

template <typename T>
class SimplexNode {
private:

    T value;
    SimplexNode<T>* next;

public:
    T getValue();

    SimplexNode<T>* getNext();

    void setNext(SimplexNode<T>* next);

    explicit SimplexNode(T data);

    SimplexNode(T data, SimplexNode<T>* next): value(data), next(next) {}

    virtual ~SimplexNode() = default;
};




#endif //CALCULATOR_SIMPLEXNODE_H
