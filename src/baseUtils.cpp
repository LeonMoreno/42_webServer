#include "baseWebServer.hpp"

void    ft_exit(std::string s) {
    std::cout <<  s << " = " << strerror(errno) << std::endl;
    std::exit(EXIT_FAILURE);
}