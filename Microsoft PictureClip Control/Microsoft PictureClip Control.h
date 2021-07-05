
// Microsoft PictureClip Control.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMicrosoftPictureClipControlApp:
// See Microsoft PictureClip Control.cpp for the implementation of this class
//

class CMicrosoftPictureClipControlApp : public CWinApp
{
public:
	CMicrosoftPictureClipControlApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMicrosoftPictureClipControlApp theApp;
