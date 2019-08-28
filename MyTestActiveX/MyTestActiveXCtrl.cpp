// MyTestActiveXCtrl.cpp : Implementation of the CMyTestActiveXCtrl ActiveX Control class.

#include "stdafx.h"
#include "MyTestActiveX.h"
#include "MyTestActiveXCtrl.h"
#include "MyTestActiveXPropPage.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMyTestActiveXCtrl, COleControl)

// Message map

BEGIN_MESSAGE_MAP(CMyTestActiveXCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// Dispatch map

BEGIN_DISPATCH_MAP(CMyTestActiveXCtrl, COleControl)
	DISP_FUNCTION_ID(CMyTestActiveXCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CMyTestActiveXCtrl, "AddFunc", dispidAddFunc, AddFunc, VT_I4, VTS_I4 VTS_I4)
END_DISPATCH_MAP()

// Event map

BEGIN_EVENT_MAP(CMyTestActiveXCtrl, COleControl)
END_EVENT_MAP()

// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CMyTestActiveXCtrl, 1)
	PROPPAGEID(CMyTestActiveXPropPage::guid)
END_PROPPAGEIDS(CMyTestActiveXCtrl)

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyTestActiveXCtrl, "MFCACTIVEXCONTRO.MyTestActiveXCtrl.1",
	0x2f4202f3,0xb529,0x44de,0xae,0xf6,0xd5,0xb8,0x1e,0x3e,0xd9,0xed)

// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyTestActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)

// Interface IDs

const IID IID_DMyTestActiveX = {0x7ca273da,0x32bb,0x458a,{0x97,0x8e,0x17,0xa6,0x74,0xd8,0xb9,0xcd}};
const IID IID_DMyTestActiveXEvents = {0xa1711394,0x9c97,0x4208,{0xaa,0x34,0x4c,0x7d,0xaa,0xa8,0xfd,0xdf}};

// Control type information

static const DWORD _dwMyTestActiveXOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMyTestActiveXCtrl, IDS_MYTESTACTIVEX, _dwMyTestActiveXOleMisc)

// CMyTestActiveXCtrl::CMyTestActiveXCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyTestActiveXCtrl

BOOL CMyTestActiveXCtrl::CMyTestActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_MYTESTACTIVEX,
			IDB_MYTESTACTIVEX,
			afxRegApartmentThreading,
			_dwMyTestActiveXOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CMyTestActiveXCtrl::CMyTestActiveXCtrl - Constructor

CMyTestActiveXCtrl::CMyTestActiveXCtrl()
{
	InitializeIIDs(&IID_DMyTestActiveX, &IID_DMyTestActiveXEvents);
	// TODO: Initialize your control's instance data here.
}

// CMyTestActiveXCtrl::~CMyTestActiveXCtrl - Destructor

CMyTestActiveXCtrl::~CMyTestActiveXCtrl()
{
	// TODO: Cleanup your control's instance data here.
}

// CMyTestActiveXCtrl::OnDraw - Drawing function

void CMyTestActiveXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}

// CMyTestActiveXCtrl::DoPropExchange - Persistence support

void CMyTestActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}


// CMyTestActiveXCtrl::OnResetState - Reset control to default state

void CMyTestActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


// CMyTestActiveXCtrl::AboutBox - Display an "About" box to the user

void CMyTestActiveXCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_MYTESTACTIVEX);
	dlgAbout.DoModal();
}


// CMyTestActiveXCtrl message handlers


LONG CMyTestActiveXCtrl::AddFunc(LONG num1, LONG num2)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: Add your dispatch handler code here

	return 0;
}
