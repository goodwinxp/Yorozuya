#include "stdafx.h"

#include "CrashDump.h"
#include <atltime.h>
#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        using UnhandledExceptionFilterPtr_t = LONG(WINAPIV*)(::_EXCEPTION_POINTERS *);
        using UnhandledExceptionFilterClbk_t = LONG(WINAPIV*)(::_EXCEPTION_POINTERS *, UnhandledExceptionFilterPtr_t);

        UnhandledExceptionFilterPtr_t UnhandledExceptionFilter_next(nullptr);
        UnhandledExceptionFilterClbk_t UnhandledExceptionFilter_user(nullptr);

        void UnhandledExceptionFilter_wrapper(::_EXCEPTION_POINTERS * pExceptionInfo)
        {
            UnhandledExceptionFilter_user(pExceptionInfo, UnhandledExceptionFilter_next);
        };

        int CCrashDump::m_nCrash = 0;
        const fs::path CCrashDump::m_pathCrashFolder = L".\\YorozuyaGS\\CrashDump\\";

        CCrashDump::CCrashDump() 
        {
            HMODULE hKernel = GetModuleHandleW(L"kernel32.dll");
            if (hKernel != NULL)
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
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::WheatyExceptionReport::GenerateExceptionReport, &CCrashDump::GenerateExceptionReport);
            core.set_hook(&CCrashDump::UnhandledExceptionFilter, &CCrashDump::UnhandledExceptionFilter);

            ::std::tr2::sys::create_directories(m_pathCrashFolder);
        }

        void CCrashDump::unload()
        {
        }

        void CCrashDump::loop()
        {
        }

        ModuleVersion_t CCrashDump::get_version()
        {
            return usVersion;
        }

        ModuleName_t CCrashDump::get_name()
        {
            static const ModuleName_t name = "system_CrashDump";
            return name;
        }

        void CCrashDump::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
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
                NULL,
                CREATE_ALWAYS,
                FILE_ATTRIBUTE_NORMAL,
                NULL);

            if (hFile == INVALID_HANDLE_VALUE)
                return;

            MINIDUMP_EXCEPTION_INFORMATION eInfo;
            eInfo.ThreadId = GetCurrentThreadId();
            eInfo.ExceptionPointers = pExceptionInfo;
            eInfo.ClientPointers = FALSE;

            MiniDumpWriteDump(
                GetCurrentProcess(),
                GetCurrentProcessId(),
                hFile,
                MiniDumpWithDataSegs,
                &eInfo,
                NULL,
                NULL);

            CloseHandle(hFile);
        }

        LONG WINAPI CCrashDump::UnhandledExceptionFilter(::_EXCEPTION_POINTERS * ExceptionInfo)
        {
            UNREFERENCED_PARAMETER(ExceptionInfo);
            return EXCEPTION_CONTINUE_SEARCH;
        }
    }
}