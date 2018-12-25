//
// Created by elisha on 12/15/18.
//

#ifndef PROJECT_NUMBER_H
#define PROJECT_NUMBER_H

#include "Expression.h"

class Number : public Expression{
private:
    double value;
public:
    Number(double num);
    virtual double evaluate();
    ~Number();
};

#endif //PROJECT_NUMBER_H
