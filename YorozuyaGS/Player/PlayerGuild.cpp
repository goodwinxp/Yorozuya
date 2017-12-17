#include "stdafx.h"

#include "PlayerGuild.h"
#include <ATF/global.hpp>
#include <ATF/CItemStoreManager.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CPlayerGuild::load()
        {
            enable_hook(&ATF::CPlayer::pc_GuildRoomEnterRequest, &CPlayerGuild::pc_GuildRoomEnterRequest);
            enable_hook(&ATF::CPlayer::pc_GuildRoomOutRequest, &CPlayerGuild::pc_GuildRoomOutRequest);
            enable_hook(&ATF::CPlayer::pc_GuildManageRequest, &CPlayerGuild::pc_GuildManageRequest);
        }

        void CPlayerGuild::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPlayerGuild::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.player.guild";
            return name;
        }

        void WINAPIV CPlayerGuild::pc_GuildRoomEnterRequest(
            ATF::CPlayer * pPlayer,
            ATF::_guildroom_enter_request_clzo * pProtocol,
            ATF::Info::CPlayerpc_GuildRoomEnterRequest1755_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            auto fnFindNpc = [pPlayer](ATF::CMapItemStoreList* pMapItemStoreList)->bool
            {
                for (int j = 0; j < pMapItemStoreList->m_nItemStoreNum; ++j)
                {
                    auto& pItemStore = pMapItemStoreList->m_ItemStore[j];
                    if (!pItemStore.m_bLive)
                        continue;

                    auto pPosStore = pItemStore.GetStorePos();
                    for (auto button : pItemStore.m_pRec->m_nNpc_Class)
                    {
                        if (button != 44)
                            continue;

                        if (ATF::Global::Get3DSqrt(pPosStore, pPlayer->m_fCurPos) < 100.0)
                        {
                            return true;
                        }
                    }
                }

                return false;
            };

            char byRetCode = 0;
            char bySubRetCode = 3;
            char byMapIndex = 0;
            int nRoomType = 0;
            unsigned __int16 wMapLayer = 0;
            float pfStartPos[3];

            do
            {
                if (pPlayer->GetCurSecNum() == -1 || pPlayer->m_bMapLoading)
                {
                    byRetCode = 5;
                    break;
                }

                if (pPlayer->IsRidingUnit())
                {
                    byRetCode = 6;
                    break;
                }

                if (pPlayer->m_byStandType == 1)
                {
                    byRetCode = 7;
                    break;
                }

                if (!pPlayer->m_Param.m_pGuild)
                {
                    byRetCode = 1;
                    break;
                }

                auto pGuild = pPlayer->m_Param.m_pGuild;
                if (pProtocol->dwGuildSerial != pGuild->m_dwSerial)
                {
                    byRetCode = 1;
                    break;
                }

                auto pGuildRoomSystem = ATF::CGuildRoomSystem::GetInstance();
                if (!pGuildRoomSystem->IsRoomRented(pGuild->m_dwSerial))
                {
                    byRetCode = 2;
                    break;
                }

                bySubRetCode = pGuildRoomSystem->RoomIn(pGuild->m_dwSerial, pPlayer->m_ObjID.m_wIndex, pPlayer->m_pUserDB->m_dwSerial);
                if (bySubRetCode)
                {
                    byRetCode = 3;
                    break;
                }

                ATF::CMapData *pMap = nullptr;
                char byRoomType;
                if (!pGuildRoomSystem->GetMapPos(pGuild->m_dwSerial, pfStartPos, pMap, &wMapLayer, &byRoomType))
                {
                    pGuildRoomSystem->RoomOut(pGuild->m_dwSerial, pPlayer->m_ObjID.m_wIndex, pPlayer->m_pUserDB->m_dwSerial);
                    byRetCode = 4;
                    break;
                }

                auto nSerial = pPlayer->m_pCurMap->GetMapCode();
                auto pItemStoreMngInstance = ATF::CItemStoreManager::Instance();
                auto pItemStoreList = pItemStoreMngInstance->GetMapItemStoreListBySerial(nSerial);
                if (!pItemStoreList)
                {
                    byRetCode = 5;
                    break;
                }

                if (!fnFindNpc(pItemStoreList))
                {
                    byRetCode = 5;
                    break;
                }

                // SUCESS
                byRetCode = 10;
                pMap = pGuildRoomSystem->GetMapData(pPlayer->m_Param.GetRaceCode(), byRoomType);
                pPlayer->OutOfMap(pMap, wMapLayer, 3, pfStartPos);
                byMapIndex = pMap->m_pMapSet->m_dwIndex;
                pGuildRoomSystem->GetRestTime(pGuild->m_dwSerial, &nRoomType);
            } while (false);

            pPlayer->SendMsg_GuildRoomEnterResult(
                byRetCode,
                bySubRetCode,
                byMapIndex,
                wMapLayer,
                pfStartPos,
                nRoomType);
        }

        void WINAPIV CPlayerGuild::pc_GuildRoomOutRequest(
            ATF::CPlayer * pPlayer,
            ATF::_guildroom_out_request_clzo * pProtocol,
            ATF::Info::CPlayerpc_GuildRoomOutRequest1757_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            char byResult = 0;

            do
            {
                if (pPlayer->GetCurSecNum() == -1 || pPlayer->m_bMapLoading)
                {
                    byResult = 4;
                    break;
                }

                if (pPlayer->IsRidingUnit())
                {
                    byResult = 5;
                    break;
                }
                
                if (pPlayer->m_byStandType == 1)
                {
                    byResult = 6;
                    break;
                }

                if (!pPlayer->m_Param.m_pGuild)
                {
                    byResult = 1;
                    break;
                }

                auto pGuild = pPlayer->m_Param.m_pGuild;
                if (pProtocol->dwGuildSerial != pGuild->m_dwSerial)
                {
                    byResult = 1;
                    break;
                }

                auto pGuildRoomSystem = ATF::CGuildRoomSystem::GetInstance();
                if (!pGuildRoomSystem->IsRoomRented(pGuild->m_dwSerial))
                {
                    byResult = 2;
                    break;
                }
                
                if (!pGuildRoomSystem->RoomIn(pGuild->m_dwSerial, pPlayer->m_ObjID.m_wIndex, pPlayer->m_pUserDB->m_dwSerial))
                {
                    byResult = 1;
                    break;
                }

                if (!pGuildRoomSystem->SetPlayerOut(pGuild->m_dwSerial, pPlayer->m_ObjID.m_wIndex, pPlayer->m_pUserDB->m_dwSerial))
                {
                    byResult = 2;
                    break;
                }
            } while (false);

            if (byResult != 0)
                pPlayer->SendMsg_GuildRoomOutResult(byResult, 0, 0, nullptr);
        }

        void WINAPIV CPlayerGuild::pc_GuildManageRequest(
            ATF::CPlayer* pPlayer,
            char byType,
            unsigned int dwDst,
            unsigned int dwObj1,
            unsigned int dwObj2,
            unsigned int dwObj3,
            ATF::Info::CPlayerpc_GuildManageRequest1745_ptr next)
        {
            if (pPlayer->m_Param.m_pGuild)
            {
                next(pPlayer, byType, dwDst, dwObj1, dwObj2, dwObj3);
            }
            else
            {
                pPlayer->SendMsg_GuildManageResult(-53);
            }
        }
    }
}
