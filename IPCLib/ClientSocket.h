#pragma once
#pragma comment(lib,"ws2_32.lib")
#include "ipclib_export.h"
#include <WinSock2.h>
#include "Socket.h"


/// <summary>
 /// A class that represents a client that can communicate with a server
 /// It can receive messages and connect asynchronously and send messages synchronously
 /// </summary>
class IPCLIB_EXPORT ClientSocket : public Socket
{
public:
	ClientSocket(PCWSTR p_ip = L"127.0.0.1", int p_port = 8888);

	void SendData(const char* p_data, const int p_size) const;

	void Disconnect();

	~ClientSocket();

private:
	struct sockaddr_in m_server;
};