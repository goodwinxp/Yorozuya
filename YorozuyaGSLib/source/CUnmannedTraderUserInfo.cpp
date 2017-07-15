#include <CUnmannedTraderUserInfo.hpp>


START_ATF_NAMESPACE
    void CUnmannedTraderUserInfo::Buy(char byType, struct _unmannedtrader_buy_item_request_clzo* pRequest, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_buy_item_request_clzo*, struct CLogFile*);
        (org_ptr(0x140353e80L))(this, byType, pRequest, pkLogger);
    };
    char CUnmannedTraderUserInfo::BuyComplete(struct CPlayer* pkBuyer, unsigned int dwSellerSerial, char* wszSellerName, char* szSellerAccountName, unsigned int dwRegistSerial, unsigned int dwK, uint64_t dwD, unsigned int dwU, unsigned int dwPrice, uint64_t lnUID, struct CLogFile* pkLogger, uint16_t* wAddItemSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, unsigned int, char*, char*, unsigned int, unsigned int, uint64_t, unsigned int, unsigned int, uint64_t, struct CLogFile*, uint16_t*);
        return (org_ptr(0x1403568c0L))(this, pkBuyer, dwSellerSerial, wszSellerName, szSellerAccountName, dwRegistSerial, dwK, dwD, dwU, dwPrice, lnUID, pkLogger, wAddItemSerial);
    };
    CUnmannedTraderUserInfo::CUnmannedTraderUserInfo(struct CUnmannedTraderUserInfo* __that)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CUnmannedTraderUserInfo*);
        (org_ptr(0x140367900L))(this, __that);
    };
    void CUnmannedTraderUserInfo::ctor_CUnmannedTraderUserInfo(struct CUnmannedTraderUserInfo* __that)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CUnmannedTraderUserInfo*);
        (org_ptr(0x140367900L))(this, __that);
    };
    CUnmannedTraderUserInfo::CUnmannedTraderUserInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        (org_ptr(0x140353030L))(this);
    };
    void CUnmannedTraderUserInfo::ctor_CUnmannedTraderUserInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        (org_ptr(0x140353030L))(this);
    };
    void CUnmannedTraderUserInfo::CancelRegist(char byType, struct _a_trade_clear_item_request_clzo* pRequest, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_clear_item_request_clzo*, struct CLogFile*);
        (org_ptr(0x140353c80L))(this, byType, pRequest, pkLogger);
    };
    bool CUnmannedTraderUserInfo::CheatCancelRegist(char byNth)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char);
        return (org_ptr(0x140354860L))(this, byNth);
    };
    bool CUnmannedTraderUserInfo::CheatCancelRegistAll()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        return (org_ptr(0x14035c5f0L))(this);
    };
    bool CUnmannedTraderUserInfo::CheatCancelRegistSingle(char byNth)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char);
        return (org_ptr(0x14035c100L))(this, byNth);
    };
    char CUnmannedTraderUserInfo::CheckBuy(char byType, struct _unmannedtrader_buy_item_request_clzo* pRequest, struct CPlayer** pkBuyer, struct CLogFile* pkLogger)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_buy_item_request_clzo*, struct CPlayer**, struct CLogFile*);
        return (org_ptr(0x14035b7e0L))(this, byType, pRequest, pkBuyer, pkLogger);
    };
    char CUnmannedTraderUserInfo::CheckBuyComplete(struct CPlayer* pkBuyer, unsigned int dwPrice)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, unsigned int);
        return (org_ptr(0x140356460L))(this, pkBuyer, dwPrice);
    };
    char CUnmannedTraderUserInfo::CheckCancelRegist(char byType, struct _a_trade_clear_item_request_clzo* pRequest, struct CLogFile* pkLogger)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_clear_item_request_clzo*, struct CLogFile*);
        return (org_ptr(0x14035b350L))(this, byType, pRequest, pkLogger);
    };
    bool CUnmannedTraderUserInfo::CheckIsUpdatedTaxRate(char byTax, struct CLogFile* pkLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct CLogFile*);
        return (org_ptr(0x14035ba90L))(this, byTax, pkLogger);
    };
    char CUnmannedTraderUserInfo::CheckModifyPrice(char byType, struct _a_trade_adjust_price_request_clzo* pRequest, unsigned int* dwOldPrice, struct CLogFile* pkLogger, unsigned int* pdwTax)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_adjust_price_request_clzo*, unsigned int*, struct CLogFile*, unsigned int*);
        return (org_ptr(0x14035ae60L))(this, byType, pRequest, dwOldPrice, pkLogger, pdwTax);
    };
    char CUnmannedTraderUserInfo::CheckReRegist(char byType, struct CLogFile* pkLogger, uint16_t wItemSerial, char byAmount, char byItemTableCode, uint16_t wItemIndex, unsigned int dwRegistSerial, unsigned int dwPrice, char* pbyDivision, char* pbyClass, char* pbySubClass, unsigned int* pdwTax, unsigned int* pdwListIndex)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct CLogFile*, uint16_t, char, char, uint16_t, unsigned int, unsigned int, char*, char*, char*, unsigned int*, unsigned int*);
        return (org_ptr(0x14035bbe0L))(this, byType, pkLogger, wItemSerial, byAmount, byItemTableCode, wItemIndex, dwRegistSerial, dwPrice, pbyDivision, pbyClass, pbySubClass, pdwTax, pdwListIndex);
    };
    char CUnmannedTraderUserInfo::CheckRegist(char byType, struct _a_trade_reg_item_request_clzo* pRequest, struct CLogFile* pkLogger, char* byTempSlotIndex, char* byDivision, char* byClass, char* bySubClass, unsigned int* dwListIndex, unsigned int* dwTax)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_reg_item_request_clzo*, struct CLogFile*, char*, char*, char*, char*, unsigned int*, unsigned int*);
        return (org_ptr(0x14035a1a0L))(this, byType, pRequest, pkLogger, byTempSlotIndex, byDivision, byClass, bySubClass, dwListIndex, dwTax);
    };
    char CUnmannedTraderUserInfo::CheckSearch(char byType, struct _unmannedtrader_search_list_request_clzo* pRequest, unsigned int* dwListIndex, unsigned int* dwCurVer, struct CLogFile* pkLogger)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_search_list_request_clzo*, unsigned int*, unsigned int*, struct CLogFile*);
        return (org_ptr(0x14035b920L))(this, byType, pRequest, dwListIndex, dwCurVer, pkLogger);
    };
    char CUnmannedTraderUserInfo::CheckSellComplete(struct CPlayer* pkSellPlayer, struct CPlayer* pkBuyer, unsigned int dwRegistSerial, unsigned int dwRealPrice, struct CLogFile* pkLogger)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, struct CPlayer*, unsigned int, unsigned int, struct CLogFile*);
        return (org_ptr(0x1403564e0L))(this, pkSellPlayer, pkBuyer, dwRegistSerial, dwRealPrice, pkLogger);
    };
    void CUnmannedTraderUserInfo::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        (org_ptr(0x14035f230L))(this);
    };
    void CUnmannedTraderUserInfo::ClearLoadItemInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        (org_ptr(0x14035f520L))(this);
    };
    void CUnmannedTraderUserInfo::ClearRequest()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        (org_ptr(0x140366e30L))(this);
    };
    void CUnmannedTraderUserInfo::CompleteCancelRegist(char byRet, char* pLoadData, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char*, struct CLogFile*);
        (org_ptr(0x1403556c0L))(this, byRet, pLoadData, pkLogger);
    };
    bool CUnmannedTraderUserInfo::CompleteCancelRegistItem(unsigned int dwRegistSerial, uint16_t dwItemSerial, struct CLogFile* pkLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, struct CLogFile*);
        return (org_ptr(0x14035b5c0L))(this, dwRegistSerial, dwItemSerial, pkLogger);
    };
    void CUnmannedTraderUserInfo::CompleteCreate(struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CLogFile*);
        (org_ptr(0x140353510L))(this, pkLogger);
    };
    void CUnmannedTraderUserInfo::CompleteReRegist(char* pLoadData, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*, struct CLogFile*);
        (org_ptr(0x1403558e0L))(this, pLoadData, pkLogger);
    };
    bool CUnmannedTraderUserInfo::CompleteReRegistItem(unsigned int dwRegistSerial, uint16_t dwItemSerial, unsigned int dwPrice, struct CLogFile* pkLogger, char* pbyProcRet)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, unsigned int, struct CLogFile*, char*);
        return (org_ptr(0x14035ac10L))(this, dwRegistSerial, dwItemSerial, dwPrice, pkLogger, pbyProcRet);
    };
    void CUnmannedTraderUserInfo::CompleteReRegistRollBack(char* pData, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*, struct CLogFile*);
        (org_ptr(0x1403562e0L))(this, pData, pkLogger);
    };
    void CUnmannedTraderUserInfo::CompleteRegist(char byRet, char* pLoadData, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char*, struct CLogFile*);
        (org_ptr(0x140354a80L))(this, byRet, pLoadData, pkLogger);
    };
    bool CUnmannedTraderUserInfo::CompleteRegistItem(unsigned int dwRegistSerial, uint16_t dwItemSerial, unsigned int dwETSerialNumber, unsigned int dwPrice, char bySellTurm, char byTableCode, uint16_t wItemIndex, char byStorageIndex, uint64_t dwD, unsigned int dwU, bool bInserted)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, unsigned int, unsigned int, char, char, uint16_t, char, uint64_t, unsigned int, bool);
        return (org_ptr(0x14035aa00L))(this, dwRegistSerial, dwItemSerial, dwETSerialNumber, dwPrice, bySellTurm, byTableCode, wItemIndex, byStorageIndex, dwD, dwU, bInserted);
    };
    void CUnmannedTraderUserInfo::CompleteReprice(char byRet, char* pLoadData, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char*, struct CLogFile*);
        (org_ptr(0x1403553c0L))(this, byRet, pLoadData, pkLogger);
    };
    bool CUnmannedTraderUserInfo::CompleteRepriceItem(unsigned int dwRegistSerial, uint16_t dwItemSerial, unsigned int dwPrice)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, unsigned int);
        return (org_ptr(0x14035b160L))(this, dwRegistSerial, dwItemSerial, dwPrice);
    };
    void CUnmannedTraderUserInfo::CompleteTimeOutClear(unsigned int dwRegistSerial, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, struct CLogFile*);
        (org_ptr(0x140357130L))(this, dwRegistSerial, pkLogger);
    };
    void CUnmannedTraderUserInfo::CompleteUpdateCheatRegistTime(char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*);
        (org_ptr(0x1403574b0L))(this, pLoadData);
    };
    bool CUnmannedTraderUserInfo::CompleteUpdateState(unsigned int dwRegistSerial, char byState, bool bReCountRegist)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, char, bool);
        return (org_ptr(0x1403548e0L))(this, dwRegistSerial, byState, bReCountRegist);
    };
    void CUnmannedTraderUserInfo::CountRegistItem()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        (org_ptr(0x14035a100L))(this);
    };
    struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* CUnmannedTraderUserInfo::Find(struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* result, unsigned int dwRegistSerial)
    {
        using org_ptr = struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >*, unsigned int);
        return (org_ptr(0x140359c40L))(this, result, dwRegistSerial);
    };
    struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* CUnmannedTraderUserInfo::FindEmpty(struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* result)
    {
        using org_ptr = struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >*);
        return (org_ptr(0x140359db0L))(this, result);
    };
    struct CPlayer* CUnmannedTraderUserInfo::FindOwner()
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        return (org_ptr(0x140357930L))(this);
    };
    struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* CUnmannedTraderUserInfo::FindRegist(struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* result, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> > iterStart)
    {
        using org_ptr = struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >* (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >*, struct std::_Vector_iterator<CUnmannedTraderRegistItemInfo,std::allocator<CUnmannedTraderRegistItemInfo> >);
        return (org_ptr(0x140359f20L))(this, result, iterStart);
    };
    CUnmannedTraderItemState::STATE CUnmannedTraderUserInfo::GetCloseItemForPassTimeUpdateInfo(unsigned int dwRegistSerial, struct CPlayer** pkOwner)
    {
        using org_ptr = CUnmannedTraderItemState::STATE (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, struct CPlayer**);
        return (org_ptr(0x140357710L))(this, dwRegistSerial, pkOwner);
    };
    void CUnmannedTraderUserInfo::GetCurrentRegItemStateStr(char* szStateStr, int iBuffSize)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char*, int);
        (org_ptr(0x14035c900L))(this, szStateStr, iBuffSize);
    };
    uint16_t CUnmannedTraderUserInfo::GetIndex()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        return (org_ptr(0x140366e80L))(this);
    };
    char CUnmannedTraderUserInfo::GetMaxRegistCnt()
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        return (org_ptr(0x140366f00L))(this);
    };
    struct CUnmannedTraderRegistItemInfo* CUnmannedTraderUserInfo::GetRegItemInfo()
    {
        using org_ptr = struct CUnmannedTraderRegistItemInfo* (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        return (org_ptr(0x140366f80L))(this);
    };
    unsigned int CUnmannedTraderUserInfo::GetSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        return (org_ptr(0x140366ea0L))(this);
    };
    bool CUnmannedTraderUserInfo::Init(uint16_t wInx)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t);
        return (org_ptr(0x140353280L))(this, wInx);
    };
    bool CUnmannedTraderUserInfo::IsLogInState()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        return (org_ptr(0x140366f20L))(this);
    };
    bool CUnmannedTraderUserInfo::IsNull()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        return (org_ptr(0x14035f400L))(this);
    };
    bool CUnmannedTraderUserInfo::Load(char byType, uint16_t wInx, unsigned int dwSerial, struct _TRADE_DB_BASE* kInfo, struct CLogFile* pkLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, uint16_t, unsigned int, struct _TRADE_DB_BASE*, struct CLogFile*);
        return (org_ptr(0x140353440L))(this, byType, wInx, dwSerial, kInfo, pkLogger);
    };
    void CUnmannedTraderUserInfo::LogOut(unsigned int dwSerial, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, struct CLogFile*);
        (org_ptr(0x140353750L))(this, dwSerial, pkLogger);
    };
    void CUnmannedTraderUserInfo::ModifyPrice(char byType, struct _a_trade_adjust_price_request_clzo* pRequest, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_adjust_price_request_clzo*, struct CLogFile*);
        (org_ptr(0x140353a00L))(this, byType, pRequest, pkLogger);
    };
    void CUnmannedTraderUserInfo::NotifyCloseItem(struct _qry_case_unmandtrader_log_in_proc_update_complete* pkResult, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct _qry_case_unmandtrader_log_in_proc_update_complete*, struct CLogFile*);
        (org_ptr(0x140359790L))(this, pkResult, pkLogger);
    };
    void CUnmannedTraderUserInfo::NotifyRegistItem()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        (org_ptr(0x140358e50L))(this);
    };
    void CUnmannedTraderUserInfo::PrcoSellUpdateWaitItem(struct _qry_case_unmandtrader_log_in_proc_update_complete* pkResult, char byGroupType, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct _qry_case_unmandtrader_log_in_proc_update_complete*, char, struct CLogFile*);
        (org_ptr(0x140358870L))(this, pkResult, byGroupType, pkLogger);
    };
    void CUnmannedTraderUserInfo::ProcSellWaitItem(struct _qry_case_unmandtrader_log_in_proc_update_complete* pkResult, char byGroupType, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct _qry_case_unmandtrader_log_in_proc_update_complete*, char, struct CLogFile*);
        (org_ptr(0x140359150L))(this, pkResult, byGroupType, pkLogger);
    };
    void CUnmannedTraderUserInfo::ReRegist(char byType, struct _unmannedtrader_re_regist_request_clzo* pRequest, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_re_regist_request_clzo*, struct CLogFile*);
        (org_ptr(0x140354340L))(this, byType, pRequest, pkLogger);
    };
    void CUnmannedTraderUserInfo::Regist(char byType, struct _a_trade_reg_item_request_clzo* pRequest, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_reg_item_request_clzo*, struct CLogFile*);
        (org_ptr(0x1403537f0L))(this, byType, pRequest, pkLogger);
    };
    char CUnmannedTraderUserInfo::RegistItem(char byType, struct _a_trade_reg_item_request_clzo* pRequest, char byTempSlotIndex, char byDivision, char byClass, char bySubClass, unsigned int dwListIndex, unsigned int dwTax)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _a_trade_reg_item_request_clzo*, char, char, char, char, unsigned int, unsigned int);
        return (org_ptr(0x14035a520L))(this, byType, pRequest, byTempSlotIndex, byDivision, byClass, bySubClass, dwListIndex, dwTax);
    };
    void CUnmannedTraderUserInfo::Search(char byType, struct _unmannedtrader_search_list_request_clzo* pRequest, struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, struct _unmannedtrader_search_list_request_clzo*, struct CLogFile*);
        (org_ptr(0x1403540d0L))(this, byType, pRequest, pkLogger);
    };
    char CUnmannedTraderUserInfo::SellComplete(struct CPlayer* pkSellPlayer, struct CPlayer* pkBuyer, unsigned int dwOriPrice, unsigned int dwRealPrice, unsigned int dwTax, unsigned int dwRegistSerial, int64_t tResultTime, struct CLogFile* pkLogger)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, struct CPlayer*, unsigned int, unsigned int, unsigned int, unsigned int, int64_t, struct CLogFile*);
        return (org_ptr(0x140356af0L))(this, pkSellPlayer, pkBuyer, dwOriPrice, dwRealPrice, dwTax, dwRegistSerial, tResultTime, pkLogger);
    };
    void CUnmannedTraderUserInfo::SendBuyErrorResult(uint16_t wInx, char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char);
        (org_ptr(0x140357fe0L))(this, wInx, byRet);
    };
    void CUnmannedTraderUserInfo::SendCancelRegistErrorResult(uint16_t wInx, char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char);
        (org_ptr(0x140357ea0L))(this, wInx, byRet);
    };
    void CUnmannedTraderUserInfo::SendCancelRegistSuccessResult(uint16_t wInx, uint16_t wItemSerial, unsigned int dwRegistSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, uint16_t, unsigned int);
        (org_ptr(0x140357f30L))(this, wInx, wItemSerial, dwRegistSerial);
    };
    void CUnmannedTraderUserInfo::SendNotifyCloseItem(uint16_t wInx, uint16_t wItemSerial, unsigned int dwRegistSerial, unsigned int dwPrice, char byTax)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, uint16_t, unsigned int, unsigned int, char);
        (org_ptr(0x140357a50L))(this, wInx, wItemSerial, dwRegistSerial, dwPrice, byTax);
    };
    void CUnmannedTraderUserInfo::SendRegistItemErrorResult(uint16_t wInx, char byRet, uint16_t wItemSerial, unsigned int dwRetParam1)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char, uint16_t, unsigned int);
        (org_ptr(0x140357b10L))(this, wInx, byRet, wItemSerial, dwRetParam1);
    };
    void CUnmannedTraderUserInfo::SendRegistItemSuccessResult(unsigned int dwLeftDalant, uint16_t wInx, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, unsigned int, uint16_t, char*);
        (org_ptr(0x140357be0L))(this, dwLeftDalant, wInx, pLoadData);
    };
    void CUnmannedTraderUserInfo::SendRepriceErrorResult(struct CPlayer* pReceiver, char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, char);
        (org_ptr(0x140357cf0L))(this, pReceiver, byRet);
    };
    void CUnmannedTraderUserInfo::SendRepriceSuccessResult(struct CPlayer* pReceiver, uint16_t wItemSerial, unsigned int dwNewPrice, unsigned int dwRegistSerial, unsigned int dwTax)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CPlayer*, uint16_t, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x140357db0L))(this, pReceiver, wItemSerial, dwNewPrice, dwRegistSerial, dwTax);
    };
    void CUnmannedTraderUserInfo::SendSearchErrorResult(uint16_t wInx, char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char);
        (org_ptr(0x140358150L))(this, wInx, byRet);
    };
    void CUnmannedTraderUserInfo::SendSearchResult(uint16_t wInx, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, char*);
        (org_ptr(0x140358210L))(this, wInx, pLoadData);
    };
    void CUnmannedTraderUserInfo::SendSellInfom(uint16_t wInx, uint16_t wItemSerial, unsigned int dwAddDalant, unsigned int dwTaxDalant, unsigned int dwTotalDalant)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, uint16_t, uint16_t, unsigned int, unsigned int, unsigned int);
        (org_ptr(0x140358090L))(this, wInx, wItemSerial, dwAddDalant, dwTaxDalant, dwTotalDalant);
    };
    void CUnmannedTraderUserInfo::SetAllItemState(char byState, char byMaxCnt)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, char);
        (org_ptr(0x14035ff90L))(this, byState, byMaxCnt);
    };
    void CUnmannedTraderUserInfo::SetCompleteInfo(struct CLogFile* pkLogger)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*, struct CLogFile*);
        (org_ptr(0x140358b50L))(this, pkLogger);
    };
    bool CUnmannedTraderUserInfo::SetLoadInfo(char byType, unsigned int dwSerial, struct _TRADE_DB_BASE* kInfo, struct CLogFile* pkLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderUserInfo*, char, unsigned int, struct _TRADE_DB_BASE*, struct CLogFile*);
        return (org_ptr(0x140358590L))(this, byType, dwSerial, kInfo, pkLogger);
    };
    CUnmannedTraderUserInfo::~CUnmannedTraderUserInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        (org_ptr(0x140353160L))(this);
    };
    void CUnmannedTraderUserInfo::dtor_CUnmannedTraderUserInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderUserInfo*);
        (org_ptr(0x140353160L))(this);
    };
    
END_ATF_NAMESPACE
