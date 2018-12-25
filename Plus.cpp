//
// Created by elisha on 12/15/18.
//

#include "Plus.h"

Plus::~Plus() {
}

Plus::Plus(Expression *left, Expression *right) : BinaryExpression(left, right) {}

double Plus::evaluate() {
    return (left->evaluate() + right->evaluate());
}
