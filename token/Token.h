#ifndef CALCULATOR_TOKEN_H
#define CALCULATOR_TOKEN_H

#include "TokenType.h"
#include "AbstractToken.h"

template <typename T>
class Token: public AbstractToken {
private:
    T value;
protected:
    explicit Token(TokenType type, T value) : AbstractToken(type),  value(value) {}
public:
    char* toString() override = 0;

    virtual T getValue() const;

    void setValue(T value);

    virtual ~Token() = default;
};


#endif //CALCULATOR_TOKEN_H
