#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/WheatyExceptionReportInfo.hpp>
#include <filesystem>
namespace fs = _STD tr2::sys;

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CCrashDump : public IModule, CModuleRegister<CCrashDump>
        {
        public:
            CCrashDump();

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static _STD wstring BuildFileNameDump();

            static void WINAPIV GenerateExceptionReport(
                ::_EXCEPTION_POINTERS* pExceptionInfo,
                ATF::Info::WheatyExceptionReportGenerateExceptionReport10_ptr next);

            static LONG WINAPI UnhandledExceptionFilter(
                ::_EXCEPTION_POINTERS* ExceptionInfo);

        private:
            FARPROC m_pSystemUnhandledFilter = nullptr;

            static int m_nCrash;
            static const fs::path m_pathCrashFolder;
        };
    };
};
