#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CTrade : public IModule, CModuleRegister<CTrade>
        {
        public:
            CTrade() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static void WINAPIV pc_DTradeOKRequest(
                struct ATF::CPlayer* pObj,
                unsigned int* pdwKey,
                ATF::Info::CPlayerpc_DTradeOKRequest1687_ptr next);
        };
    };
};
