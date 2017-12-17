#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayerTrade
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayerTrade>
        {
        public:
            CPlayerTrade() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static void WINAPIV pc_DTradeOKRequest(
                struct ATF::CPlayer* pObj,
                unsigned int* pdwKey,
                ATF::Info::CPlayerpc_DTradeOKRequest1687_ptr next);
        };
    };
};
