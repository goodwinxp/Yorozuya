#include <CUnmannedTraderRegistItemInfo.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderRegistItemInfo::CUnmannedTraderRegistItemInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        (org_ptr(0x140351da0L))(this);
    };
    void CUnmannedTraderRegistItemInfo::ctor_CUnmannedTraderRegistItemInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        (org_ptr(0x140351da0L))(this);
    };
    void CUnmannedTraderRegistItemInfo::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        (org_ptr(0x140352e50L))(this);
    };
    void CUnmannedTraderRegistItemInfo::ClearBuyerInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        (org_ptr(0x14035fe50L))(this);
    };
    void CUnmannedTraderRegistItemInfo::ClearRegist()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        (org_ptr(0x140360830L))(this);
    };
    void CUnmannedTraderRegistItemInfo::ClearToWaitState()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        (org_ptr(0x14035f930L))(this);
    };
    unsigned int CUnmannedTraderRegistItemInfo::GetBuyerSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x1403601a0L))(this);
    };
    uint64_t CUnmannedTraderRegistItemInfo::GetD()
    {
        using org_ptr = uint64_t (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243b60L))(this);
    };
    unsigned int CUnmannedTraderRegistItemInfo::GetETSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243ae0L))(this);
    };
    uint16_t CUnmannedTraderRegistItemInfo::GetItemIndex()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243b20L))(this);
    };
    uint16_t CUnmannedTraderRegistItemInfo::GetItemSerial()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x14035f910L))(this);
    };
    unsigned int CUnmannedTraderRegistItemInfo::GetLeftSec()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x14035fca0L))(this);
    };
    unsigned int CUnmannedTraderRegistItemInfo::GetPrice()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243ba0L))(this);
    };
    unsigned int CUnmannedTraderRegistItemInfo::GetRegistSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243ac0L))(this);
    };
    int64_t CUnmannedTraderRegistItemInfo::GetResultTime()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140360180L))(this);
    };
    char CUnmannedTraderRegistItemInfo::GetSellTurm()
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243c00L))(this);
    };
    int64_t CUnmannedTraderRegistItemInfo::GetStartTime()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243be0L))(this);
    };
    int64_t* CUnmannedTraderRegistItemInfo::GetStartTimePtr()
    {
        using org_ptr = int64_t* (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243bc0L))(this);
    };
    CUnmannedTraderItemState::STATE CUnmannedTraderRegistItemInfo::GetState()
    {
        using org_ptr = CUnmannedTraderItemState::STATE (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x1403603d0L))(this);
    };
    char CUnmannedTraderRegistItemInfo::GetStorageIndex()
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243b40L))(this);
    };
    char CUnmannedTraderRegistItemInfo::GetTableCode()
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243b00L))(this);
    };
    unsigned int CUnmannedTraderRegistItemInfo::GetTax()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140360160L))(this);
    };
    unsigned int CUnmannedTraderRegistItemInfo::GetU()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243b80L))(this);
    };
    bool CUnmannedTraderRegistItemInfo::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140360290L))(this);
    };
    bool CUnmannedTraderRegistItemInfo::IsOverRegistTime()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x14035fc40L))(this);
    };
    bool CUnmannedTraderRegistItemInfo::IsRegist()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140243c20L))(this);
    };
    bool CUnmannedTraderRegistItemInfo::IsSellUpdateWait()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x14035fe90L))(this);
    };
    bool CUnmannedTraderRegistItemInfo::IsSellWait()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x140352fc0L))(this);
    };
    bool CUnmannedTraderRegistItemInfo::IsWaitNoitfyClose()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        return (org_ptr(0x14035ff00L))(this);
    };
    void CUnmannedTraderRegistItemInfo::ReRegistItem(unsigned int dwPrice)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*, unsigned int);
        (org_ptr(0x140360770L))(this, dwPrice);
    };
    void CUnmannedTraderRegistItemInfo::RegistItem(unsigned int dwRegistSerial, uint16_t wItemSerial, unsigned int dwETSerialNumber, unsigned int dwPrice, char bySellTurm, char byTableCode, uint16_t wItemIndex, char byStorageIndex, uint64_t dwD, unsigned int dwU, bool bInserted)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*, unsigned int, uint16_t, unsigned int, unsigned int, char, char, uint16_t, char, uint64_t, unsigned int, bool);
        (org_ptr(0x1403605b0L))(this, dwRegistSerial, wItemSerial, dwETSerialNumber, dwPrice, bySellTurm, byTableCode, wItemIndex, byStorageIndex, dwD, dwU, bInserted);
    };
    void CUnmannedTraderRegistItemInfo::RepriceItem(unsigned int dwPrice)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*, unsigned int);
        (org_ptr(0x140360810L))(this, dwPrice);
    };
    void CUnmannedTraderRegistItemInfo::SellComplete(unsigned int dwPrice, unsigned int dwBuyerSerial, unsigned int dwTax, int64_t tResultTime, char* wszBuyerName, char* szBuyerAccount)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*, unsigned int, unsigned int, unsigned int, int64_t, char*, char*);
        (org_ptr(0x14035f990L))(this, dwPrice, dwBuyerSerial, dwTax, tResultTime, wszBuyerName, szBuyerAccount);
    };
    char CUnmannedTraderRegistItemInfo::SellWaitItem(uint16_t wInx, struct CLogFile* pkLogger, int64_t tResultTime, char* byStorageInx)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*, uint16_t, struct CLogFile*, int64_t, char*);
        return (org_ptr(0x140352200L))(this, wInx, pkLogger, tResultTime, byStorageInx);
    };
    bool CUnmannedTraderRegistItemInfo::Set(uint16_t wInx, char byInvenIndex, unsigned int uiInx, struct _TRADE_DB_BASE* kInfo, struct CLogFile* pkLogger)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*, uint16_t, char, unsigned int, struct _TRADE_DB_BASE*, struct CLogFile*);
        return (org_ptr(0x140351eb0L))(this, wInx, byInvenIndex, uiInx, kInfo, pkLogger);
    };
    void CUnmannedTraderRegistItemInfo::SetOverRegistTime()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        (org_ptr(0x14035fa80L))(this);
    };
    bool CUnmannedTraderRegistItemInfo::SetState(char byState)
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*, char);
        return (org_ptr(0x14035f850L))(this, byState);
    };
    CUnmannedTraderRegistItemInfo::~CUnmannedTraderRegistItemInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        (org_ptr(0x140351e30L))(this);
    };
    void CUnmannedTraderRegistItemInfo::dtor_CUnmannedTraderRegistItemInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRegistItemInfo*);
        (org_ptr(0x140351e30L))(this);
    };
END_ATF_NAMESPACE
