#include "stdafx.h"
#include "net.h"
#include "Client.h"
#include "Server.h"
#include <iostream>
#define client
//#define server
int main()
{
	net *Net = new net();
	Client *C = new Client();
	Server *S = new Server();

	Net->NetWorkSetUp();
#ifdef server
	S->ConnectServer();
#endif
#ifdef client
	C->Connect();

#endif
	system("pause");
}

