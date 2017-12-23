#pragma once

#include <common/common.h>
#include <CPlayer.hpp>
#include <CItemBox.hpp>
#include <__time32_t.hpp>

START_ATF_NAMESPACE
    namespace Global
    {
        const size_t max_player = 2532;
        const size_t item_box = 5064;

        using CPlayer_ptr = struct CPlayer*;
        using CLogFile_ptr = struct CLogFile*;
        using CMainThread_ptr = struct CMainThread*;
        using _skill_fld_ptr = struct _skill_fld*;
        using CUserDB_ptr = struct CUserDB*;
        using CMonster_ptr = struct CMonster*;
        using CMerchant_ptr = struct CMerchant*;
        using CAnimus_ptr = struct CAnimus*;
        using CGuardTower_ptr = struct CGuardTower*;
        using CParkingUnit_ptr = struct CParkingUnit*;
        using CHolyStone_ptr = struct CHolyStone*;
        using CHolyKeeper_ptr = struct CHolyKeeper*;
        using CTrap_ptr = struct CTrap*;
        using CDarkHole_ptr = struct CDarkHole*;
        using CGuild_ptr = struct CGuild*;
        using CNetProcess_ptr = struct CNetProcess*;
        using CNetworkEX_ptr = struct CNetworkEX*;
        using CHolyStoneSystem_ptr = struct CHolyStoneSystem*;
        using TimeLimitMgr_ptr = struct TimeLimitMgr*;
        using CRecordData_ptr = struct CRecordData*;
        using CRecordData_ptr2 = struct CRecordData**;
        using CMgrAvatorItemHistory_ptr = struct CMgrAvatorItemHistory*;
        using CRFWorldDatabase_ptr2 = struct CRFWorldDatabase**;
        using CPlayer_Ref = ATF::CPlayer(&)[max_player];
        using CPlayer_Ptr = ATF::CPlayer(*)[max_player];
        using CItemBox_Ref = ATF::CItemBox(&)[item_box];
        using CItemBox_Ptr = ATF::CItemBox(*)[item_box];

        static TimeLimitMgr_ptr g_TimerLimitMgr((TimeLimitMgr_ptr)0x1799CA2D0L);
        static bool* Major_Cash_Item((bool*)0x14096E033L);
        static CRFWorldDatabase_ptr2 pkDB((CRFWorldDatabase_ptr2)0x1415B7000L);
        static CMgrAvatorItemHistory_ptr s_MgrItemHistory((CMgrAvatorItemHistory_ptr)0x14098AA40L);
        static CRecordData_ptr2 s_tblQuest((CRecordData_ptr2)0x1849AC0C0L);
        static __time32_t* Time((__time32_t*)0x1415B71F8L);
        static CPlayer_Ref g_Player = (*(CPlayer_Ptr)0x1799CA490L);
        static CLogFile_ptr s_logTrace_Boss_Looting((CLogFile_ptr)0x14136F9E0L);
        static CMainThread_ptr g_MainThread((CMainThread_ptr)0x14154F250L);
        static float* s_fExpDivUnderParty_Kill((float*)0x14096B228L);
        static int** s_pnLinkForceItemToEffect((int**)0x140988F98);
        static _skill_fld_ptr ms_pXmas_Snow_Effect((_skill_fld_ptr)0x140988FA0);
        static _skill_fld_ptr ms_pXmas_Snow_Bullet_Effect((_skill_fld_ptr)0x140988FA8);
        static CUserDB_ptr g_UserDB((CUserDB_ptr)0x1414FFFE8L);
        static CMonster_ptr g_Monster((CMonster_ptr)0x1414FFFF0L);
        static CMerchant_ptr g_NPC((CMerchant_ptr)0x1414FFFF8L);
        static CAnimus_ptr g_Animus((CAnimus_ptr)0x141500000L);
        static CGuardTower_ptr g_Tower((CGuardTower_ptr)0x141500008L);
        static CItemBox_Ptr* g_ItemBox((CItemBox_Ptr*)0x141500010L);
        static CParkingUnit_ptr g_ParkingUnit((CParkingUnit_ptr)0x141500018L);
        static CHolyStone_ptr g_Stone((CHolyStone_ptr)0x141500020L);
        static CHolyKeeper_ptr g_Keeper((CHolyKeeper_ptr)0x141500028L);
        static CTrap_ptr g_Trap((CTrap_ptr)0x141500030L);
        static CDarkHole_ptr g_DarkHole((CDarkHole_ptr)0x141500038L);
        static CGuild_ptr g_Guild((CGuild_ptr)0x141500040L);
        static CNetProcess_ptr* g_NetProcess((CNetProcess_ptr *)0x1414F2088L);
        static CNetworkEX_ptr g_Network((CNetworkEX_ptr)0x1414AC9E0L);
        static CHolyStoneSystem_ptr g_HolySys((CHolyStoneSystem_ptr)0x184981C90L);
        static bool* g_HideLicenseWindow((bool*)0x1799C9AE8L);
        static CRecordData_ptr g_tblExchangeItems((CRecordData_ptr)0x1799C6928L);

        static float* pPCBANG_PRIMIUM_FAVOR__ANIMUS_EXP_RATE((float*)0x14096E018L);
        static float* pANIMUS_EXP_RATE((float*)0x14096E000L);
    }; // static end namespace global
END_ATF_NAMESPACE