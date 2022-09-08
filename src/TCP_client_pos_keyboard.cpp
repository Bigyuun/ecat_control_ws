// TCP/IP client
// linux

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <math.h>

#define number_of_motors 7
#define BUFFER_SIZE 512
#define KEYBOARD_INPUT_MODE 1

void error_handling(const char *errmsg);

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("Usage : %s <IP> <port>\n", argv[0]);
        exit(1);
    }

    int client_socket = socket(PF_INET, SOCK_STREAM, 0);
    if(client_socket == -1)
    {
        error_handling("socket() error");
    }

    // 클라이언트에서도 주소정보 초기화
    struct sockaddr_in server_addr;
    memset(&server_addr, 0 , sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr(argv[1]);
    server_addr.sin_port = htons(atoi(argv[2]));

    std::cout << "server IP : " << argv[1] << std::endl;
    std::cout << server_addr.sin_addr.s_addr << std::endl;
    std::cout << "Port : " << argv[2] << std::endl;
    std::cout << server_addr.sin_port << std::endl;

    // 서버의 주소정보로 클라이언트 소켓이 연결요청을 진행함
    int client_server_connect = connect(client_socket, (struct sockaddr*)&server_addr, sizeof(server_addr));
    if(client_server_connect == -1)
    {
        error_handling("connect() error");
    }
    else
    {
        std::cout << "connected OK" << std::endl;
    }

    static uint16_t count;
    while(1)
    {
        // 성공적으로 서버와 연결되서 메시지를 받아오면
        // return 0, 실패시 return -1
        char *str_client = new char[BUFFER_SIZE];
        if (str_client == (char *)0)
        {
            std::cout << "Memory error..." << std::endl;
        }
        memset(str_client, 0, BUFFER_SIZE);

        std::string msg_speedj = "speedj";

        msg_speedj += "([";

#if KEYBOARD_INPUT_MODE
        static int input_val[number_of_motors] = {0};
        static int input = 0;

        for(int i=0; i<number_of_motors; i++)
        {
            std::cout << "input value #" << i << " : ";
            std::cin >> input_val[i];
            // sine wave data
            msg_speedj += std::to_string(input_val[i]);
            msg_speedj += ",";
        }
#endif

#if !KEYBOARD_INPUT_MODE
        double velocity_joints[number_of_motors];
        for (int i = 0; i < number_of_motors; i++)
        {
            std::cout << "input value #" << i << " : ";
            std::cin >> input_val[i];
            // sine wave data
            velocity_joints[i] = 100 * sin(count * 0.001);
            msg_speedj += std::to_string(velocity_joints[i]);
            msg_speedj += ",";
        }
#endif

        msg_speedj.pop_back();
        msg_speedj += "])" + std::to_string(count);
        count++;

        //write(client_socket, msg_speedj.c_str(), sizeof(msg_speedj));
        write(client_socket, msg_speedj.c_str(), BUFFER_SIZE);
        std::cout << "[send msg] : " << msg_speedj <<std::endl;
        std::cout << "[send msg size] : " << sizeof(msg_speedj) << std::endl;

        // int str_len;
        // char message[BUFFER_SIZE];

        // str_len = read(client_socket, message, BUFFER_SIZE);
        // std::cout << "[read msg] : " << message << std::endl;
        // if (str_len == -1)
        // {
        //     std::cout << "read() error !" << std::endl;
        // }

        // printf("Message from server : %s \n", message);
        usleep(2000);
    }

    close(client_socket);

    return 0;
}

void error_handling(const char *errmsg)
{
    fputs(errmsg, stderr);
    fputc('\n', stderr);
    exit(1);
}
