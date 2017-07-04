#include "stdafx.h"

#include <cmath>
#include "Trap.h"
#include "ETypes.h"
#include <ATF/global.hpp>
#include <ATF/_qry_case_addpvppoint.hpp>
#include <ATF/_trap_fixpositon_zocl.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CTrap::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CTrap::SendMsg_Attack, &CTrap::SendMsg_Attack);
            core.set_hook(&ATF::CTrap::RecvKillMessage, &CTrap::RecvKillMessage);
            core.set_hook(&ATF::CTrap::SendMsg_FixPosition, &CTrap::SendMsg_FixPosition);
            
        }

        void CTrap::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::CTrap::SendMsg_Attack);
            core.unset_hook(&ATF::CTrap::RecvKillMessage);
            core.unset_hook(&ATF::CTrap::SendMsg_FixPosition);
        }

        void CTrap::loop()
        {
        }

        ModuleVersion_t CTrap::get_version()
        {
            return ATF::usVersion;
        }

        ModuleName_t CTrap::get_name()
        {
            static const ModuleName_t name = "fix_Trap";
            return name;
        }

        void CTrap::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        void WINAPIV CTrap::SendMsg_FixPositionImpl(ATF::CTrap* pTrap, int n)
        {
            ATF::_trap_fixpositon_zocl szMsg;
            szMsg.wRecIndex = pTrap->m_pRecordSet->m_dwIndex;
            szMsg.wIndex = pTrap->m_ObjID.m_wIndex;
            szMsg.dwSerial = pTrap->m_dwObjSerial;
            ATF::global::FloatToShort(pTrap->m_fCurPos, szMsg.zCur, 3);
            szMsg.dwMasterSerial = pTrap->m_dwMasterSerial;

            szMsg.bTranspar = (pTrap->m_bBreakTransparBuffer == 0);
            szMsg.byRaceCode = pTrap->m_byRaceCode;
            if (pTrap->m_bComplete)
            {
                szMsg.wCompLeftSec = 0;
            }
            else
            {
                szMsg.wCompLeftSec = (timeGetTime() - pTrap->m_dwStartMakeTime) / 1000;
            }

            char byType[2] = { 4, -88 };
            ATF::global::g_NetProcess[(uint8_t)e_type_line::client]->LoadSendMsg(n, byType, (char *)&szMsg, sizeof(szMsg));
        }

        void WINAPIV CTrap::RecvKillMessage(
            ATF::CTrap* pObj,
            ATF::CCharacter* pDier,
            ATF::info::CTrapRecvKillMessage70_ptr next)
        {
            UNREFERENCED_PARAMETER(next);
            if (pObj->m_pMaster)
            {
                if (pObj->m_pMaster->m_bLive
                    && pObj->m_pMaster->m_bOper
                    && pObj->m_pMaster->m_dwObjSerial == pObj->m_dwMasterSerial)
                {
                    pObj->m_pMaster->RecvKillMessage(pDier);
                }
                return;
            }

            if (pDier->m_ObjID.m_byID == (BYTE)e_obj_id::obj_id_player && pObj->m_dwMasterSerial != -1)
            {
                auto pPlayerDier = (ATF::CPlayer *)pDier;

                auto dDierPvPPoint = pPlayerDier->m_Param.GetPvPPoint() + 10000.0;
                auto dMasterPvPPoint = pObj->m_dMasterPvPPoint + 10000.0;

                auto dAlterPoint = dDierPvPPoint / dMasterPvPPoint * 500.0 + 0.5;
                if (dAlterPoint > pPlayerDier->m_Param.GetPvPPoint())
                    dAlterPoint = pPlayerDier->m_Param.GetPvPPoint();

                // todo : replcat coeff in config
                dAlterPoint *= 0.3;

                if (dAlterPoint < 1.0)
                    dAlterPoint = 1.0;

                if (dAlterPoint > 100000000.0)
                    dAlterPoint = 100000000.0;

                ATF::_qry_case_addpvppoint qryAddpvppoint;
                qryAddpvppoint.dwSerial = pObj->m_dwMasterSerial;
                qryAddpvppoint.dwPoint = (unsigned int)floor(dAlterPoint);
                qryAddpvppoint.dwCashBag = (unsigned int)floor(dAlterPoint);

                ATF::global::g_MainThread->PushDQSData(0xFFFFFFFF, 0, 13, (char *)&qryAddpvppoint, qryAddpvppoint.size());

                pPlayerDier->AlterPvPPoint(-dAlterPoint, ATF::PVP_ALTER_TYPE::die_dec, pObj->m_dwMasterSerial);
            }
        }


        void WINAPIV CTrap::SendMsg_FixPosition(
            ATF::CTrap* pTrap,
            int n,
            ATF::info::CTrapSendMsg_FixPosition82_ptr next)
        {
            ATF::CPlayer* pPlayer = &ATF::global::g_Player[n];
            if (pTrap->m_dwMasterSerial != pPlayer->m_Param.GetCharSerial())
            {
                if (!pPlayer->m_EP.GetEff_State((int)ATF::_EFF_STATE::Find_Trap))
                {
                    return;
                }
            }

            next(pTrap, n);
        }

        void WINAPIV CTrap::SendMsg_Attack(
            ATF::CTrap* pTrap,
            ATF::CAttack *pAt,
            ATF::info::CTrapSendMsg_Attack76_ptr next)
        {
            for (int j = 0; j < pAt->m_nDamagedObjNum; ++j)
            {
                auto pTarget = pAt->m_DamList[j].m_pChar;
                if (pTarget->m_ObjID.m_byKind == (uint8_t)e_obj_id::obj_id_player &&
                    !pTarget->m_ObjID.m_byID)
                {
                    CTrap::SendMsg_FixPositionImpl(pTrap, pTarget->m_ObjID.m_wIndex);
                }
            }

            next(pTrap, pAt);
        }
    }
}
