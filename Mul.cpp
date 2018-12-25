//
// Created by elisha on 12/15/18.
//

#include "Mul.h"

Mul::~Mul() {
}

Mul::Mul(Expression *left, Expression *right) : BinaryExpression(left, right) {}

double Mul::evaluate() {
    return (left->evaluate() * right->evaluate());
}
