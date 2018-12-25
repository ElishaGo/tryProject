//
// Created by elisha on 12/19/18.
//

#ifndef PROJECT_OPENSERVERCOMMAND_H
#define PROJECT_OPENSERVERCOMMAND_H

#include "Command.h"
#include <vector>

class OpenServerCommand : public Command{
private:
    string readPSec;
    string port;
    int newsockfd;

public:
    OpenServerCommand(vector <string> toInterpret);
    OpenServerCommand(int newsockfd);
    void DoCommand() override;

};

#endif //PROJECT_OPENSERVERCOMMAND_H
