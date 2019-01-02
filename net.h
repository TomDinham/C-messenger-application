#pragma once
#include <iostream>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <string>
#include <tchar.h>
using namespace std;
class net
{
private:
	WSADATA wsaData;
	int wsaerr;
public:
	net() {
		this->exit = false;
	};
	~net() {};
	int NetWorkSetUp();

	int retval, fromlen, socket_type;
	int port;
	int reMessage;

	SOCKADDR_STORAGE from;
	WORD WRequested;
	
	bool exit;

	char Buffer[200] = "";
	char reciveBuffer[200] = "";
	char servstr[NI_MAXHOST], hostsr[NI_MAXHOST];
};

