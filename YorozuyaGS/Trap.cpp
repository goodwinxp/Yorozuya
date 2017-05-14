#include "stdafx.h"

#include "Trap.h"
#include <ATF/global.hpp>
#include <ATF/_qry_case_addpvppoint.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CTrap::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CTrap::RecvKillMessage, &CTrap::RecvKillMessage);
            core.set_hook(&ATF::CTrap::SendMsg_FixPosition, &CTrap::SendMsg_FixPosition);
        }

        void CTrap::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
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
            static const ModuleName_t name = "fix_trap";
            return name;
        }

        void CTrap::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
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
                    pObj->m_pMaster->vfptr->RecvKillMessage(pObj->m_pMaster, pDier);
                }
                return;
            }

            if (!pDier->m_ObjID.m_byID && pObj->m_dwMasterSerial != -1)
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
                if (!pPlayer->m_EP.GetEff_State(23))
                {
                    return;
                }
            }

            next(pTrap, n);
        }
    }
}