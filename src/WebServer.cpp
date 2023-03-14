#include "WebServer.hpp"

WebServer::WebServer() {
    std::cout << "VOlviendo al inicio Construcotr" << std::endl;
    // t_fileConfig fileConfig;
    /* Hard Coding Temporaire*/
    this->fileConfig.server_ip = "127.0.0.1";
    this->fileConfig.server_port = 8080;

    TCPSocket s(fileConfig);
    
    
}

WebServer::~WebServer() {
    std::cout << "DESTrucotr" << std::endl;
}