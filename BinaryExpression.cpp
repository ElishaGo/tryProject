//
// Created by elisha on 12/15/18.
//

#include "BinaryExpression.h"
BinaryExpression::BinaryExpression(Expression *left, Expression *right) : right(right), left(left) {}

BinaryExpression::~BinaryExpression() {
        delete this->left;
        delete this->right;
}

