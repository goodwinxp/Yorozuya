#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CMainThreadInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CUpdateGeneral
            : public Yorozuya::Module::IModule
            , CModuleRegister<CUpdateGeneral>
        {
        public:
            CUpdateGeneral() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static bool WINAPIV _db_Update_General(
                ATF::CMainThread *pObj,
                unsigned int dwSerial, 
                ATF::_AVATOR_DATA* pNewData, 
                ATF::_AVATOR_DATA* pOldData,
                char* pSzQuery, 
                bool bCheckLowHigh,
                ATF::Info::CMainThread_db_Update_General258_ptr next);
        };
    };
};
