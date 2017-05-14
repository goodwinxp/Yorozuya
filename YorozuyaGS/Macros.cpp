#include "stdafx.h"

#include "Macros.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CMacros::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&CMainThread::_db_Update_MacroData, &CMacros::_db_Update_MacroData);
        }

        void CMacros::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CMainThread::_db_Update_MacroData);
        }

        void CMacros::loop()
        {
        }

        ModuleVersion_t CMacros::get_version()
        {
            return usVersion;
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
            struct CMainThread* pObj,
            unsigned int dwSerial,
            struct _AIOC_A_MACRODATA* pMacro,
            struct _AIOC_A_MACRODATA* pOldMacro,
            info::CMainThread_db_Update_MacroData266_ptr next)
        {
            for (auto &i : pMacro->mcr_Chat)
            {
                for (auto &j : i.Chat)
                {
                    if (!global::IsSQLValidString(j))
                        j[0] = '\0';
                }
            }

            for (auto &i : pOldMacro->mcr_Chat)
            {
                for (auto &j : i.Chat)
                {
                    if (!global::IsSQLValidString(j))
                        j[0] = '\0';
                }
            }

            return next(pObj, dwSerial, pMacro, pOldMacro);
        }
    }
};


