#include <CUnmannedTraderController.hpp>


START_ATF_NAMESPACE
    void CUnmannedTraderController::Buy(uint16_t wInx, struct _unmannedtrader_buy_item_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, struct _unmannedtrader_buy_item_request_clzo*);
        (org_ptr(0x1401d4920L))(this, wInx, pRequest);
    };
    CUnmannedTraderController::CUnmannedTraderController()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*);
        (org_ptr(0x14034c880L))(this);
    };
    void CUnmannedTraderController::ctor_CUnmannedTraderController()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*);
        (org_ptr(0x14034c880L))(this);
    };
    void CUnmannedTraderController::CancelRegist(uint16_t wInx, struct _a_trade_clear_item_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, struct _a_trade_clear_item_request_clzo*);
        (org_ptr(0x1401d4810L))(this, wInx, pRequest);
    };
    bool CUnmannedTraderController::CheatCancelRegist(uint16_t wInx, unsigned int dwOwnerSerial, char byNth)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, unsigned int, char);
        return (org_ptr(0x14029d760L))(this, wInx, dwOwnerSerial, byNth);
    };
    char CUnmannedTraderController::CheckDBItemState(char byType, unsigned int dwRegistSerial, char* byState, char* byProcRet)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char, unsigned int, char*, char*);
        return (org_ptr(0x1403506c0L))(this, byType, dwRegistSerial, byState, byProcRet);
    };
    void CUnmannedTraderController::ComleteLazyClean(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char*);
        (org_ptr(0x1402074d0L))(this, pData);
    };
    void CUnmannedTraderController::CompleteBuy(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, char*);
        (org_ptr(0x140207450L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderController::CompleteBuyComplete(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char*);
        (org_ptr(0x14034ee20L))(this, pData);
    };
    void CUnmannedTraderController::CompleteBuyRollBack(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, char*);
        (org_ptr(0x14034ecf0L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderController::CompleteCancelRegist(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, char*);
        (org_ptr(0x1402073f0L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderController::CompleteCreate(uint16_t wInx)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, uint16_t);
        (org_ptr(0x140079d90L))(this, wInx);
    };
    void CUnmannedTraderController::CompleteCreateNotifyTradeInfo(char byRace, uint16_t wInx)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, uint16_t);
        (org_ptr(0x140079e00L))(this, byRace, wInx);
    };
    void CUnmannedTraderController::CompleteLogInCompete(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char*);
        (org_ptr(0x14034ef80L))(this, pData);
    };
    void CUnmannedTraderController::CompleteReRegist(char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char*);
        (org_ptr(0x140207530L))(this, pLoadData);
    };
    void CUnmannedTraderController::CompleteReRegistRollBack(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char*);
        (org_ptr(0x14034fbe0L))(this, pData);
    };
    void CUnmannedTraderController::CompleteRegistItem(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, char*);
        (org_ptr(0x140207330L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderController::CompleteReprice(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, char*);
        (org_ptr(0x140207390L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderController::CompleteSelectBuyInfo(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, char*);
        (org_ptr(0x14034f3f0L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderController::CompleteSelectReservedSchedule(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, char*);
        (org_ptr(0x14034d4b0L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderController::CompleteSelectSearchList(char byDBRet, char byProcRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, char, char*);
        (org_ptr(0x1402c42f0L))(this, byDBRet, byProcRet, pLoadData);
    };
    void CUnmannedTraderController::CompleteTimeOutCancelRegist(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, char*);
        (org_ptr(0x14034f230L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderController::CompleteUpdateCheatRegistTime(char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char*);
        (org_ptr(0x14034ff60L))(this, pLoadData);
    };
    void CUnmannedTraderController::CompleteUpdateState(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char, char*);
        (org_ptr(0x14034f0e0L))(this, byRet, pLoadData);
    };
    void CUnmannedTraderController::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x14034cb60L))();
    };
    char CUnmannedTraderController::GetEmptyRecordSerial(unsigned int* dwSerial, bool* pbRecordInserted)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, unsigned int*, bool*);
        return (org_ptr(0x140350270L))(this, dwSerial, pbRecordInserted);
    };
    char CUnmannedTraderController::GetMaxRegistCnt(uint16_t wInx, unsigned int dwSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, unsigned int);
        return (org_ptr(0x14007a1b0L))(this, wInx, dwSerial);
    };
    struct CUnmannedTraderRegistItemInfo* CUnmannedTraderController::GetRegItemInfo(uint16_t wInx, unsigned int dwSerial)
    {
        using org_ptr = struct CUnmannedTraderRegistItemInfo* (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, unsigned int);
        return (org_ptr(0x14007a210L))(this, wInx, dwSerial);
    };
    bool CUnmannedTraderController::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderController*);
        return (org_ptr(0x14034cbe0L))(this);
    };
    bool CUnmannedTraderController::InitLogger()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderController*);
        return (org_ptr(0x14034fc50L))(this);
    };
    bool CUnmannedTraderController::InsertDefalutRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderController*);
        return (org_ptr(0x140350610L))(this);
    };
    bool CUnmannedTraderController::InsertStateRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderController*);
        return (org_ptr(0x140350320L))(this);
    };
    struct CUnmannedTraderController* CUnmannedTraderController::Instance()
    {
        using org_ptr = struct CUnmannedTraderController* (WINAPIV*)();
        return (org_ptr(0x14034caa0L))();
    };
    bool CUnmannedTraderController::Load(uint16_t wInx, unsigned int dwSerial, struct _TRADE_DB_BASE* kInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, unsigned int, struct _TRADE_DB_BASE*);
        return (org_ptr(0x140078c10L))(this, wInx, dwSerial, kInfo);
    };
    bool CUnmannedTraderController::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderController*);
        return (org_ptr(0x14034ccb0L))(this);
    };
    void CUnmannedTraderController::Log(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, char*);
        (org_ptr(0x1403501e0L))(this, fmt);
    };
    void CUnmannedTraderController::LogOut(uint16_t wInx, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, unsigned int);
        (org_ptr(0x14007a270L))(this, wInx, dwSerial);
    };
    void CUnmannedTraderController::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*);
        (org_ptr(0x14034cd60L))(this);
    };
    void CUnmannedTraderController::ModifyPrice(uint16_t wInx, struct _a_trade_adjust_price_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, struct _a_trade_adjust_price_request_clzo*);
        (org_ptr(0x1401d4700L))(this, wInx, pRequest);
    };
    void CUnmannedTraderController::ReRegist(uint16_t wInx, struct _unmannedtrader_re_regist_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, struct _unmannedtrader_re_regist_request_clzo*);
        (org_ptr(0x1401d4b40L))(this, wInx, pRequest);
    };
    void CUnmannedTraderController::Regist(uint16_t wInx, struct _a_trade_reg_item_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, struct _a_trade_reg_item_request_clzo*);
        (org_ptr(0x1401d4550L))(this, wInx, pRequest);
    };
    void CUnmannedTraderController::Search(uint16_t wInx, struct _unmannedtrader_search_list_request_clzo* pRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*, uint16_t, struct _unmannedtrader_search_list_request_clzo*);
        (org_ptr(0x1401d4a30L))(this, wInx, pRequest);
    };
    char CUnmannedTraderController::SelectBuy(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034d520L))(this, pData);
    };
    char CUnmannedTraderController::SelectSearchList(char* pData, struct CRFWorldDatabase* pkWorldDB, char* byProcRet)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*, struct CRFWorldDatabase*, char*);
        return (org_ptr(0x14034dea0L))(this, pData, pkWorldDB, byProcRet);
    };
    char CUnmannedTraderController::UpdateBuy(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034d970L))(this, pData);
    };
    char CUnmannedTraderController::UpdateBuyComplete(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034e1c0L))(this, pData);
    };
    char CUnmannedTraderController::UpdateBuyRollBack(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034dd60L))(this, pData);
    };
    char CUnmannedTraderController::UpdateCancelRegist(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034d320L))(this, pData);
    };
    char CUnmannedTraderController::UpdateCheatRegistTime(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034ea30L))(this, pData);
    };
    bool CUnmannedTraderController::UpdateClearDanglingOwnerRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderController*);
        return (org_ptr(0x1403505b0L))(this);
    };
    char CUnmannedTraderController::UpdateItemState(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034e100L))(this, pData);
    };
    char CUnmannedTraderController::UpdateLazyClean(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x140206a90L))(this, pData);
    };
    char CUnmannedTraderController::UpdateLogInComplete(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034e440L))(this, pData);
    };
    char CUnmannedTraderController::UpdateRePrice(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034d230L))(this, pData);
    };
    char CUnmannedTraderController::UpdateReRegist(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034e680L))(this, pData);
    };
    char CUnmannedTraderController::UpdateReRegistRollBack(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034eb40L))(this, pData);
    };
    char CUnmannedTraderController::UpdateRegistItem(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034cdd0L))(this, pData);
    };
    char CUnmannedTraderController::UpdateTimeOutCancelRegist(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderController*, char*);
        return (org_ptr(0x14034cfa0L))(this, pData);
    };
    CUnmannedTraderController::~CUnmannedTraderController()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*);
        (org_ptr(0x14034c930L))(this);
    };
    void CUnmannedTraderController::dtor_CUnmannedTraderController()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderController*);
        (org_ptr(0x14034c930L))(this);
    };
END_ATF_NAMESPACE
