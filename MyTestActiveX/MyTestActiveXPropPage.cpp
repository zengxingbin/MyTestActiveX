// MyTestActiveXPropPage.cpp : Implementation of the CMyTestActiveXPropPage property page class.

#include "stdafx.h"
#include "MyTestActiveX.h"
#include "MyTestActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMyTestActiveXPropPage, COlePropertyPage)

// Message map

BEGIN_MESSAGE_MAP(CMyTestActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyTestActiveXPropPage, "MFCACTIVEXCONT.MyTestActiveXPropPage.1",
	0x98e94128,0xee6e,0x461d,0x9d,0x58,0x32,0x3b,0x5e,0x09,0x45,0x78)

// CMyTestActiveXPropPage::CMyTestActiveXPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyTestActiveXPropPage

BOOL CMyTestActiveXPropPage::CMyTestActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_MYTESTACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CMyTestActiveXPropPage::CMyTestActiveXPropPage - Constructor

CMyTestActiveXPropPage::CMyTestActiveXPropPage() :
	COlePropertyPage(IDD, IDS_MYTESTACTIVEX_PPG_CAPTION)
{
}

// CMyTestActiveXPropPage::DoDataExchange - Moves data between page and properties

void CMyTestActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CMyTestActiveXPropPage message handlers
