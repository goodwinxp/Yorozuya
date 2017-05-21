#include "stdafx.h"

#include "ETypes.h"
#include "ViewInvisible.h"
#include <ATF/global.hpp>
#include <ATF/_player_fixpositon_zocl.hpp>

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CViewInvisible::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&CPlayer::SendMsg_FixPosition, &CViewInvisible::CPlayer_SendMsg_FixPosition);
            core.set_hook(&CPlayer::SendMsg_OtherShapePart, &CViewInvisible::CPlayer__SendMsg_OtherShapePart);
            core.set_hook(&CPlayer::SendMsg_OtherShapeAll, &CViewInvisible::CPlayer__SendMsg_OtherShapeAll);
        }

        void CViewInvisible::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CPlayer::SendMsg_FixPosition);
            core.unset_hook(&CPlayer::SendMsg_OtherShapePart);
            core.unset_hook(&CPlayer::SendMsg_OtherShapeAll);
        }

        void CViewInvisible::loop()
        {
        }

        ModuleVersion_t CViewInvisible::get_version()
        {
            return usVersion;
        }

        ModuleName_t CViewInvisible::get_name()
        {
            static const ModuleName_t name = "fix_viewinvisible";
            return name;
        }

        void CViewInvisible::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        bool check_conditions(ATF::CPlayer *pPlayer, ATF::CPlayer *pDst)
        {
            bool bPassed = false;
            do
            {
                if (pPlayer->m_bObserver && !pDst->m_byUserDgr)
                    break;

                if (pPlayer->m_EP.GetEff_State((int)ATF::_EFF_STATE::Stealth))
                {
                    if (!pDst->m_EP.GetEff_Plus((int)ATF::_EFF_PLUS::Detect))
                    {
                        break;
                    }
                }

                bPassed = true;
            } while (false);

            return bPassed;
        }

        void WINAPIV CViewInvisible::CPlayer_SendMsg_FixPosition(
            ATF::CPlayer* pPlayer,
            int dwClientIndex,
            ATF::info::CPlayerSendMsg_FixPosition752_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            CPlayer* pDstPlayer = &global::g_Player[dwClientIndex];
            if (!check_conditions(pPlayer, pDstPlayer))
                return;

            char pbyType[2]{ 4, 9 };
            ATF::_player_fixpositon_zocl szMsg;

            szMsg.wIndex = pPlayer->m_ObjID.m_wIndex;
            szMsg.dwSerial = pPlayer->m_dwObjSerial;
            szMsg.wEquipVer = pPlayer->GetVisualVer();
            ATF::global::FloatToShort(pPlayer->m_fCurPos, szMsg.zCur, 3);
            szMsg.byRaceCode = pPlayer->m_Param.GetRaceSexCode();
            szMsg.dwStateFlag = pPlayer->GetStateFlag();
            szMsg.wLastEffectCode = pPlayer->m_wLastContEffect;
            szMsg.byColor = pPlayer->m_byGuildBattleColorInx;
            ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(dwClientIndex, pbyType, (char *)&szMsg, sizeof(szMsg));
        }

        void WINAPIV CViewInvisible::CPlayer__SendMsg_OtherShapePart(
            ATF::CPlayer * pPlayer, 
            ATF::CPlayer * pDst, 
            ATF::info::CPlayerSendMsg_OtherShapePart914_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            if (!check_conditions(pPlayer, pDst))
                return;

            if (!pPlayer->m_bLive)
            {
                pPlayer->SendMsg_OtherShapeError(pDst, 0);
                return;
            }

            char pbyType[2]{ 3, 0x20 };
            auto const test = sizeof(ATF::CGameObject);

            ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pDst->m_ObjID.m_wIndex, pbyType, (char *)&pPlayer->m_bufSpapePart, pPlayer->m_bufSpapePart.size());
        }

        void WINAPIV CViewInvisible::CPlayer__SendMsg_OtherShapeAll(
            ATF::CPlayer * pPlayer, 
            ATF::CPlayer * pDst, 
            ATF::info::CPlayerSendMsg_OtherShapeAll910_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            if (!check_conditions(pPlayer, pDst))
                return;

            if (!pPlayer->m_bLive)
            {
                pPlayer->SendMsg_OtherShapeError(pDst, 0);
                return;
            }

            char pbyType[2]{ 3, 0x1f };
            auto const test = sizeof(ATF::CGameObject);

            ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(pDst->m_ObjID.m_wIndex, pbyType, (char *)&pPlayer->m_bufShapeAll, pPlayer->m_bufShapeAll.size());
        }
    }
}