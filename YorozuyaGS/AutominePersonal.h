#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/AutominePersonalInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CAutominePersonal : public IModule, CModuleRegister<CAutominePersonal>
        {
        public:
            CAutominePersonal() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static void WINAPIV send_attacked(
                ATF::AutominePersonal* pObj,
                ATF::Info::AutominePersonalsend_attacked64_ptr next);

            static char WINAPIV sub_battery(
                ATF::AutominePersonal* pObj,
                unsigned int dwUsed,
                ATF::Info::AutominePersonalsub_battery86_ptr next);
        };
    };
};
