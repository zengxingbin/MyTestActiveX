#pragma once

// MyTestActiveXPropPage.h : Declaration of the CMyTestActiveXPropPage property page class.


// CMyTestActiveXPropPage : See MyTestActiveXPropPage.cpp for implementation.

class CMyTestActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CMyTestActiveXPropPage)
	DECLARE_OLECREATE_EX(CMyTestActiveXPropPage)

// Constructor
public:
	CMyTestActiveXPropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_MYTESTACTIVEX };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

