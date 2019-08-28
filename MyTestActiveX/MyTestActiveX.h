#pragma once

// MyTestActiveX.h : main header file for MyTestActiveX.DLL

#if !defined( __AFXCTL_H__ )
#error "include 'afxctl.h' before including this file"
#endif

#include "resource.h"       // main symbols


// CMyTestActiveXApp : See MyTestActiveX.cpp for implementation.

class CMyTestActiveXApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

