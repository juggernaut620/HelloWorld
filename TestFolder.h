
// TestFolder.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTestFolderApp:
// �йش����ʵ�֣������ TestFolder.cpp
//

class CTestFolderApp : public CWinAppEx
{
public:
	CTestFolderApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTestFolderApp theApp;