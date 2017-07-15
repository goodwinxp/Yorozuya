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

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
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
