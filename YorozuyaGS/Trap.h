#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer_info.hpp>
#include <ATF/CTrap_info.hpp>

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
            static void WINAPIV RecvKillMessage(
                ATF::CTrap* pObj,
                ATF::CCharacter* pDier,
                ATF::info::CTrapRecvKillMessage70_ptr next);

            static void WINAPIV SendMsg_FixPosition(
                ATF::CTrap* pTrap,
                int n,
                ATF::info::CTrapSendMsg_FixPosition82_ptr next);

            static void WINAPIV pc_MakeTrapRequest(
                ATF::CPlayer* pObj, 
                uint16_t wSkillIndex, 
                uint16_t wTrapItemSerial, 
                float* pfPos, 
                uint16_t* pConsumeSerial, 
                ATF::info::CPlayerpc_MakeTrapRequest1783_ptr next);
        };
    };
};
