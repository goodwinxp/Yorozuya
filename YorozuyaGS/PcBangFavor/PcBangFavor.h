#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPcBangFavorInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPcBangFavor
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPcBangFavor>
        {
        public:
            CPcBangFavor() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static bool WINAPIV PcBangGiveItem(
                ATF::CPcBangFavor* pObj,
                ATF::CPlayer* pOne, 
                unsigned int dwRecIndex, 
                char* bySeletItemIndex, 
                int nSelectCount,
                ATF::Info::CPcBangFavorPcBangGiveItem16_ptr next);
        };
    };
};
