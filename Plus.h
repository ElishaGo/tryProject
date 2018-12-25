//
// Created by elisha on 12/15/18.
//

#ifndef PROJECT_PLUS_H
#define PROJECT_PLUS_H

#include "BinaryExpression.h"

class Plus : public BinaryExpression{
public:
    Plus(Expression* left, Expression* right);
    virtual ~Plus();

private:
    virtual double evaluate();
};
#endif //PROJECT_PLUS_H
