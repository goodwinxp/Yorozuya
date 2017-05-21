#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CUserDB_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CCreatePlayer : public IModule, CModuleRegister<CCreatePlayer>
        {
        public:
            CCreatePlayer() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static bool WINAPIV Insert_Char_Request(
                ATF::CUserDB *pObj, 
                char *pwszCharName, 
                char bySlotIndex, 
                char byRaceSexCode, 
                char *pszClassCode, 
                unsigned int dwBaseShape,
                ATF::info::CUserDBInsert_Char_Request50_ptr next);
        };
    };
};
