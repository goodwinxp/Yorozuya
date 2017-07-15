#include <CUnmannedTraderUserInfoTable.hpp>


START_ATF_NAMESPACE
    void CUnmannedTraderUserInfoTable::Buy(uint16_t wInx, char byType, struct _unmannedtrader_buy_item_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, char, struct _unmannedtrader_buy_item_request_clzo*);
        (org_ptr(0x1401d4980L))(this, wInx, byType, pRequest);
    };
    CUnmannedTraderUserInfoTable::CUnmannedTraderUserInfoTable()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*);
        (org_ptr(0x140366b70L))(this);
    };
    void CUnmannedTraderUserInfoTable::ctor_CUnmannedTraderUserInfoTable()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*);
        (org_ptr(0x140366b70L))(this);
    };
    void CUnmannedTraderUserInfoTable::CancelRegist(uint16_t wInx, char byType, struct _a_trade_clear_item_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, char, struct _a_trade_clear_item_request_clzo*);
        (org_ptr(0x1401d4870L))(this, wInx, byType, pRequest);
    };
    bool CUnmannedTraderUserInfoTable::CheatCancelRegist(uint16_t wInx, unsigned int dwOwnerSerial, char byNth)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, unsigned int, char);
        return (org_ptr(0x140363a00L))(this, wInx, dwOwnerSerial, byNth);
    };
    bool CUnmannedTraderUserInfoTable::CheckwIndexAndType(uint16_t wInx, char byType, char* szCallFuncName)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, char, char*);
        return (org_ptr(0x1401d4660L))(this, wInx, byType, szCallFuncName);
    };
    void CUnmannedTraderUserInfoTable::ClearLogLogOutState(char* szType, unsigned int dwOwner, char* szAccount, char* wszName, unsigned int dwRegistSerial, unsigned int dwK, unsigned int dwD, unsigned int dwU)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char*, unsigned int, char*, char*, unsigned int, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x140365cc0L))(this, szType, dwOwner, szAccount, wszName, dwRegistSerial, dwK, dwD, dwU);
    };
    void CUnmannedTraderUserInfoTable::ClearRequest(uint16_t wInx, unsigned int dwOwner)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, unsigned int);
        (org_ptr(0x140364970L))(this, wInx, dwOwner);
    };
    void CUnmannedTraderUserInfoTable::CompleteBuy(char byRet, char* pLoadData, struct CUnmannedTraderTradeInfo* pkTaradInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char, char*, struct CUnmannedTraderTradeInfo*);
        (org_ptr(0x140363f80L))(this, byRet, pLoadData, pkTaradInfo);
    };
    void CUnmannedTraderUserInfoTable::CompleteCancelRegist(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char, char*);
        (org_ptr(0x140363e40L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderUserInfoTable::CompleteCreate(uint16_t wInx)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t);
        (org_ptr(0x140363b30L))(this, wInx);
    };
    void CUnmannedTraderUserInfoTable::CompleteReRegist(char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char*);
        (org_ptr(0x140364520L))(this, pLoadData);
    };
    void CUnmannedTraderUserInfoTable::CompleteReRegistRollBack(uint16_t wInx, unsigned int dwOwnerSerial, char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, unsigned int, char*);
        (org_ptr(0x1403648a0L))(this, wInx, dwOwnerSerial, pData);
    };
    void CUnmannedTraderUserInfoTable::CompleteRegist(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char, char*);
        (org_ptr(0x140363bc0L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderUserInfoTable::CompleteReprice(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char, char*);
        (org_ptr(0x140363d70L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderUserInfoTable::CompleteSearch(char byDBRet, char byProcRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char, char, char*);
        (org_ptr(0x1403642f0L))(this, byDBRet, byProcRet, pLoadData);
    };
    void CUnmannedTraderUserInfoTable::CompleteTimeOutClear(char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char*);
        (org_ptr(0x140364400L))(this, pLoadData);
    };
    void CUnmannedTraderUserInfoTable::CompleteUpdateCheatRegistTime(char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char*);
        (org_ptr(0x1403647f0L))(this, pLoadData);
    };
    bool CUnmannedTraderUserInfoTable::CompleteUpdateState(unsigned int dwOwnerSerial, unsigned int dwRegistSerial, char byState)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, unsigned int, unsigned int, char);
        return (org_ptr(0x140363ab0L))(this, dwOwnerSerial, dwRegistSerial, byState);
    };
    void CUnmannedTraderUserInfoTable::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140363780L))();
    };
    struct CUnmannedTraderUserInfo* CUnmannedTraderUserInfoTable::Find(unsigned int dwSerial)
    {
        using org_ptr = struct CUnmannedTraderUserInfo* (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, unsigned int);
        return (org_ptr(0x140365a90L))(this, dwSerial);
    };
    struct CUnmannedTraderUserInfo* CUnmannedTraderUserInfoTable::FindByIndex(uint16_t wInx)
    {
        using org_ptr = struct CUnmannedTraderUserInfo* (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t);
        return (org_ptr(0x140366db0L))(this, wInx);
    };
    struct CUnmannedTraderUserInfo* CUnmannedTraderUserInfoTable::FindUser(uint16_t wInx, unsigned int dwSerial)
    {
        using org_ptr = struct CUnmannedTraderUserInfo* (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, unsigned int);
        return (org_ptr(0x140366ca0L))(this, wInx, dwSerial);
    };
    CUnmannedTraderItemState::STATE CUnmannedTraderUserInfoTable::GetCloseItemForPassTimeUpdateInfo(unsigned int dwOwnerSerial, unsigned int dwRegistSerial, struct CPlayer** pkOwner)
    {
        using org_ptr = CUnmannedTraderItemState::STATE (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, unsigned int, unsigned int, struct CPlayer**);
        return (org_ptr(0x1403979f0L))(this, dwOwnerSerial, dwRegistSerial, pkOwner);
    };
    char CUnmannedTraderUserInfoTable::GetMaxRegistCnt(uint16_t wInx, unsigned int dwSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, unsigned int);
        return (org_ptr(0x140365830L))(this, wInx, dwSerial);
    };
    struct CUnmannedTraderRegistItemInfo* CUnmannedTraderUserInfoTable::GetRegItemInfo(uint16_t wInx, unsigned int dwSerial)
    {
        using org_ptr = struct CUnmannedTraderRegistItemInfo* (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, unsigned int);
        return (org_ptr(0x140365910L))(this, wInx, dwSerial);
    };
    bool CUnmannedTraderUserInfoTable::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfoTable*);
        return (org_ptr(0x140363800L))(this);
    };
    struct CUnmannedTraderUserInfoTable* CUnmannedTraderUserInfoTable::Instance()
    {
        using org_ptr = struct CUnmannedTraderUserInfoTable* (WINAPIV*)();
        return (org_ptr(0x1403636c0L))();
    };
    bool CUnmannedTraderUserInfoTable::Load(char byType, uint16_t wInx, unsigned int dwSerial, struct _TRADE_DB_BASE* kInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char, uint16_t, unsigned int, struct _TRADE_DB_BASE*);
        return (org_ptr(0x140363940L))(this, byType, wInx, dwSerial, kInfo);
    };
    void CUnmannedTraderUserInfoTable::Log(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char*);
        (org_ptr(0x140365fd0L))(this, fmt);
    };
    void CUnmannedTraderUserInfoTable::LogOut(uint16_t wInx, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, unsigned int);
        (org_ptr(0x1403659f0L))(this, wInx, dwSerial);
    };
    void CUnmannedTraderUserInfoTable::ModifyPrice(uint16_t wInx, char byType, struct _a_trade_adjust_price_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, char, struct _a_trade_adjust_price_request_clzo*);
        (org_ptr(0x1401d4760L))(this, wInx, byType, pRequest);
    };
    void CUnmannedTraderUserInfoTable::PushUpdateBuyRollBack(struct _qry_case_unmandtrader_buy_update_wait* pkQuery)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, struct _qry_case_unmandtrader_buy_update_wait*);
        (org_ptr(0x140364a10L))(this, pkQuery);
    };
    void CUnmannedTraderUserInfoTable::ReRegist(uint16_t wInx, char byType, struct _unmannedtrader_re_regist_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, char, struct _unmannedtrader_re_regist_request_clzo*);
        (org_ptr(0x1401d4ba0L))(this, wInx, byType, pRequest);
    };
    void CUnmannedTraderUserInfoTable::Regist(uint16_t wInx, char byType, struct _a_trade_reg_item_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, char, struct _a_trade_reg_item_request_clzo*);
        (org_ptr(0x1401d45b0L))(this, wInx, byType, pRequest);
    };
    void CUnmannedTraderUserInfoTable::Search(uint16_t wInx, char byType, struct _unmannedtrader_search_list_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, uint16_t, char, struct _unmannedtrader_search_list_request_clzo*);
        (org_ptr(0x1401d4a90L))(this, wInx, byType, pRequest);
    };
    void CUnmannedTraderUserInfoTable::ServiceLog(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char*);
        (org_ptr(0x140366060L))(this, fmt);
    };
    void CUnmannedTraderUserInfoTable::SetLogger(struct CLogFile* pkLogger, struct CLogFile* pkSeviceLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, struct CLogFile*, struct CLogFile*);
        (org_ptr(0x140351910L))(this, pkLogger, pkSeviceLogger);
    };
    bool CUnmannedTraderUserInfoTable::SubCompleteBuyFindBuyer(struct _qry_case_unmandtrader_buy_update_wait* pkQuery, struct CUnmannedTraderUserInfo** ppkBuyUser, struct CPlayer** ppkBuyPlayer)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, struct _qry_case_unmandtrader_buy_update_wait*, struct CUnmannedTraderUserInfo**, struct CPlayer**);
        return (org_ptr(0x140364bc0L))(this, pkQuery, ppkBuyUser, ppkBuyPlayer);
    };
    void CUnmannedTraderUserInfoTable::SubCompleteBuyIncreaseVesion(char byDivision, char byClass)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char, char);
        (org_ptr(0x1403657b0L))(this, byDivision, byClass);
    };
    bool CUnmannedTraderUserInfoTable::SubCompleteBuyProcBuy(struct CPlayer* pkBuyPlayer, struct CUnmannedTraderUserInfo* pkBuyUser, int64_t tResultTime, struct _qry_case_unmandtrader_buy_update_wait::__list* pkQueryList, struct _unmannedtrader_buy_item_result_zocl::__list* pSendResultList, struct _qry_case_unmandtrader_buy_update_complete::__list* pUpdateCompleteList, char* byCompleteUpdateNum, unsigned int* pdwPayDalant, struct CUnmannedTraderTradeInfo* pkTaradInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, struct CPlayer*, struct CUnmannedTraderUserInfo*, int64_t, struct _qry_case_unmandtrader_buy_update_wait::__list*, struct _unmannedtrader_buy_item_result_zocl::__list*, struct _qry_case_unmandtrader_buy_update_complete::__list*, char*, unsigned int*, struct CUnmannedTraderTradeInfo*);
        return (org_ptr(0x140364f10L))(this, pkBuyPlayer, pkBuyUser, tResultTime, pkQueryList, pSendResultList, pUpdateCompleteList, byCompleteUpdateNum, pdwPayDalant, pkTaradInfo);
    };
    bool CUnmannedTraderUserInfoTable::SubCompleteBuyProcBuyResult(char byRet, struct _qry_case_unmandtrader_buy_update_complete::__list* pUpdateCompleteList, char* byCompleteUpdateNum)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfoTable*, char, struct _qry_case_unmandtrader_buy_update_complete::__list*, char*);
        return (org_ptr(0x140365650L))(this, byRet, pUpdateCompleteList, byCompleteUpdateNum);
    };
    CUnmannedTraderUserInfoTable::~CUnmannedTraderUserInfoTable()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*);
        (org_ptr(0x140366c50L))(this);
    };
    void CUnmannedTraderUserInfoTable::dtor_CUnmannedTraderUserInfoTable()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfoTable*);
        (org_ptr(0x140366c50L))(this);
    };
END_ATF_NAMESPACE
