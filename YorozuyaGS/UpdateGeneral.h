#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CMainThread_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CUpdateGeneral : public IModule, CModuleRegister<CUpdateGeneral>
        {
        public:
            CUpdateGeneral() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static bool WINAPIV _db_Update_General(
                ATF::CMainThread *pObj,
                unsigned int dwSerial, 
                ATF::_AVATOR_DATA* pNewData, 
                ATF::_AVATOR_DATA* pOldData,
                char* pSzQuery, 
                bool bCheckLowHigh,
                ATF::info::CMainThread_db_Update_General258_ptr next);
        };
    };
};
