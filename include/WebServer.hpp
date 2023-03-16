#ifndef WEBSERVER_HPP
# define WEBSERVER_HPP

#include "TCPSocket.hpp"
#include "baseWebServer.hpp"

class WebServer {

    public:
        t_fileConfig fileConfig;

    public:
        TCPSocket   s(t_fileConfig fileConfig);

        // Canonical
        WebServer();
        ~WebServer();

        int initWebServ();
};

#endif
