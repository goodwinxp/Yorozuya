#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>
#include <ATF/CTrapInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CTrap : public IModule, CModuleRegister<CTrap>
        {
        public:
            CTrap() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);

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
