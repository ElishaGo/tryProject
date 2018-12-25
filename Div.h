//
// Created by elisha on 12/15/18.
//

#ifndef PROJECT_DIV_H
#define PROJECT_DIV_H

#include "BinaryExpression.h"

class Div : public BinaryExpression{

public:
    Div(Expression* left, Expression* right);
    virtual ~Div();
    virtual double evaluate();
};

#endif //PROJECT_DIV_H
