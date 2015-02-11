#include "stdafx.h"
#include "Manager.h"

int _tmain(int argc, _TCHAR* argv[])
{
	/// crash 발생시 dump 남기기 위해서
	SetUnhandledExceptionFilter(ExceptionFilter);

	Manager manager;
	manager.Run();
	return 0;
}

