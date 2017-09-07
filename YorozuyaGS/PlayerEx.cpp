#include "stdafx.h"

#include "PlayerEx.h"
#include <algorithm>
#include <ATF\CSUItemSystem.hpp>
#include <ATF\si_interpret.hpp>
#include <experimental/unordered_map>

namespace GameServer
{
    namespace Extension
    {
        CPlayerEx CPlayerEx::g_PlayerEx[ATF::Global::max_player];

        CPlayerEx::CPlayerEx()
        {
            m_setKillerInfo.reserve(30);
            m_setSetItemInfo.reserve(10);
            m_mapSetItemAction.reserve(10);
        }

        void CPlayerEx::Loop()
        {
            {
                auto current_time = std::chrono::steady_clock::now();
                std::unique_lock<decltype(m_mtxSetAction)> lock(m_mtxSetAction);
                _STD experimental::erase_if(
                    m_mapSetItemAction, 
                    [&](detail::ContainerSetItemAction_t::value_type& kv)
                    {
                        return kv.second.is_due(current_time);
                    });
            }
            {
                std::unique_lock<decltype(m_mtxSetAction)> lock(m_mtxSetAction);
                for (const auto& v : m_setSetItemInfo)
                {
                    m_pPlayer->SendMsg_SetItemCheckResult(8, v.info.dwSetItem, v.info.bySetEffectNum);
                }
            }
        }

        void CPlayerEx::UpdateSetItem(bool bFirst)
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

                    detail::_set_item_info SetItemInfo;
                    SetItemInfo.info.dwSetItem = dwSetIndex;
                    SetItemInfo.info.bySetItemNum = 
                        m_pPlayer->m_clsSetItem.Check_EquipItem(
                            &m_pPlayer->m_pUserDB->m_AvatorData, pSetItemFld);

                    if (SetItemInfo.info.bySetItemNum != 0)
                    {
                        ATF::si_interpret* pSI_Interpret = pSetItemType->Getsi_interpret(dwSetIndex);
                        if (!pSI_Interpret)
                            continue;

                        for (int i = 0; i < pSI_Interpret->GetEffectTypeCount(); ++i)
                        {
                            if (pSI_Interpret->GetCountOfItem(i) != SetItemInfo.info.bySetItemNum)
                                continue;

                            SetItemInfo.info.bySetEffectNum = pSI_Interpret->GetCountOfEffect(i);
                            setCurrent.emplace(std::move(SetItemInfo));
                        }
                    }
                }
            }
            #pragma endregion DetectCurrentActiveSetEff

            if (!bFirst)
            {
                for (const auto& v : m_setSetItemInfo)
                {
                    m_pPlayer->pc_SetItemCheckRequest(
                        v.info.dwSetItem,
                        v.info.bySetItemNum,
                        v.info.bySetEffectNum,
                        false);

                    const auto it_find = _STD find_if(
                        setCurrent.begin(), setCurrent.end(),
                        [&](const detail::ContainerSetItemInfo_t::value_type& item) {
                            return item.info.dwSetItem == v.info.dwSetItem;
                        });

                    if (it_find == setCurrent.cend())
                    {
                        m_pPlayer->SendMsg_SetItemCheckResult(1, v.info.dwSetItem, v.info.bySetEffectNum);
                    }
                }
            }

            #pragma region DetectSetOnActionCode
            {
                auto current_time = std::chrono::steady_clock::now();
                std::unique_lock<decltype(m_mtxSetAction)> lock(m_mtxSetAction);
                for (const auto& v : setCurrent)
                {
                    detail::_set_item_action item_action;
                    item_action.code_result = 9;
                    item_action.action_added = current_time;

                    const auto it_find = _STD find_if(
                        m_setSetItemInfo.begin(), m_setSetItemInfo.end(),
                        [&](const detail::ContainerSetItemInfo_t::value_type& item) {
                            return item.info.dwSetItem == v.info.dwSetItem;
                        });

                    if (m_setSetItemInfo.cend() != it_find)
                    {
                        if (it_find->value == v.value)
                        {
                            item_action.code_result = 4;
                        }
                        else
                        {
                            item_action.code_result = 8;
                        }
                    }
                    else
                    {
                        item_action.code_result = 0;
                    }

                    if (!m_pPlayer->pc_SetItemCheckRequest(v.info.dwSetItem, v.info.bySetItemNum, v.info.bySetEffectNum, true))
                        continue;

                    m_mapSetItemAction.emplace(v, std::move(item_action));
                }
            }
            #pragma endregion DetectSetOnActionCode

            {
                std::unique_lock<decltype(m_mtxSetAction)> lock(m_mtxSetAction);
                m_setSetItemInfo.swap(setCurrent);
            }
        }

        void CPlayerEx::SetItemCheckRequest(DWORD dwSetIndex, BYTE bySetItemNum, BYTE bySetEffectNum)
        {
            detail::_set_item_info SetItemInfo;
            SetItemInfo.info.dwSetItem = dwSetIndex;
            SetItemInfo.info.bySetItemNum = bySetItemNum;
            SetItemInfo.info.bySetEffectNum = bySetEffectNum;

            BYTE byResult = 7;

            do
            {
                auto pSUItemSystemInstance = ATF::CSUItemSystem::Instance();
                ATF::CSetItemType* pSetItemType = pSUItemSystemInstance->GetCSetItemType();
                if (!pSetItemType)
                    break;

                ATF::CRecordData* pSetItemEff = pSUItemSystemInstance->GetCRecordData_SetItem();
                if (!pSetItemEff)
                    break;

                ATF::_SetItemEff_fld* pSetItemFld = (ATF::_SetItemEff_fld*)pSetItemEff->GetRecord(dwSetIndex);
                if (pSetItemFld->m_strCivil[m_pPlayer->m_Param.GetRaceCode()] == '0')
                {
                    byResult = 3;
                    break;
                }

                char szStrCode[64]{ 0 };
                int nTableCode = pSUItemSystemInstance->GetSetItemTableInfo(dwSetIndex, szStrCode, sizeof(szStrCode));
                if (nTableCode > -1)
                {
                    int nItemGrade = ATF::Global::GetItemEquipGrade(nTableCode, szStrCode);
                    if (!m_pPlayer->IsEquipAbleGrade(nItemGrade))
                    {
                        byResult = 3;
                        break;
                    }
                }

                byResult = 8;
                std::unique_lock<decltype(m_mtxSetAction)> lock(m_mtxSetAction);
                const auto it_find = m_mapSetItemAction.find(SetItemInfo);
                if (it_find != m_mapSetItemAction.cend())
                {
                    byResult = it_find->second.code_result;
                    m_mapSetItemAction.erase(it_find);
                }
            } while (false);

            m_pPlayer->SendMsg_SetItemCheckResult(byResult, dwSetIndex, bySetEffectNum);
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

        bool CPlayerEx::Init(ATF::CPlayer* pPlayer)
        {
            m_pPlayer = pPlayer;

            CleanSetItem();

            CleanSerialKillerList();

            UpdateSetItem(true);

            return true;
        }

        void CPlayerEx::Save()
        {
            CleanSetItem();

            CleanSerialKillerList();

            m_pPlayer = nullptr;
        }

        void CPlayerEx::CleanSetItem()
        {
            {
                std::unique_lock<decltype(m_mtxSetAction)> lock(m_mtxSetAction);
                m_mapSetItemAction.clear();
            }

            m_setSetItemInfo.clear();
        }
    }
}