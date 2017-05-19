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
            core.set_hook(&CPlayer::SendMsg_FixPosition, &CViewInvisible::Player_SendMsg_FixPosition);
        }

        void CViewInvisible::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&CPlayer::SendMsg_FixPosition);
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

        // SendMsg_StateInform
        // SendMsg_OtherShapePart
        // SendMsg_OtherShapeAll
        void WINAPIV CViewInvisible::Player_SendMsg_FixPosition(
            ATF::CPlayer* pPlayer,
            int dwClientIndex,
            ATF::info::CPlayerSendMsg_FixPosition752_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            CPlayer* pDstPlayer = &global::g_Player[dwClientIndex];

            bool bPassed = false;
            do
            {
                if (pPlayer->m_bObserver && !pDstPlayer->m_byUserDgr)
                    break;

                if (pPlayer->m_EP.GetEff_State((int)ATF::_EFF_STATE::Invisible) &&
                    !pDstPlayer->m_EP.GetEff_Plus((int)ATF::_EFF_PLUS::Detect))
                    break;

                bPassed = true;
            } while (false);

            if (bPassed)
            {
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
        }
    }
}