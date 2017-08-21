#include "stdafx.h"

#include "PlayerEx.h"
#include <ATF\CSUItemSystem.hpp>
#include <ATF\si_interpret.hpp>

// TODO : optimization for detect activating set

namespace GameServer
{
    namespace Extension
    {
        CPlayerEx CPlayerEx::g_PlayerEx[ATF::Global::max_player];

        CPlayerEx::CPlayerEx()
        {
            m_vecInfoCurrentSetItem.reserve(10);
        }

        void CPlayerEx::update_set_item()
        {
            auto pSUItemSystemInstance = ATF::CSUItemSystem::Instance();
            ATF::CRecordData& tblSetItemEff = pSUItemSystemInstance->m_SUOrigin[0];
            ATF::CSetItemType& pSetItemType = pSUItemSystemInstance->m_SetItemType;

            for (auto& info : m_vecInfoCurrentSetItem)
            {
                m_pPlayer->pc_SetItemCheckRequest(
                    info.dwSetItem,
                    info.bySetItemNum,
                    info.bySetEffectNum,
                    false);
            }
            m_vecInfoCurrentSetItem.clear();

            for (uint32_t dwSetItem = 0; dwSetItem < tblSetItemEff.GetRecordNum(); ++dwSetItem)
            {
                uint8_t bySetItemNum = m_pPlayer->m_clsSetItem.Check_EquipItem(
                    &m_pPlayer->m_pUserDB->m_AvatorData,
                    (ATF::_SetItemEff_fld*)tblSetItemEff.GetRecord(dwSetItem));

                if (bySetItemNum == 0)
                {
                    continue;
                }

                ATF::si_interpret* pSI_Interpret = pSetItemType.Getsi_interpret(dwSetItem);

                uint8_t bySetEffectNum = 0;
                for (int i = 0; i < pSI_Interpret->GetEffectTypeCount(); ++i)
                {
                    if (pSI_Interpret->GetCountOfItem(i) != bySetItemNum)
                    {
                        continue;
                    }

                    bySetEffectNum = pSI_Interpret->GetCountOfEffect(i);
                    break;
                }

                if (m_pPlayer->pc_SetItemCheckRequest(dwSetItem, bySetItemNum, bySetEffectNum, true))
                {
                    m_vecInfoCurrentSetItem.emplace_back(
                        detail::_set_item_info{
                        dwSetItem,
                        bySetItemNum,
                        bySetEffectNum
                    });
                }
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
            m_vecInfoCurrentSetItem.clear();

            update_set_item();

            return true;
        }

        void CPlayerEx::save()
        {
            m_vecInfoCurrentSetItem.clear();
            m_pPlayer = nullptr;
        }
    }
}