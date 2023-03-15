#include "TCPSocket.hpp"


TCPSocket::TCPSocket(t_fileConfig fc) :opt_setsock(1) {
    std::cout << "Construcotr Socket" << std::endl;
    std::cout << "Desde Make Socket IP = "  << fc.server_ip << std::endl;

    this->initTcpSocket();
 
}

TCPSocket::~TCPSocket(void) {
    std::cout << "DESTrucotr Socket" << std::endl;
}

int    TCPSocket::initTcpSocket() {
    std::cout << "Start Socket" << std::endl;
    if ((this->fd_sock = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        std::cout << "socket = " << strerror(errno) << std::endl;
        return (EXIT_FAILURE);
    }
    else
        std::cout << "Init Socket fd = " << this->fd_sock << std::endl;
    int ret = 0;
    ret =   setsockopt(fd_sock, SOL_SOCKET, SO_REUSEADDR, &opt_setsock, sizeof(opt_setsock));
    if (ret == -1){
        std::cout << "error = " << strerror(errno) << std::endl;
        return (EXIT_FAILURE);
        }
    else
        std::cout << "setSocket exitoso = " << this->opt_setsock << std::endl;
    return (0);
}