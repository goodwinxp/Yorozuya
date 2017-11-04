#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

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

            virtual ModuleName_t get_name();
        private:
            static bool WINAPIV Emb_CreateNPCQuest(
                ATF::CPlayer* pPlayer,
                char* pszEventCode, 
                unsigned int dwNPCQuestIndex,
                ATF::Info::CPlayerEmb_CreateNPCQuest128_ptr next);
        };
    };
};
