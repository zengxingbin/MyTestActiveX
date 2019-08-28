#pragma once

// MyTestActiveXCtrl.h : Declaration of the CMyTestActiveXCtrl ActiveX Control class.


// CMyTestActiveXCtrl : See MyTestActiveXCtrl.cpp for implementation.

class CMyTestActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CMyTestActiveXCtrl)

// Constructor
public:
	CMyTestActiveXCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CMyTestActiveXCtrl();

	DECLARE_OLECREATE_EX(CMyTestActiveXCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CMyTestActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CMyTestActiveXCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CMyTestActiveXCtrl)		// Type name and misc status

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
		dispidAddFunc = 1L
	};
protected:
	LONG AddFunc(LONG num1, LONG num2);
};

