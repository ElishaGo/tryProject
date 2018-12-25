//
// Created by elisha on 12/15/18.
//

#ifndef PROJECT_EXPRESSION_H
#define PROJECT_EXPRESSION_H

using namespace std;

class Expression {
public:
    virtual double evaluate() = 0;
    virtual ~Expression() {}
};


#endif //PROJECT_EXPRESSION_H
