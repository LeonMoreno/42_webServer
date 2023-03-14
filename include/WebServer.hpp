#ifndef WEBSERVER_HPP
# define WEBSERVER_HPP

#include "TCPSocket.hpp"
#include "Structs.hpp"

class WebServer {

    public:
        t_fileConfig fileConfig;

    public:
        // TCPSocket   s(t_fileConfig fileConfig);
        TCPSocket   s(t_fileConfig fileConfig);

        // Canonical
        WebServer();
        ~WebServer();
};

#endif
