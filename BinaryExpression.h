//
// Created by elisha on 12/15/18.
//

#ifndef PROJECT_BINARYEXPRESSION_H
#define PROJECT_BINARYEXPRESSION_H

#include "Expression.h"
#include "Number.h"

class BinaryExpression : public Expression{
protected:
    Expression* right;
    Expression* left;

public:
    BinaryExpression(Expression *left, Expression *right);
    ~BinaryExpression();
};

#endif //PROJECT_BINARYEXPRESSION_H
