// WebGrabberDlg.h : header file
//

#if !defined(AFX_WEBGRABBERDLG_H__FCEF4708_B1B6_11D3_A42F_BA1794B30B8A__INCLUDED_)
#define AFX_WEBGRABBERDLG_H__FCEF4708_B1B6_11D3_A42F_BA1794B30B8A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CWebGrabberDlg dialog

class CWebGrabberDlg : public CDialog
{
// Construction
public:
	CWebGrabberDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CWebGrabberDlg)
	enum { IDD = IDD_WEBGRABBER_DIALOG };
	CString	m_strURL;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWebGrabberDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWebGrabberDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnDownload();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WEBGRABBERDLG_H__FCEF4708_B1B6_11D3_A42F_BA1794B30B8A__INCLUDED_)
