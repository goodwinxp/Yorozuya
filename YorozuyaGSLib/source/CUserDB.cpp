#include <CUserDB.hpp>


START_ATF_NAMESPACE
    void CUserDB::Alive_Char_Complete(char byRetCode, char byCase, unsigned int dwSerial, struct _REGED* pAliveAvator)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, char, unsigned int, struct _REGED*);
        (org_ptr(0x14011afc0L))(this, byRetCode, byCase, dwSerial, pAliveAvator);
    };
    bool CUserDB::Alive_Char_Request(char byCase, unsigned int dwSerial, char* pwszName, char bySlotIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, unsigned int, char*, char);
        return (org_ptr(0x14011abf0L))(this, byCase, dwSerial, pwszName, bySlotIndex);
    };
    CUserDB::CUserDB()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x14010fb90L))(this);
    };
    void CUserDB::ctor_CUserDB()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x14010fb90L))(this);
    };
    void CUserDB::CalcRadarDelay()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x14011b730L))(this);
    };
    bool CUserDB::CheckDQSLoadCharacterData(struct _AVATOR_DATA* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct _AVATOR_DATA*);
        return (org_ptr(0x140118860L))(pData);
    };
    void CUserDB::ClearBillingData()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x140118090L))(this);
    };
    void CUserDB::Cont_UserSave_Complete(char byResult, struct _AVATOR_DATA* pAvatorData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, struct _AVATOR_DATA*);
        (org_ptr(0x1401141c0L))(this, byResult, pAvatorData);
    };
    bool CUserDB::DataValidCheckRevise(struct _AVATOR_DATA* pData, bool* pDataUpdated)
    {
        using org_ptr = bool (WINAPIV*)(struct _AVATOR_DATA*, bool*);
        return (org_ptr(0x140118940L))(pData, pDataUpdated);
    };
    void CUserDB::DelPostData(unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, unsigned int);
        (org_ptr(0x140117be0L))(this, dwIndex);
    };
    void CUserDB::Delete_Char_Complete(char byRetCode, char bySlotIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, char);
        (org_ptr(0x1401124d0L))(this, byRetCode, bySlotIndex);
    };
    bool CUserDB::Delete_Char_Request(char bySlotIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x140112230L))(this, bySlotIndex);
    };
    void CUserDB::DummyCreate(unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, unsigned int);
        (org_ptr(0x140110550L))(this, dwSerial);
    };
    bool CUserDB::Enter_Account(unsigned int dwAccountSerial, unsigned int dwIP, unsigned int dwProtocolVer, unsigned int* pdwMasterKey)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, unsigned int, unsigned int, unsigned int, unsigned int*);
        return (org_ptr(0x1401105b0L))(this, dwAccountSerial, dwIP, dwProtocolVer, pdwMasterKey);
    };
    void CUserDB::Exit_Account_Complete(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char);
        (org_ptr(0x1401113e0L))(this, byRetCode);
    };
    void CUserDB::Exit_Account_Request()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x140111020L))(this);
    };
    bool CUserDB::FirstSettingData()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x14011a600L))(this);
    };
    void CUserDB::ForceCloseCommand(char byKickType, unsigned int dwPushIP, bool bSlow, char* pszCause)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, unsigned int, bool, char*);
        (org_ptr(0x140110350L))(this, byKickType, dwPushIP, bSlow, pszCause);
    };
    unsigned int CUserDB::GetActPoint(char byCode)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x14007b850L))(this, byCode);
    };
    int CUserDB::GetBillingType()
    {
        using org_ptr = int (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x14007da20L))(this);
    };
    unsigned int* CUserDB::GetPtrActPoint()
    {
        using org_ptr = unsigned int* (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x1400f7800L))(this);
    };
    void CUserDB::Inform_For_Exit_By_FireguardBlock()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x1401114a0L))(this);
    };
    void CUserDB::Init(unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, unsigned int);
        (org_ptr(0x140110030L))(this, dwIndex);
    };
    bool CUserDB::InitClass(char* pszClassCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char*);
        return (org_ptr(0x1401160e0L))(this, pszClassCode);
    };
    void CUserDB::Insert_Char_Complete(char byRetCode, struct _REGED_AVATOR_DB* pInsertData)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, struct _REGED_AVATOR_DB*);
        (org_ptr(0x1401120e0L))(this, byRetCode, pInsertData);
    };
    bool CUserDB::Insert_Char_Request(char* pwszCharName, char bySlotIndex, char byRaceSexCode, char* pszClassCode, unsigned int dwBaseShape)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char*, char, char, char*, unsigned int);
        return (org_ptr(0x140111c90L))(this, pwszCharName, bySlotIndex, byRaceSexCode, pszClassCode, dwBaseShape);
    };
    struct _AVATOR_DATA* CUserDB::IsContPushBefore()
    {
        using org_ptr = struct _AVATOR_DATA* (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x140110ec0L))(this);
    };
    char CUserDB::IsExistRequestMoveCharacterList(unsigned int dwCharSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CUserDB*, unsigned int);
        return (org_ptr(0x14011bae0L))(this, dwCharSerial);
    };
    bool CUserDB::IsReturnPostUpdate()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x140117a50L))(this);
    };
    void CUserDB::Lobby_Char_Complete(char byRetCode)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char);
        (org_ptr(0x140113850L))(this, byRetCode);
    };
    bool CUserDB::Lobby_Char_Request()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x140113500L))(this);
    };
    void CUserDB::OnLoop_Static()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x14010fff0L))();
    };
    void CUserDB::ParamInit()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x1401100a0L))(this);
    };
    void CUserDB::ReRangeClientIndex(struct _AVATOR_DATA* pData)
    {
        using org_ptr = void (WINAPIV*)(struct _AVATOR_DATA*);
        (org_ptr(0x140119ed0L))(pData);
    };
    void CUserDB::Reged_Char_Complete(char byRetCode, struct _REGED* pRegedList, struct _NOT_ARRANGED_AVATOR_DB* pArrangedList)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, struct _REGED*, struct _NOT_ARRANGED_AVATOR_DB*);
        (org_ptr(0x140111760L))(this, byRetCode, pRegedList, pArrangedList);
    };
    bool CUserDB::Reged_Char_Request()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x140111580L))(this);
    };
    void CUserDB::Select_Char_Complete(char byRetCode, struct _AVATOR_DATA* pLoadData, bool* pbAddItem, unsigned int dwAddDalant, unsigned int dwAddGold, unsigned int dwCheckSum, bool* pbTrunkAddItem, char byTrunkOldSlot, long double dTrunkOldDalant, long double dTrunkOldGold, bool bCreateTrunkFree, bool* pbExtTrunkAddItem, char byExtTrunkOldSlot)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, struct _AVATOR_DATA*, bool*, unsigned int, unsigned int, unsigned int, bool*, char, long double, long double, bool, bool*, char);
        (org_ptr(0x1401129c0L))(this, byRetCode, pLoadData, pbAddItem, dwAddDalant, dwAddGold, dwCheckSum, pbTrunkAddItem, byTrunkOldSlot, dTrunkOldDalant, dTrunkOldGold, bCreateTrunkFree, pbExtTrunkAddItem, byExtTrunkOldSlot);
    };
    bool CUserDB::Select_Char_Request(char bySlotIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x1401125e0L))(this, bySlotIndex);
    };
    void CUserDB::SendMsgAccount_UILockRefresh_Update()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x140118720L))(this);
    };
    void CUserDB::SendMsg_BillingInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x140118270L))(this);
    };
    void CUserDB::SendMsg_Inform_UILock()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x140118650L))(this);
    };
    void CUserDB::SetActPoint(char byCode, unsigned int dwLeftPoint)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, unsigned int);
        (org_ptr(0x14011be90L))(this, byCode, dwLeftPoint);
    };
    void CUserDB::SetBillingData(struct _BILLING_INFO* pBillingInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, struct _BILLING_INFO*);
        (org_ptr(0x1401180e0L))(this, pBillingInfo);
    };
    void CUserDB::SetBillingData(char* szCMSCode, int16_t iType, int lRemainTime, struct _SYSTEMTIME* pstEndDate)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char*, int16_t, int, struct _SYSTEMTIME*);
        (org_ptr(0x140118150L))(this, szCMSCode, iType, lRemainTime, pstEndDate);
    };
    void CUserDB::SetBillingNoLogout(bool bNoLogout)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, bool);
        (org_ptr(0x14007bf80L))(this, bNoLogout);
    };
    void CUserDB::SetChatLock(bool bLock)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, bool);
        (org_ptr(0x1401104a0L))(this, bLock);
    };
    void CUserDB::SetDBPostData(int n, unsigned int dwSerial, int nNumber, char byState, int nKey, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, bool bUpdateIndex, uint64_t lnUID)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, int, unsigned int, int, char, int, uint64_t, unsigned int, unsigned int, bool, uint64_t);
        (org_ptr(0x1401174d0L))(this, n, dwSerial, nNumber, byState, nKey, dwDur, dwUpt, dwGold, bUpdateIndex, lnUID);
    };
    void CUserDB::SetNewDBPostData(int n, unsigned int dwSerial, int nNumber, char byState, char* wszSendName, char* wszRecvName, char* wszTitle, char* wszContent, int nKey, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, uint64_t lnUID)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, int, unsigned int, int, char, char*, char*, char*, char*, int, uint64_t, unsigned int, unsigned int, uint64_t);
        (org_ptr(0x1401176c0L))(this, n, dwSerial, nNumber, byState, wszSendName, wszRecvName, wszTitle, wszContent, nKey, dwDur, dwUpt, dwGold, lnUID);
    };
    void CUserDB::SetRadarDelay(unsigned int dwDelay)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, unsigned int);
        (org_ptr(0x14011b700L))(this, dwDelay);
    };
    void CUserDB::SetRemainTime(int lRemainTime)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, int);
        (org_ptr(0x14028db40L))(this, lRemainTime);
    };
    void CUserDB::SetWorldCLID(unsigned int dwSerial, unsigned int* pipAddr)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, unsigned int, unsigned int*);
        (org_ptr(0x1401102a0L))(this, dwSerial, pipAddr);
    };
    bool CUserDB::Setting_Class(char* pszClassCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char*);
        return (org_ptr(0x140118010L))(this, pszClassCode);
    };
    void CUserDB::StartFieldMode()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x140110330L))(this);
    };
    void CUserDB::TotalPlayMinCheck()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x140113ac0L))(this);
    };
    void CUserDB::UILockInfo_Init(char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char*);
        (org_ptr(0x140118340L))(this, pMsg);
    };
    void CUserDB::UILockInfo_Update(char* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char*);
        (org_ptr(0x1401184d0L))(this, pMsg);
    };
    bool CUserDB::UpdateContUserSave(bool bDirect)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, bool);
        return (org_ptr(0x140113df0L))(this, bDirect);
    };
    bool CUserDB::Update_AddBuddy(char bySlotIndex, unsigned int dwAdderSerial, char* pwszAdderName)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, unsigned int, char*);
        return (org_ptr(0x140116390L))(this, bySlotIndex, dwAdderSerial, pwszAdderName);
    };
    bool CUserDB::Update_AlterPvPCashBag(long double dNewPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, long double);
        return (org_ptr(0x140115fc0L))(this, dNewPoint);
    };
    bool CUserDB::Update_AlterPvPPoint(long double dNewPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, long double);
        return (org_ptr(0x140115f80L))(this, dNewPoint);
    };
    bool CUserDB::Update_AutoTradeAllClear()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x140116ec0L))(this);
    };
    bool CUserDB::Update_BagNum(char bagnum)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x140116480L))(this, bagnum);
    };
    bool CUserDB::Update_Bind(char* pszMapCode, char* pDummyCode, bool bUpdate)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char*, char*, bool);
        return (org_ptr(0x1401162f0L))(this, pszMapCode, pDummyCode, bUpdate);
    };
    void CUserDB::Update_BossCryMsg(char bySlot, char* pwszCryMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, char*);
        (org_ptr(0x14011b7f0L))(this, bySlot, pwszCryMsg);
    };
    bool CUserDB::Update_Class(char* pszClassCode, char byHistoryRecordNum, uint16_t wHistoryClassIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char*, char, uint16_t);
        return (org_ptr(0x140116000L))(this, pszClassCode, byHistoryRecordNum, wHistoryClassIndex);
    };
    bool CUserDB::Update_CombineExResult_Pop()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x1401171b0L))(this);
    };
    bool CUserDB::Update_CombineExResult_Push(struct _ITEMCOMBINE_DB_BASE* pItemCombineDB_IN)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, struct _ITEMCOMBINE_DB_BASE*);
        return (org_ptr(0x140117140L))(this, pItemCombineDB_IN);
    };
    bool CUserDB::Update_CopyAll(struct _AVATOR_DATA* pSrc)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, struct _AVATOR_DATA*);
        return (org_ptr(0x140117e30L))(this, pSrc);
    };
    bool CUserDB::Update_CuttingEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x140116800L))(this);
    };
    bool CUserDB::Update_CuttingPush(char resnum, struct _CUTTING_DB_BASE::_LIST* plist)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, struct _CUTTING_DB_BASE::_LIST*);
        return (org_ptr(0x140116560L))(this, resnum, plist);
    };
    bool CUserDB::Update_CuttingTrans(uint16_t wResItemIndex, uint16_t wLeftAmt)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, uint16_t, uint16_t);
        return (org_ptr(0x1401166a0L))(this, wResItemIndex, wLeftAmt);
    };
    bool CUserDB::Update_DelBuddy(char bySlotIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x140116420L))(this, bySlotIndex);
    };
    bool CUserDB::Update_DelPost(unsigned int dwSerial, int nIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, unsigned int, int);
        return (org_ptr(0x140117b00L))(this, dwSerial, nIndex);
    };
    bool CUserDB::Update_Exp(long double exp)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, long double);
        return (org_ptr(0x140115f00L))(this, exp);
    };
    bool CUserDB::Update_ExtTrunkSlotNum(char byExtSlotNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x140116f70L))(this, byExtSlotNum);
    };
    bool CUserDB::Update_ItemAdd(char storage, char slot, struct _STORAGE_LIST::_db_con* pItem, bool bUpdate)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, char, struct _STORAGE_LIST::_db_con*, bool);
        return (org_ptr(0x140114350L))(this, storage, slot, pItem, bUpdate);
    };
    bool CUserDB::Update_ItemDelete(char storage, char slot, bool bUpdate)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, char, bool);
        return (org_ptr(0x140114850L))(this, storage, slot, bUpdate);
    };
    bool CUserDB::Update_ItemDur(char storage, char slot, uint64_t amount, bool bUpdate)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, char, uint64_t, bool);
        return (org_ptr(0x140114aa0L))(this, storage, slot, amount, bUpdate);
    };
    bool CUserDB::Update_ItemSlot(char storage, char slot, char clientpos)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, char, char);
        return (org_ptr(0x140115800L))(this, storage, slot, clientpos);
    };
    bool CUserDB::Update_ItemUpgrade(char storage, char slot, unsigned int upg, bool bUpdate)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, char, unsigned int, bool);
        return (org_ptr(0x140114f10L))(this, storage, slot, upg, bUpdate);
    };
    void CUserDB::Update_LastAttBuff(bool bSet)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, bool);
        (org_ptr(0x14007e100L))(this, bSet);
    };
    bool CUserDB::Update_Level(char lv, long double exp)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, long double);
        return (org_ptr(0x140115d60L))(this, lv, exp);
    };
    bool CUserDB::Update_LinkBoardLock(char byLBLock)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x140115c40L))(this, byLBLock);
    };
    bool CUserDB::Update_LinkBoardSlot(char bySlot, char byLinkCode, uint16_t wIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, char, uint16_t);
        return (org_ptr(0x140115b90L))(this, bySlot, byLinkCode, wIndex);
    };
    bool CUserDB::Update_LossExp(long double dLossExp)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, long double);
        return (org_ptr(0x140115f40L))(this, dLossExp);
    };
    bool CUserDB::Update_Macro(char* pBuf)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char*);
        return (org_ptr(0x140117200L))(this, pBuf);
    };
    bool CUserDB::Update_Map(char map, float* pos)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, float*);
        return (org_ptr(0x140116240L))(this, map, pos);
    };
    void CUserDB::Update_MaxLevel(char byMaxLevel)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char);
        (org_ptr(0x14011b850L))(this, byMaxLevel);
    };
    bool CUserDB::Update_Money(unsigned int dalant, unsigned int gold)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, unsigned int, unsigned int);
        return (org_ptr(0x1401161f0L))(this, dalant, gold);
    };
    bool CUserDB::Update_NPCQuestHistory(char byIndex, struct _QUEST_DB_BASE::_NPC_QUEST_HISTORY* pHisData)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, struct _QUEST_DB_BASE::_NPC_QUEST_HISTORY*);
        return (org_ptr(0x14011b880L))(this, byIndex, pHisData);
    };
    bool CUserDB::Update_Param(struct _EXIT_ALTER_PARAM* pCon)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, struct _EXIT_ALTER_PARAM*);
        return (org_ptr(0x140116990L))(this, pCon);
    };
    bool CUserDB::Update_PlayTime(unsigned int dwTotalTimeMin)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, unsigned int);
        return (org_ptr(0x140116960L))(this, dwTotalTimeMin);
    };
    void CUserDB::Update_Post(int n, unsigned int dwSerial, int nNumber, char byState, int nKey, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, uint64_t lnUID)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, int, unsigned int, int, char, int, uint64_t, unsigned int, unsigned int, uint64_t);
        (org_ptr(0x140117900L))(this, n, dwSerial, nNumber, byState, nKey, dwDur, dwUpt, dwGold, lnUID);
    };
    void CUserDB::Update_PotionNextUseTime(char byPotionClass, unsigned int dwNextUseTime)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, unsigned int);
        (org_ptr(0x14011ba90L))(this, byPotionClass, dwNextUseTime);
    };
    void CUserDB::Update_PvpPointLeak(long double dValue)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, long double);
        (org_ptr(0x14011ba60L))(this, dValue);
    };
    bool CUserDB::Update_QuestDelete(char bySlotIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x140115620L))(this, bySlotIndex);
    };
    bool CUserDB::Update_QuestInsert(char bySlotIndex, struct _QUEST_DB_BASE::_LIST* pSlotData)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, struct _QUEST_DB_BASE::_LIST*);
        return (org_ptr(0x140115530L))(this, bySlotIndex, pSlotData);
    };
    bool CUserDB::Update_QuestUpdate(char bySlotIndex, struct _QUEST_DB_BASE::_LIST* pSlotData, bool bUpdate)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, struct _QUEST_DB_BASE::_LIST*, bool);
        return (org_ptr(0x140115700L))(this, bySlotIndex, pSlotData, bUpdate);
    };
    bool CUserDB::Update_RaceVoteInfoInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x14011bb90L))(this);
    };
    void CUserDB::Update_ReturnPost(unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, unsigned int);
        (org_ptr(0x140117a80L))(this, dwSerial);
    };
    bool CUserDB::Update_SFContDelete(char byContCode, char bySlotIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, char);
        return (org_ptr(0x140116c30L))(this, byContCode, bySlotIndex);
    };
    bool CUserDB::Update_SFContInsert(char byContCode, char bySlotIndex, char byEffectCode, uint16_t wEffectIndex, char byLv, uint16_t wDurSec)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, char, char, uint16_t, char, uint16_t);
        return (org_ptr(0x140116ad0L))(this, byContCode, bySlotIndex, byEffectCode, wEffectIndex, byLv, wDurSec);
    };
    bool CUserDB::Update_SFContUpdate(char byContCode, char bySlotIndex, uint16_t wTime, bool bUpdate)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, char, uint16_t, bool);
        return (org_ptr(0x140116d80L))(this, byContCode, bySlotIndex, wTime, bUpdate);
    };
    bool CUserDB::Update_StartNPCQuestHistory(char byIndex, struct _QUEST_DB_BASE::_START_NPC_QUEST_HISTORY* pHisData)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, struct _QUEST_DB_BASE::_START_NPC_QUEST_HISTORY*);
        return (org_ptr(0x14011b920L))(this, byIndex, pHisData);
    };
    bool CUserDB::Update_Stat(char byStatIndex, unsigned int dwNewCum, bool bUpdate)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, unsigned int, bool);
        return (org_ptr(0x140116850L))(this, byStatIndex, dwNewCum, bUpdate);
    };
    bool CUserDB::Update_TakeLastCriTicket(unsigned int dwCriTicket)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, unsigned int);
        return (org_ptr(0x140117e00L))(this, dwCriTicket);
    };
    bool CUserDB::Update_TakeLastMentalTicket(unsigned int dwMentalTicket)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, unsigned int);
        return (org_ptr(0x140117dd0L))(this, dwMentalTicket);
    };
    bool CUserDB::Update_TrunkHint(char byHintIndex, char* pwszHintAnswer)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, char*);
        return (org_ptr(0x1401170c0L))(this, byHintIndex, pwszHintAnswer);
    };
    bool CUserDB::Update_TrunkMoney(long double dGold, long double dDalant)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, long double, long double);
        return (org_ptr(0x140117040L))(this, dGold, dDalant);
    };
    bool CUserDB::Update_TrunkPassword(char* pwszPassword)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char*);
        return (org_ptr(0x140116fd0L))(this, pwszPassword);
    };
    bool CUserDB::Update_TrunkSlotNum(char bySlotNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x140116f10L))(this, bySlotNum);
    };
    bool CUserDB::Update_UnitData(char bySlotIndex, struct _UNIT_DB_BASE::_LIST* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, struct _UNIT_DB_BASE::_LIST*);
        return (org_ptr(0x140115440L))(this, bySlotIndex, pData);
    };
    bool CUserDB::Update_UnitDelete(char bySlotIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x140115360L))(this, bySlotIndex);
    };
    bool CUserDB::Update_UnitInsert(char bySlotIndex, struct _UNIT_DB_BASE::_LIST* pSlotData)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, struct _UNIT_DB_BASE::_LIST*);
        return (org_ptr(0x140115270L))(this, bySlotIndex, pSlotData);
    };
    bool CUserDB::Update_UserFatigue(unsigned int dwFatigue)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, unsigned int);
        return (org_ptr(0x14011bdc0L))(this, dwFatigue);
    };
    bool CUserDB::Update_UserGetScaner(uint16_t wScanerCnt, uint16_t wBattleTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, uint16_t, uint16_t);
        return (org_ptr(0x14011bc50L))(this, wScanerCnt, wBattleTime);
    };
    bool CUserDB::Update_UserPlayTime(unsigned int dwAccPlayTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, unsigned int);
        return (org_ptr(0x14011bc10L))(this, dwAccPlayTime);
    };
    bool CUserDB::Update_UserTLStatus(char byStatus)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char);
        return (org_ptr(0x14011bdf0L))(this, byStatus);
    };
    bool CUserDB::Update_UserVoteData()
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*);
        return (org_ptr(0x14011bd80L))(this);
    };
    bool CUserDB::Update_User_Action_Point(char byActionCode, unsigned int dwPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, char, unsigned int);
        return (org_ptr(0x14011be20L))(this, byActionCode, dwPoint);
    };
    bool CUserDB::Update_WindowInfo(unsigned int* pdwSkill, unsigned int* pdwForce, unsigned int* pdwChar, unsigned int* pdwAnimus, unsigned int dwInven, unsigned int* pdwInvenBag)
    {
        using org_ptr = bool (WINAPIV*)(struct CUserDB*, unsigned int*, unsigned int*, unsigned int*, unsigned int*, unsigned int, unsigned int*);
        return (org_ptr(0x140115c70L))(this, pdwSkill, pdwForce, pdwChar, pdwAnimus, dwInven, pdwInvenBag);
    };
    void CUserDB::WriteLog_ChangeClassAfterInitClass(char byType, char* szPrevClass)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char, char*);
        (org_ptr(0x14011b280L))(this, byType, szPrevClass);
    };
    void CUserDB::WriteLog_CharSelect()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x140113c00L))(this);
    };
    void CUserDB::WriteLog_Level(char byLv)
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*, char);
        (org_ptr(0x140113b40L))(this, byLv);
    };
    CUserDB::~CUserDB()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x14010fed0L))(this);
    };
    void CUserDB::dtor_CUserDB()
    {
        using org_ptr = void (WINAPIV*)(struct CUserDB*);
        (org_ptr(0x14010fed0L))(this);
    };
END_ATF_NAMESPACE
