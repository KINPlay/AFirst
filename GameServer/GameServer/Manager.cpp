#include "stdafx.h"
#include "Manager.h"
#include "Poco/Net/WebSocket.h"
#include "Poco/Net/HTTPClientSession.h"
#include "Poco/Net/HTTPRequest.h"
#include "Poco/Net/HTTPResponse.h"
using namespace Poco::Net;
Manager::Manager()
{
}


Manager::~Manager()
{
}


void Manager::Run()
{
	HTTPClientSession cs("localhost", 3000);
	HTTPRequest request(HTTPRequest::HTTP_GET, "/ws");
	HTTPResponse response;
	WebSocket ws(cs, request, response);
	std::string outString("text");
	ws.sendFrame(outString.c_str(), outString.length());


	char buffer[1024];
	int flags;
	int n = ws.receiveFrame(buffer, sizeof(buffer), flags);

}
