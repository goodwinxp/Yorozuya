#include "stdafx.h"

#include "Guild.h"
#include <ATF/global.hpp>
#include <ATF/CItemStoreManager.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CGuild::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CGuild::ManageAcceptORRefuseGuildBattle, &CGuild::ManageAcceptORRefuseGuildBattle);
            core.set_hook(&ATF::CPlayer::pc_GuildRoomEnterRequest, &CGuild::pc_GuildRoomEnterRequest);
            core.set_hook(&ATF::CPlayer::pc_GuildRoomOutRequest, &CGuild::pc_GuildRoomOutRequest);
            core.set_hook(&ATF::CGuild::ManageExpulseMember, &CGuild::ManageExpulseMember);
        }

        void CGuild::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::CGuild::ManageAcceptORRefuseGuildBattle);
            core.unset_hook(&ATF::CPlayer::pc_GuildRoomEnterRequest);
            core.unset_hook(&ATF::CPlayer::pc_GuildRoomOutRequest);
            core.unset_hook(&ATF::CGuild::ManageExpulseMember);
        }

        ModuleName_t CGuild::get_name()
        {
            static const ModuleName_t name = "fix_Guild";
            return name;
        }

        char WINAPIV CGuild::ManageAcceptORRefuseGuildBattle(
            ATF::CGuild * pObj, 
            bool bAccept, 
            ATF::Info::CGuildManageAcceptORRefuseGuildBattle80_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            static const int dwCostBattleGold = 5000;

            char result = 0;
            do
            {
                if (pObj->m_GuildBattleSugestMatter.eState != ATF::_guild_battle_suggest_matter::APPLY_BATTLE_REQUEST_SUGGEST)
                {
                    result = 111;
                    break;
                }
                    
                if (bAccept)
                {
                    if (pObj->m_dTotalGold < dwCostBattleGold)
                    {
                        result = 116;
                        break;
                    }

                    result = ATF::CGuildBattleController::Instance()->Add(
                        pObj->m_GuildBattleSugestMatter.pkSrc,
                        pObj->m_GuildBattleSugestMatter.pkDest,
                        pObj->m_GuildBattleSugestMatter.dwStartTime,
                        pObj->m_GuildBattleSugestMatter.dwNumber,
                        pObj->m_GuildBattleSugestMatter.dwMapIdx);

                    if (result)
                    {
                        if (result == 112)
                            result = 119;

                        pObj->m_GuildBattleSugestMatter.pkSrc->PushDQSInGuildBattleCost();
                        pObj->m_GuildBattleSugestMatter.pkSrc->SendMsg_ApplyGuildBattleResultInform(result, pObj->m_wszName);
                    }
                    else
                    {
                        pObj->PushDQSDestGuildOutputGuildBattleCost();
                        if (ATF::CHonorGuild::Instance()->CheckHonorGuild(
                            pObj->m_GuildBattleSugestMatter.pkSrc->m_byRace, 
                            pObj->m_GuildBattleSugestMatter.pkSrc->m_dwSerial))
                        {
                            ATF::CMoneySupplyMgr::Instance()->UpdateHonorGuildMoneyData(1, pObj->m_byRace, dwCostBattleGold);
                        }
                    }
                }
                else
                {
                    pObj->m_GuildBattleSugestMatter.pkSrc->SendMsg_GuildBattleRefused(pObj->m_wszName);
                    pObj->m_GuildBattleSugestMatter.pkSrc->PushDQSInGuildBattleCost();
                }

                pObj->m_GuildBattleSugestMatter.pkSrc->m_GuildBattleSugestMatter.Clear();
                pObj->m_GuildBattleSugestMatter.Clear();
            } while (false);

            return result;
        }

        void WINAPIV CGuild::pc_GuildRoomEnterRequest(
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

                if (pPlayer->m_byStoneMapMoveInfo == 1)
                {
                    pPlayer->m_byStoneMapMoveInfo = 2;
                }
                else if (pPlayer->m_byStoneMapMoveInfo == 2)
                {
                    byRetCode = 5;
                    break;
                }
                else
                {
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

        void WINAPIV CGuild::pc_GuildRoomOutRequest(
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

        char WINAPIV CGuild::ManageExpulseMember(
            ATF::CGuild * pGuild,
            unsigned int dwMemberSerial,
            ATF::Info::CGuildManageExpulseMember84_ptr next)
        {
            auto pInstance = ATF::GUILD_BATTLE::CNormalGuildBattleManager::Instance();
            LPVOID pBattle = pInstance->GetBattleByGuildSerial(pGuild->m_dwSerial);
            if (pBattle)
            {
                return 0x6e;
            }

            return next(pGuild, dwMemberSerial);
        }
    }
}
