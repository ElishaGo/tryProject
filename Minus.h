//
// Created by elisha on 12/15/18.
//

#ifndef PROJECT_MINUS_H
#define PROJECT_MINUS_H

#include "BinaryExpression.h"

class Minus : public BinaryExpression{
public:
    Minus(Expression* left, Expression* right);
    virtual ~Minus();

private:
    virtual double evaluate();
};
#endif //PROJECT_MINUS_H
