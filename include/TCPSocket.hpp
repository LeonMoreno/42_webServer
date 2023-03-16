#ifndef TCPSOCKET_HPP
# define TCPSOCKET_HPP

#include "baseWebServer.hpp"

class TCPSocket {
    /* data */
    public:
        int         fd_sock;   
        int         fd_new_socket;
        int         opt_setsock;
        unsigned    in_mgsLen;
        struct      sockaddr_in st_serv;
        struct      sockaddr_in st_clie;
    
    public:
        TCPSocket(t_fileConfig fc);
        ~TCPSocket(void);
        int    initTcpSocket(void);
        int     initBind(t_fileConfig fc);
        int     initListen();
};

#endif