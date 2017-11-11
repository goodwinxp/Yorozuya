#include "stdafx.h"

#include "CrashDump.h"
#include <atltime.h>
#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")

#include "..\Common\Helpers\zip.h"


namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        using UnhandledExceptionFilterPtr_t = LONG(WINAPIV*)(::_EXCEPTION_POINTERS *);
        using UnhandledExceptionFilterClbk_t = LONG(WINAPIV*)(::_EXCEPTION_POINTERS *, UnhandledExceptionFilterPtr_t);

        UnhandledExceptionFilterPtr_t UnhandledExceptionFilter_next(nullptr);
        UnhandledExceptionFilterClbk_t UnhandledExceptionFilter_user(nullptr);

        inline fs::path GetPathByHandle(HMODULE hModule)
        {
            TCHAR szPath[MAX_PATH] = {};
            GetModuleFileName(hModule, szPath, _countof(szPath));
            return fs::path(szPath);
        }

        inline fs::path GetGameServerExePath()
        {
            return GetPathByHandle(nullptr);
        }

        EXTERN_C IMAGE_DOS_HEADER __ImageBase;
        inline fs::path GetDllPath()
        {
            return GetPathByHandle((HMODULE)&__ImageBase);
        }

        void UnhandledExceptionFilter_wrapper(::_EXCEPTION_POINTERS * pExceptionInfo)
        {
            UnhandledExceptionFilter_user(pExceptionInfo, UnhandledExceptionFilter_next);
        };

        int CCrashDump::m_nCrash = 0;
        const fs::path CCrashDump::m_pathCrashFolder = L".\\YorozuyaGS\\CrashDump\\";

        CCrashDump::CCrashDump() 
        {
            HMODULE hKernel = GetModuleHandleW(L"kernel32.dll");
            if (hKernel != nullptr)
            {
                m_pSystemUnhandledFilter = GetProcAddress(hKernel, "UnhandledExceptionFilter");

                auto& core = CATFCore::get_instance();
                core.reg_wrapper(
                    m_pSystemUnhandledFilter,
                    _hook_record{
                        (LPVOID)0x14031d270L,
                        (LPVOID *)&UnhandledExceptionFilter_user,
                        (LPVOID *)&UnhandledExceptionFilter_next,
                        (LPVOID)cast_pointer_function(UnhandledExceptionFilter_wrapper),
                        (LPVOID)cast_pointer_function((void(*)())&CCrashDump::UnhandledExceptionFilter)
                    });
            }
        }

        void CCrashDump::load()
        {
            enable_hook(&ATF::WheatyExceptionReport::GenerateExceptionReport, &CCrashDump::GenerateExceptionReport);
            enable_hook(&CCrashDump::UnhandledExceptionFilter, &CCrashDump::UnhandledExceptionFilter);

            ::std::tr2::sys::create_directories(m_pathCrashFolder);
        }

        void CCrashDump::unload()
        {
        }

        ModuleName_t CCrashDump::get_name()
        {
            static const ModuleName_t name = "system_CrashDump";
            return name;
        }

        _STD wstring CCrashDump::BuildFileNameDump()
        {
            ::ATL::CTime tmCurrentTime(::ATL::CTime::GetCurrentTime());

            _STD wstring wsRet(L"Dump " + ::std::to_wstring(m_nCrash++));

            return wsRet + tmCurrentTime.Format(L". %d.%m.%Y %H-%M-%S.dmp").GetString();
        }

        void WINAPIV CCrashDump::GenerateExceptionReport(
            ::_EXCEPTION_POINTERS* pExceptionInfo,
            ATF::Info::WheatyExceptionReportGenerateExceptionReport10_ptr next)
        {
            next((ATF::_EXCEPTION_POINTERS*)pExceptionInfo);

            fs::path pathFileDump(m_pathCrashFolder / BuildFileNameDump());

            HANDLE hFile = CreateFileW(
                pathFileDump.generic_wstring().c_str(),
                GENERIC_WRITE,
                0,
                nullptr,
                CREATE_ALWAYS,
                FILE_ATTRIBUTE_NORMAL,
                nullptr);

            if (hFile == INVALID_HANDLE_VALUE)
                return;

            MINIDUMP_EXCEPTION_INFORMATION eInfo;
            eInfo.ThreadId = GetCurrentThreadId();
            eInfo.ExceptionPointers = pExceptionInfo;
            eInfo.ClientPointers = FALSE;

            int type = MiniDumpNormal;
            type |= MiniDumpWithDataSegs;
            type |= MiniDumpFilterModulePaths;

            BOOL bWriteDump = MiniDumpWriteDump(
                GetCurrentProcess(),
                GetCurrentProcessId(),
                hFile,
                static_cast<_MINIDUMP_TYPE>(type),
                &eInfo,
                nullptr,
                nullptr);

            CloseHandle(hFile);

            if (bWriteDump != TRUE)
                return;

            _STD vector<fs::path> vecRequiredFiles {
                pathFileDump,
                GetGameServerExePath(),
                GetDllPath(),
                GetDllPath().replace_extension(L"pdb")
            };

            auto pathZip = fs::path(pathFileDump).replace_extension(L"zip");

            do
            {
                HZIP hZip = CreateZip(pathZip.generic_wstring().c_str(), 0);
                if (hZip == nullptr)
                    break;

                size_t count = 0;
                ZRESULT hResult = ZR_OK;
                for (auto& file : vecRequiredFiles)
                {
                    hResult = ZipAdd(
                        hZip, file.filename().c_str(),
                        file.generic_wstring().c_str());

                    if (hResult == ZR_OK)
                    {
                        ++count;
                    }
                }

                CloseZip(hZip);

                if (count != vecRequiredFiles.size())
                    break;

                fs::remove(pathFileDump);
            } while (false);
        }

        LONG WINAPI CCrashDump::UnhandledExceptionFilter(::_EXCEPTION_POINTERS * ExceptionInfo)
        {
            UNREFERENCED_PARAMETER(ExceptionInfo);
            return EXCEPTION_CONTINUE_SEARCH;
        }
    }
}