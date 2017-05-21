#pragma once

#include "./common/common.h"
#include "CPlayer.hpp"
#include "__time32_t.hpp"

START_ATF_NAMESPACE
    namespace global
    {
        using CPlayer_ptr = struct CPlayer*;
        using CLogFile_ptr = struct CLogFile*;
        using CMainThread_ptr = struct CMainThread*;
        using _skill_fld_ptr = struct _skill_fld*;
        using CUserDB_ptr = struct CUserDB*;
        using CMonster_ptr = struct CMonster*;
        using CMerchant_ptr = struct CMerchant*;
        using CAnimus_ptr = struct CAnimus*;
        using CGuardTower_ptr = struct CGuardTower*;
        using CItemBox_ptr = struct CItemBox*;
        using CParkingUnit_ptr = struct CParkingUnit*;
        using CHolyStone_ptr = struct CHolyStone*;
        using CHolyKeeper_ptr = struct CHolyKeeper*;
        using CTrap_ptr = struct CTrap*;
        using CDarkHole_ptr = struct CDarkHole*;
        using CGuild_ptr = struct CGuild*;
        using CNetProcess_ptr = struct CNetProcess*;


        static __time32_t* Time((__time32_t*)0x1415B71F8L);
        static CPlayer_ptr g_Player((CPlayer_ptr)0x1799CA490L);
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
        static CItemBox_ptr g_ItemBox((CItemBox_ptr)0x141500010L);
        static CParkingUnit_ptr g_ParkingUnit((CParkingUnit_ptr)0x141500018L);
        static CHolyStone_ptr g_Stone((CHolyStone_ptr)0x141500020L);
        static CHolyKeeper_ptr g_Keeper((CHolyKeeper_ptr)0x141500028L);
        static CTrap_ptr g_Trap((CTrap_ptr)0x141500030L);
        static CDarkHole_ptr g_DarkHole((CDarkHole_ptr)0x141500038L);
        static CGuild_ptr g_Guild((CGuild_ptr)0x141500040L);
        static CNetProcess_ptr* g_NetProcess((CNetProcess_ptr *)0x1414F2088L);
    }; // static end namespace global
END_ATF_NAMESPACE
