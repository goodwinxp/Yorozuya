#include <CMainThread.hpp>


START_ATF_NAMESPACE
    void CMainThread::AccountServerLogin()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f8140L))(this);
    };
    void CMainThread::AddGuildBattleSchdule(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f4170L))(this, pData);
    };
    void CMainThread::AddPassablePacket()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f95e0L))(this);
    };
    void CMainThread::Alive_Char_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f3ff0L))(this, pData);
    };
    CMainThread::CMainThread()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401e18d0L))(this);
    };
    void CMainThread::ctor_CMainThread()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401e18d0L))(this);
    };
    bool CMainThread::CashDBInit(char* szIP, char* szDBName, char* szAccount, char* szPassword, unsigned int dwPort)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, char*, char*, char*, char*, unsigned int);
        return (org_ptr(0x1401ed110L))(this, szIP, szDBName, szAccount, szPassword, dwPort);
    };
    void CMainThread::CheckAccountLineState()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f6500L))(this);
    };
    void CMainThread::CheckAvatorState()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f65f0L))(this);
    };
    void CMainThread::CheckConnNumLog()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f67b0L))(this);
    };
    void CMainThread::CheckDayChangedPvpPointClear()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f9d50L))(this);
    };
    bool CMainThread::CheckDefine()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401f9ce0L))(this);
    };
    void CMainThread::CheckForceClose()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401faae0L))(this);
    };
    void CMainThread::CheckRadarItemDelay()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401fa050L))(this);
    };
    void CMainThread::CheckServerRateINIFile()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401fa100L))(this);
    };
    void CMainThread::CheckServiceableTime()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f7560L))(this);
    };
    void CMainThread::CompleteLoadGuildBattleTotalRecord(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char, char*);
        (org_ptr(0x1401edbd0L))(this, byRet, pLoadData);
    };
    void CMainThread::CompleteUpdatePlayerVoteInfo(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401fb6e0L))(this, pData);
    };
    void CMainThread::CompleteUpdateServerToken(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401fb7f0L))(this, pData);
    };
    void CMainThread::CompleteUpdateSetLimitRun(char byRet, char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char, char*);
        (org_ptr(0x1401b8140L))(this, byRet, pData);
    };
    void CMainThread::CompleteUpdateVoteAvailable(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401fb650L))(this, pData);
    };
    void CMainThread::Complete_Select_RegeAvator_For_Lobby_Logout(char* pSheet)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401b8f70L))(this, pSheet);
    };
    void CMainThread::Complete_db_Update_Data_For_Post_Send(char* pSheet)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401b90f0L))(this, pSheet);
    };
    void CMainThread::Complete_db_Update_Data_For_Trade(char* pSheet)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401b93c0L))(this, pSheet);
    };
    void CMainThread::ContUserSaveJobCheck()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f9ba0L))(this);
    };
    void CMainThread::Cont_UserSave_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f3c90L))(this, pData);
    };
    unsigned int CMainThread::CreateDataResetToken(struct _SYSTEMTIME* tm)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CMainThread*, struct _SYSTEMTIME*);
        return (org_ptr(0x1401fb490L))(this, tm);
    };
    void CMainThread::CreateSelectCharacterLogTable(char byMonth)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char);
        (org_ptr(0x1401f9e50L))(this, byMonth);
    };
    void CMainThread::DQSCompleteProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f2070L))(this);
    };
    void CMainThread::DQSThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x1401ee8c0L))(pv);
    };
    bool CMainThread::DataFileInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401e5bf0L))(this);
    };
    bool CMainThread::DatabaseInit(char* pszDBName, char* pszDBIP)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, char*, char*);
        return (org_ptr(0x1401ed230L))(this, pszDBName, pszDBIP);
    };
    void CMainThread::Delete_Avator_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f37e0L))(this, pData);
    };
    void CMainThread::EndServer()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f9cd0L))(this);
    };
    void CMainThread::ForceCloseUserInTiming()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f63d0L))(this);
    };
    struct CGameObject* CMainThread::GetChar(char* pszCharName)
    {
        using org_ptr = struct CGameObject* (WINAPIV*)(struct CMainThread*, char*);
        return (org_ptr(0x1401ecf70L))(this, pszCharName);
    };
    struct CGameObject* CMainThread::GetCharW(char* wpszCharName)
    {
        using org_ptr = struct CGameObject* (WINAPIV*)(struct CMainThread*, char*);
        return (org_ptr(0x1401ed040L))(this, wpszCharName);
    };
    struct CGameObject* CMainThread::GetObjectA(struct _object_id* pObjID)
    {
        using org_ptr = struct CGameObject* (WINAPIV*)(struct CMainThread*, struct _object_id*);
        return (org_ptr(0x1401ec8a0L))(this, pObjID);
    };
    struct CGameObject* CMainThread::GetObjectA(int kind, int id, int index)
    {
        using org_ptr = struct CGameObject* (WINAPIV*)(struct CMainThread*, int, int, int);
        return (org_ptr(0x1401ecbb0L))(this, kind, id, index);
    };
    struct CGameObject* CMainThread::GetObjectExpand(struct _object_id* pObjID, char* szCharName, uint16_t wSearchIndex)
    {
        using org_ptr = struct CGameObject* (WINAPIV*)(struct CMainThread*, struct _object_id*, char*, uint16_t);
        return (org_ptr(0x1401ec900L))(this, pObjID, szCharName, wSearchIndex);
    };
    void CMainThread::GetTommorrowStr(char* szTommorrow)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401f99e0L))(this, szTommorrow);
    };
    void CMainThread::InAtradTaxMoney(struct _DB_QRY_SYN_DATA* p)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f3600L))(this, p);
    };
    void CMainThread::InGuildbattleCost(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f46d0L))(this, pData);
    };
    void CMainThread::InGuildbattleRewardMoney(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f4ad0L))(this, pData);
    };
    bool CMainThread::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401e4630L))(this);
    };
    void CMainThread::Insert_Avator_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f3730L))(this, pData);
    };
    bool CMainThread::IsExcuteService()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x140028f90L))(this);
    };
    bool CMainThread::IsReleaseServiceMode()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x140028f50L))(this);
    };
    bool CMainThread::IsTestServer()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1402cf960L))(this);
    };
    int CMainThread::LoadINI()
    {
        using org_ptr = int (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401e6a30L))(this);
    };
    void CMainThread::LoadItemConsumeINI()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401e7120L))(this);
    };
    bool CMainThread::LoadLimitInfo()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401b8210L))(this);
    };
    bool CMainThread::LoadServerRateINIFile()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401fa1c0L))(this);
    };
    int CMainThread::LoadWorldInfoINI()
    {
        using org_ptr = int (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401e6bf0L))(this);
    };
    int CMainThread::LoadWorldSystemINI()
    {
        using org_ptr = int (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401e6ae0L))(this);
    };
    void CMainThread::Load_Content_Complete(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401b3f80L))(this, pData);
    };
    void CMainThread::Load_PostStorage_Complete(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401b3070L))(this, pData);
    };
    void CMainThread::Load_ReturnPost_Complete(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401b3b00L))(this, pData);
    };
    void CMainThread::Lobby_Account_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f3b20L))(this, pData);
    };
    void CMainThread::Logout_Account_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f3a80L))(this, pData);
    };
    void CMainThread::MakeSystemTower()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401ee040L))(this);
    };
    void CMainThread::ManageClientLimitRunRequest(char* pBuf)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401fb320L))(this, pBuf);
    };
    bool CMainThread::NetworkInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401eb330L))(this);
    };
    bool CMainThread::ObjectInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401eb650L))(this);
    };
    void CMainThread::OnDQSRun()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401ee9d0L))(this);
    };
    void CMainThread::OnRun()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f4db0L))(this);
    };
    void CMainThread::OutDestGuildbattleCost(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f4970L))(this, pData);
    };
    void CMainThread::OutSrcGuildbattleCost(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f47e0L))(this, pData);
    };
    void CMainThread::PingToAccount()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f84d0L))(this);
    };
    struct _DB_QRY_SYN_DATA* CMainThread::PushDQSData(unsigned int dwAccountSerial, struct _CLID* pidWorld, char byQryCase, char* pQryData, int nSize)
    {
        using org_ptr = struct _DB_QRY_SYN_DATA* (WINAPIV*)(struct CMainThread*, unsigned int, struct _CLID*, char, char*, int);
        return (org_ptr(0x1401f4c50L))(this, dwAccountSerial, pidWorld, byQryCase, pQryData, nSize);
    };
    void CMainThread::PushResetServerToken()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401fb580L))(this);
    };
    bool CMainThread::Push_ChargeItem(unsigned int dwSerial, unsigned int dwK, unsigned int dwD, unsigned int dwU, char byType)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, unsigned int, unsigned int, char);
        return (org_ptr(0x1401b83c0L))(this, dwSerial, dwK, dwD, dwU, byType);
    };
    void CMainThread::QryCaseAddpvppoint(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f41f0L))(this, pData);
    };
    void CMainThread::Reged_Avator_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f3670L))(this, pData);
    };
    void CMainThread::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401e44b0L))(this);
    };
    void CMainThread::RuleThread(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x1401ee7e0L))(pv);
    };
    void CMainThread::Select_Avator_Complete(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f3890L))(this, pData);
    };
    void CMainThread::SendWebRaceBossSMS(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f40b0L))(this, pData);
    };
    void CMainThread::SerivceForceSet(bool bService)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, bool);
        (org_ptr(0x1401f84a0L))(this, bService);
    };
    void CMainThread::SerivceSelfStart()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f82a0L))(this);
    };
    void CMainThread::SerivceSelfStop()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f8400L))(this);
    };
    void CMainThread::ServerStateMsgGotoWebAgent()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f8560L))(this);
    };
    bool CMainThread::SetGlobalDataName()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401e7480L))(this);
    };
    void CMainThread::SetServerRate()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401fa920L))(this);
    };
    void CMainThread::UpdateGuildBattleDrawRankInfo(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f4470L))(this, pData);
    };
    void CMainThread::UpdateGuildBattleWinLoseRankInfo(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f4290L))(this, pData);
    };
    void CMainThread::UpdateLoadGuildBattleRank(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f4650L))(this, pData);
    };
    void CMainThread::UpdateReservedGuildBattleSchedule(struct _DB_QRY_SYN_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _DB_QRY_SYN_DATA*);
        (org_ptr(0x1401f4be0L))(this, pData);
    };
    bool CMainThread::ValidMacAddress()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401f9c70L))(this);
    };
    bool CMainThread::_CheckGuildCheckSum(unsigned int dwSerial, char* wszGuildName, long double* dDalant, long double* dGold)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, char*, long double*, long double*);
        return (org_ptr(0x1401edca0L))(this, dwSerial, wszGuildName, dDalant, dGold);
    };
    bool CMainThread::_CheckTotalSales()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401ed1f0L))(this);
    };
    bool CMainThread::_GameDataBaseInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401ed4e0L))(this);
    };
    char CMainThread::_db_Check_NpcData(unsigned int dwSerial, struct _AVATOR_DATA* pAvatorData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*);
        return (org_ptr(0x1401a9b20L))(this, dwSerial, pAvatorData);
    };
    char CMainThread::_db_GuildRoom_Insert(struct _qry_case_guildroom_insert* pSheet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, struct _qry_case_guildroom_insert*);
        return (org_ptr(0x1401b2cc0L))(this, pSheet);
    };
    bool CMainThread::_db_GuildRoom_Update(struct _qry_case_guildroom_update* pSheet)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, struct _qry_case_guildroom_update*);
        return (org_ptr(0x1401b2d30L))(this, pSheet);
    };
    char CMainThread::_db_Load_Base(unsigned int dwSerial, struct _AVATOR_DATA* pCon)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*);
        return (org_ptr(0x1401a6620L))(this, dwSerial, pCon);
    };
    void CMainThread::_db_Load_BattleTournamentInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401b7210L))(this);
    };
    char CMainThread::_db_Load_Buddy(unsigned int dwSerial, struct _BUDDY_DB_BASE* pBuddy)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _BUDDY_DB_BASE*);
        return (org_ptr(0x1401a8650L))(this, dwSerial, pBuddy);
    };
    char CMainThread::_db_Load_Cash_LimSale(struct qry_case_cash_limsale* pDbLimitedSale)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, struct qry_case_cash_limsale*);
        return (org_ptr(0x1401b7740L))(this, pDbLimitedSale);
    };
    char CMainThread::_db_Load_CryMsg(unsigned int dwSerial, struct _CRYMSG_DB_BASE* pBossCry)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _CRYMSG_DB_BASE*);
        return (org_ptr(0x1401a97e0L))(this, dwSerial, pBossCry);
    };
    char CMainThread::_db_Load_General(unsigned int dwSerial, char byRaceCode, struct _AVATOR_DATA* pCon)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, char, struct _AVATOR_DATA*);
        return (org_ptr(0x1401a6870L))(this, dwSerial, byRaceCode, pCon);
    };
    char CMainThread::_db_Load_GoldBoxItem(struct qry_case_select_golden_box_item* pDbGoldenboxitem, int* pnDBSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, struct qry_case_select_golden_box_item*, int*);
        return (org_ptr(0x1401b8500L))(this, pDbGoldenboxitem, pnDBSerial);
    };
    char CMainThread::_db_Load_Inven(unsigned int dwSerial, int nBagNum, struct _INVEN_DB_BASE* pCon)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, int, struct _INVEN_DB_BASE*);
        return (org_ptr(0x1401a75b0L))(this, dwSerial, nBagNum, pCon);
    };
    char CMainThread::_db_Load_ItemCombineEx(unsigned int dwSerial, struct _ITEMCOMBINE_DB_BASE* pCombineEx)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _ITEMCOMBINE_DB_BASE*);
        return (org_ptr(0x1401a90b0L))(this, dwSerial, pCombineEx);
    };
    char CMainThread::_db_Load_MacroData(unsigned int dwSerial, struct _AIOC_A_MACRODATA* pMacro)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _AIOC_A_MACRODATA*);
        return (org_ptr(0x1401a9350L))(this, dwSerial, pMacro);
    };
    char CMainThread::_db_Load_NpcQuest_History(unsigned int dwSerial, struct _QUEST_DB_BASE* pCon)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _QUEST_DB_BASE*);
        return (org_ptr(0x1401a80d0L))(this, dwSerial, pCon);
    };
    char CMainThread::_db_Load_OreCutting(unsigned int dwSerial, struct _CUTTING_DB_BASE* pDbCutting)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _CUTTING_DB_BASE*);
        return (org_ptr(0x1401b6da0L))(this, dwSerial, pDbCutting);
    };
    int CMainThread::_db_Load_PatriarchComm(char* pData)
    {
        using org_ptr = int (WINAPIV*)(struct CMainThread*, char*);
        return (org_ptr(0x1401a7250L))(this, pData);
    };
    char CMainThread::_db_Load_PcBangFavor(unsigned int dwSerial, struct _PCBANG_FAVOR_ITEM_DB_BASE* pDbPcBangFavor)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _PCBANG_FAVOR_ITEM_DB_BASE*);
        return (org_ptr(0x1401b73f0L))(this, dwSerial, pDbPcBangFavor);
    };
    char CMainThread::_db_Load_PotionDelay(unsigned int dwSerial, struct _POTION_NEXT_USE_TIME_DB_BASE* pDbPotionDelay)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _POTION_NEXT_USE_TIME_DB_BASE*);
        return (org_ptr(0x1401b6990L))(this, dwSerial, pDbPotionDelay);
    };
    char CMainThread::_db_Load_PrimiumPlayTime(unsigned int dwAccSerial, struct _PCBANG_PLAY_TIME* kData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _PCBANG_PLAY_TIME*);
        return (org_ptr(0x1401b65e0L))(this, dwAccSerial, kData);
    };
    char CMainThread::_db_Load_PvpOrderView(unsigned int dwSerial, struct _PVP_ORDER_VIEW_DB_BASE* kData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _PVP_ORDER_VIEW_DB_BASE*);
        return (org_ptr(0x1401b4cb0L))(this, dwSerial, kData);
    };
    char CMainThread::_db_Load_PvpPointLimitData(unsigned int dwSerial, struct _PVPPOINT_LIMIT_DB_BASE* kData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _PVPPOINT_LIMIT_DB_BASE*);
        return (org_ptr(0x1401a96b0L))(this, dwSerial, kData);
    };
    char CMainThread::_db_Load_Quest(unsigned int dwSerial, struct _QUEST_DB_BASE* pCon)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _QUEST_DB_BASE*);
        return (org_ptr(0x1401a7e70L))(this, dwSerial, pCon);
    };
    char CMainThread::_db_Load_SFDelayData(unsigned int dwSerial, struct _worlddb_sf_delay_info* pDbSFDelayInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _worlddb_sf_delay_info*);
        return (org_ptr(0x1401b54a0L))(this, dwSerial, pDbSFDelayInfo);
    };
    char CMainThread::_db_Load_Start_NpcQuest_History(unsigned int dwSerial, char byRaceCode, struct _QUEST_DB_BASE* pCon)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, char, struct _QUEST_DB_BASE*);
        return (org_ptr(0x1401a82c0L))(this, dwSerial, byRaceCode, pCon);
    };
    char CMainThread::_db_Load_Supplement(unsigned int dwSerial, struct _SUPPLEMENT_DB_BASE* pDbSupplement)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _SUPPLEMENT_DB_BASE*);
        return (org_ptr(0x1401b55b0L))(this, dwSerial, pDbSupplement);
    };
    char CMainThread::_db_Load_TimeLimitInfo(unsigned int dwAccSerial, struct _TIMELIMITINFO_DB_BASE* pDbTimeLimitInfo)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _TIMELIMITINFO_DB_BASE*);
        return (org_ptr(0x1401b7c60L))(this, dwAccSerial, pDbTimeLimitInfo);
    };
    char CMainThread::_db_Load_Trade(char byRace, unsigned int dwSerial, struct _TRADE_DB_BASE* pTrade)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, char, unsigned int, struct _TRADE_DB_BASE*);
        return (org_ptr(0x1401a8da0L))(this, byRace, dwSerial, pTrade);
    };
    char CMainThread::_db_Load_Trunk(unsigned int dwSerial, unsigned int dwAccountSerial, char byRace, struct _TRUNK_DB_BASE* pTrunk)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, char, struct _TRUNK_DB_BASE*);
        return (org_ptr(0x1401a8830L))(this, dwSerial, dwAccountSerial, byRace, pTrunk);
    };
    char CMainThread::_db_Load_UI(unsigned int dwSerial, struct _LINK_DB_BASE* pLink, struct _SFCONT_DB_BASE* pSfcont)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _LINK_DB_BASE*, struct _SFCONT_DB_BASE*);
        return (org_ptr(0x1401a7ba0L))(this, dwSerial, pLink, pSfcont);
    };
    char CMainThread::_db_Load_Unit(unsigned int dwSerial, struct _UNIT_DB_BASE* pCon)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _UNIT_DB_BASE*);
        return (org_ptr(0x1401a77c0L))(this, dwSerial, pCon);
    };
    char CMainThread::_db_Select_RegeAvator_For_Lobby_Logout(char* pSheet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, char*);
        return (org_ptr(0x1401b8d70L))(this, pSheet);
    };
    bool CMainThread::_db_Update_Base(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pSzQuery, bool bCheckLowHigh)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, bool);
        return (org_ptr(0x1401a9d90L))(this, dwSerial, pNewData, pOldData, pSzQuery, bCheckLowHigh);
    };
    bool CMainThread::_db_Update_Buddy(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pwszQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401ae1f0L))(this, dwSerial, pNewData, pOldData, pwszQuery);
    };
    char CMainThread::_db_Update_Cash_LimSale(struct _db_cash_limited_sale* pNewData, struct _db_cash_limited_sale* pOldData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, struct _db_cash_limited_sale*, struct _db_cash_limited_sale*);
        return (org_ptr(0x1401b7920L))(this, pNewData, pOldData);
    };
    bool CMainThread::_db_Update_CryMsg(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pwszQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401b0910L))(this, dwSerial, pNewData, pOldData, pwszQuery);
    };
    char CMainThread::_db_Update_Data_For_Post_Send(char* pSheet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, char*);
        return (org_ptr(0x1401b8fd0L))(this, pSheet);
    };
    char CMainThread::_db_Update_Data_For_Trade(char* pSheet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, char*);
        return (org_ptr(0x1401b91d0L))(this, pSheet);
    };
    bool CMainThread::_db_Update_General(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pSzQuery, bool bCheckLowHigh)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, bool);
        return (org_ptr(0x1401aa500L))(this, dwSerial, pNewData, pOldData, pSzQuery, bCheckLowHigh);
    };
    char CMainThread::_db_Update_GoldBoxItem(int nDBSerial, struct _db_golden_box_item* pNewData, struct _db_golden_box_item* pOldData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, int, struct _db_golden_box_item*, struct _db_golden_box_item*);
        return (org_ptr(0x1401b87d0L))(this, nDBSerial, pNewData, pOldData);
    };
    bool CMainThread::_db_Update_Inven(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pSzQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401abfc0L))(this, dwSerial, pNewData, pOldData, pSzQuery);
    };
    bool CMainThread::_db_Update_ItemCombineEx(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pSzQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401b02a0L))(this, dwSerial, pNewData, pOldData, pSzQuery);
    };
    bool CMainThread::_db_Update_MacroData(unsigned int dwSerial, struct _AIOC_A_MACRODATA* pMacro, struct _AIOC_A_MACRODATA* pOldMacro)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AIOC_A_MACRODATA*, struct _AIOC_A_MACRODATA*);
        return (org_ptr(0x1401b0660L))(this, dwSerial, pMacro, pOldMacro);
    };
    bool CMainThread::_db_Update_NpcData(unsigned int dwSerial, struct _AVATOR_DATA* pAvatorData, char* pSzNpcQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401ae3f0L))(this, dwSerial, pAvatorData, pSzNpcQuery);
    };
    bool CMainThread::_db_Update_NpcQuest_History(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pSzQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401adca0L))(this, dwSerial, pNewData, pOldData, pSzQuery);
    };
    bool CMainThread::_db_Update_OreCutting(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* szOreCuttingQuery, int nSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, int);
        return (org_ptr(0x1401b6f60L))(this, dwSerial, pNewData, pOldData, szOreCuttingQuery, nSize);
    };
    bool CMainThread::_db_Update_PcBangFavor(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* szPcBangFavorQuery, int nSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, int);
        return (org_ptr(0x1401b7530L))(this, dwSerial, pNewData, pOldData, szPcBangFavorQuery, nSize);
    };
    bool CMainThread::_db_Update_PotionDelay(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* szPotionDelayQuery, int nSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, int);
        return (org_ptr(0x1401b6af0L))(this, dwSerial, pNewData, pOldData, szPotionDelayQuery, nSize);
    };
    bool CMainThread::_db_Update_PrimiumPlayTime(unsigned int dwAccSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* szQuery, char* szError)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, char*);
        return (org_ptr(0x1401b66a0L))(this, dwAccSerial, pNewData, pOldData, szQuery, szError);
    };
    bool CMainThread::_db_Update_PvpOrderView(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* szQuery, char* szError)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, char*);
        return (org_ptr(0x1401b4ea0L))(this, dwSerial, pNewData, pOldData, szQuery, szError);
    };
    bool CMainThread::_db_Update_PvpPointLimit(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* szQuery, char* szError)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, char*);
        return (org_ptr(0x1401afe60L))(this, dwSerial, pNewData, pOldData, szQuery, szError);
    };
    bool CMainThread::_db_Update_Quest(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pSzQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401ad800L))(this, dwSerial, pNewData, pOldData, pSzQuery);
    };
    bool CMainThread::_db_Update_SFDelayData(unsigned int dwSerial, struct _AVATOR_DATA* pNewData)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*);
        return (org_ptr(0x1401b5540L))(this, dwSerial, pNewData);
    };
    char CMainThread::_db_Update_Set_Limit_Run()
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401b7fc0L))(this);
    };
    bool CMainThread::_db_Update_Start_NpcQuest_History(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*);
        return (org_ptr(0x1401adf60L))(this, dwSerial, pNewData, pOldData);
    };
    bool CMainThread::_db_Update_Supplement(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* szSupplementQuery, int nSize)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, int);
        return (org_ptr(0x1401b5900L))(this, dwSerial, pNewData, pOldData, szSupplementQuery, nSize);
    };
    char CMainThread::_db_Update_TimeLimitInfo(unsigned int dwAccSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* szTimeLimitInfoQuery, int nSize)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*, int);
        return (org_ptr(0x1401b7d60L))(this, dwAccSerial, pNewData, pOldData, szTimeLimitInfoQuery, nSize);
    };
    bool CMainThread::_db_Update_Trunk(unsigned int dwAccountSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pwszQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401ae630L))(this, dwAccountSerial, pNewData, pOldData, pwszQuery);
    };
    bool CMainThread::_db_Update_Trunk_Extend(unsigned int dwAccountSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pwszQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401af150L))(this, dwAccountSerial, pNewData, pOldData, pwszQuery);
    };
    bool CMainThread::_db_Update_UI(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pSzQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401ad0d0L))(this, dwSerial, pNewData, pOldData, pSzQuery);
    };
    bool CMainThread::_db_Update_Unit(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pSzQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401ac7c0L))(this, dwSerial, pNewData, pOldData, pSzQuery);
    };
    void CMainThread::_db_complete_event_classrefine(uint16_t wSock, unsigned int dwAvatorSerial, char byRefinedCnt, unsigned int dwRefineDate)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, uint16_t, unsigned int, char, unsigned int);
        (org_ptr(0x1401bfc10L))(this, wSock, dwAvatorSerial, byRefinedCnt, dwRefineDate);
    };
    void CMainThread::_db_complete_update_event_classrefine(uint16_t wSock, unsigned int dwAvatorSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, uint16_t, unsigned int);
        (org_ptr(0x1401bfd30L))(this, wSock, dwAvatorSerial);
    };
    int CMainThread::_db_init_classrefine_count()
    {
        using org_ptr = int (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401bfdb0L))(this);
    };
    char CMainThread::_db_load_event_classrefine(unsigned int dwAvatorSerial, char* byRefinedCnt, unsigned int* dwRefineDate)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, char*, unsigned int*);
        return (org_ptr(0x1401bfb50L))(this, dwAvatorSerial, byRefinedCnt, dwRefineDate);
    };
    char CMainThread::_db_load_losebattlecount(unsigned int dwSerial, struct _AVATOR_DATA* pCon)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*);
        return (org_ptr(0x1401a99f0L))(this, dwSerial, pCon);
    };
    char CMainThread::_db_load_punishment(unsigned int dwSerial, struct _AVATOR_DATA* pCon)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*);
        return (org_ptr(0x1401a9970L))(this, dwSerial, pCon);
    };
    char CMainThread::_db_load_raceboss(unsigned int dwSerial, struct _AVATOR_DATA* pCon)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*);
        return (org_ptr(0x1401a7160L))(this, dwSerial, pCon);
    };
    char CMainThread::_db_update_event_classrefine(uint16_t wSock, unsigned int dwAvatorSerial, char byRefinedCnt, unsigned int dwRefineDate)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, uint16_t, unsigned int, char, unsigned int);
        return (org_ptr(0x1401bfcc0L))(this, wSock, dwAvatorSerial, byRefinedCnt, dwRefineDate);
    };
    bool CMainThread::_db_update_inven_AMP(unsigned int dwAvatorSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, char* pszQuery)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, char*);
        return (org_ptr(0x1401afa70L))(this, dwAvatorSerial, pNewData, pOldData, pszQuery);
    };
    bool CMainThread::check_dbsyn_data_size()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401f9460L))(this);
    };
    bool CMainThread::check_item_code_index()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401fabb0L))(this);
    };
    bool CMainThread::check_loaded_data()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401f87a0L))(this);
    };
    char CMainThread::check_min_max_guild_money(unsigned int dwGuildSerial, long double* pdDalant, long double* pdGold)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, long double*, long double*);
        return (org_ptr(0x1401b1340L))(this, dwGuildSerial, pdDalant, pdGold);
    };
    char CMainThread::db_Add_PvpPoint(unsigned int dwSerial, unsigned int dwPoint, unsigned int dwCashBag)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1401b0b90L))(this, dwSerial, dwPoint, dwCashBag);
    };
    char CMainThread::db_Delete_Avator(unsigned int dwSerial, char byRaceCode)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, char);
        return (org_ptr(0x1401a3470L))(this, dwSerial, byRaceCode);
    };
    char CMainThread::db_GM_GreetingMsg(struct _qry_case_gm_greetingmsg* pSheet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, struct _qry_case_gm_greetingmsg*);
        return (org_ptr(0x1401b2270L))(this, pSheet);
    };
    char CMainThread::db_GUILD_GreetingMsg(struct _qry_case_guild_greetingmsg* pSheet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, struct _qry_case_guild_greetingmsg*);
        return (org_ptr(0x1401b2330L))(this, pSheet);
    };
    char CMainThread::db_Insert_Avator(unsigned int dwAccountSerial, char* pszAccount, struct _REGED_AVATOR_DB* pCharDB, unsigned int* pdwAvatorSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, char*, struct _REGED_AVATOR_DB*, unsigned int*);
        return (org_ptr(0x1401a3280L))(this, dwAccountSerial, pszAccount, pCharDB, pdwAvatorSerial);
    };
    char CMainThread::db_Insert_ChangeClass_AfterInitClass(unsigned int dwCharacSerial, char byType, char* szPrevClassCode, char* szNextClassCode, int nClassInitCnt, char byLastClassGrade, uint16_t dwYear, char byMonth, char byDay, char byHour, char byMin, char bySec)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, char, char*, char*, int, char, uint16_t, char, char, char, char, char);
        return (org_ptr(0x1401b2a20L))(this, dwCharacSerial, byType, szPrevClassCode, szNextClassCode, nClassInitCnt, byLastClassGrade, dwYear, byMonth, byDay, byHour, byMin, bySec);
    };
    char CMainThread::db_Insert_CharacSelect_Log(unsigned int dwAccountSerial, char* szAccount, unsigned int dwCharacSerial, char* pwszCharacName, uint16_t dwYear, char byMonth, char byDay, char byHour, char byMin, char bySec)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, char*, unsigned int, char*, uint16_t, char, char, char, char, char);
        return (org_ptr(0x1401b2860L))(this, dwAccountSerial, szAccount, dwCharacSerial, pwszCharacName, dwYear, byMonth, byDay, byHour, byMin, bySec);
    };
    char CMainThread::db_Insert_Economy_History(unsigned int dwDate, struct _worlddb_economy_history_info_array::_worlddb_economy_history_info* pEconomyData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _worlddb_economy_history_info_array::_worlddb_economy_history_info*);
        return (org_ptr(0x1401a64e0L))(this, dwDate, pEconomyData);
    };
    char CMainThread::db_Insert_Item(unsigned int dwSerial, unsigned int dwItemCodeK, unsigned int dwItemCodeD, unsigned int dwItemCodeU, char byType)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, unsigned int, unsigned int, char);
        return (org_ptr(0x1401b0c00L))(this, dwSerial, dwItemCodeK, dwItemCodeD, dwItemCodeU, byType);
    };
    char CMainThread::db_Insert_guild(unsigned int* dwSerial, char* pwszGuildName, char byRace, unsigned int* dwGuildSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int*, char*, char, unsigned int*);
        return (org_ptr(0x1401b0c80L))(this, dwSerial, pwszGuildName, byRace, dwGuildSerial);
    };
    bool CMainThread::db_LoadGreetingMsg()
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*);
        return (org_ptr(0x1401b4ae0L))(this);
    };
    char CMainThread::db_Load_Avator(unsigned int dwSerial, unsigned int dwAccountSerial, struct _AVATOR_DATA* pData, bool* pbAddItem, unsigned int* pdwAddDalant, unsigned int* pdwAddGold, bool* pbTrunkAddItem, char* pbyTrunkOldSlot, long double* pdTrunkOldDalant, long double* pdTrunkOldGold, bool* pbCreateTrunkFree, bool* pbExtTrunkAddItem, char* pbyExtTrunkOldSlot, bool bAll, unsigned int* pdwCheckSum)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, struct _AVATOR_DATA*, bool*, unsigned int*, unsigned int*, bool*, char*, long double*, long double*, bool*, bool*, char*, bool, unsigned int*);
        return (org_ptr(0x1401a34d0L))(this, dwSerial, dwAccountSerial, pData, pbAddItem, pdwAddDalant, pdwAddGold, pbTrunkAddItem, pbyTrunkOldSlot, pdTrunkOldDalant, pdTrunkOldGold, pbCreateTrunkFree, pbExtTrunkAddItem, pbyExtTrunkOldSlot, bAll, pdwCheckSum);
    };
    char CMainThread::db_Load_Content(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, char*);
        return (org_ptr(0x1401b3f00L))(this, pData);
    };
    char CMainThread::db_Load_PostStorage(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, char*);
        return (org_ptr(0x1401b2d80L))(this, pData);
    };
    char CMainThread::db_Load_ReturnPost(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, char*);
        return (org_ptr(0x1401b37b0L))(this, pData);
    };
    char CMainThread::db_Log_AvatorLevel(unsigned int dwTotalPlayMin, unsigned int dwSerial, char byLv)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, char);
        return (org_ptr(0x1401a6540L))(this, dwTotalPlayMin, dwSerial, byLv);
    };
    char CMainThread::db_Log_UserNum(int nAveragePerHour, int nMaxPerHour)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, int, int);
        return (org_ptr(0x1401a65b0L))(this, nAveragePerHour, nMaxPerHour);
    };
    char CMainThread::db_RACE_GreetingMsg(struct _qry_case_race_greetingmsg* pSheet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, struct _qry_case_race_greetingmsg*);
        return (org_ptr(0x1401b22d0L))(this, pSheet);
    };
    char CMainThread::db_Reged_Avator(unsigned int dwAccountSerial, struct _REGED* pRegedList, struct _NOT_ARRANGED_AVATOR_DB* pArrangedList, char* pszIP)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _REGED*, struct _NOT_ARRANGED_AVATOR_DB*, char*);
        return (org_ptr(0x1401a2c70L))(this, dwAccountSerial, pRegedList, pArrangedList, pszIP);
    };
    char CMainThread::db_Select_Economy_History(struct _economy_history_data* pCurData, int* pnCurMgrValue, int* pnNextMgrValue, struct _economy_history_data* pHisData, int* pHistoryNum, unsigned int dwDate)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, struct _economy_history_data*, int*, int*, struct _economy_history_data*, int*, unsigned int);
        return (org_ptr(0x1401a27d0L))(this, pCurData, pnCurMgrValue, pnNextMgrValue, pHisData, pHistoryNum, dwDate);
    };
    char CMainThread::db_Update_Avator(unsigned int dwSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData, bool bCheckLowHigh)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*, bool);
        return (org_ptr(0x1401a5360L))(this, dwSerial, pNewData, pOldData, bCheckLowHigh);
    };
    char CMainThread::db_Update_PostStorage(unsigned int dwAvatorSerial, struct _AVATOR_DATA* pNewData, struct _AVATOR_DATA* pOldData)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, struct _AVATOR_DATA*, struct _AVATOR_DATA*);
        return (org_ptr(0x1401b4110L))(this, dwAvatorSerial, pNewData, pOldData);
    };
    char CMainThread::db_Update_PvpInfo(unsigned int dwSerial, char byLevel, int16_t* pzClassHistory, long double dPvpPoint)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, char, int16_t*, long double);
        return (org_ptr(0x1401b0b20L))(this, dwSerial, byLevel, pzClassHistory, dPvpPoint);
    };
    char CMainThread::db_buy_emblem(unsigned int dwGuildSerial, int nEmblemDalant, unsigned int dwEmblemBack, unsigned int dwEmblemMark, unsigned int dwSuggestorSerial, long double* dTotalDalant, long double* dTotalGold, char* byDate, char* pwszName, char* pbyProcRet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, int, unsigned int, unsigned int, unsigned int, long double*, long double*, char*, char*, char*);
        return (org_ptr(0x1401b1e60L))(this, dwGuildSerial, nEmblemDalant, dwEmblemBack, dwEmblemMark, dwSuggestorSerial, dTotalDalant, dTotalGold, byDate, pwszName, pbyProcRet);
    };
    char CMainThread::db_char_set_alive(unsigned int dwAccountSerial, char byCase, unsigned int dwSerial, char* pwszName, char bySlot, struct _REGED* pAliveAvator)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, char, unsigned int, char*, char, struct _REGED*);
        return (org_ptr(0x1401b23f0L))(this, dwAccountSerial, byCase, dwSerial, pwszName, bySlot, pAliveAvator);
    };
    char CMainThread::db_disjoint_guild(unsigned int dwGuildSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int);
        return (org_ptr(0x1401b2390L))(this, dwGuildSerial);
    };
    char CMainThread::db_input_guild_money(unsigned int dwPusherSerial, unsigned int dwGuildSerial, unsigned int dwAddDalant, unsigned int dwAddGold, long double* dTotalDalant, long double* dTotalGold, char* byDate, char* pwszName)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, unsigned int, unsigned int, long double*, long double*, char*, char*);
        return (org_ptr(0x1401b0ff0L))(this, dwPusherSerial, dwGuildSerial, dwAddDalant, dwAddGold, dTotalDalant, dTotalGold, byDate, pwszName);
    };
    char CMainThread::db_input_guild_money_atradetax(unsigned int dwPusherSerial, unsigned int dwGuildSerial, unsigned int dwAddDalant, long double* dTotalDalant, long double* dTotalGold, char* byDate)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, unsigned int, long double*, long double*, char*);
        return (org_ptr(0x1401b1b80L))(this, dwPusherSerial, dwGuildSerial, dwAddDalant, dTotalDalant, dTotalGold, byDate);
    };
    char CMainThread::db_output_guild_money(unsigned int dwPusherSerial, unsigned int dwGuildSerial, unsigned int dwSubDalant, unsigned int dwSubGold, long double* dTotalDalant, long double* dTotalGold, char* byDate, char* pwszName, char* pbyProcRet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, unsigned int, unsigned int, long double*, long double*, char*, char*, char*);
        return (org_ptr(0x1401b16e0L))(this, dwPusherSerial, dwGuildSerial, dwSubDalant, dwSubGold, dTotalDalant, dTotalGold, byDate, pwszName, pbyProcRet);
    };
    char CMainThread::db_sendwebracebosssms(struct _qry_case_sendwebracebosssms* pSheet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, struct _qry_case_sendwebracebosssms*);
        return (org_ptr(0x1401b2b10L))(this, pSheet);
    };
    char CMainThread::db_update_guildmaster(struct _qry_case_update_guildmaster* pSheet)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, struct _qry_case_update_guildmaster*);
        return (org_ptr(0x1401b2bb0L))(this, pSheet);
    };
    char CMainThread::db_update_guildmember_add(unsigned int dwAvatorSerial, unsigned int dwGuildSerial, char byGrade, int nMemberNum)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, char, int);
        return (org_ptr(0x1401b0e90L))(this, dwAvatorSerial, dwGuildSerial, byGrade, nMemberNum);
    };
    char CMainThread::db_update_guildmember_del(unsigned int dwAvatorSerial, unsigned int dwGuildSerial, int nMemberNum)
    {
        using org_ptr = char (WINAPIV*)(struct CMainThread*, unsigned int, unsigned int, int);
        return (org_ptr(0x1401b0f50L))(this, dwAvatorSerial, dwGuildSerial, nMemberNum);
    };
    void CMainThread::gm_DisplayAll()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f7b70L))(this);
    };
    void CMainThread::gm_DisplaymodeChange()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f7890L))(this);
    };
    void CMainThread::gm_DungeonLoad()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f8010L))(this);
    };
    void CMainThread::gm_MainThreadControl()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f75f0L))(this);
    };
    void CMainThread::gm_MapChange(struct CMapData* pMap)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct CMapData*);
        (org_ptr(0x1401f79d0L))(this, pMap);
    };
    bool CMainThread::gm_MonsterInit(struct CCharacter* pExt)
    {
        using org_ptr = bool (WINAPIV*)(struct CMainThread*, struct CCharacter*);
        return (org_ptr(0x1401f7a40L))(this, pExt);
    };
    void CMainThread::gm_ObjectSelect()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f7d10L))(this);
    };
    void CMainThread::gm_PreCloseAnn()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f7be0L))(this);
    };
    void CMainThread::gm_ServerClose()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f7eb0L))(this);
    };
    void CMainThread::gm_UpdateMap()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f7e60L))(this);
    };
    void CMainThread::gm_UpdateObject()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f7e10L))(this);
    };
    void CMainThread::gm_UpdateServer()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f7dc0L))(this);
    };
    void CMainThread::gm_UserExit()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f7f30L))(this);
    };
    void CMainThread::pc_AllUserGMNoticeInform(char* pwszMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401f6040L))(this, pwszMsg);
    };
    void CMainThread::pc_AllUserKickInform()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401f5db0L))(this);
    };
    void CMainThread::pc_AllUserMsgInform(char* pwszMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401f5e30L))(this, pwszMsg);
    };
    void CMainThread::pc_AlterWorldService(bool bSerivce)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, bool);
        (org_ptr(0x1401f61b0L))(this, bSerivce);
    };
    void CMainThread::pc_CashDBInfoRecvResult(char* szIP, char* szDBName, char* szAccount, char* szPassword, unsigned int dwPort)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*, char*, char*, char*, unsigned int);
        (org_ptr(0x1401f5200L))(this, szIP, szDBName, szAccount, szPassword, dwPort);
    };
    void CMainThread::pc_ChatLockCommand(struct _CLID* pidLocal, uint16_t wBlockTimeH)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _CLID*, uint16_t);
        (org_ptr(0x1401f6200L))(this, pidLocal, wBlockTimeH);
    };
    void CMainThread::pc_EnterWorldResult(char byRetCode, struct _CLID* pidWorld)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char, struct _CLID*);
        (org_ptr(0x1401f5b30L))(this, byRetCode, pidWorld);
    };
    void CMainThread::pc_ForceCloseCommand(struct _CLID* pidWorld, bool bDirectly, char byKickType, unsigned int dwPushIP)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, struct _CLID*, bool, char, unsigned int);
        (org_ptr(0x1401f5be0L))(this, pidWorld, bDirectly, byKickType, dwPushIP);
    };
    void CMainThread::pc_OpenWorldFailureResult(char* szMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401f56f0L))(this, szMsg);
    };
    void CMainThread::pc_OpenWorldSuccessResult(char byWorldCode, char* pszDBName, char* pszDBIP)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char, char*, char*);
        (org_ptr(0x1401f5580L))(this, byWorldCode, pszDBName, pszDBIP);
    };
    void CMainThread::pc_SetMainGreetingMsg(char* pwszGMName, char* pwszMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*, char*);
        (org_ptr(0x1401fb080L))(this, pwszGMName, pwszMsg);
    };
    void CMainThread::pc_SetRaceGreetingMsg(int racenum, char* pwszBossName, char* pwszMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, int, char*, char*);
        (org_ptr(0x1401fb1c0L))(this, racenum, pwszBossName, pwszMsg);
    };
    void CMainThread::pc_TaiwanBillingUserCertify(char* szAccount, char byCertify)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*, char);
        (org_ptr(0x1401f6290L))(this, szAccount, byCertify);
    };
    void CMainThread::pc_TransIPKeyInform(unsigned int dwAccountSerial, char* pszAccountID, char byUserDgr, char bySubDgr, unsigned int* pdwKey, struct _GLBID* pgidGlobal, unsigned int dwClientIP, bool bChatLock, int16_t iType, char* szCMS, struct _SYSTEMTIME* pstEndDate, int lRemainTime, char byUILock, char* szUILockPW, char byUILockFailCnt, char* szAccountPW, char byUILock_HintIndex, char* uszUILock_HintAnswer, char byUILockFindPassFailCount, bool bIsPcBang, int nTrans, bool bAgeLimit, unsigned int* pdwRequestMoveCharacterSerialList, unsigned int* pdwTournamentCharacterSerialList)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, unsigned int, char*, char, char, unsigned int*, struct _GLBID*, unsigned int, bool, int16_t, char*, struct _SYSTEMTIME*, int, char, char*, char, char*, char, char*, char, bool, int, bool, unsigned int*, unsigned int*);
        (org_ptr(0x1401f5750L))(this, dwAccountSerial, pszAccountID, byUserDgr, bySubDgr, pdwKey, pgidGlobal, dwClientIP, bChatLock, iType, szCMS, pstEndDate, lRemainTime, byUILock, szUILockPW, byUILockFailCnt, szAccountPW, byUILock_HintIndex, uszUILock_HintAnswer, byUILockFindPassFailCount, bIsPcBang, nTrans, bAgeLimit, pdwRequestMoveCharacterSerialList, pdwTournamentCharacterSerialList);
    };
    void CMainThread::pc_UILockInitResult(char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401f5c90L))(this, pMsg);
    };
    void CMainThread::pc_UILockUpdateResult(char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char*);
        (org_ptr(0x1401f5d20L))(this, pMsg);
    };
    void CMainThread::pc_UserChatBlockResult(char byBlockResult, struct _CLID* pcidTarget, struct _CLID* pcidGM, int bLogin)
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*, char, struct _CLID*, struct _CLID*, int);
        (org_ptr(0x1401fae90L))(this, byBlockResult, pcidTarget, pcidGM, bLogin);
    };
    CMainThread::~CMainThread()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401e2bd0L))(this);
    };
    void CMainThread::dtor_CMainThread()
    {
        using org_ptr = void (WINAPIV*)(struct CMainThread*);
        (org_ptr(0x1401e2bd0L))(this);
    };
END_ATF_NAMESPACE
