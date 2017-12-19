#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>
#include <ATF/CTrapInfo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CTrap
            : public Yorozuya::Module::IModule
            , CModuleRegister<CTrap>
        {
        public:
            CTrap() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;
        private:
            static void WINAPIV SendMsg_FixPositionImpl(
                ATF::CTrap* pTrap,
                int n);

            static void WINAPIV RecvKillMessage(
                ATF::CTrap* pObj,
                ATF::CCharacter* pDier,
                ATF::Info::CTrapRecvKillMessage70_ptr next);

            static void WINAPIV SendMsg_FixPosition(
                ATF::CTrap* pTrap,
                int n,
                ATF::Info::CTrapSendMsg_FixPosition82_ptr next);

            static void WINAPIV SendMsg_Attack(
                ATF::CTrap* pTrap,
                ATF::CAttack *pAt,
                ATF::Info::CTrapSendMsg_Attack76_ptr next);
        };
    };
};
