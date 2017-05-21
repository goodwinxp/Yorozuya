#include "stdafx.h"

#include "UpdateGeneral.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        template <typename T, size_t N>
        constexpr size_t size_array(T(&)[N])
        {
            return N;
        }

        using namespace ATF;

        void CUpdateGeneral::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::CMainThread::_db_Update_General, &CUpdateGeneral::_db_Update_General);
        }

        void CUpdateGeneral::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::CMainThread::_db_Update_General);
        }

        void CUpdateGeneral::loop()
        {
        }

        ModuleVersion_t CUpdateGeneral::get_version()
        {
            return usVersion;
        }

        ModuleName_t CUpdateGeneral::get_name()
        {
            static const ModuleName_t name = "fix_updategeneral";
            return name;
        }

        void CUpdateGeneral::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        bool WINAPIV CUpdateGeneral::_db_Update_General(
            ATF::CMainThread *pObj,
            unsigned int dwSerial,
            ATF::_AVATOR_DATA* pNewData,
            ATF::_AVATOR_DATA* pOldData,
            char* pSzQuery,
            bool bCheckLowHigh,
            ATF::info::CMainThread_db_Update_General258_ptr next)
        {
            UNREFERENCED_PARAMETER(pObj);
            UNREFERENCED_PARAMETER(bCheckLowHigh);
            UNREFERENCED_PARAMETER(next);
            char Source[200];
            memset(&Source[0], '\0', sizeof(Source));
            sprintf(pSzQuery, "UPDATE tbl_general SET ");

            size_t nStartLen = strlen(pSzQuery);

            if (pOldData->dbAvator.m_dExp != pNewData->dbAvator.m_dExp)
            {
                sprintf(Source, "Exp=%f,", pNewData->dbAvator.m_dExp);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_dLossExp != pNewData->dbAvator.m_dLossExp)
            {
                sprintf(Source, "LossExp=%f,", pNewData->dbAvator.m_dLossExp);
                strcat(pSzQuery, Source);
            }
            for (int i = 0; i < size_array(pOldData->dbAvator.m_zClassHistory); ++i)
            {
                if (pOldData->dbAvator.m_zClassHistory[i] != pNewData->dbAvator.m_zClassHistory[i])
                {
                    sprintf(Source, "Class%d=%d,", i, pNewData->dbAvator.m_zClassHistory[i]);
                    strcat(pSzQuery, Source);
                }
            }
            if (pOldData->dbAvator.m_dwClassInitCnt != pNewData->dbAvator.m_dwClassInitCnt)
            {
                sprintf(Source, "ClassInitCnt=%d,", pNewData->dbAvator.m_dwClassInitCnt);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_byLastClassGrade != pNewData->dbAvator.m_byLastClassGrade)
            {
                sprintf(Source, "LastClassGrade=%d,", pNewData->dbAvator.m_byLastClassGrade);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_dwHP != pNewData->dbAvator.m_dwHP)
            {
                sprintf(Source, "HP=%d,", pNewData->dbAvator.m_dwHP);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_dwFP != pNewData->dbAvator.m_dwFP)
            {
                sprintf(Source, "FP=%d,", pNewData->dbAvator.m_dwFP);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_dwSP != pNewData->dbAvator.m_dwSP)
            {
                sprintf(Source, "SP=%d,", pNewData->dbAvator.m_dwSP);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_dwDP != pNewData->dbAvator.m_dwDP)
            {
                sprintf(Source, "DP=%d,", pNewData->dbAvator.m_dwDP);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_byMapCode != pNewData->dbAvator.m_byMapCode)
            {
                sprintf(Source, "Map=%d,", pNewData->dbAvator.m_byMapCode);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_fStartPos[0] != pNewData->dbAvator.m_fStartPos[0])
            {
                if (_STD isfinite(pNewData->dbAvator.m_fStartPos[0]))
                {
                    sprintf(Source, "X=%f,", pNewData->dbAvator.m_fStartPos[0]);
                    strcat(pSzQuery, Source);
                }
            }
            if (pOldData->dbAvator.m_fStartPos[1] != pNewData->dbAvator.m_fStartPos[1])
            {
                if (_STD isfinite(pNewData->dbAvator.m_fStartPos[1]))
                {
                    sprintf(Source, "Y=%f,", pNewData->dbAvator.m_fStartPos[1]);
                    strcat(pSzQuery, Source);
                }
            }
            if (pOldData->dbAvator.m_fStartPos[2] != pNewData->dbAvator.m_fStartPos[2])
            {
                if (_STD isfinite(pNewData->dbAvator.m_fStartPos[2]))
                {
                    sprintf(Source, "Z=%f,", pNewData->dbAvator.m_fStartPos[2]);
                    strcat(pSzQuery, Source);
                }
            }
            if (pOldData->dbAvator.m_byBagNum != pNewData->dbAvator.m_byBagNum)
            {
                sprintf(Source, "BagNum=%d,", pNewData->dbAvator.m_byBagNum);
                strcat(pSzQuery, Source);
            }
            
            for (int i = 0; i < 6; ++i)
            {
                if (pNewData->dbEquip.m_EmbellishList[i].Key.IsFilled())
                {
                    if (pOldData->dbEquip.m_EmbellishList[i].Key.IsFilled())
                    {
                        unsigned int newDbKey = pNewData->dbEquip.m_EmbellishList[i].Key.CovDBKey();
                        unsigned int oldDbKey = pOldData->dbEquip.m_EmbellishList[i].Key.CovDBKey();
                        if (newDbKey != oldDbKey)
                        {
                            sprintf(Source, "EK%d=%d,", i, newDbKey);
                            strcat(pSzQuery, Source);
                        }

                        if (pNewData->dbEquip.m_EmbellishList[i].wAmount != pOldData->dbEquip.m_EmbellishList[i].wAmount)
                        {
                            if (pNewData->dbEquip.m_EmbellishList[i].wAmount < 0xFFFF)
                                sprintf(Source, "ED%d=%d,", i, pNewData->dbEquip.m_EmbellishList[i].wAmount);
                            else
                                sprintf(Source, "ED%d=-1,", i);
                            strcat(pSzQuery, Source);
                        }

                        if (pNewData->dbEquip.m_EmbellishList[i].byCsMethod)
                        {
                            unsigned int timeNew = 0;
                            unsigned int timeOld = 0;
                            if (pNewData->dbEquip.m_EmbellishList[i].byCsMethod == 1)
                            {
                                timeNew = pNewData->dbEquip.m_EmbellishList[i].dwT - *ATF::global::Time;
                                timeOld = pOldData->dbEquip.m_EmbellishList[i].dwT - *ATF::global::Time;
                            }
                            else if (pNewData->dbEquip.m_EmbellishList[i].byCsMethod == 2)
                            {
                                timeNew = pNewData->dbEquip.m_EmbellishList[i].dwT;
                                timeOld = pOldData->dbEquip.m_EmbellishList[i].dwT;
                            }
                            if (timeNew != timeOld)
                            {
                                sprintf(Source, "ET%d=%d,", i, timeNew);
                                strcat(pSzQuery, Source);
                            }
                        }
                        if (pNewData->dbEquip.m_EmbellishList[i].lnUID != pOldData->dbEquip.m_EmbellishList[i].lnUID)
                        {
                            sprintf(Source, "ES%d=%I64d,", i, pNewData->dbEquip.m_EmbellishList[i].lnUID);
                            strcat(pSzQuery, Source);
                        }
                    }
                    else
                    {
                        unsigned int newTime = 0;
                        if (pNewData->dbEquip.m_EmbellishList[i].byCsMethod == 1)
                        {
                            newTime = pNewData->dbEquip.m_EmbellishList[i].dwT - *ATF::global::Time;
                        }
                        else if (pNewData->dbEquip.m_EmbellishList[i].byCsMethod == 2)
                        {
                            newTime = pNewData->dbEquip.m_EmbellishList[i].dwT;
                        }
                        if (pNewData->dbEquip.m_EmbellishList[i].wAmount < 0xFFFF)
                        {
                            sprintf(Source, "EK%d=%d,ED%d=%d,ET%d=%d,ES%d=%I64d,", 
                                i, (unsigned int)pNewData->dbEquip.m_EmbellishList[i].Key.CovDBKey(),
                                i, pNewData->dbEquip.m_EmbellishList[i].wAmount,
                                i, newTime, 
                                i, pNewData->dbEquip.m_EmbellishList[i].lnUID);
                        }
                        else
                        {
                            sprintf(Source, "EK%d=%d,ED%d=-1,ET%d=%d,ES%d=%I64d,",
                                i, (unsigned int)pNewData->dbEquip.m_EmbellishList[i].Key.CovDBKey(),
                                i, i, newTime,
                                i, pNewData->dbEquip.m_EmbellishList[i].lnUID);
                        }
                        strcat(pSzQuery, Source);
                    }
                }
                else if (pOldData->dbEquip.m_EmbellishList[i].Key.IsFilled())
                {
                    sprintf(Source, "EK%d=%d,", 
                        i, (unsigned int)pNewData->dbEquip.m_EmbellishList[i].Key.CovDBKey());
                    strcat(pSzQuery, Source);
                }
            }

            for (int i = 0; i < size_array(pNewData->dbForce.m_List); ++i)
            {
                if (pNewData->dbForce.m_List[i].Key.IsFilled())
                {
                    if (pOldData->dbForce.m_List[i].Key.IsFilled())
                    {
                        unsigned int newDbKey = pNewData->dbForce.m_List[i].Key.CovDBKey();
                        unsigned int oldDbKey = pOldData->dbForce.m_List[i].Key.CovDBKey();
                        if (newDbKey != oldDbKey)
                        {
                            sprintf(Source, "F%d=%d,", 
                                i, (unsigned int)newDbKey);
                            strcat(pSzQuery, Source);
                        }
                        if (pNewData->dbForce.m_List[i].lnUID != pOldData->dbForce.m_List[i].lnUID)
                        {
                            sprintf(Source, "FS%d=%I64d,", 
                                i, pNewData->dbForce.m_List[i].lnUID);
                            strcat(pSzQuery, Source);
                        }
                    }
                    else
                    {
                        sprintf(Source, "F%d=%d,FS%d=%I64d,", 
                            i, (unsigned int)pNewData->dbForce.m_List[i].Key.CovDBKey(),
                            i, pNewData->dbForce.m_List[i].lnUID);
                        strcat(pSzQuery, Source);
                    }
                }
                else if (pOldData->dbForce.m_List[i].Key.IsFilled())
                {
                    sprintf(Source, "F%d=%d,", 
                        i, (unsigned int)pNewData->dbForce.m_List[i].Key.IsFilled());
                    strcat(pSzQuery, Source);
                }
            }

            if (pOldData->dbAvator.m_byRaceSexCode >> 1 == 1)
            {
                for (int i = 0; i < size_array(pNewData->dbAnimus.m_List); ++i)
                {
                    if (pNewData->dbAnimus.m_List[i].Key.IsFilled())
                    {
                        if (pOldData->dbAnimus.m_List[i].Key.IsFilled())
                        {
                            unsigned int newDbKey = pNewData->dbAnimus.m_List[i].Key.CovDBKey();
                            unsigned int oldDbKey = pOldData->dbAnimus.m_List[i].Key.CovDBKey();
                            if (newDbKey != oldDbKey)
                            {
                                sprintf(Source, "AK%d=%d,AS%d=%I64d,", 
                                    i, newDbKey,
                                    i, pNewData->dbAnimus.m_List[i].lnUID);
                                strcat(pSzQuery, Source);
                            }
                            if (pNewData->dbAnimus.m_List[i].dwExp != pOldData->dbAnimus.m_List[i].dwExp)
                            {
                                sprintf(Source, "AD%d=%I64d,", i, pNewData->dbAnimus.m_List[i].dwExp);
                                strcat(pSzQuery, Source);
                            }
                            if (pNewData->dbAnimus.m_List[i].dwParam != pOldData->dbAnimus.m_List[i].dwParam)
                            {
                                sprintf(Source, "AP%d=%d,", i, pNewData->dbAnimus.m_List[i].dwParam);
                                strcat(pSzQuery, Source);
                            }
                        }
                        else
                        {
                            sprintf(Source, "AK%d=%d,AD%d=%I64d,AP%d=%d,AS%d=%I64d,", 
                                i, (unsigned int)pNewData->dbAnimus.m_List[i].Key.CovDBKey(),
                                i, pNewData->dbAnimus.m_List[i].lnUID,
                                i, pNewData->dbAnimus.m_List[i].dwParam,
                                i, pNewData->dbAnimus.m_List[i].dwExp);
                            strcat(pSzQuery, Source);
                        }
                    }
                    else if (pOldData->dbAnimus.m_List[i].Key.IsFilled())
                    {
                        sprintf(Source, "AK%d=%d,", 
                            i, (unsigned int)pNewData->dbAnimus.m_List[i].Key.CovDBKey());
                        strcat(pSzQuery, Source);
                    }
                }
            }
            for (int i = 0; i < size_array(pNewData->dbStat.m_dwDamWpCnt); ++i)
            {
                if (pOldData->dbStat.m_dwDamWpCnt[i] != pNewData->dbStat.m_dwDamWpCnt[i])
                {
                    sprintf(Source, "WM%d=%d,", i, pNewData->dbStat.m_dwDamWpCnt[i]);
                    strcat(pSzQuery, Source);
                }
            }
            for (int i = 0; i < size_array(pNewData->dbStat.m_dwForceCum); ++i)
            {
                if (pOldData->dbStat.m_dwForceCum[i] != pNewData->dbStat.m_dwForceCum[i])
                {
                    sprintf(Source, "FM%d=%d,", i, pNewData->dbStat.m_dwForceCum[i]);
                    strcat(pSzQuery, Source);
                }
            }
            for (int i = 0; i < size_array(pNewData->dbStat.m_dwSkillCum); ++i)
            {
                if (pOldData->dbStat.m_dwSkillCum[i] != pNewData->dbStat.m_dwSkillCum[i])
                {
                    sprintf(Source, "SM%d=%d,", i, pNewData->dbStat.m_dwSkillCum[i]);
                    strcat(pSzQuery, Source);
                }
            }
            for (int i = 0; i < size_array(pNewData->dbStat.m_dwMakeCum); ++i)
            {
                if (pOldData->dbStat.m_dwMakeCum[i] != pNewData->dbStat.m_dwMakeCum[i])
                {
                    sprintf(Source, "MI%d=%d,", i, pNewData->dbStat.m_dwMakeCum[i]);
                    strcat(pSzQuery, Source);
                }
            }
            if (pOldData->dbStat.m_dwSpecialCum != pNewData->dbStat.m_dwSpecialCum)
            {
                sprintf(Source, "SR=%d,", pNewData->dbStat.m_dwSpecialCum);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbStat.m_dwDefenceCnt != pNewData->dbStat.m_dwDefenceCnt)
            {
                sprintf(Source, "DM=%d,", pNewData->dbStat.m_dwDefenceCnt);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbStat.m_dwShieldCnt != pNewData->dbStat.m_dwShieldCnt)
            {
                sprintf(Source, "PM=%d,", pNewData->dbStat.m_dwShieldCnt);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_dPvPPoint != pNewData->dbAvator.m_dPvPPoint)
            {
                sprintf(Source, "PvpPoint=%f,", pNewData->dbAvator.m_dPvPPoint);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_dPvPCashBag != pNewData->dbAvator.m_dPvPCashBag)
            {
                sprintf(Source, "PvpCashBag=%f,", pNewData->dbAvator.m_dPvPCashBag);
                strcat(pSzQuery, Source);
            }
            if (strcmp(pOldData->dbAvator.m_szBindMapCode, pNewData->dbAvator.m_szBindMapCode))
            {
                pNewData->dbAvator.m_szBindMapCode[11] = 0;
                sprintf(Source, "BindMapCode='%s',", pNewData->dbAvator.m_szBindMapCode);
                strcat(pSzQuery, Source);
            }
            if (strcmp(pOldData->dbAvator.m_szBindDummy, pNewData->dbAvator.m_szBindDummy))
            {
                pNewData->dbAvator.m_szBindDummy[11] = 0;
                sprintf(Source, "BindDummy='%s',", pNewData->dbAvator.m_szBindDummy);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_dwRadarDelayTime != pNewData->dbAvator.m_dwRadarDelayTime)
            {
                sprintf_s(Source, "RDDelay=%d,", pNewData->dbAvator.m_dwRadarDelayTime);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_dwTakeLastMentalTicket != pNewData->dbAvator.m_dwTakeLastMentalTicket)
            {
                sprintf_s(Source, "TakeLastMentalTicket=%d,", pNewData->dbAvator.m_dwTakeLastMentalTicket);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_dwTakeLastCriTicket != pNewData->dbAvator.m_dwTakeLastCriTicket)
            {
                sprintf_s(Source, "TakeLastCriTicket=%d,", pNewData->dbAvator.m_dwTakeLastCriTicket);
                strcat(pSzQuery, Source);
            }
            if (pOldData->dbAvator.m_byMaxLevel != pNewData->dbAvator.m_byMaxLevel)
            {
                sprintf(Source, "MaxLevel=%d,", pNewData->dbAvator.m_byMaxLevel);
                strcat(pSzQuery, Source);
            }
            if (pNewData->dbCutting.m_bOldDataLoad)
                strcat(pSzQuery, "LeftResList='*',");
            sprintf(Source, "TotalPlayMin=%d,", pNewData->dbAvator.m_dwTotalPlayMin);
            strcat(pSzQuery, Source);

            size_t nEndLen = strlen(pSzQuery);
            if (nEndLen <= nStartLen)
            {
                memset(pSzQuery, 0, nStartLen);
            }
            else
            {
                sprintf(Source, "WHERE Serial = %d", dwSerial);
                pSzQuery[strlen(pSzQuery) - 1] = ' ';
                strcat(pSzQuery, Source);
            }
            return true;
        }
    }
}