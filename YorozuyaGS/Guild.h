#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CGuildInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CGuild : public IModule, CModuleRegister<CGuild>
        {
        public:
            CGuild() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static char WINAPIV ManageAcceptORRefuseGuildBattle(
                ATF::CGuild* pObj, 
                bool bAccept, 
                ATF::Info::CGuildManageAcceptORRefuseGuildBattle80_ptr next);
        };
    };
};
