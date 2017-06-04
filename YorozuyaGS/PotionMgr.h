#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/_PotionItem_fld.hpp>
#include <ATF/CPotionMgr_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CPotionMgr : public IModule, CModuleRegister<CPotionMgr>
        {
        public:
            CPotionMgr() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static int WINAPIV PreCheckPotion(
                ATF::CPotionMgr* pObj,
                ATF::CPlayer* pUsePlayer,
                ATF::CCharacter** pTargetCharacter,
                ATF::_PotionItem_fld* pfB,
                unsigned int nCurTime,
                ATF::_skill_fld* pFld,
                bool bCheckDist,
                ATF::info::CPotionMgrPreCheckPotion22_ptr next);
        };
    };
};
