#pragma once
#include "net.h"
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <string>
#include <tchar.h>
#include <iostream>
using namespace std;
class Client :
	public net
{
private:
	SOCKET C_socket;
	sockaddr_in ClientService;

public:
	Client() {
		this->port = 55555;
	};
	~Client() {};
	int Connect();
	int Rec();

	
	
};

