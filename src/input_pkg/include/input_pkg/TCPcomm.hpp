/***************************************************
 * Env : Linux, Ubuntu(Xubuntu)
*/

/***************************************************
 * \file  TCPcomm.hpp
 * \brief TCP server&client class header file. This class contains 
 * the functions for "basic operation(open socket, listen, accept etc)"
 * *************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <memory>
#include <vector>

using namespace std;

namespace TCPCommunication
{   
    /** 
     * @brief Server Class
     */
    class TCPServer
    {   
        public:
            int server_socket_;
            int client_socket_;
            struct sockaddr_in server_addr_;
            struct sockaddr_in client_addr_;
            int portNumber_;
            ssize_t buffer_size_;
            uint8_t NumberOfRoomForClient_;


        public:
            TCPServer();
            TCPServer(int PortNum);
            TCPServer(int PortNum, int SizeOfBuffer);
            TCPServer(int PortNum, int SizeOfBuffer, int NumOfRoom);
            ~TCPServer();

            /**
             * @brief set communication of TCP/IP.
             * @return success server_socket fd, false -1
             */
            int initSocket();

            /**
             * @brief set communication of UDP Type.
             * @return success 0, false -1
             */
            // uint8_t SetUDPCOMM();
            
            /**
             * @brief binding server socket. fd(파일디스크립터)로 넘겨지는 socket과
             *        이 프로그램을 묶는다고 생각. 즉, 해당 프로세스는 socket을 통해 다른
             *        장치로부터 연결을 받을 수 있음.
             * @return success 0, false -1
             */
            int server_bind();

            /**
             * @brief waiting for client.
             * 
             * @return success 0, false -1
             */
            int server_listen();

            /**
             * @brief accept that a connection of client
             * 
             * @return success 0, false -1
             */
            int server_accept();

            /**
             * @brief send data
             * 
             * @return success size of data bytes, false -1
             */
            ssize_t server_write(const char *msg);

            /**
             * @brief read data
             * 
             * @return success size of data bytes(if end of a file is 0), false -1
             */
            ssize_t server_read(char *buffer);
            
            /**
             * @brief close client socket
             * 
             * @return success 0, false -1
             */
            int client_close();

            /**
             * @brief close server socket
             * 
             * @return success 0, false -1
             */
            int server_close();

             /**
             * @brief server init & open
             * 
             * @return success 0, false -1
             */
            uint8_t server_open();
    };
    /** --------------------------------------------------------------------
     * Server Class END
     * --------------------------------------------------------------------- */

    /**
     * @brief Client Class
     */
    class TCPClient
    {
        public:
            string IP_address_;
            int server_socket_;
            int client_socket_;
            struct sockaddr_in server_addr_;
            struct sockaddr_in client_addr_;
            int portNumber_;
            ssize_t buffer_size_;


        public:

            TCPClient();
            TCPClient(const char *IPAddress, int PortNum);
            TCPClient(const char *IPAddress, int PortNum, int SizeOfBuffer);
            ~TCPClient();

            /**
             * @brief set communication of TCP/IP.
             * @return success client_socket fd, false -1
             */
            int initSocket();

            /**
             * @brief try to connect to Server
             * @return success 0, false -1
             */
            int client_connect();

            /**
             * @brief send data
             * @return success size of data bytes, false -1
             */
            ssize_t client_write(const char *msg);

            /**
             * @brief read data
             * @return success size of data bytes(if end of a file is 0), false -1
             */
            ssize_t client_read(char *buffer);

            /**
             * @brief close client socket
             * @return success 0, false -1
             */
            int client_close();

            /**
             * @brief client init & open
             * @return success 0, false -1
             */
            uint8_t client_open();
    };
}