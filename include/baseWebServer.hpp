#ifndef BASEWEBSERVER_HPP
# define BASEWEBSERVER_HPP

/* INcludes */
#include <iostream> // Tempo
#include <cerrno> // errno
#include <cstring> //strerror

#include <sys/socket.h> // socket() - bind()
#include <arpa/inet.h> // inet_addr

#define SER_IP "127.0.0.1"
#define BACKLOG 5

typedef struct s_fileConfig {
    // std::string server_ip;
    int         server_port;
}   t_fileConfig;


#endif