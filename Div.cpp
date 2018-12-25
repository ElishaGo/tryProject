//
// Created by elisha on 12/15/18.
//

#include "Div.h"

Div::~Div() {
}

Div::Div(Expression *left, Expression *right) : BinaryExpression(left, right) {}

double Div::evaluate() {
    return (left->evaluate() / right->evaluate());
}
