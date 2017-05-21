#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayer_info.hpp>
#include <ATF/_make_tower_request_clzo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CPlayer : public IModule, CModuleRegister<CPlayer>
        {
        public:
            CPlayer() { };

            virtual void load();

            virtual void unload();

            virtual void loop();

            virtual ModuleVersion_t get_version();

            virtual ModuleName_t get_name();

            virtual void configure(const rapidjson::Value& nodeConfig);
        private:
            static void WINAPIV CalcPvP(
                ATF::CPlayer *pObj, 
                ATF::CPlayer *pDier, 
                char byKillerObjID,
                ATF::info::CPlayerCalcPvP74_ptr next);

            static void WINAPIV CalPvpTempCash(
                ATF::CPlayer *pObj,
                ATF::CPlayer *pDier,
                char byKillerObjID,
                ATF::info::CPlayerCalPvpTempCash52_ptr next);

            static void WINAPIV pc_MakeTrapRequest(
                ATF::CPlayer* pObj,
                uint16_t wSkillIndex,
                uint16_t wTrapItemSerial,
                float* pfPos,
                uint16_t* pConsumeSerial,
                ATF::info::CPlayerpc_MakeTrapRequest1783_ptr next);

            static void WINAPIV pc_MakeTowerRequest(
                ATF::CPlayer* pObj,
                uint16_t wSkillIndex,
                uint16_t wTowerItemSerial,
                char byMaterialNum,
                ATF::_make_tower_request_clzo::__material* pMaterial,
                float* pfPos,
                uint16_t* pConsumeSerial, 
                ATF::info::CPlayerpc_MakeTowerRequest1781_ptr next);

            static void WINAPIV pc_GestureRequest(
                ATF::CPlayer* pObj,
                char byGestureType,
                ATF::info::CPlayerpc_GestureRequest1719_ptr next);

            static void WINAPIV pc_GuildManageRequest(
                ATF::CPlayer* pObj,
                char byType,
                unsigned int dwDst,
                unsigned int dwObj1,
                unsigned int dwObj2,
                unsigned int dwObj3,
                ATF::info::CPlayerpc_GuildManageRequest1745_ptr next);

            static void WINAPIV pc_MovePortal(
                ATF::CPlayer* pObj, 
                int nPortalIndex, 
                uint16_t* pConsumeSerial, 
                ATF::info::CPlayerpc_MovePortal1795_ptr next);

            static char WINAPIV pc_CharacterRenameCheck(
                ATF::CPlayer *pObj, 
                char *strCharacterName,
                ATF::info::CPlayerpc_CharacterRenameCheck1629_ptr next);

            static void WINAPIV pc_GotoBasePortalRequest(
                ATF::CPlayer *pObj,
                unsigned __int16 wItemSerial,
                ATF::info::CPlayerpc_GotoBasePortalRequest1725_ptr next);
        };
    };
};
