#include "stdafx.h"

#include "PlayerEx.h"
#include <algorithm>
#include <ATF\CSUItemSystem.hpp>
#include <ATF\si_interpret.hpp>


namespace GameServer
{
    namespace Extension
    {
        CPlayerEx CPlayerEx::g_PlayerEx[ATF::Global::max_player];

        CPlayerEx::CPlayerEx()
        {
            m_setInfoCurrentSetItem.reserve(10);
        }

        void CPlayerEx::loop()
        {
            std::unique_lock<decltype(m_mtxCurrentSetInfo)> lock(m_mtxCurrentSetInfo);
            for (const auto& v : m_setInfoCurrentSetItem)
            {
                m_pPlayer->SendMsg_SetItemCheckResult(8, v.info.dwSetItem, v.info.bySetEffectNum);
            }
        }

        void CPlayerEx::update_set_item()
        {
            auto pSUItemSystemInstance = ATF::CSUItemSystem::Instance();
            ATF::CRecordData& tblSetItemEff = pSUItemSystemInstance->m_SUOrigin[0];
            ATF::CSetItemType& pSetItemType = pSUItemSystemInstance->m_SetItemType;

            detail::ContainerSetItemInfo_t setCurrent;
            {
                for (uint32_t dwSetItem = 0; dwSetItem < tblSetItemEff.GetRecordNum(); ++dwSetItem)
                {
                    ATF::_SetItemEff_fld* pSetItemFld = (ATF::_SetItemEff_fld*)tblSetItemEff.GetRecord(dwSetItem);

                    if (pSetItemFld->m_strCivil[m_pPlayer->m_Param.GetRaceCode()] == '0')
                        continue;

                    char szStrCode[64]{ 0 };
                    int nTableCode = pSUItemSystemInstance->GetSetItemTableInfo(dwSetItem, szStrCode, sizeof(szStrCode));
                    if (nTableCode > -1)
                    {
                        int nItemGrade = ATF::Global::GetItemEquipGrade(nTableCode, szStrCode);
                        if (!m_pPlayer->IsEquipAbleGrade(nItemGrade))
                            continue;
                    }

                    detail::_set_item_info SetItemInfo;
                    SetItemInfo.info.dwSetItem = dwSetItem;
                    SetItemInfo.info.bySetItemNum = 
                        m_pPlayer->m_clsSetItem.Check_EquipItem(
                            &m_pPlayer->m_pUserDB->m_AvatorData, pSetItemFld);

                    if (SetItemInfo.info.bySetItemNum != 0)
                    {
                        ATF::si_interpret* pSI_Interpret = pSetItemType.Getsi_interpret(dwSetItem);
                        for (int i = 0; i < pSI_Interpret->GetEffectTypeCount(); ++i)
                        {
                            if (pSI_Interpret->GetCountOfItem(i) != SetItemInfo.info.bySetItemNum)
                                continue;

                            SetItemInfo.info.bySetEffectNum = pSI_Interpret->GetCountOfEffect(i);
                            setCurrent.emplace(std::move(SetItemInfo));
                            break;
                        }
                    }
                }
            }

            detail::ContainerSetItemInfo_t setDiff;

            std::unique_lock<decltype(m_mtxCurrentSetInfo)> lock(m_mtxCurrentSetInfo);

            std::set_symmetric_difference(
                m_setInfoCurrentSetItem.begin(), m_setInfoCurrentSetItem.end(),
                setCurrent.begin(), setCurrent.end(),
                std::inserter(setDiff, setDiff.begin()));

            if (setDiff.empty())
                return;

            for (const auto& v : m_setInfoCurrentSetItem)
            {
                m_pPlayer->pc_SetItemCheckRequest(
                    v.info.dwSetItem,
                    v.info.bySetItemNum,
                    v.info.bySetEffectNum,
                    false);
                m_pPlayer->SendMsg_SetItemCheckResult(1, v.info.dwSetItem, v.info.bySetEffectNum);
            }

            m_setInfoCurrentSetItem.clear();

            for (const auto& v : setCurrent)
            {
                if (!m_pPlayer->pc_SetItemCheckRequest(v.info.dwSetItem, v.info.bySetItemNum, v.info.bySetEffectNum, true))
                    continue;

                m_pPlayer->SendMsg_SetItemCheckResult(0, v.info.dwSetItem, v.info.bySetEffectNum);

                m_setInfoCurrentSetItem.insert(v);
            }
        }

        bool CPlayerEx::Load(ATF::CPlayer * pPlayer)
        {
            bool result = false;

            do 
            {
                if (pPlayer->m_id.wIndex >= ATF::Global::max_player)
                    break;

                result = g_PlayerEx[pPlayer->m_id.wIndex].init(pPlayer);
            } while (false);

            return result;
        }

        void CPlayerEx::NetClose(ATF::CPlayer * pPlayer)
        {
            do
            {
                if (pPlayer->m_id.wIndex >= ATF::Global::max_player)
                    break;

                g_PlayerEx[pPlayer->m_id.wIndex].save();
            } while (false);
        }

        CPlayerEx& CPlayerEx::GetPlayerEx(const ATF::CPlayer * pPlayer)
        {
            return g_PlayerEx[pPlayer->m_id.wIndex];
        }

        bool CPlayerEx::init(ATF::CPlayer* pPlayer)
        {
            m_pPlayer = pPlayer;
            m_setInfoCurrentSetItem.clear();

            update_set_item();

            return true;
        }

        void CPlayerEx::save()
        {
            m_setInfoCurrentSetItem.clear();
            m_pPlayer = nullptr;
        }
    }
}