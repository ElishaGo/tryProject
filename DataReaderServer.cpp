//
// Created by elisha on 12/20/18.
//

#include "DataReaderServer.h"
#include "OpenServerCommand.h"
#include <stdio.h>
#include <stdlib.h>

#include <netdb.h>
#include <unistd.h>
#include <netinet/in.h>

#include <string.h>

#include <sys/socket.h>
#include <iostream>

void DataReaderServer::openServer(int port, int readPSec) {
    int sockfd, newsockfd, clilen;
    struct sockaddr_in serv_addr, cli_addr;
    int n;

    /* First call to socket() function */
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }

    /* Initialize socket structure */
    bzero((char *) &serv_addr, sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(5400);

    /* Now bind the host address using bind() call.*/
    if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        perror("ERROR on binding");
        exit(1);
    }

    /* Now start listening for the clients, here process will
       * go in sleep mode and will wait for the incoming connection
    */

    if (listen(sockfd, 1) < 0) {
        perror("ERROR on listening");
        exit(1);
    }

    clilen = sizeof(cli_addr);

    std::cout << "we are before accept " << (struct sockaddr *) &cli_addr << std::endl;
    /* Accept actual connection from the client */
    newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, (socklen_t *) &clilen);

    std::cout << "accepted connectiong: " << (struct sockaddr *) &cli_addr << std::endl;
    if (newsockfd < 0) {
        perror("ERROR on accept");
        exit(1);
    }

    OpenServerCommand* openserver = new OpenServerCommand(newsockfd);
    openserver->DoCommand();
//    char buffer[256];
//    /* If connection is established then start communicating */
//    bzero(buffer, 256);
//    n = read(newsockfd, buffer, 255);
//
//    if (n < 0) {
//        perror("ERROR reading from socket");
//        exit(1);
//    }
//
//    printf("Here is the message: %s\n", buffer);

//    /* Write a response to the client */
//    n = write(newsockfd, "I got your message", 18);
//
//    if (n < 0) {
//        perror("ERROR writing to socket");
//        exit(1);
//    }
    //return 0;
}