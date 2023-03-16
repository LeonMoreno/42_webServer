#include "WebServer.hpp"

WebServer::WebServer() {
    std::cout << "VOlviendo al inicio Construcotr" << std::endl;
    // t_fileConfig fileConfig;
    /* Hard Coding Temporaire*/
    // this->fileConfig.server_ip = "127.0.0.1";
    this->fileConfig.server_port = 8080;

    this->initWebServ();
}

WebServer::~WebServer() {
    std::cout << "DESTrucotr" << std::endl;
}

int    WebServer::initWebServ() {
    TCPSocket s(fileConfig);
    while (1) {
        std::cout << " +++++++ Waiting for new connection ++++++++ \n";
        s.fd_new_socket = accept(s.fd_sock, (struct sockaddr *) &s.st_clie, &s.in_mgsLen);
        if (s.fd_new_socket == -1) {
            std::cout << "accept = " << strerror(errno) << std::endl;
            return (EXIT_FAILURE);
        }
        else
            std::cout << "accept addr_client = " << inet_ntoa(s.st_clie.sin_addr) << std::endl;
    }
    return (0);
}