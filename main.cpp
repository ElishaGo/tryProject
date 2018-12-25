#include <iostream>
#include "Expression.h"
#include "Number.h"
#include "BinaryExpression.h"
#include "UnaryExpression.h"
#include "Plus.h"
#include "Minus.h"
#include "Mul.h"
#include "Div.h"
#include "Negative.h"
#include "OpenServerCommand.h"
#include "DataReaderServer.h"

int main() {

    cout << "I've opdated my code" << endl;

//    Expression *e = new Plus(new Negative(new Number(3)), new Mul(new Div(new Number(4), new Number(2)), new Number(5)));
//    double ans = e->evaluate();
//    std:
//    cout << ans << std::endl;
//    delete e;
    vector<string> v{"5400", "10"};

    DataReaderServer().openServer(5400, 10);
//    OpenServerCommand* o = new OpenServerCommand(v);
//    o->DoCommand();
    return 0;
}

