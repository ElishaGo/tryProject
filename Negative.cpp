//
// Created by elisha on 12/16/18.
//

#include "Negative.h"

Negative::~Negative() {
}

Negative::Negative(Expression *exp) : UnaryExpression(exp) {}

double Negative::evaluate() {
    return -(exp->evaluate());
}
