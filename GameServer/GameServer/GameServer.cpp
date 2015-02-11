#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	/// crash 발생시 dump 남기기 위해서
	SetUnhandledExceptionFilter(ExceptionFilter);
	return 0;
}

