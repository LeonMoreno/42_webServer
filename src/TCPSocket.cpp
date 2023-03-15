#include "TCPSocket.hpp"


TCPSocket::TCPSocket(t_fileConfig fc) {
    std::cout << "Construcotr Socket" << std::endl;
    std::cout << "Desde Make Socket IP = "  << fc.server_ip << std::endl;

    this->initTcpSocket();
 
}

TCPSocket::~TCPSocket(void) {
    std::cout << "DESTrucotr Socket" << std::endl;
}

void    TCPSocket::initTcpSocket() {
    std::cout << "Start Socket" << std::endl;
    // fd_socket = socket(FD_INET)

}