
// WebMoniterServer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWebMoniterServerApp:
// �йش����ʵ�֣������ WebMoniterServer.cpp
//

class CWebMoniterServerApp : public CWinApp
{
public:
	CWebMoniterServerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CWebMoniterServerApp theApp;