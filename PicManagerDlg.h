
// PicManagerDlg.h : ͷ�ļ�
//

#pragma once
#include "vector"
using namespace std;
struct PicStruckDef
{
	CString m_sPicPath;      		//�ļ������ļ���
	CString m_sPicName;
} ;
// PicManagerDlg �Ի���
class CPicManager : public CDialog
{
// ����
public:
	CPicManager(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_PICMANAGER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��
	virtual void OnOK();
	virtual void OnCancel();
	void ScanDiskFile(const CString& strPath, int num[4]);

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();	
	CRect rect;
	CListCtrl m_cJpgList;
	CListCtrl m_cPngList;
	CListCtrl m_cBmpList;
	CListCtrl m_cGifList;
	int m_Num[4];
	CString m_strPath;
	int m_nCurrentID;
	CPoint m_sCurrentPos;
	PicStruckDef* m_pCurrentPic;
public:
	afx_msg void OnNMDblclkListFilejpg(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMDblclkListFilepng(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMDblclkListFilegif(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMDblclkListFilebmp(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMRClickListFilejpg(NMHDR *pNMHDR, LRESULT *pResult);

	afx_msg void OnPicRename();
	afx_msg void OnOpenPath();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnBnClickedButtonFile();
};
