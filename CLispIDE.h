
// CLispIDE.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CCLispIDE_App:
// � ���������� ������� ������ ��. CLispIDE.cpp
//

class CCLispIDE_App : public CWinApp
{
public:
	CCLispIDE_App();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CCLispIDE_App theApp;