#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPcBangFavorInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CPcBangFavor : public IModule, CModuleRegister<CPcBangFavor>
        {
        public:
            CPcBangFavor() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
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
