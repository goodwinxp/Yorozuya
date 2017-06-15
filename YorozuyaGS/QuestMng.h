#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CQuestMng : public IModule, CModuleRegister<CQuestMng>
        {
        public:
            CQuestMng() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static bool WINAPIV Emb_CreateNPCQuest(
                ATF::CPlayer* pPlayer,
                char* pszEventCode, 
                unsigned int dwNPCQuestIndex,
                ATF::info::CPlayerEmb_CreateNPCQuest128_ptr next);
        };
    };
};
