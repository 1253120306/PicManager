#pragma once


// CRenameDlg �Ի���

class CRenameDlg : public CDialog
{
	DECLARE_DYNAMIC(CRenameDlg)

public:
	CRenameDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CRenameDlg();
	CString m_sNewName;
// �Ի�������
	enum { IDD = IDD_DIALOG_RENAME };
	CRect m_Rect;
	CPoint m_Point;
	void Setpos(CPoint &point);
	void Setpos(CRect &rect);
	void GetNewName(CString& newname);
	virtual BOOL OnInitDialog();
	virtual void OnOK();
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
