#pragma once
#include "net.h"
#include <iostream>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <string>
#include <tchar.h>
using namespace std;
class Server :net
{
private:
	SOCKET S_socket, a_socket;
	sockaddr_in service;
public:
	Server() {
		this->port = 55555;
	};
	~Server() {};

	int ConnectServer();
	int senMes();

};

