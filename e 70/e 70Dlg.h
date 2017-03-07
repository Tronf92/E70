
// e 70Dlg.h : header file
//
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "afxwin.h"


// Ce70Dlg dialog
class Ce70Dlg : public CDialogEx
{
	void Calcul(){
		CString pretString, cantitateString;
		CString tvaString, totalString;
		double pret,cantitate;
		double tva,total;
		mPret.GetWindowTextA(pretString);
		mCantitate.GetWindowTextA(cantitateString);
		pret= atof(pretString);
		cantitate=atof(cantitateString);
		tva=pret*cantitate*0.24;
		total=pret*cantitate + tva;

		char buf[100];
		sprintf(buf, "%g", tva);
		tvaString=(CString)buf+ "RON";

		sprintf(buf, "%g", total);
		totalString=(CString)buf+"RON";

		mTVA.SetWindowTextA(tvaString);
		mTOTAL.SetWindowTextA(totalString);

	}
// Construction
public:
	Ce70Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_E70_DIALOG };

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
public:
	CButton buton;
	afx_msg void OnBnClickedDezactiveaza();
	afx_msg void OnBnClickedMesaj();
	CStatic mTVA;
	CStatic mTOTAL;
	CEdit mPret;
	CEdit mCantitate;
	afx_msg void OnBnClickedImplicit();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
};
