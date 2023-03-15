#ifndef BASEWEBSERVER_HPP
# define BASEWEBSERVER_HPP

/* INcludes */
#include <iostream> // Tempo
#include <cerrno> // errno
#include <cstring> //strerror

#include <sys/socket.h> // socket() - bind()
#include <arpa/inet.h> // inet_addr

typedef struct s_fileConfig {
    std::string server_ip;
    int         server_port;
}   t_fileConfig;


#endif