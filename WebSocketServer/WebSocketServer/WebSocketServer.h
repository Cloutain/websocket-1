
// WebSocketServer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWebSocketServerApp:
// �йش����ʵ�֣������ WebSocketServer.cpp
//

typedef enum MyEnum
{
	theApp_kongxian,  //����
	theApp_waihu,     //���  
	theApp_huru,      //����
	theApp_jietong,   //��ͨ
	theApp_guaduan,   //�Ҷ�
	theApp_jujie,     //�ܽ�
};
class CWebSocketServerApp : public CWinAppEx
{
public:
	CWebSocketServerApp();

// ��д
	public:
	virtual BOOL InitInstance();

	MyEnum m_zhuangtai;

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CWebSocketServerApp theApp;