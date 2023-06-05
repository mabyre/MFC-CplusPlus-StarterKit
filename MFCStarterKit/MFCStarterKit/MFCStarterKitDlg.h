
// MFCStarterKitDlg.h : fichier d'en-tête
//

#pragma once


// boîte de dialogue de CMFCStarterKitDlg
class CMFCStarterKitDlg : public CDialogEx
{
// Construction
public:
	CMFCStarterKitDlg(CWnd* pParent = nullptr);	// constructeur standard

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCSTARTERKIT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Prise en charge de DDX/DDV


// Implémentation
protected:
	HICON m_hIcon;

	// Fonctions générées de la table des messages
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedMfcmenubutton1();
	afx_msg void OnAppAbout();

	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnClose();
	afx_msg void OnBnClickedOk();
};
