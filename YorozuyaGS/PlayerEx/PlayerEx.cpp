#include "stdafx.h"

#include "PlayerEx.h"
#include <algorithm>
#include <ATF/CSUItemSystem.hpp>
#include <ATF/si_interpret.hpp>

namespace GameServer
{
    namespace Extension
    {
        CPlayerEx CPlayerEx::g_PlayerEx[ATF::Global::max_player];

        CPlayerEx::CPlayerEx()
        {
            m_setSetItemInfo.reserve(10);
        }

        void CPlayerEx::Loop()
        {
            if (m_pPlayer->m_bLoad && m_pPlayer->m_bOper)
            {
                if (!m_pPlayer->IsSiegeMode() && !m_pPlayer->IsRidingUnit())
                {
                    if (m_tmPeriodSendItemInfo.is_end())
                    {
                        for (const auto& set : m_setSetItemInfoView)
                        {
                            m_pPlayer->SendMsg_SetItemCheckResult(8, set.info.dwSetItem, set.info.bySetEffectNum);
                        }
                        m_tmPeriodSendItemInfo.begin(::std::chrono::seconds(10));
                    }
                }
            }
        }

        void CPlayerEx::UpdateSetItem()
        {
            auto pSUItemSystemInstance = ATF::CSUItemSystem::Instance();
            ATF::CSetItemType* pSetItemType = pSUItemSystemInstance->GetCSetItemType();
            if (!pSetItemType)
                return;

            ATF::CRecordData* pSetItemEff = pSUItemSystemInstance->GetCRecordData_SetItem();
            if (!pSetItemEff)
                return;

            #pragma region DetectCurrentActiveSetEff
            detail::ContainerSetItemInfo_t setCurrent;
            {
                for (uint32_t dwSetIndex = 0; dwSetIndex < pSetItemEff->GetRecordNum(); ++dwSetIndex)
                {
                    ATF::_SetItemEff_fld* pSetItemFld = (ATF::_SetItemEff_fld*)pSetItemEff->GetRecord(dwSetIndex);
                    if (pSetItemFld->m_strCivil[m_pPlayer->m_Param.GetRaceSexCode()] == '0')
                        continue;

                    char szStrCode[64]{ 0 };
                    int nTableCode = pSUItemSystemInstance->GetSetItemTableInfo(dwSetIndex, szStrCode, sizeof(szStrCode));
                    if (nTableCode > -1)
                    {
                        int nItemGrade = ATF::Global::GetItemEquipGrade(nTableCode, szStrCode);
                        if (!m_pPlayer->IsEquipAbleGrade(nItemGrade))
                            continue;
                    }

                    BYTE byHaveItem = m_pPlayer->m_clsSetItem.Check_EquipItem(
                        &m_pPlayer->m_pUserDB->m_AvatorData, pSetItemFld);

                    if (byHaveItem == 0)
                        continue;
                    
                    ATF::si_interpret* pSI_Interpret = pSetItemType->Getsi_interpret(dwSetIndex);
                    if (!pSI_Interpret)
                        continue;

                    for (int i = 0; i < pSI_Interpret->GetEffectTypeCount(); ++i)
                    {
                        detail::_set_item_info SetItemInfo;
                        SetItemInfo.info.dwSetItem = dwSetIndex;
                        if (pSI_Interpret->GetCountOfItem(i) > byHaveItem)
                            continue;

                        SetItemInfo.info.bySetItemNum = pSI_Interpret->GetCountOfItem(i);
                        SetItemInfo.info.bySetEffectNum = pSI_Interpret->GetCountOfEffect(i);

                        const auto it_find = ::std::find_if(
                            setCurrent.begin(), setCurrent.end(),
                            [&](const detail::ContainerSetItemInfo_t::value_type& item) {
                                return item.info.dwSetItem == SetItemInfo.info.dwSetItem 
                                    && item.info.bySetItemNum < SetItemInfo.info.bySetItemNum;
                            });

                        if (it_find != setCurrent.cend())
                        {
                            setCurrent.erase(it_find);
                        }

                        setCurrent.emplace(std::move(SetItemInfo));
                    }
                    
                }
            }
            #pragma endregion DetectCurrentActiveSetEff

            for (const auto& v : m_setSetItemInfo)
            {
                const auto it_find = ::std::find_if(
                    setCurrent.begin(), setCurrent.end(),
                    [&](const detail::ContainerSetItemInfo_t::value_type& item) {
                        return item.info.dwSetItem == v.info.dwSetItem;
                    });

                if (it_find == setCurrent.cend())
                {
                    uint8_t byResult;
                    if (!pc_SetItemCheckRequest(m_pPlayer, v.info.dwSetItem, v.info.bySetItemNum, v.info.bySetEffectNum, false, byResult))
                        continue;

                    m_pPlayer->SendMsg_SetItemCheckResult(byResult, v.info.dwSetItem, v.info.bySetEffectNum);
                }
            }

            #pragma region DetectSetOnActionCode
            {
                for (const auto& v : setCurrent)
                {
                    uint8_t byResult;
                    if (!pc_SetItemCheckRequest(m_pPlayer, v.info.dwSetItem, v.info.bySetItemNum, v.info.bySetEffectNum, true, byResult))
                        continue;

                    m_pPlayer->SendMsg_SetItemCheckResult(byResult, v.info.dwSetItem, v.info.bySetEffectNum);
                }
            }
            #pragma endregion DetectSetOnActionCode

            {
                m_setSetItemInfoView = setCurrent;
                m_tmPeriodSendItemInfo.abort();
            }
           
            m_setSetItemInfo.swap(setCurrent);
        }

        bool CPlayerEx::Load(ATF::CPlayer * pPlayer)
        {
            bool result = false;

            do 
            {
                if (pPlayer->m_id.wIndex >= ATF::Global::max_player)
                    break;

                result = g_PlayerEx[pPlayer->m_id.wIndex].Init(pPlayer);
            } while (false);

            return result;
        }

        void CPlayerEx::NetClose(ATF::CPlayer * pPlayer)
        {
            do
            {
                if (pPlayer->m_id.wIndex >= ATF::Global::max_player)
                    break;

                g_PlayerEx[pPlayer->m_id.wIndex].Save();
            } while (false);
        }

        CPlayerEx& CPlayerEx::GetPlayerEx(const ATF::CPlayer * pPlayer)
        {
            return g_PlayerEx[pPlayer->m_id.wIndex];
        }

        bool WINAPIV CPlayerEx::pc_SetItemCheckRequest(
            ATF::CPlayer * pPlayer,
            unsigned int dwSetItem,
            char bySetItemNum,
            char bySetEffectNum,
            bool bSet,
            uint8_t& byResult)
        {
            bool result = false;

            do
            {
                auto pSUItemSystemInst = ATF::CSUItemSystem::Instance();
                auto pSetItemType = pSUItemSystemInst->GetCSetItemType();
                if (!pSetItemType)
                {
                    break;
                }

                auto pSI = pSetItemType->Getsi_interpret(dwSetItem);
                if (!pSI)
                {
                    break;
                }

                byResult = 9;
                if (!bSet)
                {
                    byResult = pPlayer->m_clsSetItem.SetOffEffect(dwSetItem, bySetItemNum, bySetEffectNum);
                    if (byResult == 1)
                        pPlayer->ApplySetItemEffect(pSI, dwSetItem, bySetItemNum, bySetEffectNum, false);
                }
                else
                {
                    char szStrCode[64]{ 0 };
                    bool bIsEquipAbleGrade = false;

                    int nTableCode = pSUItemSystemInst->GetSetItemTableInfo(dwSetItem, szStrCode, 64);
                    if (nTableCode > -1)
                    {
                        int nEquipGrade = ATF::Global::GetItemEquipGrade(nTableCode, szStrCode);
                        if (pPlayer->IsEquipAbleGrade(nEquipGrade))
                            bIsEquipAbleGrade = true;
                    }

                    if (bIsEquipAbleGrade)
                    {
                        byResult = pPlayer->m_clsSetItem.SetOnEffect(
                            &pPlayer->m_pUserDB->m_AvatorData,
                            dwSetItem,
                            bySetItemNum,
                            bySetEffectNum);

                        switch (byResult)
                        {
                        case 0:
                            pPlayer->ApplySetItemEffect(pSI, dwSetItem, bySetItemNum, bySetEffectNum, true);
                            break;
                        case 8:
                            pPlayer->ApplySetItemEffect(
                                pSI,
                                pPlayer->m_clsSetItem.GetResetIdx(),
                                pPlayer->m_clsSetItem.GetResetItemNum(),
                                pPlayer->m_clsSetItem.GetResetEffectNum(),
                                false);
                            pPlayer->ApplySetItemEffect(
                                pSI,
                                dwSetItem,
                                bySetItemNum,
                                bySetEffectNum,
                                true);
                            break;
                        case 4:
                        case 3:
                        case 2:
                        case 7:
                            break;
                        default:
                            byResult = 9;
                            break;
                        }
                    }
                }

                result = true;
            } while (false);

            return result;
        }

        bool CPlayerEx::Init(ATF::CPlayer* pPlayer)
        {
            m_dwPlayerSerial = pPlayer->m_pUserDB->m_dwSerial;

            ResetSetItem();

            ResetAttackDelay();

            CleanSerialKillerList();

            InitMoveInfo();

            UpdateSetItem();

            LoadSerialKillerList();

            return true;
        }

        void CPlayerEx::Save()
        {
            DBSave();

            ResetSetItem();

            ResetAttackDelay();

            CleanSerialKillerList();

            m_dwPlayerSerial = -1;
        }

        void CPlayerEx::DBSave()
        {
            SaveSerialKillerList();
        }

        void CPlayerEx::ResetSetItem()
        {
            m_setSetItemInfo.clear();

            {
                m_tmPeriodSendItemInfo.abort();
                m_setSetItemInfoView.clear();
            }
        }

        void CPlayerEx::ResetAttackDelay()
        {
            m_AttackDelay.reset();
        }

        bool CPlayerEx::init_player(size_t indx, ATF::CPlayer * pPlayer)
        {
            bool result = false;

            do
            {
                if (indx >= ATF::Global::max_player)
                    break;

                g_PlayerEx[indx].m_pPlayer = pPlayer;
                result = true;
            } while (false);

            return result;
        }
    }
}
