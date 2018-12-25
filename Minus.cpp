//
// Created by elisha on 12/15/18.
//

#include "Minus.h"

Minus::Minus(Expression *left, Expression *right) : BinaryExpression(left, right) {}

Minus::~Minus() {

}

double Minus::evaluate() {
    return (left->evaluate() - right->evaluate());
}
