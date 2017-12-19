#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CAnimusInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CAnimus 
            : public Yorozuya::Module::IModule
            , CModuleRegister<CAnimus>
        {
        public:
            CAnimus() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static void WINAPIV AlterExp(
                ATF::CAnimus* pObj,
                int64_t nAddExp,
                ATF::Info::CAnimusAlterExp6_ptr next);
        };
    };
};
