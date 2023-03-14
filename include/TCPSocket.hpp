#ifndef TCPSOCKET_HPP
# define TCPSOCKET_HPP

#include <iostream> // Tempo
#include "Structs.hpp"

#include <sys/socket.h> // socket() - bind()
#include <arpa/inet.h> // inet_addr

class TCPSocket {
    /* data */
    private:
        // int         fd_socket;
        // int         fd_new_socket;
        // unsigned    in_mgsLen;
        // struct      sockaddr_in st_serv;
        // struct      sockaddr_in st_clie;
    
    public:
        TCPSocket(t_fileConfig fc);
        ~TCPSocket(void);
        // StartTcpSocket(void);
};

#endif