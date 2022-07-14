/***************************************************
 * Env : Linux, Ubuntu(Xubuntu)
*/

/***************************************************
 * \file  tcp_server.cpp
 * \brief TCP server class source file. This class contains 
 * the functions for "basic operation(open socket, listen, accept etc)"
 * *************************************************/
#include "TCPcomm.hpp"

using namespace TCPCommunication;


/** ------------------------------------------------------------------
 * @brief Server Class
 * ------------------------------------------------------------------- */
TCPServer::TCPServer()
{   
    printf("Usage : <port>\n");
}

TCPServer::TCPServer(int PortNum)
{   
    this->portNumber_ = PortNum;
    this->NumberOfRoomForClient_ = 5;
    this->buffer_size_ = 512;
    printf("==================================\n");
    printf("input argument\n");
    printf("Port Number == %d\n", portNumber_);
    printf("Size of Buffer(server) = %d\n", buffer_size_);
    printf("==================================\n");
}

TCPServer::TCPServer(int PortNum, int SizeOfBuffer)
{   
    this->portNumber_ = PortNum;
    this->NumberOfRoomForClient_ = 5;
    this->buffer_size_ = SizeOfBuffer;
    printf("==================================\n");
    printf("input argument\n");
    printf("Port Number == %d\n", portNumber_);
    printf("Number of RoomForClient = %d\n", NumberOfRoomForClient_);
    printf("Size of Buffer(server) = %d\n", buffer_size_);
    printf("==================================\n");
}

TCPServer::TCPServer(int PortNum, int SizeOfBuffer, int NumOfRoom)
{   
    this->portNumber_ = PortNum;
    this->buffer_size_ = SizeOfBuffer;
    this->NumberOfRoomForClient_ = NumOfRoom;
    printf("==================================\n");
    printf("input argument\n");
    printf("Port Number == %d\n", portNumber_);
    printf("Number of RoomForClient = %d\n", NumberOfRoomForClient_);
    printf("Size of Buffer(server) = %d\n", buffer_size_);
    printf("==================================\n");
}

TCPServer::~TCPServer()
{
    server_close();
}

int TCPServer::initSocket()
{   
    // create server socket
    server_socket_ = socket(PF_INET, SOCK_STREAM, 0);
    if(server_socket_ == -1)
    {
        cout << "socket() error" << endl;
        return server_socket_;
    }
    else
    {
        // initialize the address info
        memset(&server_addr_, 0, sizeof(server_addr_));
        server_addr_.sin_family = AF_INET;
        server_addr_.sin_addr.s_addr = htonl(INADDR_ANY);
        server_addr_.sin_port = htons(portNumber_);

        cout << "socket() done" << endl;

        return server_socket_;
    }
    
}

int TCPServer::server_bind()
{   
    // bind() : allocate the IP address & PORT number
    // 소켓 위에서 생성한 주소 정보를 할당.
    if(bind(server_socket_, (struct sockaddr*)&server_addr_, sizeof(server_addr_))==-1)
    {
        cout << "bind() error" << endl;
        return -1;
    }
    else
    {
        cout << "bind() done" << endl;
        return 0;
    }
}

int TCPServer::server_listen()
{
    // listen() : server socket can be ready state of connection
    // 클라이언트가 연결요청이 가능하도록 5크기의 대기실 생성
    if(listen(server_socket_, NumberOfRoomForClient_) == -1)
    {
        cout << "listen() error" << endl;
        return -1;
    }
    else
    {   
        cout << "listening..." << endl;
        return 0;
    }
}

int TCPServer::server_accept()
{   
    // accept() : allow of connection
    // if accept() funcion
    // 실제 데이터를 보낼 수 있는 소켓을 생성하는 함수임.
    socklen_t client_addr_size_ = sizeof(client_addr_);
    client_socket_ = accept(server_socket_, (struct sockaddr*)&client_addr_, &client_addr_size_);
    if(client_socket_==-1)
    {
        cout << "accept() error" << endl;
        return client_socket_;
    }
    else
    {
        cout << "accept() done" << endl;
        return client_socket_;
    }
}

ssize_t TCPServer::server_write(const char *msg)
{   
    // write() : transfering data. There is a connection request when write() function has been called(implemented)
    ssize_t str_len = write(client_socket_, msg, buffer_size_);
    if(str_len == -1)
    {
        cout << "write() error" << endl;
        return str_len;
    }
    else
    {
        return str_len;
    }
}

ssize_t TCPServer::server_read(char *buffer)
{
    ssize_t str_len;
    str_len = read(client_socket_, buffer, buffer_size_);
    if(str_len == -1)
    {
        cout << "read() error" << endl;
        return -1;
    }
    else
    {
        return 0;
    }
}

int TCPServer::server_close()
{
    if(close(client_socket_)==-1)
    {
        cout << "client close() error" << endl;
        return -1;
    }

    if(close(server_socket_)==-1)
    {
        cout << "server close() error" << endl;
        return -1;
    }
    else
    {
        return 0;
    }

}

uint8_t TCPServer::server_open()
{
    if(initSocket()==-1) return -1;
    if(server_bind()==-1) return -1;
    if(server_listen()==-1) return -1;

    cout << "server open successfully" << endl;
    return 0;
}
/** ------------------------------------------------------------------
 * @brief Server Class END
 * ------------------------------------------------------------------- */



/** ------------------------------------------------------------------
 * @brief Client Class
 * ------------------------------------------------------------------- */
TCPClient::TCPClient()
{
    printf("Usage : <IP> <port>\n");
}

TCPClient::TCPClient(const char *IPAddress, int PortNum)
{
    this->IP_address_ = IPAddress;
    this->portNumber_ = PortNum;
    this->buffer_size_= 512;
    printf("==================================\n");
    printf("input argument\n");
    printf("IP address : %s", IP_address_);
    printf("Port Number == %d\n", portNumber_);
    printf("Size of Buffer(client, DEFAULT) = %d\n", buffer_size_);
    printf("==================================\n");
}

TCPClient::TCPClient(const char *IPAddress, int PortNum, int SizeOfBuffer)
{
    this->IP_address_  = IPAddress;
    this->portNumber_  = PortNum;
    this->buffer_size_ = SizeOfBuffer;
    printf("==================================\n");
    printf("input argument\n");
    printf("IP address : %s", IP_address_);
    printf("Port Number == %d\n", portNumber_);
    printf("Size of Buffer(client) = %d\n", buffer_size_);
    printf("==================================\n");
}

TCPClient::~TCPClient()
{
    client_close();
}

int TCPClient::initSocket()
{   
    printf("Initializing Client socket...\n");
    client_socket_ = socket(PF_INET, SOCK_STREAM, 0);
    if(client_socket_ == -1)
    {
        cout << "socket() error" << endl;
        return client_socket_;
    }

    // IP_address_ 변수를 const char* 형태 변환 필요
    vector<char> cnvt_IP_address(IP_address_.begin(), IP_address_.end());
    cnvt_IP_address.push_back('\0');                    // \0은 반드시 붙일 것
    char *ptr_cnvt_IP_address = &cnvt_IP_address[0];

    // 클라이언트에서도 주소정보 초기화
    memset(&server_addr_, 0 , sizeof(server_addr_));
    server_addr_.sin_family = AF_INET;
    server_addr_.sin_addr.s_addr = inet_addr(ptr_cnvt_IP_address);
    server_addr_.sin_port = htons(portNumber_);

    cout << "socket() done" << endl;

    return client_socket_;
}

int TCPClient::client_connect()
{
    if(connect(client_socket_, (struct sockaddr*)&server_addr_, sizeof(server_addr_))==-1)
    {
        cout << "connect() error" << endl;
        return -1;
    }
    else
    {   
        cout << "connect() done" << endl;
        return 0;
    }
}

ssize_t TCPClient::client_write(const char *msg)
{
    ssize_t str_len;
    str_len = write(client_socket_, msg, buffer_size_);
    if(str_len==-1)
    {
        cout << "write() error" << endl;
        return str_len;
    }
    else
    {
        return str_len;
    }
}

ssize_t TCPClient::client_read(char *buffer)
{
    ssize_t str_len;
    str_len = read(client_socket_, buffer, buffer_size_);
    if(str_len ==-1)
    {
        cout << "read() error" << endl;
        return str_len;
    }
    else
    {
        return str_len;
    }
}

int TCPClient::client_close()
{
    if(close(client_socket_)==-1)
    {
        cout << "close() error" << endl;
        return -1;
    }
    else
    {
        return 0;
    }
}

uint8_t TCPClient::client_open()
{
    if(initSocket()==-1)
    {   
        cout << "open failed" << endl;
        return -1;
    }

    if(client_connect()==-1)
    {
        cout << "open failed" << endl;
        return -1;
    }

    cout << "connect to server successfully" <<endl;
    return 0;
}

