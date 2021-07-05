
// Microsoft PictureClip ControlDlg.h : header file
//

#pragma once


// CMicrosoftPictureClipControlDlg dialog
class CMicrosoftPictureClipControlDlg : public CDialogEx
{
// Construction
public:
	CMicrosoftPictureClipControlDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MICROSOFT_PICTURECLIP_CONTROL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
