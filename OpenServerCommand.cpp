//
// Created by elisha on 12/19/18.
//
#include <pthread.h>
#include <iostream>
#include <strings.h>
#include <unistd.h>
#include "OpenServerCommand.h"
#include "DataReaderServer.h"

using namespace std;

struct MyParams
{
//    int port1;
//    int readPsec1;
int newsocfd;
};

void* thread_func(void* arg)
{
    struct MyParams* params = (struct MyParams*) arg;
    int n;
    std::cout<<"youre in the thread" << std::endl;
    char buffer[256];
    /* If connection is established then start communicating */
    bzero(buffer, 256);
    n = read(params->newsocfd, buffer, 255);

    if (n < 0) {
        perror("ERROR reading from socket");
        exit(1);
    }

    printf("Here is the message: %s\n", buffer);

    n = write(params->newsocfd, "I got your message", 18);

    if (n < 0) {
        perror("ERROR writing to socket");
        exit(1);
    }
//    DataReaderServer().openServer(params->port1, params->readPsec1);
//    params->port1 = 0;
//    params->readPsec1 = 0;



    return params;
}

OpenServerCommand::OpenServerCommand(vector<string> input) {
    if (input.size() != 2) {
        std::cout << "Invalid Input" << std::endl;
        throw;
    }
    this->port = input[0];
    this->readPSec = input[1];
}




void OpenServerCommand::DoCommand() {

    //check if Port is valid
//    if (stoi(this->port) > 65535 || stoi(this->port) < 0){
//        std::cout << "Not valid Port" << endl;
//        throw;
//    }

    struct MyParams* params = new MyParams();
//    params->port1 = stoi(this->port);
//    params->readPsec1 = stoi(this->readPSec);
    params->newsocfd = this->newsockfd;

    pthread_t trid;
    pthread_create(&trid, nullptr, thread_func, params);
    pthread_join(trid, nullptr);

    pthread_exit(nullptr);
}

OpenServerCommand::OpenServerCommand(int newsockfd): newsockfd(newsockfd) {

}


//open a thred that opens a server with the port and the rate of lines read in a second