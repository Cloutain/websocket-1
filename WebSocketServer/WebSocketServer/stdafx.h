
// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ


#include <afxdisp.h>        // MFC �Զ�����



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��
#define WM_NEW_CONNECT              WM_USER + 0x100   //�½���������
// #define WM_MSG_PUSH_DATA            WM_USER + 0x518 /////yangshg 2018/01/31 Java������push����
// #define WM_MSG_CALLOUT_CALL         WM_USER + 0x510 //yangshg 2018/04/25 16:55:49���������ķ��Ͳ�����Ϣ
// #define WM_MSG_FROM_CALLDLG         WM_USER + 0x511
// #define WM_MSG_CALL_HUNGUP_BY_HTML  WM_USER + 0x519 // ����ҳ���͵ĹҶ���Ϣ���͵�ָ������
// #define WM_MSG_CALL_ACCEPT_BY_HTML  WM_USER + 0x520 // ����ҳ���͵Ľ�����Ϣ���͵�ָ������
// #define WM_MSG_CALL_REFUSE_BY_HTML  WM_USER + 0x521 //yangshg  ����ҳ���͵ľܽ���Ϣ���͵�ָ������
#define   IPC_CALLSTATE				12138

#include <iostream>
using namespace std;
typedef struct _tagCallout_Call
{
	std::string m_strPhoneNum;
	std::string m_strName;
	std::string m_strAddress;
}Callout_Call;
typedef struct _tagCallin_Refuse 
{
	std::string m_strPeerNumber;
	int m_nCallID;
}Callin_Refuse;
typedef struct _tagCallin_Accept
{
	std::string m_strPeerNumber;
	int	m_nCallID;
}Callin_Accept;
typedef struct _tagCallHangup
{
	std::string m_strPeerNumber;
	int m_nCallID;
	std::string m_strType;
}Call_Hangup;


#include <afxsock.h>            // MFC �׽�����չ




#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif



#include <iostream>  
#include <string>  
#include <fstream>  
//����rapidjson��Ҫͷ�ļ�,rapidjson�ļ��п���������Ŀ¼����������include·�������߼��뵽������  
#include "rapidjson/document.h"  
#include "rapidjson/filestream.h"  
#include "rapidjson/prettywriter.h"  
#include "rapidjson/stringbuffer.h"  
using namespace std;  
using namespace rapidjson;  //����rapidjson�����ռ�  


