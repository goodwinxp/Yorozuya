#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/TimeHelper.hpp"

#include <ATF/CMainThreadInfo.hpp>
#include <ATF/CPlayerInfo.hpp>
#include <ATF/_make_tower_request_clzo.hpp>

namespace GameServer
{
    namespace Fixes
    {
        class CPlayer
            : public Yorozuya::Module::IModule
            , CModuleRegister<CPlayer>
        {
        public:
            CPlayer() { };

            virtual void load();

            virtual void unload();

            virtual Yorozuya::Module::ModuleName_t get_name();

            virtual void loop();

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
            private:
                TimeHelper::CTimer m_AdjustKillerTable;
        };
    };
};
