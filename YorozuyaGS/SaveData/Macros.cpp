#include "stdafx.h"

#include "Macros.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CMacros::load()
        {
            enable_hook(&ATF::CMainThread::_db_Update_MacroData, &CMacros::_db_Update_MacroData);
            enable_hook(&ATF::CMainThread::_db_Update_CryMsg, &CMacros::_db_Update_CryMsg);
        }

        void CMacros::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CMacros::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.macros";
            return name;
        }

        bool WINAPIV CMacros::_db_Update_MacroData(
            ATF::CMainThread* pObj,
            unsigned int dwSerial,
            ATF::_AIOC_A_MACRODATA* pMacro,
            ATF::_AIOC_A_MACRODATA* pOldMacro,
            ATF::Info::CMainThread_db_Update_MacroData266_ptr next)
        {
            for (auto &i : pMacro->mcr_Chat)
            {
                for (auto &j : i.Chat)
                {
                    if (!ATF::Global::IsSQLValidString(j))
                        j[0] = '\0';
                }
            }

            for (auto &i : pOldMacro->mcr_Chat)
            {
                for (auto &j : i.Chat)
                {
                    if (!ATF::Global::IsSQLValidString(j))
                        j[0] = '\0';
                }
            }

            return next(pObj, dwSerial, pMacro, pOldMacro);
        }

        bool WINAPIV CMacros::_db_Update_CryMsg(
            ATF::CMainThread * pObj, 
            unsigned int dwSerial, 
            ATF::_AVATOR_DATA * pNewData,
            ATF::_AVATOR_DATA * pOldData,
            char * pwszQuery, 
            ATF::Info::CMainThread_db_Update_CryMsg252_ptr next)
        {
            for (auto &i : pNewData->dbBossCry.m_List)
            {       
                if (!ATF::Global::IsSQLValidString(i.wszCryMsg))
                    i.wszCryMsg[0] = '\0';
            }
            for (auto &i : pOldData->dbBossCry.m_List)
            {
                if (!ATF::Global::IsSQLValidString(i.wszCryMsg))
                    i.wszCryMsg[0] = '\0';
            }

            return next(pObj, dwSerial, pNewData, pOldData, pwszQuery);
        }
    }
};


