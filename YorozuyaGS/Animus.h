#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CAnimusInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CAnimus : public IModule, CModuleRegister<CAnimus>
        {
        public:
            CAnimus() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static void WINAPIV AlterExp(
                ATF::CAnimus* pObj,
                int64_t nAddExp,
                ATF::Info::CAnimusAlterExp6_ptr next);
        };
    };
};
