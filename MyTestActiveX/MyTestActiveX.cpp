// MyTestActiveX.cpp : Implementation of CMyTestActiveXApp and DLL registration.

#include "stdafx.h"
#include "MyTestActiveX.h"
#include "Cathelp.h"
#include "objsafe.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CMyTestActiveXApp theApp;

const GUID CDECL _tlid = {0xbd9b6991,0xe0f8,0x4a12,{0x8f,0xe2,0x62,0x49,0x06,0xa3,0x5b,0xcc}};
const CATID CLSID_SafeItem =
{ 0x2f4202f3,0xb529,0x44de,{0xae,0xf6,0xd5,0xb8,0x1e,0x3e,0xd9,0xed } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CMyTestActiveXApp::InitInstance - DLL initialization

BOOL CMyTestActiveXApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CMyTestActiveXApp::ExitInstance - DLL termination

int CMyTestActiveXApp::ExitInstance()
{
	// TODO: Add your own module termination code here.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	/*AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;*/
	HRESULT hr;    // HResult used by Safety Functions

	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	// Mark the control as safe for initializing.

	hr = CreateComponentCategory(CATID_SafeForInitializing,
		L"Controls safely initializable from persistent data!");
	if (FAILED(hr))
		return hr;

	hr = RegisterCLSIDInCategory(CLSID_SafeItem,
		CATID_SafeForInitializing);
	if (FAILED(hr))
		return hr;

	// Mark the control as safe for scripting.

	hr = CreateComponentCategory(CATID_SafeForScripting,
		L"Controls safely  scriptable!");
	if (FAILED(hr))
		return hr;

	hr = RegisterCLSIDInCategory(CLSID_SafeItem,
		CATID_SafeForScripting);
	if (FAILED(hr))
		return hr;

	return NOERROR;
}



// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	/*AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;*/
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	// 删除控件初始化安全入口.   
	HRESULT hr = UnRegisterCLSIDInCategory(CLSID_SafeItem, CATID_SafeForInitializing);

	if (FAILED(hr))
		return hr;

	// 删除控件脚本安全入口   
	hr = UnRegisterCLSIDInCategory(CLSID_SafeItem, CATID_SafeForScripting);

	if (FAILED(hr))
		return hr;

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
