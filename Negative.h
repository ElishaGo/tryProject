//
// Created by elisha on 12/16/18.
//

#ifndef PROJECT_NEGATIVE_H
#define PROJECT_NEGATIVE_H

#include "UnaryExpression.h"

class Negative : public UnaryExpression{
public:
    Negative(Expression* exp);
    virtual ~Negative();
    virtual double evaluate();
};


#endif //PROJECT_NEGATIVE_H
