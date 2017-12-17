#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayerQuestMng
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayerQuestMng>
        {
        public:
            CPlayerQuestMng() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static bool WINAPIV Emb_CreateNPCQuest(
                ATF::CPlayer* pPlayer,
                char* pszEventCode, 
                unsigned int dwNPCQuestIndex,
                ATF::Info::CPlayerEmb_CreateNPCQuest128_ptr next);
        };
    };
};
