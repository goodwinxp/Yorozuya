#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CTrap_info.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CViewInvisible : public IModule, CModuleRegister<CViewInvisible>
        {
        public:
            CViewInvisible() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static void WINAPIV SendMsg_FixPosition(
                ATF::CTrap* pTrap, 
                int n,
                ATF::info::CTrapSendMsg_FixPosition82_ptr next);
        };
    };
};
