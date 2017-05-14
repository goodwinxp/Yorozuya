#include "stdafx.h"

#include "Macros.h"
#include <ATF/global.hpp>
#include <ATF/CMainThread_info.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CMacros::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CMainThread::_db_Update_MacroData, &CMacros::_db_Update_MacroData);
        }

        void CMacros::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::CMainThread::_db_Update_MacroData);
        }

        void CMacros::loop()
        {
        }

        ModuleVersion_t CMacros::get_version()
        {
            return ATF::usVersion;
        }

        ModuleName_t CMacros::get_name()
        {
            static const ModuleName_t name = "fix_macros";
            return name;
        }

        void CMacros::configure(
            const rapidjson::Value& nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        bool WINAPIV CMacros::_db_Update_MacroData(
            struct ATF::CMainThread* pObj,
            unsigned int dwSerial,
            struct ATF::_AIOC_A_MACRODATA* pMacro,
            struct ATF::_AIOC_A_MACRODATA* pOldMacro,
            ATF::info::CMainThread_db_Update_MacroData266_ptr next)
        {
            for (auto &i : pMacro->mcr_Chat)
            {
                for (auto &j : i.Chat)
                {
                    if (!ATF::global::IsSQLValidString(j))
                        j[0] = '\0';
                }
            }

            for (auto &i : pOldMacro->mcr_Chat)
            {
                for (auto &j : i.Chat)
                {
                    if (!ATF::global::IsSQLValidString(j))
                        j[0] = '\0';
                }
            }

            return next(pObj, dwSerial, pMacro, pOldMacro);
        }
    }
};


