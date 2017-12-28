////////////////////////////////////////////////////////////////////////////////
//                                                                             /
// 2012-2017 (c) Baical                                                        /
//                                                                             /
// This library is free software; you can redistribute it and/or               /
// modify it under the terms of the GNU Lesser General Public                  /
// License as published by the Free Software Foundation; either                /
// version 3.0 of the License, or (at your option) any later version.          /
//                                                                             /
// This library is distributed in the hope that it will be useful,             /
// but WITHOUT ANY WARRANTY; without even the implied warranty of              /
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU           /
// Lesser General Public License for more details.                             /
//                                                                             /
// You should have received a copy of the GNU Lesser General Public            /
// License along with this library.                                            /
//                                                                             /
////////////////////////////////////////////////////////////////////////////////
//http://www.codeproject.com/Articles/207464/Exception-Handling-in-Visual-Cplusplus

#ifndef PSIGNAL_H
#define PSIGNAL_H

#include <new.h>
#include <Shlwapi.h>
#include "DbgHelp.h"
#include "Shlobj.h"
#include "signal.h"
#include "GTypes.h"
#include "Length.h"
#include "PString.h"
#include "WString.h"
#include "AList.h"
#include "PAtomic.h"


#define CH_DUMP_FILE_EXT                                                  L"dmp"
#define CH_DESC_FILE_EXT                                                  L"dsc"

class CCrashHandler
{
public:
    virtual void Process_Crash(EXCEPTION_POINTERS *i_pException)            = 0;
};

typedef BOOL (WINAPI *LPMINIDUMPWRITEDUMP)
    (HANDLE                                  i_hProcess, 
     DWORD                                   i_dwProcessId, 
     HANDLE                                  i_hFile, 
     MINIDUMP_TYPE                           i_eDumpType, 
     CONST PMINIDUMP_EXCEPTION_INFORMATION   i_pExceptionParam, 
     CONST PMINIDUMP_USER_STREAM_INFORMATION i_pUserEncoderParam, 
     CONST PMINIDUMP_CALLBACK_INFORMATION    i_pCallbackParam
    );


struct sCH_Init
{
    MINIDUMP_TYPE  eDumpType;
    enum eFolder
    {
        eLocal = 0,
        eUser     ,
        eDirect   ,
    }              eFolderType;

    const wchar_t *pFolderName;
    CCrashHandler *pHandler;
    unsigned int   dwMaxCount;
};


struct sCH_Info
{
    char                *pBuffer;
    size_t               szBuffer;
    size_t               szPathMax;
    wchar_t             *pDumpFileName;
    wchar_t             *pDescFileName;

    DWORD                dwVer0;
    DWORD                dwVer1;
    DWORD                dwVer2;
    DWORD                dwVer3;

    HMODULE              hDbgDll;
    LPMINIDUMPWRITEDUMP  pfnMiniDump;
    MINIDUMP_TYPE        eDumpType;
    HANDLE               hProcess;
    DWORD                dwProcessId;

    volatile LONG        lProcessed;
    CCrashHandler       *pUserHandler;
};

static sCH_Info g_sCrush = {0};

////////////////////////////////////////////////////////////////////////////////
//CreateTextDump
static void CreateTextDump(const char *i_pText, UINT64 i_qwCode)
{   
    HANDLE       l_hFile     = NULL;
    SYSTEMTIME   l_sTime     = {};
    DWORD        l_dwSize    = 0;
    size_t       l_szBuffer  = 0;
    size_t       l_szOnDisc  = 0;
    UINT64       l_qwFree    = 0;

    
    ////////////////////////////////////////////////////////////////////////////
    // Create the minidump text desc file
    l_hFile = CreateFileW(g_sCrush.pDescFileName,
                          GENERIC_WRITE | GENERIC_READ,
                          FILE_SHARE_READ,
                          NULL,
                          CREATE_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL
                         );

    if (    (INVALID_HANDLE_VALUE == l_hFile)
         || (NULL == l_hFile)
       )
    {
        l_hFile = NULL;
        goto l_lblExit;
    }

    ////////////////////////////////////////////////////////////////////////////
    //print info
    GetLocalTime(&l_sTime);
    sprintf_s(g_sCrush.pBuffer, 
              g_sCrush.szBuffer, 
              "Time :%02d.%02d.%04d %02d:%02d:%0d\r\n"
              "Ver. :%d.%d.%d.%d\r\n"
              "Idx  :0x%I64X\r\n"
              "Txt  :%s\r\n",
              (DWORD)l_sTime.wDay,
              (DWORD)l_sTime.wMonth,
              (DWORD)l_sTime.wYear,
              (DWORD)l_sTime.wHour,
              (DWORD)l_sTime.wMinute,
              (DWORD)l_sTime.wSecond,
              g_sCrush.dwVer0,
              g_sCrush.dwVer1,
              g_sCrush.dwVer2,
              g_sCrush.dwVer3,
              i_qwCode,
              i_pText ? i_pText : "-"
             );

    ////////////////////////////////////////////////////////////////////////////
    //write data
    l_szBuffer = strlen(g_sCrush.pBuffer);
    l_szOnDisc = 0;

    while (l_szBuffer > l_szOnDisc)
    {
        DWORD l_dwWritten = 0;
        if (WriteFile(l_hFile, 
                      g_sCrush.pBuffer + l_szOnDisc, 
                      l_szBuffer - l_szOnDisc,
                      &l_dwWritten,
                      NULL
                     )
            )
        {
            l_szOnDisc += l_dwWritten;
            if (0 == l_dwWritten)
            {
                break;
            }
        }
        else
        {
            break;
        }
    } 

    FlushFileBuffers(l_hFile);


l_lblExit:
    if (NULL != l_hFile)
    {
        CloseHandle(l_hFile);
        l_hFile = NULL;
    }
}//CreateTextDump


////////////////////////////////////////////////////////////////////////////////
//CreateMiniDump
static UINT64 CreateMiniDump(EXCEPTION_POINTERS* i_pException)
{   
    MINIDUMP_EXCEPTION_INFORMATION l_sMEI        = {};
    MINIDUMP_CALLBACK_INFORMATION  l_sMCI        = {};
    HANDLE                         l_hFile       = NULL;
    UINT64                         l_qwReturn    = 0;
    
    if (NULL == i_pException)
    {
        goto l_lblExit;
    }

    ////////////////////////////////////////////////////////////////////////////
    // Create the minidump file
    l_hFile = CreateFileW(g_sCrush.pDumpFileName,
                          GENERIC_WRITE | GENERIC_READ,
                          FILE_SHARE_READ,
                          NULL,
                          CREATE_ALWAYS,
                          FILE_ATTRIBUTE_NORMAL,
                          NULL
                        );

    if (    (INVALID_HANDLE_VALUE == l_hFile)
         || (NULL == l_hFile)
       )
    {
        l_qwReturn = 0x0100000000000000ULL + (UINT64)GetLastError();
        l_hFile = NULL;
        goto l_lblExit;
    }
   
    l_sMEI.ThreadId          = GetCurrentThreadId();
    l_sMEI.ExceptionPointers = i_pException;
    l_sMEI.ClientPointers    = FALSE;
    l_sMCI.CallbackRoutine   = NULL;
    l_sMCI.CallbackParam     = NULL;


    ////////////////////////////////////////////////////////////////////////////
    //write damp file
    g_sCrush.hProcess = GetCurrentProcess();
    if (FALSE == g_sCrush.pfnMiniDump(g_sCrush.hProcess, 
                                      g_sCrush.dwProcessId, 
                                      l_hFile, 
                                      g_sCrush.eDumpType, //MiniDumpNormal
                                      &l_sMEI, 
                                      NULL, 
                                      &l_sMCI
                                     )
       )
    {    
        l_qwReturn = 0x0200000000000000ULL + (UINT64)GetLastError();
        goto l_lblExit;
    }

l_lblExit:
    if (NULL != l_hFile)
    {
        CloseHandle(l_hFile);
        l_hFile = NULL;
    }

    return l_qwReturn;
}//CreateMiniDump


////////////////////////////////////////////////////////////////////////////////
//CH_SignalHandler
static void __cdecl CH_SignalHandler(int signal)
{
    if (g_sCrush.lProcessed)
    {
        return;
    }

    g_sCrush.lProcessed ++;

    UINT64 l_qwCode = CreateMiniDump((EXCEPTION_POINTERS*)_pxcptinfoptrs);
    CreateTextDump("Signal handler", l_qwCode);

    if (g_sCrush.pUserHandler)
    {
        g_sCrush.pUserHandler->Process_Crash(NULL);
    }

    exit(1);
}//CH_SignalHandler


////////////////////////////////////////////////////////////////////////////////
//CH_UnhandledExceptionFilter
static LONG WINAPI CH_UnhandledExceptionFilter(__in struct _EXCEPTION_POINTERS *i_pException)
{
    if (g_sCrush.lProcessed)
    {
        return EXCEPTION_CONTINUE_SEARCH;
    }

    if (    (STATUS_ACCESS_VIOLATION            == i_pException->ExceptionRecord->ExceptionCode)
         || (EXCEPTION_ARRAY_BOUNDS_EXCEEDED    == i_pException->ExceptionRecord->ExceptionCode)
         || (EXCEPTION_DATATYPE_MISALIGNMENT    == i_pException->ExceptionRecord->ExceptionCode)
         || (EXCEPTION_FLT_DIVIDE_BY_ZERO       == i_pException->ExceptionRecord->ExceptionCode)
         || (EXCEPTION_FLT_STACK_CHECK          == i_pException->ExceptionRecord->ExceptionCode)
         || (EXCEPTION_ILLEGAL_INSTRUCTION      == i_pException->ExceptionRecord->ExceptionCode)
         || (EXCEPTION_INT_DIVIDE_BY_ZERO       == i_pException->ExceptionRecord->ExceptionCode)
         || (EXCEPTION_NONCONTINUABLE_EXCEPTION == i_pException->ExceptionRecord->ExceptionCode)
         || (EXCEPTION_PRIV_INSTRUCTION         == i_pException->ExceptionRecord->ExceptionCode)
         || (EXCEPTION_STACK_OVERFLOW           == i_pException->ExceptionRecord->ExceptionCode)
         //|| ( == i_pException->ExceptionRecord.ExceptionCode)
      )
    {
        g_sCrush.lProcessed ++;

        char l_pText[128];
        sprintf_s(l_pText, 
                  _countof(l_pText), 
                  "Exception 0x%08X", 
                  i_pException->ExceptionRecord->ExceptionCode
                 );

        UINT64 l_qwCode = CreateMiniDump(i_pException);
        CreateTextDump(l_pText, l_qwCode);

        if (g_sCrush.pUserHandler)
        {
            g_sCrush.pUserHandler->Process_Crash(i_pException);
        }

        exit(1);
    }

    return EXCEPTION_CONTINUE_SEARCH;
}//CH_UnhandledExceptionFilter


////////////////////////////////////////////////////////////////////////////////
//CH_PurecallHandler
static void CH_PurecallHandler(void)
{
    if (g_sCrush.lProcessed)
    {
        return;
    }

    g_sCrush.lProcessed ++;

    CreateTextDump("Pure virtual call", 0ULL);

    if (g_sCrush.pUserHandler)
    {
        g_sCrush.pUserHandler->Process_Crash(NULL);
    }

    exit(1);
}//CH_PurecallHandler


////////////////////////////////////////////////////////////////////////////////
//CH_MemoryAllocationHandler
static int CH_MemoryAllocationHandler(size_t i_szSize)
{
    if (g_sCrush.lProcessed)
    {
        return 0;
    }

    g_sCrush.lProcessed ++;

    char l_pText[128];
    sprintf_s(l_pText, _countof(l_pText), "Memory allocation fails %d bytes", i_szSize);
    CreateTextDump(l_pText, 0ULL);

    if (g_sCrush.pUserHandler)
    {
        g_sCrush.pUserHandler->Process_Crash(NULL);
    }

    exit(1);

    return 0;
}//CH_MemoryAllocationHandler


////////////////////////////////////////////////////////////////////////////////
//CH_InvalidParameterHandler
static void CH_InvalidParameterHandler(const wchar_t* i_pExpression,
                                       const wchar_t* i_pFunction, 
                                       const wchar_t* i_pFile, 
                                       unsigned int   i_dwLine, 
                                       uintptr_t      i_pReserved
                                      )
{
    if (g_sCrush.lProcessed)
    {
        return;
    }

    g_sCrush.lProcessed ++;

    CreateTextDump("Invalid parameters handler", 0ULL);

    if (g_sCrush.pUserHandler)
    {
        g_sCrush.pUserHandler->Process_Crash(NULL);
    }

    exit(1);
}//CH_InvalidParameterHandler


////////////////////////////////////////////////////////////////////////////////
//CH_CleanUp
static void CH_CleanUp(const wchar_t *i_pDir, unsigned int i_dwMax_Count)
{
    CBList<CWString*> l_cFiles;
    CWString          l_cDir;

    l_cDir.Set(i_pDir);
    CFSYS::Enumerate_Files(&l_cFiles, &l_cDir, L"*." CH_DESC_FILE_EXT, 0);

    //sort files - first is oldest, last is newest !
    pAList_Cell l_pStart   = NULL;
    tUINT32     l_dwDirLen = l_cDir.Length();

    while ((l_pStart = l_cFiles.Get_Next(l_pStart)))
    {
        pAList_Cell l_pMin  = l_pStart;
        pAList_Cell l_pIter = l_pStart;

        while ((l_pIter = l_cFiles.Get_Next(l_pIter)))
        {
            CWString *l_pPathM = l_cFiles.Get_Data(l_pMin);
            CWString *l_pPathI = l_cFiles.Get_Data(l_pIter);
            tXCHAR   *l_pNameM = l_pPathM->Get() + l_dwDirLen;
            tXCHAR   *l_pNameI = l_pPathI->Get() + l_dwDirLen;

            if (0 < PStrICmp(l_pNameM, l_pNameI))
            {
                l_pMin = l_pIter;
            }
        }

        if (l_pMin != l_pStart)
        {
            l_cFiles.Extract(l_pMin);
            l_cFiles.Put_After(l_cFiles.Get_Prev(l_pStart), l_pMin);
            l_pStart = l_pMin;
        }
    } //while (l_pStart = m_cFiles.Get_Next(l_pStart))

    //delete oldest files
    while (l_cFiles.Count() > i_dwMax_Count)
    {
        l_pStart = l_cFiles.Get_First();
        if (l_pStart)
        {
            CWString *l_pPath = l_cFiles.Get_Data(l_pStart);
            
            //delete description file
            CFSYS::Delete_File(l_pPath->Get());

            //delete dump file if it is
            l_pPath->Trim(l_pPath->Length() - wcslen(CH_DESC_FILE_EXT));
            l_pPath->Append(1, CH_DUMP_FILE_EXT);
            CFSYS::Delete_File(l_pPath->Get());

            l_cFiles.Del(l_pStart, TRUE);
        }
    }//while (l_cFiles.Count() > i_dwMax_Count)
}//CH_CleanUp


////////////////////////////////////////////////////////////////////////////////
//CH_Install
static BOOL CH_Install(sCH_Init &i_rInit)
{
    wchar_t   *l_pName     = NULL;
    wchar_t   *l_pPath     = NULL;
    DWORD      l_dwUnknown = 0;
    DWORD      l_dwSize    = 0;
    SYSTEMTIME l_sTime     = {0};

    ////////////////////////////////////////////////////////////////////////////
    //initialize parameters
    memset(&g_sCrush, 0, sizeof(g_sCrush));

    g_sCrush.szBuffer      = 32768;
    g_sCrush.pBuffer       = (char*)malloc(g_sCrush.szBuffer * sizeof(char));
    g_sCrush.szPathMax     = 16384;
    g_sCrush.pDumpFileName = (wchar_t*)malloc(g_sCrush.szPathMax * sizeof(wchar_t));
    g_sCrush.pDescFileName = (wchar_t*)malloc(g_sCrush.szPathMax * sizeof(wchar_t));
    g_sCrush.hDbgDll       = LoadLibraryW(L"dbghelp.dll");
    g_sCrush.pfnMiniDump   = (LPMINIDUMPWRITEDUMP)GetProcAddress(g_sCrush.hDbgDll, 
                                                                 "MiniDumpWriteDump"
                                                                );
    g_sCrush.dwProcessId   = GetCurrentProcessId();
    g_sCrush.hProcess      = GetCurrentProcess();
    g_sCrush.lProcessed   = 0;
    g_sCrush.eDumpType     = i_rInit.eDumpType;
    g_sCrush.pUserHandler  = i_rInit.pHandler;

    if (    (NULL == g_sCrush.pBuffer)
         || (NULL == g_sCrush.pDumpFileName)
         || (NULL == g_sCrush.pDescFileName)
         || (NULL == g_sCrush.hDbgDll)
         || (NULL == g_sCrush.pfnMiniDump)
         || (NULL == g_sCrush.hProcess)
       )
    {
        return FALSE;
    }

    ////////////////////////////////////////////////////////////////////////////
    //get current executable file path
    if (0 == GetModuleFileNameW(GetModuleHandleW(NULL), 
                                (wchar_t*)g_sCrush.pBuffer, 
                                g_sCrush.szBuffer / sizeof(wchar_t)
                               )
       )
    {
        return FALSE;
    }

    l_pPath = (wchar_t*)g_sCrush.pBuffer;

    ////////////////////////////////////////////////////////////////////////////
    //get version
    l_dwSize = GetFileVersionInfoSizeW(l_pPath, &l_dwUnknown);
    if (l_dwSize)
    {
        BYTE *l_pFileInfo = (BYTE*)malloc(l_dwSize);
        if (l_pFileInfo)
        {
            memset(l_pFileInfo, 0, l_dwSize);

            if (GetFileVersionInfoW(l_pPath, 0, l_dwSize, l_pFileInfo) )
            {
                //wchar_t l_pVerPath[256];
                VS_FIXEDFILEINFO *l_pVersion = NULL;
                UINT l_dwSize = 0;
                if (VerQueryValueW(l_pFileInfo, L"\\", (LPVOID *)&l_pVersion, &l_dwSize))
                {
                    g_sCrush.dwVer0 = l_pVersion->dwFileVersionMS >> 16;
                    g_sCrush.dwVer1 = l_pVersion->dwFileVersionMS & 0xFFFF;
                    g_sCrush.dwVer2 = l_pVersion->dwFileVersionLS >> 16;
                    g_sCrush.dwVer3 = l_pVersion->dwFileVersionLS & 0xFFFF;
                }
            }

            if (l_pFileInfo)
            {
                free(l_pFileInfo);
                l_pFileInfo = NULL;
            }
        } //if (l_pFileInfo)
    } //if (l_dwSize)

    ////////////////////////////////////////////////////////////////////////////
    //create file names
    if (    (l_pName = wcsrchr(l_pPath, L'\\'))
         || (l_pName = wcsrchr(l_pPath, L'/'))
       )
    {
        l_pName[0] = 0;
        l_pName ++;
    }

    if (sCH_Init::eLocal == i_rInit.eFolderType)
    {
        if (i_rInit.pFolderName)
        {
            PathAppendW(l_pPath, i_rInit.pFolderName);
        }
    }
    else if (sCH_Init::eUser == i_rInit.eFolderType)
    {
        SHGetFolderPathW(NULL, CSIDL_APPDATA|CSIDL_FLAG_CREATE, NULL, 0, l_pPath);

        if (!i_rInit.pFolderName)
        {
            PathAppendW(l_pPath, l_pName);
        }
        else
        {
            PathAppendW(l_pPath, i_rInit.pFolderName);
        }
    }
    else if (sCH_Init::eDirect == i_rInit.eFolderType)
    {
        wcscpy_s(l_pPath, g_sCrush.szBuffer / sizeof(wchar_t), i_rInit.pFolderName);
    }


    if (!CFSYS::Directory_Create(l_pPath))
    {
        return FALSE;
    }

    if (i_rInit.dwMaxCount)
    {
        CH_CleanUp(l_pPath, i_rInit.dwMaxCount);
    }

    GetLocalTime(&l_sTime);


    swprintf_s(g_sCrush.pDumpFileName, 
               g_sCrush.szPathMax, 
               L"%s\\%04d_%02d_%02d__%02d_%02d_%02d." CH_DUMP_FILE_EXT,
               l_pPath,
               (DWORD)l_sTime.wYear,
               (DWORD)l_sTime.wMonth,
               (DWORD)l_sTime.wDay,
               (DWORD)l_sTime.wHour,
               (DWORD)l_sTime.wMinute,
               (DWORD)l_sTime.wSecond
              );

    swprintf_s(g_sCrush.pDescFileName, 
               g_sCrush.szPathMax, 
               L"%s\\%04d_%02d_%02d__%02d_%02d_%02d." CH_DESC_FILE_EXT,
               l_pPath,
               (DWORD)l_sTime.wYear,
               (DWORD)l_sTime.wMonth,
               (DWORD)l_sTime.wDay,
               (DWORD)l_sTime.wHour,
               (DWORD)l_sTime.wMinute,
               (DWORD)l_sTime.wSecond
              );


    ////////////////////////////////////////////////////////////////////////////
    //initialize handlers for all possible cases
    signal(SIGABRT, CH_SignalHandler);
    signal(SIGFPE,  CH_SignalHandler);
    signal(SIGILL,  CH_SignalHandler);
    signal(SIGINT,  CH_SignalHandler);
    signal(SIGSEGV, CH_SignalHandler);
    signal(SIGTERM, CH_SignalHandler);

    //SetUnhandledExceptionFilter(CH_UnhandledExceptionFilter);
    AddVectoredExceptionHandler(1, CH_UnhandledExceptionFilter);

    _set_purecall_handler(CH_PurecallHandler);

    _set_new_mode(1);
    _set_new_handler(CH_MemoryAllocationHandler);

    _set_invalid_parameter_handler(CH_InvalidParameterHandler);
    _CrtSetReportMode(_CRT_ASSERT, 0);


    return TRUE;
}//CH_Install


////////////////////////////////////////////////////////////////////////////////
//CH_Set_Handler
static void CH_Set_Handler(CCrashHandler *i_pHandler)
{
    g_sCrush.pUserHandler = i_pHandler;
}//CH_Set_Handler


////////////////////////////////////////////////////////////////////////////////
//CH_UnInstall
static BOOL CH_UnInstall()
{
    if (g_sCrush.pBuffer)
    {
        free(g_sCrush.pBuffer);
        g_sCrush.pBuffer = NULL;
    }

    if (g_sCrush.pDumpFileName)
    {
        free(g_sCrush.pDumpFileName);
        g_sCrush.pDumpFileName = NULL;
    }

    if (g_sCrush.pDescFileName)
    {
        free(g_sCrush.pDescFileName);
        g_sCrush.pDescFileName = NULL;
    }

    if (g_sCrush.hDbgDll)
    {
        FreeLibrary(g_sCrush.hDbgDll);
        g_sCrush.hDbgDll = NULL;
    }

    memset(&g_sCrush, 0, sizeof(g_sCrush));

    return TRUE;
}//CH_UnInstall

#endif //PSIGNAL_H