#include <iostream>

#include <unistd.h> // read & write

#include <sys/socket.h> // socket - bind
#include <arpa/inet.h> // inet_addr

/*
HardCoding por el momento
server parameters
*/
#define SERV_ADDR   "10.13.1.5"
#define SERV_PORT       8080
#define BUFF_SIZE       100 // Buffer rx, tx max size

char buff_tx[BUFF_SIZE] = "Hola Server, I am a Client\n";
char buff_rx[BUFF_SIZE]; // Buffers para recepcion

int main() {

    int sfd;
    struct sockaddr_in servaddr;

    sfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sfd == -1) {
        std::cout << "error open socket\n";
    return (-1);
   }
   else
    std::cout << "socket creado fd = " << sfd << std::endl;

    memset(&servaddr, 0, sizeof(servaddr));

    // asigno IP, puerto y familia IPV4
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr(SERV_ADDR);
    servaddr.sin_port = htons(SERV_PORT);

    // Try connect client to server
    if (connect(sfd, (struct sockaddr *) &servaddr, sizeof(servaddr)) != 0) {
        std::cout << "error connect\n";
        perror("connect");
        return (-1);
    }
    
    std::cout << "Connect to Server Boom \n";

    //send test msg
    write(sfd, buff_tx, sizeof(buff_tx));
    read(sfd, buff_rx, sizeof(buff_rx));

    close(sfd);


}