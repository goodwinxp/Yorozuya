#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>
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
            static bool WINAPIV Load(
                ATF::CPlayer *pObj, 
                ATF::CUserDB* pUser, 
                bool bFirstStart,
                ATF::Info::CPlayerLoad366_ptr next);

            static void WINAPIV NetClose(
                ATF::CPlayer *pObj,
                bool bMoveOutLobby,
                ATF::Info::CPlayerNetClose370_ptr next);

            static void WINAPIV CalcPvP(
                ATF::CPlayer *pObj, 
                ATF::CPlayer *pDier, 
                char byKillerObjID,
                ATF::Info::CPlayerCalcPvP74_ptr next);

            static void WINAPIV CalPvpTempCash(
                ATF::CPlayer *pObj,
                ATF::CPlayer *pDier,
                char byKillerObjID,
                ATF::Info::CPlayerCalPvpTempCash52_ptr next);

            static void WINAPIV pc_MakeTrapRequest(
                ATF::CPlayer* pObj,
                uint16_t wSkillIndex,
                uint16_t wTrapItemSerial,
                float* pfPos,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_MakeTrapRequest1783_ptr next);

            static void WINAPIV pc_MakeTowerRequest(
                ATF::CPlayer* pObj,
                uint16_t wSkillIndex,
                uint16_t wTowerItemSerial,
                char byMaterialNum,
                ATF::_make_tower_request_clzo::__material* pMaterial,
                float* pfPos,
                uint16_t* pConsumeSerial, 
                ATF::Info::CPlayerpc_MakeTowerRequest1781_ptr next);

            static void WINAPIV pc_GestureRequest(
                ATF::CPlayer* pObj,
                char byGestureType,
                ATF::Info::CPlayerpc_GestureRequest1719_ptr next);

            static void WINAPIV pc_GuildManageRequest(
                ATF::CPlayer* pObj,
                char byType,
                unsigned int dwDst,
                unsigned int dwObj1,
                unsigned int dwObj2,
                unsigned int dwObj3,
                ATF::Info::CPlayerpc_GuildManageRequest1745_ptr next);

            static void WINAPIV pc_MovePortal(
                ATF::CPlayer* pObj, 
                int nPortalIndex, 
                uint16_t* pConsumeSerial, 
                ATF::Info::CPlayerpc_MovePortal1795_ptr next);

            static char WINAPIV pc_CharacterRenameCheck(
                ATF::CPlayer *pObj, 
                char *strCharacterName,
                ATF::Info::CPlayerpc_CharacterRenameCheck1629_ptr next);

            static void WINAPIV pc_GotoBasePortalRequest(
                ATF::CPlayer *pObj,
                unsigned __int16 wItemSerial,
                ATF::Info::CPlayerpc_GotoBasePortalRequest1725_ptr next);

            static void WINAPIV pc_ThrowStorageItem(
                ATF::CPlayer *pObj, 
                ATF::_STORAGE_POS_INDIV* pItem,
                ATF::Info::CPlayerpc_ThrowStorageItem1953_ptr next);
        };
    };
};
