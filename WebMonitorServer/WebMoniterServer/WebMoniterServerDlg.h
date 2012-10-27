
// WebMoniterServerDlg.h : ͷ�ļ�
//

#pragma once
#include "initsock.h" //��ʼ��Winsock��


// CWebMoniterServerDlg �Ի���
class CWebMoniterServerDlg : public CDialogEx
{
// ����
public:
	CWebMoniterServerDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_WEBMONITERSERVER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CInitSock InitSock; //��ʼ��Winsock��
	SOCKET sConnect; //�������ӵ�Socket
	CWinThread* pDataThread; //���ڷ������ݵ��߳�
	CWinThread* pCMDThread; //���ڴ���������߳�

	afx_msg LRESULT OnSocketHandler(WPARAM wParam, LPARAM lParam);
	void ExcuteCMD(CString strCMD);

	//�����ܵ����
	STARTUPINFO si;	
	PROCESS_INFORMATION pi;
	HANDLE hRead,hWrite;
public:
	afx_msg void OnBnClickedButtonStartServer();
};
