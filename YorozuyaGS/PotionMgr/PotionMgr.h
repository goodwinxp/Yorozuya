#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/_PotionItem_fld.hpp>
#include <ATF/CPotionMgrInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPotionMgr
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPotionMgr>
        {
        public:
            CPotionMgr() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static int WINAPIV PreCheckPotion(
                ATF::CPotionMgr* pObj,
                ATF::CPlayer* pUsePlayer,
                ATF::CCharacter** pTargetCharacter,
                ATF::_PotionItem_fld* pfB,
                unsigned int nCurTime,
                ATF::_skill_fld* pFld,
                bool bCheckDist,
                ATF::Info::CPotionMgrPreCheckPotion22_ptr next);
        };
    };
};
