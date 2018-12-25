//
// Created by elisha on 12/15/18.
//

#ifndef PROJECT_MUL_H
#define PROJECT_MUL_H

#include "BinaryExpression.h"

class Mul : public BinaryExpression{
public:
    Mul(Expression* left, Expression* right);
    virtual ~Mul();

private:
    virtual double evaluate();
};
#endif //PROJECT_MUL_H
