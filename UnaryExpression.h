//
// Created by elisha on 12/16/18.
//

#ifndef PROJECT_UNARYEXPRESSION_H
#define PROJECT_UNARYEXPRESSION_H

#include "Expression.h"
#include "Number.h"

class UnaryExpression : public Expression{
protected:
    Expression* exp;

public:
    UnaryExpression(Expression* exp);
    virtual ~UnaryExpression();
};

#endif //PROJECT_UNARYEXPRESSION_H
