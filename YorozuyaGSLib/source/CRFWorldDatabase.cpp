#include <CRFWorldDatabase.hpp>


START_ATF_NAMESPACE
    bool CRFWorldDatabase::Add_PvpPoint(unsigned int dwSerial, unsigned int dwPoint, unsigned int dwCashBag)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1404987e0L))(this, dwSerial, dwPoint, dwCashBag);
    };
    CRFWorldDatabase::CRFWorldDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFWorldDatabase*);
        (org_ptr(0x140489680L))(this);
    };
    void CRFWorldDatabase::ctor_CRFWorldDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFWorldDatabase*);
        (org_ptr(0x140489680L))(this);
    };
    bool CRFWorldDatabase::Check_GuildMemberCount(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x14049d990L))(this, dwGuildSerial);
    };
    bool CRFWorldDatabase::CreateCharacterSelectLogTable(char* szTableName)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404a0be0L))(this, szTableName);
    };
    bool CRFWorldDatabase::CreateGuildBattleRankTable(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404a3810L))(this, szDate);
    };
    bool CRFWorldDatabase::Create_PvpPointGuildRankTable(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404a6d20L))(this, szDate);
    };
    bool CRFWorldDatabase::DeleteGuildBattleInfo()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404a2410L))(this);
    };
    bool CRFWorldDatabase::DeleteGuildBattleScheduleInfo()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404a0fd0L))(this);
    };
    bool CRFWorldDatabase::Delete_CharacterData(unsigned int dwCharacterSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x140491330L))(this, dwCharacterSerial);
    };
    bool CRFWorldDatabase::Delete_Guild(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x14049c2d0L))(this, dwGuildSerial);
    };
    bool CRFWorldDatabase::Delete_ItemCharge(unsigned int dwItemChargeIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404943f0L))(this, dwItemChargeIndex);
    };
    char CRFWorldDatabase::Delete_PatriarchComm(unsigned int dwSerial, char* pszDepDate)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*);
        return (org_ptr(0x1404c0120L))(this, dwSerial, pszDepDate);
    };
    bool CRFWorldDatabase::Delete_TrunkItemCharge(unsigned int dwDBID)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a4330L))(this, dwDBID);
    };
    bool CRFWorldDatabase::Delete_TrunkItemCharge_Extend(unsigned int dwDBID)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a48a0L))(this, dwDBID);
    };
    bool CRFWorldDatabase::InsertChangeClassLogAfterInitClass(unsigned int dwCharacSerial, char byType, char* szPrevClass, char* szNextClass, int nClassInitCnt, char byLastClassGrade, uint16_t dwYear, char byMonth, char byDay, char byHour, char byMin, char bySec)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char, char*, char*, int, char, uint16_t, char, char, char, char, char);
        return (org_ptr(0x1404a0e90L))(this, dwCharacSerial, byType, szPrevClass, szNextClass, nClassInitCnt, byLastClassGrade, dwYear, byMonth, byDay, byHour, byMin, bySec);
    };
    bool CRFWorldDatabase::InsertCharacterSelectLog(unsigned int dwAccountSerial, char* wszAccount, unsigned int dwCharacSerial, char* pwszCharacName, uint16_t dwYear, char byMonth, char byDay, char byHour, char byMin, char bySec)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, unsigned int, char*, uint16_t, char, char, char, char, char);
        return (org_ptr(0x1404a0d30L))(this, dwAccountSerial, wszAccount, dwCharacSerial, pwszCharacName, dwYear, byMonth, byDay, byHour, byMin, bySec);
    };
    bool CRFWorldDatabase::InsertGuildBattleDefaultRecord(unsigned int dwRowCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a24b0L))(this, dwRowCnt);
    };
    bool CRFWorldDatabase::InsertGuildBattleRankRecord(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a3760L))(this, dwGuildSerial);
    };
    bool CRFWorldDatabase::InsertGuildBattleScheduleDefaultRecord(unsigned int uiDayCnt, unsigned int uiMapCnt, char byMaxHour, char byUnitTimeCntPerTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, char, char);
        return (org_ptr(0x1404a1070L))(this, uiDayCnt, uiMapCnt, byMaxHour, byUnitTimeCntPerTime);
    };
    bool CRFWorldDatabase::Insert_AccountTrunk(unsigned int dwAccountSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x14048e0a0L))(this, dwAccountSerial);
    };
    bool CRFWorldDatabase::Insert_AccountTrunkExtend(unsigned int dwAccountSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x14048e150L))(this, dwAccountSerial);
    };
    bool CRFWorldDatabase::Insert_AnimusData(unsigned int dwSerial, long double* pVal)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double*);
        return (org_ptr(0x1404a0130L))(this, dwSerial, pVal);
    };
    bool CRFWorldDatabase::Insert_AnimusLog(unsigned int dwSerial, char* wszName, char byDID, long double dOrgVal, long double dChgVal)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, char, long double, long double);
        return (org_ptr(0x1404a0370L))(this, dwSerial, wszName, byDID, dOrgVal, dChgVal);
    };
    bool CRFWorldDatabase::Insert_BossCryRecord(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404bb810L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_Buddy(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x14049e100L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_CashLimSale()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404c6bf0L))(this);
    };
    bool CRFWorldDatabase::Insert_CharacterData(char* pwszCharacterName, char* wszClassCode, unsigned int dwAccountSerial, char* wszAccount, char bySlotIndex, char byRaceSexCode, unsigned int dwBaseShape, int nMapIndex, unsigned int* pDwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, char*, unsigned int, char*, char, char, unsigned int, int, unsigned int*);
        return (org_ptr(0x1404907c0L))(this, pwszCharacterName, wszClassCode, dwAccountSerial, wszAccount, bySlotIndex, byRaceSexCode, dwBaseShape, nMapIndex, pDwSerial);
    };
    bool CRFWorldDatabase::Insert_DefaultWeeklyGuildPvpPointSumRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404a6eb0L))(this);
    };
    bool CRFWorldDatabase::Insert_Economy_History(unsigned int dwDate, struct _worlddb_economy_history_info_array::_worlddb_economy_history_info* pEconomyData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_economy_history_info_array::_worlddb_economy_history_info*);
        return (org_ptr(0x140493810L))(this, dwDate, pEconomyData);
    };
    bool CRFWorldDatabase::Insert_GoldenBoxItem()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404c9840L))(this);
    };
    bool CRFWorldDatabase::Insert_GreetingRecord(int nUseType, char* wszName, char* wszMessage)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, int, char*, char*);
        return (org_ptr(0x14049bf70L))(this, nUseType, wszName, wszMessage);
    };
    bool CRFWorldDatabase::Insert_GuidRoom(unsigned int dwGuildSerial, char byRoomType, char byRace)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char, char);
        return (org_ptr(0x1404b07c0L))(this, dwGuildSerial, byRoomType, byRace);
    };
    bool CRFWorldDatabase::Insert_Guild(char* pwszGuildName, char byRace)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, char);
        return (org_ptr(0x1404989a0L))(this, pwszGuildName, byRace);
    };
    bool CRFWorldDatabase::Insert_GuildBatlleResultLog(char* szStartTime, char* szEndTime, unsigned int dwRedSerial, char* wszRedName, unsigned int dwBlueSerial, char* wszBlueName, unsigned int dwRedScore, unsigned int dwBlueScore, unsigned int dwRedMaxJoinCnt, unsigned int dwBlueMaxJoinCnt, unsigned int dwRedGoalCntSum, unsigned int dwBlueGoalCntSum, unsigned int dwRedKillCntSum, unsigned int dwBlueKillCntSum, char byBattleResult, unsigned int dwMaxGoalCharacSerial, char* wszMaxGoalCharacName, unsigned int dwMaxKillCharacSerial, char* wszMaxKillCharacName, char byJoinLimit, unsigned int dwGuildBattleCostGold, char* szBattleMapCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, char*, unsigned int, char*, unsigned int, char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char, unsigned int, char*, unsigned int, char*, char, unsigned int, char*);
        return (org_ptr(0x1404b0a20L))(this, szStartTime, szEndTime, dwRedSerial, wszRedName, dwBlueSerial, wszBlueName, dwRedScore, dwBlueScore, dwRedMaxJoinCnt, dwBlueMaxJoinCnt, dwRedGoalCntSum, dwBlueGoalCntSum, dwRedKillCntSum, dwBlueKillCntSum, byBattleResult, dwMaxGoalCharacSerial, wszMaxGoalCharacName, dwMaxKillCharacSerial, wszMaxKillCharacName, byJoinLimit, dwGuildBattleCostGold, szBattleMapCode);
    };
    bool CRFWorldDatabase::Insert_GuildBatlleResultLogBattelInfo(char* szStartTime, char* szEndTime, unsigned int dwRedSerial, char* wszRedName, unsigned int dwBlueSerial, char* wszBlueName, unsigned int dwRedScore, unsigned int dwBlueScore, unsigned int dwRedMaxJoinCnt, unsigned int dwBlueMaxJoinCnt, unsigned int dwRedGoalCntSum, unsigned int dwBlueGoalCntSum, unsigned int dwRedKillCntSum, unsigned int dwBlueKillCntSum, char byBattleResult, unsigned int dwMaxGoalCharacSerial, char* wszMaxGoalCharacName, unsigned int dwMaxKillCharacSerial, char* wszMaxKillCharacName, char byJoinLimit, unsigned int dwGuildBattleCostGold, char* szBattleMapCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, char*, unsigned int, char*, unsigned int, char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char, unsigned int, char*, unsigned int, char*, char, unsigned int, char*);
        return (org_ptr(0x1404b0c10L))(this, szStartTime, szEndTime, dwRedSerial, wszRedName, dwBlueSerial, wszBlueName, dwRedScore, dwBlueScore, dwRedMaxJoinCnt, dwBlueMaxJoinCnt, dwRedGoalCntSum, dwBlueGoalCntSum, dwRedKillCntSum, dwBlueKillCntSum, byBattleResult, dwMaxGoalCharacSerial, wszMaxGoalCharacName, dwMaxKillCharacSerial, wszMaxKillCharacName, byJoinLimit, dwGuildBattleCostGold, szBattleMapCode);
    };
    bool CRFWorldDatabase::Insert_GuildMoneyHistory(unsigned int dwGuildSerial, long double dInoutDalant, long double dInoutGold, long double dResultDalant, long double dResultGold, char* wszDate, unsigned int dwAvatorSerial, char* pwszName)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double, long double, long double, long double, char*, unsigned int, char*);
        return (org_ptr(0x14049aef0L))(this, dwGuildSerial, dInoutDalant, dInoutGold, dResultDalant, dResultGold, wszDate, dwAvatorSerial, pwszName);
    };
    bool CRFWorldDatabase::Insert_ItemChargeInGame(unsigned int dwAvatorSerial, unsigned int dwItemCode_K, uint64_t dwItemCode_D, unsigned int dwItemCode_U, char byType)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, uint64_t, unsigned int, char);
        return (org_ptr(0x1404988c0L))(this, dwAvatorSerial, dwItemCode_K, dwItemCode_D, dwItemCode_U, byType);
    };
    bool CRFWorldDatabase::Insert_ItemCombineEx(unsigned int dwCharacterSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a4950L))(this, dwCharacterSerial);
    };
    bool CRFWorldDatabase::Insert_Level_Log(unsigned int dwCharacterSerial, char byLevel, unsigned int dwTotalPlayMin)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char, unsigned int);
        return (org_ptr(0x140493d90L))(this, dwCharacterSerial, byLevel, dwTotalPlayMin);
    };
    bool CRFWorldDatabase::Insert_LimitItemRecord(unsigned int* pdwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*);
        return (org_ptr(0x1404baf90L))(this, pdwSerial);
    };
    bool CRFWorldDatabase::Insert_MacroData(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a5140L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_NpcData(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x14049eea0L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_NpcData(unsigned int dwSerial, unsigned int* pNpcData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int*);
        return (org_ptr(0x14049ef50L))(this, dwSerial, pNpcData);
    };
    bool CRFWorldDatabase::Insert_NpcLog(unsigned int dwSerial, char* pwszName, char byIndex, unsigned int dwOrgValue, unsigned int dwChgValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, char, unsigned int, unsigned int);
        return (org_ptr(0x14049f4c0L))(this, dwSerial, pwszName, byIndex, dwOrgValue, dwChgValue);
    };
    bool CRFWorldDatabase::Insert_NpcQuest_History(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c3270L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_OreCutting(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c5d10L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_OreReset_Log(char byType, int nLiveUsercnt, unsigned int dwOreRemain, unsigned int dwTAmount)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, int, unsigned int, unsigned int);
        return (org_ptr(0x1404c9900L))(this, byType, nLiveUsercnt, dwOreRemain, dwTAmount);
    };
    bool CRFWorldDatabase::Insert_PSDefaultRecord(unsigned int dwCum)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404b1bf0L))(this, dwCum);
    };
    char CRFWorldDatabase::Insert_PatriarchComm(unsigned int dwSerial, unsigned int dwDalant, char* pszDepDate)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, char*);
        return (org_ptr(0x1404bff10L))(this, dwSerial, dwDalant, pszDepDate);
    };
    bool CRFWorldDatabase::Insert_PatrirchItemChargeRefund(char* szData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404be8b0L))(this, szData);
    };
    bool CRFWorldDatabase::Insert_PcBangFavorItem(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c66c0L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_PlayerTimeLimitInfo(unsigned int dwAccountSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c7a00L))(this, dwAccountSerial);
    };
    bool CRFWorldDatabase::Insert_PostStorageRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404b2b10L))(this);
    };
    bool CRFWorldDatabase::Insert_PotionDelay(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c5730L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_PrimiumPlayTime(unsigned int dwAccSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c50b0L))(this, dwAccSerial);
    };
    bool CRFWorldDatabase::Insert_PvpOrderViewInfo(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c2260L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_PvpPointGuildRankData(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404a6df0L))(this, szDate);
    };
    bool CRFWorldDatabase::Insert_PvpPointLimitInfoRecord(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404b01a0L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_Quest(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404950d0L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_RFEvent_ClassRefine(unsigned int dwAvatorSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404b4ca0L))(this, dwAvatorSerial);
    };
    bool CRFWorldDatabase::Insert_RaceBattleLog(struct _race_battle_log_info* pInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, struct _race_battle_log_info*);
        return (org_ptr(0x1404c1670L))(this, pInfo);
    };
    bool CRFWorldDatabase::Insert_RenamePotionLog(unsigned int dwSerial, char* wszOldName, char* wszNewName)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, char*);
        return (org_ptr(0x1404c5dd0L))(this, dwSerial, wszOldName, wszNewName);
    };
    bool CRFWorldDatabase::Insert_SFDelayInfo(unsigned int dwSerial, struct _worlddb_sf_delay_info* pSFDelay)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_sf_delay_info*);
        return (org_ptr(0x1404c2310L))(this, dwSerial, pSFDelay);
    };
    bool CRFWorldDatabase::Insert_Set_Limit_Run(char* pData, int iSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, int);
        return (org_ptr(0x1404c8a10L))(this, pData, iSize);
    };
    bool CRFWorldDatabase::Insert_SettlementOwnerLog(char byNth, char byRace, unsigned int dwGuildSerial, char* wszGuildName, uint16_t wRank, char byGrade, long double dKillPvpPoint, long double dGuildBattlePvpPoint, unsigned int dwSumLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, char, unsigned int, char*, uint16_t, char, long double, long double, unsigned int);
        return (org_ptr(0x1404b0250L))(this, byNth, byRace, dwGuildSerial, wszGuildName, wRank, byGrade, dKillPvpPoint, dGuildBattlePvpPoint, dwSumLv);
    };
    bool CRFWorldDatabase::Insert_Start_NpcQuest_History(unsigned int dwSerial, char* szQuestCode, char byLevel, char* szTime, int64_t nEndTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, char, char*, int64_t);
        return (org_ptr(0x1404c3760L))(this, dwSerial, szQuestCode, byLevel, szTime, nEndTime);
    };
    bool CRFWorldDatabase::Insert_Supplement(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c4ba0L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_Unit(unsigned int dwCharacterSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404901b0L))(this, dwCharacterSerial);
    };
    bool CRFWorldDatabase::Insert_UnitData(unsigned int dwSerial, long double* pUnitData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double*);
        return (org_ptr(0x1404a0890L))(this, dwSerial, pUnitData);
    };
    bool CRFWorldDatabase::Insert_UnitLog(unsigned int dwSerial, char* wszName, char byDID, long double dOrgVal, long double dChgVal)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, char, long double, long double);
        return (org_ptr(0x1404a0a30L))(this, dwSerial, wszName, byDID, dOrgVal, dChgVal);
    };
    bool CRFWorldDatabase::Insert_UnmannedTraderItemStateRecord(unsigned int dwRowCnt, wchar_t** ppwszStr)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, wchar_t**);
        return (org_ptr(0x1404ab4a0L))(this, dwRowCnt, ppwszStr);
    };
    bool CRFWorldDatabase::Insert_UnmannedTraderSingleDefaultRecord(unsigned int dwRowCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404ab9e0L))(this, dwRowCnt);
    };
    bool CRFWorldDatabase::Insert_UserInterface(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404982e0L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Insert_UserNum_Log(int nAvgUserNum, int nMaxUserNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, int, int);
        return (org_ptr(0x140493e60L))(this, nAvgUserNum, nMaxUserNum);
    };
    bool CRFWorldDatabase::Insert_WeeklyGuildPvpPointSum(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a6f60L))(this, dwSerial);
    };
    bool CRFWorldDatabase::LoadGreetingMsg(char* pwszGMGreetingmsg, char* pwszRaceGreetingmsgA, char* pwszRaceGreetingmsgB, char* pwszRaceGreetingmsgC, char* pwszGMName, char* pwszNameA, char* pwszNameB, char* pwszNameC)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, char*, char*, char*, char*, char*, char*, char*);
        return (org_ptr(0x14049b110L))(this, pwszGMGreetingmsg, pwszRaceGreetingmsgA, pwszRaceGreetingmsgB, pwszRaceGreetingmsgC, pwszGMName, pwszNameA, pwszNameB, pwszNameC);
    };
    bool CRFWorldDatabase::LoadGuildBattleInfo(unsigned int dwStartID, unsigned int dwRowCnt, struct _worlddb_guild_battle_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, struct _worlddb_guild_battle_info*);
        return (org_ptr(0x1404a25d0L))(this, dwStartID, dwRowCnt, pkInfo);
    };
    char CRFWorldDatabase::LoadGuildBattleScheduleInfo(unsigned int uiStartListID, unsigned int uiScheduleUnitCnt, struct _worlddb_guild_battle_schedule_list* pkInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, struct _worlddb_guild_battle_schedule_list*);
        return (org_ptr(0x1404a15e0L))(this, uiStartListID, uiScheduleUnitCnt, pkInfo);
    };
    bool CRFWorldDatabase::Rebirth_Base(unsigned int dwCharacterSerial, char* pwszName)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*);
        return (org_ptr(0x140493f10L))(this, dwCharacterSerial, pwszName);
    };
    bool CRFWorldDatabase::Regist_UnmannedTraderSingleItem(unsigned int dwRegSerial, struct _unmannedtrader_registsingleitem* kInfo, bool bInsertRecord)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _unmannedtrader_registsingleitem*, bool);
        return (org_ptr(0x1404acc00L))(this, dwRegSerial, kInfo, bInsertRecord);
    };
    bool CRFWorldDatabase::SelectAllGuildSerial(unsigned int* pdwCount, unsigned int* pdwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*, unsigned int*);
        return (org_ptr(0x1404b73e0L))(this, pdwCount, pdwSerial);
    };
    bool CRFWorldDatabase::SelectAllGuildSerialGrade(unsigned int* pdwCount, unsigned int* pdwSerial, char* pbyGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*, unsigned int*, char*);
        return (org_ptr(0x1404b9780L))(this, pdwCount, pdwSerial, pbyGrade);
    };
    bool CRFWorldDatabase::SelectGuildBattleRankList(char byRace, struct _worlddb_guild_battle_rank_list* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, struct _worlddb_guild_battle_rank_list*);
        return (org_ptr(0x1404a2b70L))(this, byRace, pkInfo);
    };
    bool CRFWorldDatabase::SelectGuildBattleRankRecord(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a3460L))(this, dwGuildSerial);
    };
    bool CRFWorldDatabase::SelectGuildBattleRerservedList(unsigned int uiStartSLID, unsigned int uiEndSLID, struct _worlddb_guild_battle_reserved_schedule_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, struct _worlddb_guild_battle_reserved_schedule_info*);
        return (org_ptr(0x1404a38c0L))(this, uiStartSLID, uiEndSLID, pkInfo);
    };
    char CRFWorldDatabase::SelectGuildBattleScheduleInfoID(unsigned int dwID)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a1cf0L))(this, dwID);
    };
    int CRFWorldDatabase::SelectRowCountGuildBattleInfo()
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404a20d0L))(this);
    };
    int CRFWorldDatabase::SelectRowCountGuildBattleScheduleInfo()
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404a12b0L))(this);
    };
    bool CRFWorldDatabase::Select_AccountByAvatorName(char* pwszAvatorName, char* szAccount)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, char*);
        return (org_ptr(0x140494d70L))(this, pwszAvatorName, szAccount);
    };
    bool CRFWorldDatabase::Select_AccountItemCharge(unsigned int dwAccountSerial, char* pbyType, long double* pdMoney, unsigned int* pdwItemCode_K, uint64_t* pdwItemCode_D, unsigned int* pdwItemCode_U, char* pbyRace, unsigned int* pdwDBID, int* piTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, long double*, unsigned int*, uint64_t*, unsigned int*, char*, unsigned int*, int*);
        return (org_ptr(0x1404a3e40L))(this, dwAccountSerial, pbyType, pdMoney, pdwItemCode_K, pdwItemCode_D, pdwItemCode_U, pbyRace, pdwDBID, piTime);
    };
    bool CRFWorldDatabase::Select_AccountItemCharge_Extend(unsigned int dwAccountSerial, char* pbyType, unsigned int* pdwItemCode_K, uint64_t* pdwItemCode_D, unsigned int* pdwItemCode_U, char* pbyRace, unsigned int* pdwDBID, int* piTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, unsigned int*, uint64_t*, unsigned int*, char*, unsigned int*, int*);
        return (org_ptr(0x1404a43e0L))(this, dwAccountSerial, pbyType, pdwItemCode_K, pdwItemCode_D, pdwItemCode_U, pbyRace, pdwDBID, piTime);
    };
    bool CRFWorldDatabase::Select_AccountSerial(char* pwszCharacterName, char* szAccount, unsigned int* pSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, char*, unsigned int*);
        return (org_ptr(0x14048a380L))(this, pwszCharacterName, szAccount, pSerial);
    };
    char CRFWorldDatabase::Select_AccountTrunk(unsigned int dwAccountSerial, char byRace, struct _worlddb_trunk_info* pTrunkData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char, struct _worlddb_trunk_info*);
        return (org_ptr(0x14048d360L))(this, dwAccountSerial, byRace, pTrunkData);
    };
    char CRFWorldDatabase::Select_AccountTrunkExtend(unsigned int dwAccountSerial, struct _worlddb_trunk_info* pTrunkData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_trunk_info*);
        return (org_ptr(0x14048dad0L))(this, dwAccountSerial, pTrunkData);
    };
    bool CRFWorldDatabase::Select_AllGuildData(struct _worlddb_guild_info* pGuildInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, struct _worlddb_guild_info*);
        return (org_ptr(0x140499690L))(this, pGuildInfo);
    };
    uint16_t CRFWorldDatabase::Select_AllGuildNum()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x140499340L))(this);
    };
    char CRFWorldDatabase::Select_AnimusData(unsigned int dwSerial, char byRace, long double* pAnimusData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char, long double*);
        return (org_ptr(0x14049f5a0L))(this, dwSerial, byRace, pAnimusData);
    };
    bool CRFWorldDatabase::Select_ArrangeInfo(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x14049eb30L))(this, dwSerial);
    };
    char CRFWorldDatabase::Select_BattleResultLogLatest(unsigned int* pkLogSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*);
        return (org_ptr(0x1404b0de0L))(this, pkLogSerial);
    };
    bool CRFWorldDatabase::Select_BattleTournamentInfo(struct TournamentWinner* pWinnerInfo, int nMax)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, struct TournamentWinner*, int);
        return (org_ptr(0x1404c5ea0L))(this, pWinnerInfo, nMax);
    };
    char CRFWorldDatabase::Select_BossCryMsg(unsigned int dwSerial, struct _worlddb_crymsg_info* pCryMsg)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_crymsg_info*);
        return (org_ptr(0x1404bb3e0L))(this, dwSerial, pCryMsg);
    };
    char CRFWorldDatabase::Select_Buddy(unsigned int dwSerial, struct _worlddb_buddy_info* pBuddyData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_buddy_info*);
        return (org_ptr(0x14049e1b0L))(this, dwSerial, pBuddyData);
    };
    int CRFWorldDatabase::Select_CashLimSale(struct _worlddb_cash_limited_sale* pcashlimitedsale)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, struct _worlddb_cash_limited_sale*);
        return (org_ptr(0x1404c6780L))(this, pcashlimitedsale);
    };
    char CRFWorldDatabase::Select_CharNumInWorld(unsigned int dwAccountSerial, char* byCharNum)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*);
        return (org_ptr(0x14048e200L))(this, dwAccountSerial, byCharNum);
    };
    char CRFWorldDatabase::Select_CharacterBaseInfo(unsigned int dwCharacterSerial, struct _worlddb_character_base_info* pCharacterData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_character_base_info*);
        return (org_ptr(0x14048ee20L))(this, dwCharacterSerial, pCharacterData);
    };
    char CRFWorldDatabase::Select_CharacterBaseInfoByName(char* pwszCharacterName, struct _worlddb_character_base_info* pCharacterData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char*, struct _worlddb_character_base_info*);
        return (org_ptr(0x14048aab0L))(this, pwszCharacterName, pCharacterData);
    };
    char CRFWorldDatabase::Select_CharacterBaseInfoBySerial(unsigned int dwAccountSerial, struct _worlddb_character_base_info_array* pCharacterDataArray)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_character_base_info_array*);
        return (org_ptr(0x14048e5b0L))(this, dwAccountSerial, pCharacterDataArray);
    };
    char CRFWorldDatabase::Select_CharacterGeneralInfo(unsigned int dwCharacterSerial, struct _worlddb_character_general_info* pCharacterData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_character_general_info*);
        return (org_ptr(0x14048b290L))(this, dwCharacterSerial, pCharacterData);
    };
    bool CRFWorldDatabase::Select_CharacterName(unsigned int dwSerial, char* pwszCharacterName, char* szAccount)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, char*);
        return (org_ptr(0x14048a720L))(this, dwSerial, pwszCharacterName, szAccount);
    };
    bool CRFWorldDatabase::Select_CharacterReName(char* pwszName, unsigned int* pSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, unsigned int*);
        return (org_ptr(0x1404c4340L))(this, pwszName, pSerial);
    };
    bool CRFWorldDatabase::Select_CharacterSerial(char* pwszCharacterName, unsigned int* pSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, unsigned int*);
        return (org_ptr(0x140489c00L))(this, pwszCharacterName, pSerial);
    };
    bool CRFWorldDatabase::Select_CharactersInfo(unsigned int dwAccountSerial, struct _worlddb_character_array_info* pCharacterData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_character_array_info*);
        return (org_ptr(0x140489720L))(this, dwAccountSerial, pCharacterData);
    };
    char CRFWorldDatabase::Select_CheckGreetRecord(int nUseType)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, int);
        return (org_ptr(0x14049bc10L))(this, nUseType);
    };
    bool CRFWorldDatabase::Select_CheckSumValue(unsigned int dwSerial, unsigned int* pdwCheckSum)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int*);
        return (org_ptr(0x14049dda0L))(this, dwSerial, pdwCheckSum);
    };
    bool CRFWorldDatabase::Select_ChracterSerialRace(char* pwszCharacterName, unsigned int* pSerial, char* pbyRace)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, unsigned int*, char*);
        return (org_ptr(0x140489f60L))(this, pwszCharacterName, pSerial, pbyRace);
    };
    int CRFWorldDatabase::Select_ClearHonorGuild(char byRace, unsigned int* dwSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int*);
        return (org_ptr(0x1404c0780L))(this, byRace, dwSerial);
    };
    char CRFWorldDatabase::Select_Economy_History(struct _worlddb_economy_history_info_array* pEconomyData, unsigned int dwDate)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, struct _worlddb_economy_history_info_array*, unsigned int);
        return (org_ptr(0x140492a90L))(this, pEconomyData, dwDate);
    };
    bool CRFWorldDatabase::Select_Equal_DeleteName_NoArranged(char* pwszCharacterName)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x140490510L))(this, pwszCharacterName);
    };
    bool CRFWorldDatabase::Select_Equal_Name(char* pwszCharacterName)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x140490260L))(this, pwszCharacterName);
    };
    char CRFWorldDatabase::Select_Exist_Economy(unsigned int dwDate, struct _worlddb_economy_history_info_array::_worlddb_economy_history_info* pEconomyData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_economy_history_info_array::_worlddb_economy_history_info*);
        return (org_ptr(0x140493130L))(this, dwDate, pEconomyData);
    };
    int CRFWorldDatabase::Select_FailBattleCount(char byRace, unsigned int dwSerial, unsigned int* dwCount)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, unsigned int*);
        return (org_ptr(0x1404c12b0L))(this, byRace, dwSerial, dwCount);
    };
    int CRFWorldDatabase::Select_GetCharSerialByNameRace(char* pwszName, char byRace, unsigned int* pSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char*, char, unsigned int*);
        return (org_ptr(0x1404bf350L))(this, pwszName, byRace, pSerial);
    };
    int CRFWorldDatabase::Select_GodenBoxItem(struct _worlddb_golden_box_item* goldenboxitem, int* pnSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, struct _worlddb_golden_box_item*, int*);
        return (org_ptr(0x1404c9160L))(this, goldenboxitem, pnSerial);
    };
    bool CRFWorldDatabase::Select_GuildBattleRecord(unsigned int dwSerial, struct _guildbattle_totalrecord* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _guildbattle_totalrecord*);
        return (org_ptr(0x1404aa8f0L))(this, dwSerial, pkInfo);
    };
    bool CRFWorldDatabase::Select_GuildData(unsigned int dwGuildSerial, struct _worlddb_guild_info::__guild_info* pGuildData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_guild_info::__guild_info*);
        return (org_ptr(0x140499d70L))(this, dwGuildSerial, pGuildData);
    };
    char CRFWorldDatabase::Select_GuildMasterLastConn(unsigned int dwSerial, unsigned int dwLimitConnTime, unsigned int* pdwLastConnTime)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, unsigned int*);
        return (org_ptr(0x1404c3f80L))(this, dwSerial, dwLimitConnTime, pdwLastConnTime);
    };
    bool CRFWorldDatabase::Select_GuildMemberData(uint16_t wMaxMember, unsigned int dwGuildSerial, struct _worlddb_guild_member_info* pGuildMemberInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, uint16_t, unsigned int, struct _worlddb_guild_member_info*);
        return (org_ptr(0x14049a150L))(this, wMaxMember, dwGuildSerial, pGuildMemberInfo);
    };
    bool CRFWorldDatabase::Select_GuildMoneyIOData(unsigned int dwGuildSerial, struct _worlddb_guild_money_io_info* pGuildIOData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_guild_money_io_info*);
        return (org_ptr(0x14049a5a0L))(this, dwGuildSerial, pGuildIOData);
    };
    bool CRFWorldDatabase::Select_GuildRoomInfo(struct _guildroom_info* pInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, struct _guildroom_info*);
        return (org_ptr(0x1404b03e0L))(this, pInfo);
    };
    bool CRFWorldDatabase::Select_GuildSerial(char* pwszGuildName, unsigned int* pdwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, unsigned int*);
        return (org_ptr(0x140498a70L))(this, pwszGuildName, pdwGuildSerial);
    };
    int CRFWorldDatabase::Select_HonorGuild(char byRace, struct _guild_honor_list_result_zocl* pOutList, bool bNext)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, struct _guild_honor_list_result_zocl*, bool);
        return (org_ptr(0x1404c01d0L))(this, byRace, pOutList, bNext);
    };
    char CRFWorldDatabase::Select_Inven(unsigned int dwCharacterSerial, uint16_t wBagCount, struct _worlddb_inven_info* pInvenData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, uint16_t, struct _worlddb_inven_info*);
        return (org_ptr(0x14048c660L))(this, dwCharacterSerial, wBagCount, pInvenData);
    };
    int CRFWorldDatabase::Select_IsValidChar(unsigned int dwSerial, unsigned int* dwDbSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int*);
        return (org_ptr(0x1404c17d0L))(this, dwSerial, dwDbSerial);
    };
    bool CRFWorldDatabase::Select_ItemCharge(unsigned int dwAvatorSerial, char* pbyType, unsigned int* pDwItemCode_K, uint64_t* pDwItemCode_D, unsigned int* pDwItemCode_U, unsigned int* pDwItemChargeIndex, int* piTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, unsigned int*, uint64_t*, unsigned int*, unsigned int*, int*);
        return (org_ptr(0x140493fc0L))(this, dwAvatorSerial, pbyType, pDwItemCode_K, pDwItemCode_D, pDwItemCode_U, pDwItemChargeIndex, piTime);
    };
    char CRFWorldDatabase::Select_ItemCombineEx(unsigned int dwSerial, struct _worlddb_itemcombineex_info* pdbItemCombineExInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_itemcombineex_info*);
        return (org_ptr(0x1404a4a00L))(this, dwSerial, pdbItemCombineExInfo);
    };
    char CRFWorldDatabase::Select_LimitInfo(char* pData, uint64_t tDataSize)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char*, uint64_t);
        return (org_ptr(0x1404c8ae0L))(this, pData, tDataSize);
    };
    char CRFWorldDatabase::Select_LimitItemEmptyRecord(unsigned int* pdwSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*);
        return (org_ptr(0x1404ba170L))(this, pdwSerial);
    };
    char CRFWorldDatabase::Select_LimitItemUsedRecord(char byType, unsigned int dwTypeSerial, unsigned int dwStoreInx, unsigned int* pdwSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, unsigned int, unsigned int*);
        return (org_ptr(0x1404ba4f0L))(this, byType, dwTypeSerial, dwStoreInx, pdwSerial);
    };
    char CRFWorldDatabase::Select_Limit_Run_Record()
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404c87d0L))(this);
    };
    int CRFWorldDatabase::Select_LoseBattleCount(char byRace, unsigned int dwSerial, unsigned int* dwCount)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, unsigned int*);
        return (org_ptr(0x1404c0b30L))(this, byRace, dwSerial, dwCount);
    };
    char CRFWorldDatabase::Select_MacroData(unsigned int dwSerial, struct _AIOC_A_MACRODATA* pMacro)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _AIOC_A_MACRODATA*);
        return (org_ptr(0x1404a52f0L))(this, dwSerial, pMacro);
    };
    char CRFWorldDatabase::Select_NotArrangeCharacter(unsigned int dwAccountSerial, struct _worlddb_arrange_char_info* pCharData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_arrange_char_info*);
        return (org_ptr(0x14049e5a0L))(this, dwAccountSerial, pCharData);
    };
    char CRFWorldDatabase::Select_NpcData(unsigned int dwSerial, unsigned int* pNpcData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int*);
        return (org_ptr(0x14049f050L))(this, dwSerial, pNpcData);
    };
    char CRFWorldDatabase::Select_NpcQuest_History(unsigned int dwSerial, struct _worlddb_npc_quest_complete_history* pNpcQHis)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_npc_quest_complete_history*);
        return (org_ptr(0x1404c3320L))(this, dwSerial, pNpcQHis);
    };
    int CRFWorldDatabase::Select_OldVerPatriarchGroup(char byRace, struct _candidate_info* p)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, struct _candidate_info*);
        return (org_ptr(0x1404bc610L))(this, byRace, p);
    };
    int CRFWorldDatabase::Select_OreCutting(unsigned int dwSerial, struct _worlddb_ore_cutting* pOreCutting)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_ore_cutting*);
        return (org_ptr(0x1404c57f0L))(this, dwSerial, pOreCutting);
    };
    char CRFWorldDatabase::Select_PatriarchCandidate(unsigned int dwSerial, char byRace, struct _candidate_info* p)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char, struct _candidate_info*);
        return (org_ptr(0x1404bcba0L))(this, dwSerial, byRace, p);
    };
    int CRFWorldDatabase::Select_PatriarchComm(unsigned int dwSerial, struct _patriarch_comm_list* pOutList)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _patriarch_comm_list*);
        return (org_ptr(0x1404bf720L))(this, dwSerial, pOutList);
    };
    int CRFWorldDatabase::Select_PatriarchCommCount(unsigned int dwSerial, char* pszDate, unsigned int* dwCnt)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, unsigned int*);
        return (org_ptr(0x1404bfb50L))(this, dwSerial, pszDate, dwCnt);
    };
    int CRFWorldDatabase::Select_PatriarchElectState(struct _sel_patriarch_elect_state* pSheet)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, struct _sel_patriarch_elect_state*);
        return (org_ptr(0x1404bb8d0L))(this, pSheet);
    };
    char CRFWorldDatabase::Select_PatriarchGroup(char byRace, struct _candidate_info* p)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, struct _candidate_info*);
        return (org_ptr(0x1404bdd10L))(this, byRace, p);
    };
    int CRFWorldDatabase::Select_PatriarchRefundCount(char byRaceCode, unsigned int dwAvatorSerial, unsigned int* dwCnt)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, unsigned int*);
        return (org_ptr(0x1404bbe50L))(this, byRaceCode, dwAvatorSerial, dwCnt);
    };
    int CRFWorldDatabase::Select_PatriarchVoted(char byRace, unsigned int dwSerial, bool* bOverlapVote)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, bool*);
        return (org_ptr(0x1404bc210L))(this, byRace, dwSerial, bOverlapVote);
    };
    int CRFWorldDatabase::Select_PatriarchWinCnt(char byRace, unsigned int dwAvatorSerial, unsigned int* dwWinCnt)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, unsigned int*);
        return (org_ptr(0x1404be4f0L))(this, byRace, dwAvatorSerial, dwWinCnt);
    };
    int CRFWorldDatabase::Select_PcBangFavorItem(unsigned int dwSerial, struct _worlddb_pcbang_favor_item* pPcBangFavorItem)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_pcbang_favor_item*);
        return (org_ptr(0x1404c6340L))(this, dwSerial, pPcBangFavorItem);
    };
    int CRFWorldDatabase::Select_PlayerTimeLimitInfo(unsigned int dwAccountSerial, struct _worlddb_time_limit_info* pTimeLimiInfo)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_time_limit_info*);
        return (org_ptr(0x1404c7ab0L))(this, dwAccountSerial, pTimeLimiInfo);
    };
    int CRFWorldDatabase::Select_PlayerTimeLimitInfo(unsigned int dwAccountSerial, unsigned int* pdwFatigue, char* pbyStatus)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int*, char*);
        return (org_ptr(0x1404c7f10L))(this, dwAccountSerial, pdwFatigue, pbyStatus);
    };
    int CRFWorldDatabase::Select_Player_Last_LogoutTime(unsigned int dwAccSerial, unsigned int* pdwLastLogoutTime)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int*);
        return (org_ptr(0x1404c8320L))(this, dwAccSerial, pdwLastLogoutTime);
    };
    char CRFWorldDatabase::Select_PostContent(unsigned int dwPostSerial, char* wszContent, int nSize)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, int);
        return (org_ptr(0x1404b43f0L))(this, dwPostSerial, wszContent, nSize);
    };
    char CRFWorldDatabase::Select_PostRecvSerialFromName(char* wszRecvName, unsigned int* pdwOutSerial, unsigned int* pdwAccSerial, unsigned int* pdwRace)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char*, unsigned int*, unsigned int*, unsigned int*);
        return (org_ptr(0x1404b1fe0L))(this, wszRecvName, pdwOutSerial, pdwAccSerial, pdwRace);
    };
    int CRFWorldDatabase::Select_PostRecvStorageCheck(unsigned int dwSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404b23e0L))(this, dwSerial);
    };
    char CRFWorldDatabase::Select_PostRegistryData(unsigned int dwMax, struct CPostData* pPostData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct CPostData*);
        return (org_ptr(0x1404b11c0L))(this, dwMax, pPostData);
    };
    int CRFWorldDatabase::Select_PostStorageEmptyRecord()
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404b18a0L))(this);
    };
    bool CRFWorldDatabase::Select_PostStorageEmptyRecordSerial(unsigned int* pdwStorageSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*);
        return (org_ptr(0x1404b2bd0L))(this, pdwStorageSerial);
    };
    char CRFWorldDatabase::Select_PostStorageList(unsigned int dwOwner, struct _post_storage_list* pListData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _post_storage_list*);
        return (org_ptr(0x1404b3490L))(this, dwOwner, pListData);
    };
    bool CRFWorldDatabase::Select_PostStorageRecordCheck()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404b2790L))(this);
    };
    int CRFWorldDatabase::Select_PotionDelay(unsigned int dwSerial, struct _worlddb_potion_delay_info* pPotionDelayInfo)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_potion_delay_info*);
        return (org_ptr(0x1404c5220L))(this, dwSerial, pPotionDelayInfo);
    };
    int CRFWorldDatabase::Select_PrimiumPlayTime(unsigned int dwAccSerial, struct _PCBANG_PLAY_TIME* kInfo)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _PCBANG_PLAY_TIME*);
        return (org_ptr(0x1404c4c60L))(this, dwAccSerial, kInfo);
    };
    int CRFWorldDatabase::Select_Punishment(unsigned int dwSerial, unsigned int* dwESerial, unsigned int* dwValue)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int*, unsigned int*);
        return (org_ptr(0x1404be980L))(this, dwSerial, dwESerial, dwValue);
    };
    int CRFWorldDatabase::Select_PunishmentCount(char byType, unsigned int dwAvatorSerial, unsigned int* pdwCnt)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, unsigned int*);
        return (org_ptr(0x1404bef90L))(this, byType, dwAvatorSerial, pdwCnt);
    };
    int CRFWorldDatabase::Select_PvpOrderViewInfo(unsigned int dwSerial, struct _pvporderview_info* kInfo)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _pvporderview_info*);
        return (org_ptr(0x1404c1b80L))(this, dwSerial, kInfo);
    };
    char CRFWorldDatabase::Select_PvpPointGuildRank(char* szDate, struct _pvppoint_guild_rank_info* pkInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char*, struct _pvppoint_guild_rank_info*);
        return (org_ptr(0x1404a71c0L))(this, szDate, pkInfo);
    };
    char CRFWorldDatabase::Select_PvpPointLimitInfo(unsigned int dwSerial, struct _pvppointlimit_info* kInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _pvppointlimit_info*);
        return (org_ptr(0x1404afc70L))(this, dwSerial, kInfo);
    };
    char CRFWorldDatabase::Select_PvpRankInfo(char byRace, char* szDate, struct _PVP_RANK_DATA* rankData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, char*, struct _PVP_RANK_DATA*);
        return (org_ptr(0x140497510L))(this, byRace, szDate, rankData);
    };
    char CRFWorldDatabase::Select_PvpRate(unsigned int dwSerial, char* szDate, unsigned int* pdwRank, uint16_t* pwRankRate)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, unsigned int*, uint16_t*);
        return (org_ptr(0x1404971a0L))(this, dwSerial, szDate, pdwRank, pwRankRate);
    };
    char CRFWorldDatabase::Select_Quest(unsigned int dwSerial, struct _worlddb_quest_array* questData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_quest_array*);
        return (org_ptr(0x140495180L))(this, dwSerial, questData);
    };
    int CRFWorldDatabase::Select_RFEvent_ClassRefine(unsigned int dwAvatorSerial, char* byRefinedCnt, unsigned int* dwRefineDate)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, unsigned int*);
        return (org_ptr(0x1404b47e0L))(this, dwAvatorSerial, byRefinedCnt, dwRefineDate);
    };
    char CRFWorldDatabase::Select_RaceBossAccumulationWinRate(char byRace, unsigned int dwBossSerial, struct _raceboss_acc_winrate* windata)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, struct _raceboss_acc_winrate*);
        return (org_ptr(0x1404c2da0L))(this, byRace, dwBossSerial, windata);
    };
    char CRFWorldDatabase::Select_RaceBossCurrentWinRate(char byRace, char* szDate, unsigned int* dwTotalCnt, unsigned int* dwWinCnt)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, char*, unsigned int*, unsigned int*);
        return (org_ptr(0x1404c28f0L))(this, byRace, szDate, dwTotalCnt, dwWinCnt);
    };
    char CRFWorldDatabase::Select_RegeAvator_For_Lobby_Logout(unsigned int dwAccountSerial, struct _rege_char_data* pRegeCharData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _rege_char_data*);
        return (org_ptr(0x1404c99f0L))(this, dwAccountSerial, pRegeCharData);
    };
    char CRFWorldDatabase::Select_ReturnPost(unsigned int dwOwner, unsigned int dwMax, struct _return_post_list* pRetData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, struct _return_post_list*);
        return (org_ptr(0x1404b3a70L))(this, dwOwner, dwMax, pRetData);
    };
    char CRFWorldDatabase::Select_SFDelayInfo(unsigned int dwSerial, struct _worlddb_sf_delay_info* pSFDelay)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_sf_delay_info*);
        return (org_ptr(0x1404c2490L))(this, dwSerial, pSFDelay);
    };
    char CRFWorldDatabase::Select_Start_NpcQuest_History(unsigned int dwSerial, struct _worlddb_start_npc_quest_complete_history* pNpcQHis, unsigned int dwCount)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_start_npc_quest_complete_history*, unsigned int);
        return (org_ptr(0x1404c3c40L))(this, dwSerial, pNpcQHis, dwCount);
    };
    char CRFWorldDatabase::Select_Start_NpcQuest_History_Count(unsigned int dwSerial, unsigned int* pdwCount)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int*);
        return (org_ptr(0x1404c3940L))(this, dwSerial, pdwCount);
    };
    char CRFWorldDatabase::Select_StoreLimitItem(struct _qry_case_all_store_limit_item* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, struct _qry_case_all_store_limit_item*);
        return (org_ptr(0x1404ba8a0L))(this, pData);
    };
    int CRFWorldDatabase::Select_Supplement(unsigned int dwSerial, struct _worlddb_character_supplement_info* pSupplement)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_character_supplement_info*);
        return (org_ptr(0x1404c47a0L))(this, dwSerial, pSupplement);
    };
    int CRFWorldDatabase::Select_Supplement_ActPoint(unsigned int dwSerial, struct _worlddb_character_supplement_info* pSupplement)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_character_supplement_info*);
        return (org_ptr(0x1404c8df0L))(this, dwSerial, pSupplement);
    };
    int CRFWorldDatabase::Select_Supplement_Ex(unsigned int dwSerial, struct _worlddb_character_supplement_info* pSupplement)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_character_supplement_info*);
        return (org_ptr(0x1404c6cb0L))(this, dwSerial, pSupplement);
    };
    char CRFWorldDatabase::Select_TakeItem(unsigned int dwAvatorSerial, struct _worlddb_item_list* itemList)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_item_list*);
        return (org_ptr(0x140494930L))(this, dwAvatorSerial, itemList);
    };
    char CRFWorldDatabase::Select_TotalGuildRank(char* szDate, struct _total_guild_rank_info* pkInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char*, struct _total_guild_rank_info*);
        return (org_ptr(0x1404a66a0L))(this, szDate, pkInfo);
    };
    char CRFWorldDatabase::Select_TotalRecordNum(unsigned int* pdwTotalNum)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*);
        return (org_ptr(0x1404b9df0L))(this, pdwTotalNum);
    };
    char CRFWorldDatabase::Select_Trade(char byType, unsigned int dwSerial, char byRace, struct _worlddb_trade_info* pTradeData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, char, struct _worlddb_trade_info*);
        return (org_ptr(0x14048cb70L))(this, byType, dwSerial, byRace, pTradeData);
    };
    bool CRFWorldDatabase::Select_TrunkMoney(unsigned int dwSerial, long double* pVal)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double*);
        return (org_ptr(0x14049f9f0L))(this, dwSerial, pVal);
    };
    char CRFWorldDatabase::Select_Unit(unsigned int dwCharacterSerial, struct _worlddb_unit_info_array* pUnitInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_unit_info_array*);
        return (org_ptr(0x14048f6f0L))(this, dwCharacterSerial, pUnitInfo);
    };
    char CRFWorldDatabase::Select_UnitData(unsigned int dwSerial, long double* pUnitData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double*);
        return (org_ptr(0x1404a0450L))(this, dwSerial, pUnitData);
    };
    char CRFWorldDatabase::Select_UnmannedTraderBuySingleItemInfo(char byType, unsigned int dwRegistSerial, struct _unmannedtrader_buy_item_info* kData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, struct _unmannedtrader_buy_item_info*);
        return (org_ptr(0x1404adb10L))(this, byType, dwRegistSerial, kData);
    };
    char CRFWorldDatabase::Select_UnmannedTraderItemRecordCntByState(char byType, char byState, unsigned int* pdwSerial, uint16_t wMaxCnt, uint16_t* pwRecordCnt)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, char, unsigned int*, uint16_t, uint16_t*);
        return (org_ptr(0x1404af100L))(this, byType, byState, pdwSerial, wMaxCnt, pwRecordCnt);
    };
    char CRFWorldDatabase::Select_UnmannedTraderItemState(char byType, unsigned int dwRegistSerial, char* byState)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, char*);
        return (org_ptr(0x1404acdb0L))(this, byType, dwRegistSerial, byState);
    };
    int CRFWorldDatabase::Select_UnmannedTraderItemStateInfo(struct _unmannedtrader_stade_id_info* pkInfo, unsigned int dwMaxCnt)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, struct _unmannedtrader_stade_id_info*, unsigned int);
        return (org_ptr(0x1404ab110L))(this, pkInfo, dwMaxCnt);
    };
    int CRFWorldDatabase::Select_UnmannedTraderItemStateInfoCnt(unsigned int* pdwCnt)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*);
        return (org_ptr(0x1404aadf0L))(this, pdwCnt);
    };
    char CRFWorldDatabase::Select_UnmannedTraderRegister(char byType, unsigned int dwRegistSerial, unsigned int* pdwRegister)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, unsigned int*);
        return (org_ptr(0x1404af6b0L))(this, byType, dwRegistSerial, pdwRegister);
    };
    char CRFWorldDatabase::Select_UnmannedTraderReservedSchedule(unsigned int dwMaxCnt, struct _unmannedtrader_reserved_schedule_info* pkInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _unmannedtrader_reserved_schedule_info*);
        return (org_ptr(0x1404ac300L))(this, dwMaxCnt, pkInfo);
    };
    char CRFWorldDatabase::Select_UnmannedTraderSearchGroupTotalRowCount(char byType, char byRace, char byClass1, char byClass2, char byClass3, unsigned int* dwCount)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, char, char, char, char, unsigned int*);
        return (org_ptr(0x1404ae570L))(this, byType, byRace, byClass1, byClass2, byClass3, dwCount);
    };
    char CRFWorldDatabase::Select_UnmannedTraderSearchPageInfo(char byType, char byRace, char byClass1, char byClass2, char byClass3, unsigned int dwMaxRowCount, unsigned int dwExcludeRowCount, char* szSortQuery, struct _unmannedtrader_page_info* pkInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, char, char, char, char, unsigned int, unsigned int, char*, struct _unmannedtrader_page_info*);
        return (org_ptr(0x1404ae8b0L))(this, byType, byRace, byClass1, byClass2, byClass3, dwMaxRowCount, dwExcludeRowCount, szSortQuery, pkInfo);
    };
    char CRFWorldDatabase::Select_UnmannedTraderSellInfo(char byType, unsigned int dwRegistSerial, char byRace, struct _unmannedtrader_seller_info* kData)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, char, struct _unmannedtrader_seller_info*);
        return (org_ptr(0x1404ad210L))(this, byType, dwRegistSerial, byRace, kData);
    };
    bool CRFWorldDatabase::Select_UnmannedTraderSingleItemBottomSerial(unsigned int* dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*);
        return (org_ptr(0x1404abcc0L))(this, dwSerial);
    };
    int CRFWorldDatabase::Select_UnmannedTraderSingleItemEmptyRecordCnt()
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404ab6a0L))(this);
    };
    int CRFWorldDatabase::Select_UnmannedTraderSingleItemEmptyRecordSerial(unsigned int* dwSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*);
        return (org_ptr(0x1404abfc0L))(this, dwSerial);
    };
    char CRFWorldDatabase::Select_UsedLimitItemRecordNum(unsigned int* pdwUsedNum)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int*);
        return (org_ptr(0x1404b9a70L))(this, pdwUsedNum);
    };
    bool CRFWorldDatabase::Select_UserCountInfo(char* szStartDate, char* szEndDate, struct _worlddb_user_count_info* pUserCountData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, char*, struct _worlddb_user_count_info*);
        return (org_ptr(0x140498390L))(this, szStartDate, szEndDate, pUserCountData);
    };
    char CRFWorldDatabase::Select_UserInterface(unsigned int dwSerial, struct _worlddb_userinterface_info* pUserinterfaceInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_userinterface_info*);
        return (org_ptr(0x140497a50L))(this, dwSerial, pUserinterfaceInfo);
    };
    char CRFWorldDatabase::Select_WaitItem(unsigned int dwAvatorSerial, struct _worlddb_item_list* itemList)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_item_list*);
        return (org_ptr(0x1404944a0L))(this, dwAvatorSerial, itemList);
    };
    char CRFWorldDatabase::Select_WeeklyGuildRankOwnerGuild(char* szDate, char byRace, char byLimitCnt, struct _weeklyguildrank_owner_info* pkInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char*, char, char, struct _weeklyguildrank_owner_info*);
        return (org_ptr(0x1404a7ac0L))(this, szDate, byRace, byLimitCnt, pkInfo);
    };
    int CRFWorldDatabase::Select_WinBattleCount(char byRace, unsigned int dwSerial, unsigned int* dwCount)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, unsigned int*);
        return (org_ptr(0x1404c0ef0L))(this, byRace, dwSerial, dwCount);
    };
    char CRFWorldDatabase::Select_utSellWaitItems_SalesTotals(char byType, unsigned int dwOwnor, unsigned int* pSalesTotals)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, unsigned int*);
        return (org_ptr(0x1404c8c60L))(this, byType, dwOwnor, pSalesTotals);
    };
    bool CRFWorldDatabase::Truncate_UnmannedTraderItemStateRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404ab400L))(this);
    };
    bool CRFWorldDatabase::UpdateClearGuildBattleInfo(unsigned int dwStartID, unsigned int dwEndID)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int);
        return (org_ptr(0x1404a2ac0L))(this, dwStartID, dwEndID);
    };
    bool CRFWorldDatabase::UpdateClearGuildBattleRank()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404a31b0L))(this);
    };
    bool CRFWorldDatabase::UpdateClearGuildBattleScheduleInfo(unsigned int uiStartListID, unsigned int uiEndListID)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int);
        return (org_ptr(0x1404a2020L))(this, uiStartListID, uiEndListID);
    };
    bool CRFWorldDatabase::UpdateClearGuildBattleScheduleInfo(unsigned int dwID)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a1c40L))(this, dwID);
    };
    bool CRFWorldDatabase::UpdateDrawGuildBattleResult(unsigned int dwGuildSerial, unsigned int dwScore)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int);
        return (org_ptr(0x1404a33b0L))(this, dwGuildSerial, dwScore);
    };
    bool CRFWorldDatabase::UpdateGuildBattleInfo(unsigned int dwID, unsigned int dwP1GuildSerial, unsigned int dwP2GuildSerial, unsigned int dwMapID, char byNumber)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, unsigned int, unsigned int, char);
        return (org_ptr(0x1404a29e0L))(this, dwID, dwP1GuildSerial, dwP2GuildSerial, dwMapID, byNumber);
    };
    bool CRFWorldDatabase::UpdateGuildBattleScheduleInfo(unsigned int dwID, unsigned int dwSLID, char byState, int64_t tStartTime, uint16_t wTurmMin)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, char, int64_t, uint16_t);
        return (org_ptr(0x1404a1aa0L))(this, dwID, dwSLID, byState, tStartTime, wTurmMin);
    };
    bool CRFWorldDatabase::UpdateGuildMoney(unsigned int dwSerial, long double dDalant, long double dGold)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double, long double);
        return (org_ptr(0x1404a0b10L))(this, dwSerial, dDalant, dGold);
    };
    bool CRFWorldDatabase::UpdateLoseGuildBattleResult(unsigned int dwGuildSerial, unsigned int dwScore)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int);
        return (org_ptr(0x1404a3300L))(this, dwGuildSerial, dwScore);
    };
    bool CRFWorldDatabase::UpdateServerResetToken(unsigned int dwToken, uint16_t wProcType, unsigned int dwESerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, uint16_t, unsigned int);
        return (org_ptr(0x1404c7510L))(this, dwToken, wProcType, dwESerial);
    };
    bool CRFWorldDatabase::UpdateVotedReset_Cheat(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c76f0L))(this, dwSerial);
    };
    bool CRFWorldDatabase::UpdateVotedReset_General(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c7760L))(this, dwSerial);
    };
    bool CRFWorldDatabase::UpdateVotedReset_Supplement(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404c7940L))(this, dwSerial);
    };
    bool CRFWorldDatabase::UpdateWinGuildBattleResult(unsigned int dwGuildSerial, unsigned int dwScore)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int);
        return (org_ptr(0x1404a3250L))(this, dwGuildSerial, dwScore);
    };
    bool CRFWorldDatabase::Update_AnimusData(unsigned int dwSerial, char byRace, long double* pAnimusData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char, long double*);
        return (org_ptr(0x1404a0260L))(this, dwSerial, byRace, pAnimusData);
    };
    bool CRFWorldDatabase::Update_BattleResultLogBattleResultAndPvpPoint(unsigned int kLogSerial, unsigned int dwRedSerial, unsigned int dwBlueSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1404b1100L))(this, kLogSerial, dwRedSerial, dwBlueSerial);
    };
    bool CRFWorldDatabase::Update_CharSlot(unsigned int dwAvatorSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x140498dd0L))(this, dwAvatorSerial);
    };
    bool CRFWorldDatabase::Update_CharacterData(unsigned int dwSerial, struct _worlddb_update_char_query* pUpdateQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_update_char_query*);
        return (org_ptr(0x1404916b0L))(this, dwSerial, pUpdateQuery);
    };
    bool CRFWorldDatabase::Update_CharacterReName(char* pwszName, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, unsigned int);
        return (org_ptr(0x1404c46c0L))(this, pwszName, dwSerial);
    };
    bool CRFWorldDatabase::Update_ClearWeeklyPvpPointSum()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404a7820L))(this);
    };
    bool CRFWorldDatabase::Update_CristalBattleCharInfo(unsigned int dwSerial, char byHSKTime, char byPvpGrade, int iPvpPoint, uint16_t wKillPoint, uint16_t wDiePoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char, char, int, uint16_t, uint16_t);
        return (org_ptr(0x1404a9a90L))(this, dwSerial, byHSKTime, byPvpGrade, iPvpPoint, wKillPoint, wDiePoint);
    };
    bool CRFWorldDatabase::Update_Dalant(unsigned int dwSerial, unsigned int dwDalant)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int);
        return (org_ptr(0x1404c9f10L))(this, dwSerial, dwDalant);
    };
    bool CRFWorldDatabase::Update_DisableInstanceStore(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404bb320L))(this, dwSerial);
    };
    bool CRFWorldDatabase::Update_DisappearOwnerRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404b1cf0L))(this);
    };
    bool CRFWorldDatabase::Update_GmGreet(struct _qry_case_gm_greetingmsg* pSheet)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, struct _qry_case_gm_greetingmsg*);
        return (org_ptr(0x14049c050L))(this, pSheet);
    };
    bool CRFWorldDatabase::Update_Gold(unsigned int dwSerial, unsigned int dwGold)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int);
        return (org_ptr(0x1404c9fe0L))(this, dwSerial, dwGold);
    };
    bool CRFWorldDatabase::Update_GuildEmblem(unsigned int dwGuildSerial, long double dCurDalant, unsigned int dwEmblemBack, unsigned int dwEmblemMark)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double, unsigned int, unsigned int);
        return (org_ptr(0x14049b020L))(this, dwGuildSerial, dCurDalant, dwEmblemBack, dwEmblemMark);
    };
    bool CRFWorldDatabase::Update_GuildGrade()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x14049cbe0L))(this);
    };
    bool CRFWorldDatabase::Update_GuildGreet(struct _qry_case_guild_greetingmsg* pSheet)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, struct _qry_case_guild_greetingmsg*);
        return (org_ptr(0x14049c200L))(this, pSheet);
    };
    bool CRFWorldDatabase::Update_GuildMaster(unsigned int dwGuild_Serial, unsigned int dwGuildMaster_Serial, char byGuildMaster_PrevGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, char);
        return (org_ptr(0x1404a65e0L))(this, dwGuild_Serial, dwGuildMaster_Serial, byGuildMaster_PrevGrade);
    };
    bool CRFWorldDatabase::Update_GuildMemberCount(unsigned int dwGuildSerial, uint16_t wMemberNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, uint16_t);
        return (org_ptr(0x14049dcd0L))(this, dwGuildSerial, wMemberNum);
    };
    bool CRFWorldDatabase::Update_GuildRank(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x14049c390L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_GuildRank_Step1(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b7670L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_GuildRank_Step2(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b7b00L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_GuildRank_Step3(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b7e80L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_GuildRoom(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404b0960L))(this, dwGuildSerial);
    };
    bool CRFWorldDatabase::Update_IncreaseWeeklyGuildGuildBattlePvpPointSum(unsigned int dwSerial, long double dPvpPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double);
        return (org_ptr(0x1404a70f0L))(this, dwSerial, dPvpPoint);
    };
    bool CRFWorldDatabase::Update_IncreaseWeeklyGuildKillPvpPointSum(unsigned int dwSerial, long double dPvpPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double);
        return (org_ptr(0x1404a7020L))(this, dwSerial, dPvpPoint);
    };
    bool CRFWorldDatabase::Update_InputGuildMoney(unsigned int dwGuildSerial, unsigned int dwDalant, unsigned int dwGold)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x14049ac40L))(this, dwGuildSerial, dwDalant, dwGold);
    };
    bool CRFWorldDatabase::Update_Level(unsigned int dwSerial, char byLv)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char);
        return (org_ptr(0x1404970e0L))(this, dwSerial, byLv);
    };
    bool CRFWorldDatabase::Update_LimitItemNum(char* pszQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404baf40L))(this, pszQuery);
    };
    bool CRFWorldDatabase::Update_MacroData(unsigned int dwSerial, struct _AIOC_A_MACRODATA* pMacro)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _AIOC_A_MACRODATA*);
        return (org_ptr(0x1404a5ce0L))(this, dwSerial, pMacro);
    };
    bool CRFWorldDatabase::Update_NpcData(unsigned int dwSerial, unsigned int* pNpcData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int*);
        return (org_ptr(0x14049f3c0L))(this, dwSerial, pNpcData);
    };
    bool CRFWorldDatabase::Update_OutputGuildMoney(unsigned int dwGuildSerial, unsigned int dwDalant, unsigned int dwGold)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x14049ad20L))(this, dwGuildSerial, dwDalant, dwGold);
    };
    char CRFWorldDatabase::Update_PatriarchComm(unsigned int dwSerial, unsigned int dwDalant, char* pszDepDate)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, char*);
        return (org_ptr(0x1404c0050L))(this, dwSerial, dwDalant, pszDepDate);
    };
    bool CRFWorldDatabase::Update_Player_TimeLimit_Info(unsigned int dwAccSerial, unsigned int dwFatigue, char wStatus)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, char);
        return (org_ptr(0x1404c86f0L))(this, dwAccSerial, dwFatigue, wStatus);
    };
    bool CRFWorldDatabase::Update_Player_Vote_Info(unsigned int dwSerial, unsigned int dwAccPlayTime, char IsVote, char VoteEnable, unsigned int dwScanerData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, char, char, unsigned int);
        return (org_ptr(0x1404c75f0L))(this, dwSerial, dwAccPlayTime, IsVote, VoteEnable, dwScanerData);
    };
    bool CRFWorldDatabase::Update_Post(char* szPostQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b4790L))(this, szPostQuery);
    };
    bool CRFWorldDatabase::Update_PostRegistry(unsigned int dwIndex, unsigned int dwSenderSerial, char* wszSendName, char* wszRecvName, char* wszTitle, char* wszContent, int nK, uint64_t dwD, unsigned int dwU, unsigned int dwGold, char bySendRace, char bySenderDgr, uint64_t lnUID)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, char*, char*, char*, char*, int, uint64_t, unsigned int, unsigned int, char, char, uint64_t);
        return (org_ptr(0x1404b1db0L))(this, dwIndex, dwSenderSerial, wszSendName, wszRecvName, wszTitle, wszContent, nK, dwD, dwU, dwGold, bySendRace, bySenderDgr, lnUID);
    };
    bool CRFWorldDatabase::Update_PostRegistryDisable(unsigned int dwIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404b1f20L))(this, dwIndex);
    };
    bool CRFWorldDatabase::Update_PostStorageSendToRecver(unsigned int dwOwner, unsigned int dwPostSerial, char byPostState, char* wszSendName, char* wszRecvName, char* wszTitle, char* wszContent, int nK, uint64_t dwD, unsigned int dwU, unsigned int dwGold, char byErr, uint16_t wStorageIndex, char* pbyNumber, bool bGetNumber, uint64_t lnUID)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, char, char*, char*, char*, char*, int, uint64_t, unsigned int, unsigned int, char, uint16_t, char*, bool, uint64_t);
        return (org_ptr(0x1404b2f60L))(this, dwOwner, dwPostSerial, byPostState, wszSendName, wszRecvName, wszTitle, wszContent, nK, dwD, dwU, dwGold, byErr, wStorageIndex, pbyNumber, bGetNumber, lnUID);
    };
    bool CRFWorldDatabase::Update_Punishment(char* szData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404bee00L))(this, szData);
    };
    bool CRFWorldDatabase::Update_PvpPointGuildRankRecord(char* szDate, unsigned int dwSerial, uint16_t wRank)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, unsigned int, uint16_t);
        return (org_ptr(0x1404a78d0L))(this, szDate, dwSerial, wRank);
    };
    bool CRFWorldDatabase::Update_PvpPointGuildRankSumLv(char* szDate, char byRace, char byLimitCnt, char byLimitGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, char, char, char);
        return (org_ptr(0x1404a79b0L))(this, szDate, byRace, byLimitCnt, byLimitGrade);
    };
    bool CRFWorldDatabase::Update_PvpPointInfo(unsigned int dwSerial, int16_t* zClass, long double dPvpPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, int16_t*, long double);
        return (org_ptr(0x140496ff0L))(this, dwSerial, zClass, dPvpPoint);
    };
    bool CRFWorldDatabase::Update_RFEvent_ClassRefine(unsigned int dwAvatorSerial, char byRefineCnt, unsigned int dwRefineDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char, unsigned int);
        return (org_ptr(0x1404b4d60L))(this, dwAvatorSerial, byRefineCnt, dwRefineDate);
    };
    bool CRFWorldDatabase::Update_RaceGreet(struct _qry_case_race_greetingmsg* pSheet)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, struct _qry_case_race_greetingmsg*);
        return (org_ptr(0x14049c120L))(this, pSheet);
    };
    bool CRFWorldDatabase::Update_RaceRank(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404956e0L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step1(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b4e40L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step2(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b51b0L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step3(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b5570L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step4(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b5990L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step5(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b5d20L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step6(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b6d90L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step7(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b6e70L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step8(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b70a0L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step9(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b71f0L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step_6_1(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b6a30L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step_6_2(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b6b50L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RaceRank_Step_6_3(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404b6c70L))(this, szDate);
    };
    bool CRFWorldDatabase::Update_RankInGuild(unsigned int dwGuildSerial, struct _worlddb_rankinguild_info* pGuildMemberRankData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_rankinguild_info*);
        return (org_ptr(0x14049cc90L))(this, dwGuildSerial, pGuildMemberRankData);
    };
    char CRFWorldDatabase::Update_RankInGuild_Step1(unsigned int dwGuildSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404b8070L))(this, dwGuildSerial);
    };
    bool CRFWorldDatabase::Update_RankInGuild_Step2(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404b8230L))(this, dwGuildSerial);
    };
    bool CRFWorldDatabase::Update_RankInGuild_Step3(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404b8b50L))(this, dwGuildSerial);
    };
    bool CRFWorldDatabase::Update_RankInGuild_Step4(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404b8cb0L))(this, dwGuildSerial);
    };
    bool CRFWorldDatabase::Update_RankInGuild_Step5(unsigned int dwGuildSerial, struct _worlddb_rankinguild_info* pGuildMemberRankData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_rankinguild_info*);
        return (org_ptr(0x1404b8d50L))(this, dwGuildSerial, pGuildMemberRankData);
    };
    bool CRFWorldDatabase::Update_RankInGuild_Step6()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404b9520L))(this);
    };
    bool CRFWorldDatabase::Update_RankInGuild_Step7()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404b95d0L))(this);
    };
    bool CRFWorldDatabase::Update_RankInGuild_Step8()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404b9660L))(this);
    };
    bool CRFWorldDatabase::Update_RankInGuild_Step9()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404b96f0L))(this);
    };
    bool CRFWorldDatabase::Update_SFDelayInfo(unsigned int dwSerial, struct _worlddb_sf_delay_info* pSFDelay)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _worlddb_sf_delay_info*);
        return (org_ptr(0x1404c23d0L))(this, dwSerial, pSFDelay);
    };
    bool CRFWorldDatabase::Update_SetActive(unsigned int dwSerial, char* pwszActiveName, char bySlot)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, char);
        return (org_ptr(0x14049ea70L))(this, dwSerial, pwszActiveName, bySlot);
    };
    bool CRFWorldDatabase::Update_SetGuildMoney(unsigned int dwGuildSerial, long double dDalant, long double dGold)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double, long double);
        return (org_ptr(0x14049ae00L))(this, dwGuildSerial, dDalant, dGold);
    };
    bool CRFWorldDatabase::Update_Set_Limit_Run(char* pData, int iSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*, int);
        return (org_ptr(0x1404c8940L))(this, pData, iSize);
    };
    bool CRFWorldDatabase::Update_Start_NpcQuest_History(unsigned int dwSerial, char* szQuestCode, char byLevel, char* szTime, int64_t nEndTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*, char, char*, int64_t);
        return (org_ptr(0x1404c3850L))(this, dwSerial, szQuestCode, byLevel, szTime, nEndTime);
    };
    bool CRFWorldDatabase::Update_UnitData(unsigned int dwSerial, long double* pUnitData)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, long double*);
        return (org_ptr(0x1404a0960L))(this, dwSerial, pUnitData);
    };
    bool CRFWorldDatabase::Update_UnmannedTraderCheatUpdateRegistDate(char byType, unsigned int dwRegistSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int);
        return (org_ptr(0x1404afbb0L))(this, byType, dwRegistSerial);
    };
    bool CRFWorldDatabase::Update_UnmannedTraderClearDanglingOwnerRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404ab600L))(this);
    };
    bool CRFWorldDatabase::Update_UnmannedTraderItemState(char byType, unsigned int dwItemSerial, char byState, struct _SYSTEMTIME* kCurTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, char, struct _SYSTEMTIME*);
        return (org_ptr(0x1404ac7d0L))(this, byType, dwItemSerial, byState, kCurTime);
    };
    char CRFWorldDatabase::Update_UnmannedTraderReRegist(char byType, unsigned int dwRegistSerial, char byState, unsigned int dwPrice, unsigned int dwTax, struct _SYSTEMTIME* kCurTime)
    {
        using org_ptr = char (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, char, unsigned int, unsigned int, struct _SYSTEMTIME*);
        return (org_ptr(0x1404af990L))(this, byType, dwRegistSerial, byState, dwPrice, dwTax, kCurTime);
    };
    bool CRFWorldDatabase::Update_UnmannedTraderResutlInfo(char byType, unsigned int dwRegistSerial, char byState, unsigned int dwBuyer, unsigned int dwTax, struct _SYSTEMTIME* kCurTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, char, unsigned int, unsigned int, struct _SYSTEMTIME*);
        return (org_ptr(0x1404ae410L))(this, byType, dwRegistSerial, byState, dwBuyer, dwTax, kCurTime);
    };
    bool CRFWorldDatabase::Update_UnmannedTraderSellInfo(unsigned int dwRegSerial, struct _unmannedtrader_registsingleitem* kInfo, struct _SYSTEMTIME* kCurTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _unmannedtrader_registsingleitem*, struct _SYSTEMTIME*);
        return (org_ptr(0x1404aca80L))(this, dwRegSerial, kInfo, kCurTime);
    };
    bool CRFWorldDatabase::Update_UnmannedTraderSellInfoPrice(char byType, unsigned int dwRegistSerial, unsigned int dwOwner, unsigned int dwNewPrice)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1404ad140L))(this, byType, dwRegistSerial, dwOwner, dwNewPrice);
    };
    bool CRFWorldDatabase::Update_UnmannedTraderSingleItemInfo(unsigned int dwRegSerial, struct _unmannedtrader_registsingleitem* kInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _unmannedtrader_registsingleitem*);
        return (org_ptr(0x1404ac910L))(this, dwRegSerial, kInfo);
    };
    bool CRFWorldDatabase::Update_UnmannedTraderSingleTypeClearUseCompleteRecord(unsigned int dwSerial, struct _SYSTEMTIME* pkCurTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _SYSTEMTIME*);
        return (org_ptr(0x1404af3e0L))(this, dwSerial, pkCurTime);
    };
    bool CRFWorldDatabase::Update_UserGuildData(unsigned int dwAvatorSerial, unsigned int dwGuildSerial, char byGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, unsigned int, char);
        return (org_ptr(0x14049ab60L))(this, dwAvatorSerial, dwGuildSerial, byGrade);
    };
    int CRFWorldDatabase::Updatet_Account_Vote_Available(unsigned int dwSerial, char* byVoteEnable)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char*);
        return (org_ptr(0x1404c7100L))(this, dwSerial, byVoteEnable);
    };
    bool CRFWorldDatabase::create_amine_personal()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404a9d10L))(this);
    };
    bool CRFWorldDatabase::create_automine_table()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404a8760L))(this);
    };
    bool CRFWorldDatabase::create_sumtotal_dungeon(int nRecodeNum, char** ppKey)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, int, char**);
        return (org_ptr(0x1404a98a0L))(this, nRecodeNum, ppKey);
    };
    bool CRFWorldDatabase::create_table_atrade_taxrate()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*);
        return (org_ptr(0x1404a8140L))(this);
    };
    int CRFWorldDatabase::exist_aminpersonal_inven(unsigned int dwSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404a9dc0L))(this, dwSerial);
    };
    int CRFWorldDatabase::exist_automine(char byCollisionType, char byRace)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, char);
        return (org_ptr(0x1404a87c0L))(this, byCollisionType, byRace);
    };
    bool CRFWorldDatabase::insert_amine_newowner(char byType, char byRace, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, char, unsigned int);
        return (org_ptr(0x1404a9280L))(this, byType, byRace, dwSerial);
    };
    bool CRFWorldDatabase::insert_amine_personal(unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404aa7e0L))(this, dwSerial);
    };
    bool CRFWorldDatabase::insert_atrade_taxrate(char byRace, unsigned int dwSerial, char* wszName, unsigned int dwMatterDst, char* wszMatterDst, char byCurrTax, unsigned int dwNext)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, unsigned int, char*, unsigned int, char*, char, unsigned int);
        return (org_ptr(0x1404a8650L))(this, byRace, dwSerial, wszName, dwMatterDst, wszMatterDst, byCurrTax, dwNext);
    };
    int CRFWorldDatabase::select_amine_personal(unsigned int dwSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int);
        return (org_ptr(0x1404aa090L))(this, dwSerial);
    };
    int CRFWorldDatabase::select_amine_personal(unsigned int dwSerial, struct _personal_amine_inven* pInven)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, struct _personal_amine_inven*);
        return (org_ptr(0x1404aa360L))(this, dwSerial, pInven);
    };
    int CRFWorldDatabase::select_atrade_taxrate(char byRace, char* pwszName, char* byCurrTax, char* byNextTax)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, char, char*, char*, char*);
        return (org_ptr(0x1404a8210L))(this, byRace, pwszName, byCurrTax, byNextTax);
    };
    int CRFWorldDatabase::select_automine(struct _DB_LOAD_AUTOMINE_MACHINE* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct CRFWorldDatabase*, struct _DB_LOAD_AUTOMINE_MACHINE*);
        return (org_ptr(0x1404a8ab0L))(this, pdata);
    };
    bool CRFWorldDatabase::update_amine_battery(char byType, char byRace, unsigned int dwSerial, unsigned int dwBattery)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, char, unsigned int, unsigned int);
        return (org_ptr(0x1404a9360L))(this, byType, byRace, dwSerial, dwBattery);
    };
    bool CRFWorldDatabase::update_amine_dck(char byType, char byRace, unsigned int dwSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, char, unsigned int);
        return (org_ptr(0x1404a91a0L))(this, byType, byRace, dwSerial);
    };
    bool CRFWorldDatabase::update_amine_mineore(char byType, char byRace, unsigned int dwSerial, char bySlot, unsigned int dwK, char byNum, unsigned int dwGage)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, char, unsigned int, char, unsigned int, char, unsigned int);
        return (org_ptr(0x1404a9450L))(this, byType, byRace, dwSerial, bySlot, dwK, byNum, dwGage);
    };
    bool CRFWorldDatabase::update_amine_moveore(char byType, char byRace, unsigned int dwSerial, char bySSlot, unsigned int dwSK, char bySNum, char byDSlot, unsigned int dwDK, char byDNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, char, unsigned int, char, unsigned int, char, char, unsigned int, char);
        return (org_ptr(0x1404a9570L))(this, byType, byRace, dwSerial, bySSlot, dwSK, bySNum, byDSlot, dwDK, byDNum);
    };
    bool CRFWorldDatabase::update_amine_personal(char* pQry)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1404aa8a0L))(this, pQry);
    };
    bool CRFWorldDatabase::update_amine_selore(char byType, char byRace, unsigned int dwSerial, char byOreIdx)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, char, unsigned int, char);
        return (org_ptr(0x1404a97b0L))(this, byType, byRace, dwSerial, byOreIdx);
    };
    bool CRFWorldDatabase::update_amine_workstate(char byType, char byRace, unsigned int dwSerial, bool bWorking)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, char, char, unsigned int, bool);
        return (org_ptr(0x1404a96c0L))(this, byType, byRace, dwSerial, bWorking);
    };
    bool CRFWorldDatabase::update_cristalbattle_date(unsigned int dwCharSerial, char bHSKTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFWorldDatabase*, unsigned int, char);
        return (org_ptr(0x1404c5160L))(this, dwCharSerial, bHSKTime);
    };
    CRFWorldDatabase::~CRFWorldDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFWorldDatabase*);
        (org_ptr(0x1404896d0L))(this);
    };
    void CRFWorldDatabase::dtor_CRFWorldDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFWorldDatabase*);
        (org_ptr(0x1404896d0L))(this);
    };
END_ATF_NAMESPACE
