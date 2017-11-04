#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CMainThreadInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CMacros : public IModule, CModuleRegister<CMacros>
        {
        public:
            CMacros() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static bool WINAPIV _db_Update_MacroData(
                ATF::CMainThread* pObj,
                unsigned int dwSerial,
                ATF::_AIOC_A_MACRODATA* pMacro,
                ATF::_AIOC_A_MACRODATA* pOldMacro,
                ATF::Info::CMainThread_db_Update_MacroData266_ptr next);

            static bool WINAPIV _db_Update_CryMsg(
                ATF::CMainThread* pObj,
                unsigned int dwSerial, 
                ATF::_AVATOR_DATA* pNewData,
                ATF::_AVATOR_DATA* pOldData,
                char* pwszQuery,
                ATF::Info::CMainThread_db_Update_CryMsg252_ptr next);
        };
    };
};
