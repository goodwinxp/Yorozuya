#include "stdafx.h"

#include "MauExp.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        namespace
        {
            const size_t member_per_party = 8;
        }

        bool CMauExp::m_bActivated = false;

        void CMauExp::load()
        {
            enable_hook(&ATF::CPlayer::CalcExp, &CMauExp::CalcExp);
        }

        void CMauExp::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CMauExp::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.mau_exp";
            return name;
        }

        void CMauExp::configure(const rapidjson::Value & nodeConfig)
        {
            CMauExp::m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
        }

        void WINAPIV CMauExp::CalcExp(
            ATF::CPlayer * pObj,
            ATF::CCharacter * pDst,
            int nDam,
            ATF::CPartyModeKillMonsterExpNotify * kPartyExpNotify,
            ATF::Info::CPlayerCalcExp72_ptr next)
        {
            if (!CMauExp::m_bActivated)
            {
                next(pObj, pDst, nDam, kPartyExpNotify);
                return;
            }

            do
            {
                if (pDst->m_ObjID.m_byID != (int)e_obj_id::obj_id_monster)
                    break;

                if (nDam <= 0)
                    break;

                if (pObj->IsInTown())
                    break;

                bool bGetAttackExp = true;
                ATF::CMonster* pMon = (ATF::CMonster*)pDst;
                ATF::_monster_fld* pDstRec = (ATF::_monster_fld*)pMon->m_pRecordSet;
                if (!pObj->IsPassExpLimitLvDiff(pMon->GetLevel(), &bGetAttackExp))
                    break;

                if (pMon->IsBossMonster())
                    bGetAttackExp = false;

                int nLeftHP = pMon->GetHP() - nDam;
                if (nLeftHP < 0)
                {
                    nLeftHP = 0;
                    nDam = pMon->GetHP();
                }

                if (nLeftHP != 0)
                {
                    if (!pMon->IsBossMonster() && bGetAttackExp)
                    {
                        float fSetExt = (pDstRec->m_fExt * 0.7f) * (nDam / pDstRec->m_fMaxHP);

                        pObj->AlterExp(fSetExt, false, false, false);
                        if (pObj->IsRidingUnit())
                        {
                            static char strErrorCodePos[] = "CPlayer::CalcExp()--0";
                            float dAlter = fSetExt / 180.f;
                            dAlter += pMon->GetLevel();
                            pObj->Emb_AlterStat(6, 0, dAlter, 0, strErrorCodePos, true);
                        }
                    }
                    break;
                }

                float fKillExt = 0.f;
                if (pMon->GetEmotionState() == 4)
                    fKillExt = pDstRec->m_fExt * 0.5f;
                else
                    fKillExt = pDstRec->m_fExt * 0.3f;

                if (!pObj->m_pPartyMgr->IsPartyMode())
                {
                    if (!pMon->IsBossMonster() && bGetAttackExp)
                    {
                        pObj->AlterExp(fKillExt, false, false, false);
                        if (pObj->IsRidingUnit())
                        {
                            static char strErrorCodePos[] = "CPlayer::CalcExp()--1";
                            float dAlter = fKillExt / 180.f;
                            dAlter += pMon->GetLevel();
                            pObj->Emb_AlterStat(6, 0, dAlter, 0, strErrorCodePos, true);
                        }
                    }
                    break;
                }

                ATF::CPlayer* pMember[member_per_party] = { nullptr };
                BYTE byNearPlayerInPartyCount = pObj->_GetPartyMemberInCircle(pMember, member_per_party, true);
                if (byNearPlayerInPartyCount > 0)
                    fKillExt *= ATF::Global::s_fExpDivUnderParty_Kill[byNearPlayerInPartyCount - 1];

                float fTotalLv = 0.f;
                int iMaxLevel = 0, i2ndLevel = 0;
                for (int i = 0; i < byNearPlayerInPartyCount; ++i)
                {
                    int nLv = pMember[i]->GetLevel();
                    fTotalLv += nLv;
                    if (nLv <= iMaxLevel)
                    {
                        if (nLv > i2ndLevel)
                            i2ndLevel = nLv;
                    }
                    else
                    {
                        i2ndLevel = iMaxLevel;
                        iMaxLevel = nLv;
                    }
                }

                if (fTotalLv <= 1.f)
                    break;

                kPartyExpNotify->SetKillMonsterFlag();
                if (!pMon->IsBossMonster() && bGetAttackExp)
                {
                    for (int i = 0; i < byNearPlayerInPartyCount; ++i)
                    {
                        auto pTrgPlayer = pMember[i];
                        int nLv = pTrgPlayer->GetLevel();
                        float fAddKillExt = (fKillExt * nLv) / fTotalLv;

                        fAddKillExt += fAddKillExt * pObj->GetPartyExpDistributionRate(nLv, iMaxLevel, i2ndLevel);
                        if (fAddKillExt < 1.f)
                            continue;

                        kPartyExpNotify->Add(pTrgPlayer, fAddKillExt);
                        pTrgPlayer->AlterExp(fAddKillExt, false, false, false);
                        if (pTrgPlayer->IsRidingUnit())
                        {
                            static char strErrorCodePos[] = "CPlayer::CalcExp()--2";
                            float dAlter = fAddKillExt / 180.0f + pDstRec->m_fLevel;
                            pTrgPlayer->Emb_AlterStat(6, 0, dAlter, 0, strErrorCodePos, true);
                        }
                    }
                }
            } while (false);
        }
    }
}
