#include "TCPSocket.hpp"


TCPSocket::TCPSocket(t_fileConfig fc) :opt_setsock(1) {
    std::cout << "Construcotr Socket" << std::endl;

    int ret = this->initTcpSocket();
    std::cout << "ret = " << ret << std::endl;
    this->initBind(fc);
    this->initListen();

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
    ret =   setsockopt(fd_sock, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt_setsock, sizeof(opt_setsock));
    if (ret == -1){
        std::cout << "setsockopt = " << strerror(errno) << std::endl;
        return (EXIT_FAILURE);
        }
    else
        std::cout << "setSocket exitoso = " << this->opt_setsock << std::endl;
    return (0);
}

int TCPSocket::initBind(t_fileConfig fc) {
    /* clear struct sockaddr_in*/
   memset(&st_serv, 0, sizeof(st_serv));
   
    // asigno IP, puerto y familia IPV4
    st_serv.sin_family = AF_INET;
    st_serv.sin_addr.s_addr = inet_addr(SER_IP);
    st_serv.sin_port = htons(fc.server_port);
    
    if (bind(this->fd_sock, (struct sockaddr *) &st_serv, sizeof(st_serv)) == -1) {
         std::cout << "bind = " << strerror(errno) << std::endl;
        return (EXIT_FAILURE);
    }

    return (0);
}

int TCPSocket::initListen() {
     if ((listen(this->fd_sock, BACKLOG)) != 0)
        std::cout << "Erro Listen\n";
    else
        std::cout << "Server Listen en puerto :" << ntohs(st_serv.sin_port) << std::endl;
    return (0);
}