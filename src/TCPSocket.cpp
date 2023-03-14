#include "TCPSocket.hpp"


TCPSocket::TCPSocket(t_fileConfig fc) {
    std::cout << "Construcotr Socket" << std::endl;
    std::cout << "IP = "  << fc.server_ip << std::endl;
 
}

TCPSocket::~TCPSocket(void) {
    std::cout << "DESTrucotr Socket" << std::endl;
}

// TCPSocket::StartTcpSocket() {
//     std::cout << "Start Socket" << std::endl;

// }