// WebGrabber.h : main header file for the WEBGRABBER application
//

#if !defined(AFX_WEBGRABBER_H__FCEF4706_B1B6_11D3_A42F_BA1794B30B8A__INCLUDED_)
#define AFX_WEBGRABBER_H__FCEF4706_B1B6_11D3_A42F_BA1794B30B8A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CWebGrabberApp:
// See WebGrabber.cpp for the implementation of this class
//

class CWebGrabberApp : public CWinApp
{
public:
	CWebGrabberApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWebGrabberApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CWebGrabberApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WEBGRABBER_H__FCEF4706_B1B6_11D3_A42F_BA1794B30B8A__INCLUDED_)
