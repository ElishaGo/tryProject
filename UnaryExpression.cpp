//
// Created by elisha on 12/16/18.
//

#include "UnaryExpression.h"

UnaryExpression::~UnaryExpression() {
    delete this->exp;
}

UnaryExpression::UnaryExpression(Expression *exp) :exp(exp) {}
