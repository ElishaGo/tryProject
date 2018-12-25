//
// Created by elisha on 12/19/18.
//

#ifndef PROJECT_COMMAND_H
#define PROJECT_COMMAND_H

#include <vector>
#include <string>

using namespace std;

class Command {
public:
    virtual void DoCommand() = 0;
};
#endif //PROJECT_COMMAND_H
