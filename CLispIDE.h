
// CLispIDE.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CCLispIDE_App:
// О реализации данного класса см. CLispIDE.cpp
//

class CCLispIDE_App : public CWinApp
{
public:
	CCLispIDE_App();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CCLispIDE_App theApp;