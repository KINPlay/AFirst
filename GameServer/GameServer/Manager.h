#pragma once
class Manager
{
public:
	Manager();
	~Manager();

	void Run();
};

static int callback_http(struct libwebsocket_context *context,
struct libwebsocket *wsi,
enum libwebsocket_callback_reasons reason, void *user,
	void *in, size_t len);