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

            virtual ModuleName_t get_name();
        private:
            void init_player_ex();

        private:
            static void WINAPIV Loop(
                ATF::CPlayer *pPlayer,
                ATF::Info::CPlayerLoop368_ptr next);

            static bool WINAPIV Load(
                ATF::CPlayer *pPlayer, 
                ATF::CUserDB* pUser, 
                bool bFirstStart,
                ATF::Info::CPlayerLoad366_ptr next);

            static void WINAPIV NetClose(
                ATF::CPlayer *pPlayer,
                bool bMoveOutLobby,
                ATF::Info::CPlayerNetClose370_ptr next);

            static void WINAPIV CalcPvP(
                ATF::CPlayer *pPlayer, 
                ATF::CPlayer *pDier, 
                char byKillerObjID,
                ATF::Info::CPlayerCalcPvP74_ptr next);

            static void WINAPIV UpdatePvpOrderView(
                ATF::CPlayer *pPlayer,
                int64_t tCurTime,
                ATF::Info::CPlayerUpdatePvpPointLimiter1290_ptr next);

            static void WINAPIV CalPvpTempCash(
                ATF::CPlayer *pPlayer,
                ATF::CPlayer *pDier,
                char byKillerObjID,
                ATF::Info::CPlayerCalPvpTempCash52_ptr next);

            static void WINAPIV pc_MakeTrapRequest(
                ATF::CPlayer* pPlayer,
                uint16_t wSkillIndex,
                uint16_t wTrapItemSerial,
                float* pfPos,
                uint16_t* pConsumeSerial,
                ATF::Info::CPlayerpc_MakeTrapRequest1783_ptr next);

            static void WINAPIV pc_MakeTowerRequest(
                ATF::CPlayer* pPlayer,
                uint16_t wSkillIndex,
                uint16_t wTowerItemSerial,
                char byMaterialNum,
                ATF::_make_tower_request_clzo::__material* pMaterial,
                float* pfPos,
                uint16_t* pConsumeSerial, 
                ATF::Info::CPlayerpc_MakeTowerRequest1781_ptr next);

            static void WINAPIV pc_GestureRequest(
                ATF::CPlayer* pPlayer,
                char byGestureType,
                ATF::Info::CPlayerpc_GestureRequest1719_ptr next);

            static void WINAPIV pc_GuildManageRequest(
                ATF::CPlayer* pPlayer,
                char byType,
                unsigned int dwDst,
                unsigned int dwObj1,
                unsigned int dwObj2,
                unsigned int dwObj3,
                ATF::Info::CPlayerpc_GuildManageRequest1745_ptr next);

            static void WINAPIV pc_MovePortal(
                ATF::CPlayer* pPlayer, 
                int nPortalIndex, 
                uint16_t* pConsumeSerial, 
                ATF::Info::CPlayerpc_MovePortal1795_ptr next);

            static char WINAPIV pc_CharacterRenameCheck(
                ATF::CPlayer *pPlayer, 
                char *strCharacterName,
                ATF::Info::CPlayerpc_CharacterRenameCheck1629_ptr next);

            static void WINAPIV pc_GotoBasePortalRequest(
                ATF::CPlayer *pPlayer,
                unsigned __int16 wItemSerial,
                ATF::Info::CPlayerpc_GotoBasePortalRequest1725_ptr next);

            static void WINAPIV pc_ThrowStorageItem(
                ATF::CPlayer *pPlayer, 
                ATF::_STORAGE_POS_INDIV* pItem,
                ATF::Info::CPlayerpc_ThrowStorageItem1953_ptr next);

            static void WINAPIV pc_ExchangeItem(
                ATF::CPlayer *pPlayer,
                unsigned __int16 wManualIndex, 
                unsigned __int16 wItemSerial,
                ATF::Info::CPlayerpc_ExchangeItem1711_ptr next);

            static void WINAPIV pc_MoveNext(
                ATF::CPlayer *pPlayer,
                char byMoveType,
                float* pfCur,
                float* pfTar,
                char byDirect,
                ATF::Info::CPlayerpc_MoveNext1793_ptr next);

            static void WINAPIV pc_RealMovPos(
                ATF::CPlayer *pPlayer,
                float* pfCur,
                ATF::Info::CPlayerpc_RealMovPos1879_ptr next);

            static void WINAPIV pc_MoveStop(
                ATF::CPlayer *pPlayer,
                float* pfCur,
                ATF::Info::CPlayerpc_MoveStop1797_ptr next);
        };
    };
};
