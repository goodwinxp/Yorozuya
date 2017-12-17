#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <filesystem>
namespace fs = ::std::experimental::filesystem::v1;

#include <ATF/WheatyExceptionReportInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CCrashDump 
            : public Yorozuya::Module::IModule
            , CModuleRegister<CCrashDump>
        {
        public:
            CCrashDump();

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static ::std::wstring BuildFileNameDump();

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
