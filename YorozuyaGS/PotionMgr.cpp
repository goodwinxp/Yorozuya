#include "stdafx.h"

#include "ETypes.h"
#include "PotionMgr.h"
#include <ATF/global.hpp>
#include <ATF/CRaceBuffManager.hpp>
#include <ATF/CGuildRoomSystem.hpp>

namespace GameServer
{
    namespace
    {
        #define CheckEffLimType(x, y) \
        { \
            if (x == y && x != -1 && y != -1) \
                return 31; \
        }
    }

    namespace Fixes
    {
        void CPotionMgr::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CPotionMgr::PreCheckPotion, &CPotionMgr::PreCheckPotion);
        }

        void CPotionMgr::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::CPotionMgr::PreCheckPotion);
        }

        ModuleName_t CPotionMgr::get_name()
        {
            static const ModuleName_t name = "fix_PotionMgr";
            return name;
        }

        int WINAPIV CPotionMgr::PreCheckPotion(
            ATF::CPotionMgr* pObj, 
            ATF::CPlayer* pUsePlayer, 
            ATF::CCharacter** pTargetCharacter, 
            ATF::_PotionItem_fld* pfB, 
            unsigned int nCurTime, 
            ATF::_skill_fld* pFld, 
            bool bCheckDist, 
            ATF::Info::CPotionMgrPreCheckPotion22_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            int nResult = -1;

            do
            {
                auto pTrgChar = *pTargetCharacter;
                if (!pUsePlayer || !pfB || !pFld)
                {
                    nResult = -1;
                    break;
                }

                if (!pTrgChar)
                {
                    nResult = 25;
                    break;
                }

                if (*ATF::Global::Major_Cash_Item)
                {
                    if (pFld->m_nTempEffectType == 48 || 
                        pFld->m_nTempEffectType == 49 ||
                        pFld->m_nTempEffectType == 70 ||
                        pFld->m_nTempEffectType == 71)
                    {
                        nResult = 25;
                        break;
                    }
                }

                if (pUsePlayer->m_EP.GetEff_Have(ATF::_EFF_HAVE::No_Delay_Potion) == 0.0 &&
                    !pUsePlayer->m_PotionParam.IsUsableActDelay(pfB->m_nDelayType, nCurTime))
                {
                    nResult = 9;
                    break;
                }

                if (!pUsePlayer->IsPotionEffectableDst(pFld->m_strActableDst, *pTargetCharacter))
                {
                    if (pFld->m_strActableDst[0] != '1')
                    {
                        nResult = 19;
                        break;
                    }

                    *pTargetCharacter = (ATF::CCharacter *)pUsePlayer;
                }

                if (bCheckDist && pUsePlayer != *pTargetCharacter)
                {
                    auto fDist = ATF::Global::Get3DSqrt(pUsePlayer->m_fCurPos, (*pTargetCharacter)->m_fCurPos);
                    if (fDist > (float)pfB->m_nUseRange)
                    {
                        nResult = 20;
                        break;
                    }
                }

                if (pfB->m_nUseState)
                {
                    if (pfB->m_nUseState == 1 && pUsePlayer->vfptr->Is_Battle_Mode(pUsePlayer))
                    {
                        nResult = 28;
                        break;
                    }

                    if (pfB->m_nUseState == 2 && !pUsePlayer->vfptr->Is_Battle_Mode(pUsePlayer))
                    {
                        nResult = 27;
                        break;
                    }

                    if (pfB->m_nUseState == 3 && !pUsePlayer->m_bCorpse)
                    {
                        nResult = 29;
                        break;
                    }
                }

                if (pUsePlayer->m_bInGuildBattle && pUsePlayer->m_bTakeGravityStone)
                {
                    if (pFld->m_nContEffectType != -1)
                    {
                        nResult = 14;
                        break;
                    }

                    if (pFld->m_nTempEffectType != -1 && 
                        pFld->m_nTempEffectType < 150 && 
                        pFld->m_nTempEffectType != 37)
                    {
                        nResult = 14;
                        break;
                    }
                }
                
                if (!pObj->CheckPotionUsableMap(pfB, pUsePlayer->m_pCurMap))
                {
                    nResult = 37;
                    break;
                }

                if (!(*pTargetCharacter)->m_ObjID.m_byID)
                {
                    auto pTrgPlayer = (ATF::CPlayer *)*pTargetCharacter;
                    if (pFld->m_nTempEffectType != 70 &&
                        pFld->m_nTempEffectType != 71 &&
                        pFld->m_nTempEffectType != 48 &&
                        pFld->m_nTempEffectType != 49)
                    {
                        if (pUsePlayer != pTrgPlayer && pTrgPlayer->IsRidingUnit())
                        {
                            nResult = 19;
                            break;
                        }
                    }

                    if (pFld->m_nTempEffectType == 48 || pFld->m_nTempEffectType == 70)
                    {
                        if (pTrgPlayer->IsSiegeMode())
                        {
                            nResult = 19;
                            break;
                        }
                    }
                    if (pFld->m_nTempEffectType == 49 || pFld->m_nTempEffectType == 71)
                    {
                        if (pUsePlayer->IsSiegeMode())
                        {
                            nResult = 19;
                            break;
                        }
                    }

                    if (pfB->m_nDelayType == 9)
                    {
                        if (pTrgPlayer->m_dwChaosModeEndTime - pTrgPlayer->m_dwChaosModeTime10Per > nCurTime)
                        {
                            nResult = 17;
                            break;
                        }
                    }

                    if (pfB->m_nDelayType == 14)
                    {
                        if (!pTrgPlayer->m_bAfterEffect)
                        {
                            nResult = 23;
                            break;
                        }
                    }

                    if (pfB->m_nDelayType == 35 &&
                        ATF::Global::g_HolySys->GetDestroyerState() == 2 &&
                        ATF::Global::g_HolySys->GetDestroyerSerial() == pUsePlayer->m_dwObjSerial)
                    {
                        nResult = 45;
                        break;
                    }

                    if (pFld->m_nTempEffectType == 54)
                    {
                        if (pTrgPlayer->m_Param.GetTrunkSlotNum() <= 0)
                        {
                            nResult = 33;
                            break;
                        }

                        if (pTrgPlayer->m_Param.GetExtTrunkSlotNum() >= 40)
                        {
                            nResult = 34;
                            break;
                        }
                    }

                    auto pBuffMngInstance = ATF::CRaceBuffManager::Instance();
                    if (pFld->m_nTempEffectType == 55 || pFld->m_nTempEffectType == 56)
                    {
                        if (pTrgPlayer->IsUseReleaseRaceBuffPotion())
                        {
                            nResult = 35;
                            break;
                        }

                        ATF::CRaceBuffInfoByHolyQuestfGroup::RESULT_TYPE selType = 
                            pFld->m_nTempEffectType == 55 ?
                            ATF::CRaceBuffInfoByHolyQuestfGroup::RT_FAIL :
                            ATF::CRaceBuffInfoByHolyQuestfGroup::RT_LOSE;

                        auto curType = pBuffMngInstance->m_kBuffByHolyQuest.m_kBuffHolyQestResultInfo.GetResultType(
                            pTrgPlayer->m_Param.GetRaceCode(), 
                            pTrgPlayer->IsHaveMentalTicket());

                        if (selType != curType)
                        {
                            nResult = 35;
                            break;
                        }

                        auto uiContinueCnt = pBuffMngInstance->GetRaceBuffLevel(pTrgPlayer);
                        if ((uiContinueCnt & 0x80000000) != 0 || uiContinueCnt > 2)
                        {
                            nResult = 35;
                            break;
                        }

                        if (pFld->m_fTempValue[0] <  uiContinueCnt + 1)
                        {
                            nResult = 36;
                            break;
                        }
                    }

                    if (pFld->m_nTempEffectType == 73)
                    {
                        if (pTrgPlayer->GetHP() == pTrgPlayer->GetMaxHP() &&
                            pTrgPlayer->GetFP() == pTrgPlayer->GetMaxFP() &&
                            pTrgPlayer->GetSP() == pTrgPlayer->GetMaxSP())
                        {
                            nResult = 46;
                            break;
                        }
                    }
                }

                if (pUsePlayer->m_PotionBufUse.IsExtPotionUse())
                {
                    if (pFld->m_nTempEffectType == 53)
                    {
                        nResult = 30;
                        break;
                    }

                    for (auto& data : pUsePlayer->m_PotionParam.m_ContCommonPotionData)
                    {
                        if (!data.IsLive())
                            continue;

                        auto index = data.GetEffectIndex();

                        auto pCurrFld = (ATF::_skill_fld*)pObj->m_tblPotionEffectData.GetRecord(index);
                        auto pPotionFld = (ATF::_PotionItem_fld*)ATF::Global::g_MainThread->m_tblItemData[(int)e_code_item_table::tbl_code_potion].GetRecord(index);

                        if (!pCurrFld || !pPotionFld)
                            continue;

                        if (pfB->m_nPotionCheck != pPotionFld->m_nPotionCheck)
                        {
                            CheckEffLimType(pCurrFld->m_nEffLimType, pFld->m_nEffLimType);
                            CheckEffLimType(pCurrFld->m_nEffLimType, pFld->m_nEffLimType2);
                            CheckEffLimType(pCurrFld->m_nEffLimType2, pFld->m_nEffLimType);
                            CheckEffLimType(pCurrFld->m_nEffLimType2, pFld->m_nEffLimType2);
                        }
                    }
                }

                if (pFld->m_nTempEffectType == 48 ||
                    pFld->m_nTempEffectType == 49 ||
                    pFld->m_nTempEffectType == 70 ||
                    pFld->m_nTempEffectType == 71)
                {
                    auto pTrgPlayer = (ATF::CPlayer *)*pTargetCharacter;
                    if (!pObj->CheckPotionUsableMap(pfB, pTrgPlayer->m_pCurMap))
                    {
                        nResult = 37;
                        break;
                    }

                    auto fnRoomOut = [](ATF::CPlayer * player)
                    {
                        auto pGuildRoom = ATF::CGuildRoomSystem::GetInstance();
                        if (player->m_Param.m_pGuild)
                        {
                            if (player->m_pCurMap == pGuildRoom->GetMapData(player->m_Param.GetRaceCode(), 0) ||
                                player->m_pCurMap == pGuildRoom->GetMapData(player->m_Param.GetRaceCode(), 1))
                            {
                                pGuildRoom->RoomOut(
                                    player->m_Param.m_pGuild->m_dwSerial,
                                    player->m_ObjID.m_wIndex,
                                    player->m_pUserDB->m_dwSerial);
                            }
                        }
                    };

                    if (pFld->m_nTempEffectType == 48 || pFld->m_nTempEffectType == 70)
                    {
                        fnRoomOut(pTrgPlayer);
                    }

                    if (pFld->m_nTempEffectType == 49 || pFld->m_nTempEffectType == 71)
                    {
                        fnRoomOut(pUsePlayer);
                    }
                }

                if (pFld->m_nTempEffectType != 74)
                {
                    nResult = 0;
                    break;
                }

                nResult = 47;
                for (int k = 0; k < 8; ++k)
                {
                    ATF::_sf_continous* pSf = (ATF::_sf_continous *)((char *)pTrgChar->m_SFCont + 48 * k);
                    if (pSf->m_bExist)
                    {
                        nResult = 0;
                        break;
                    }
                }
            } while (false);

            return nResult;
        }
    }
}