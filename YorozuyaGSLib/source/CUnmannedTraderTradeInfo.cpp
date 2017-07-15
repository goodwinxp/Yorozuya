#include <CUnmannedTraderTradeInfo.hpp>


START_ATF_NAMESPACE
    void CUnmannedTraderTradeInfo::AddIncome(unsigned int dwOriPrice)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*, unsigned int);
        (org_ptr(0x140366ec0L))(this, dwOriPrice);
    };
    CUnmannedTraderTradeInfo::CUnmannedTraderTradeInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*);
        (org_ptr(0x1403517a0L))(this);
    };
    void CUnmannedTraderTradeInfo::ctor_CUnmannedTraderTradeInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*);
        (org_ptr(0x1403517a0L))(this);
    };
    bool CUnmannedTraderTradeInfo::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderTradeInfo*);
        return (org_ptr(0x140391f90L))(this);
    };
    void CUnmannedTraderTradeInfo::LoadINI()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*);
        (org_ptr(0x140392250L))(this);
    };
    void CUnmannedTraderTradeInfo::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*);
        (org_ptr(0x140392080L))(this);
    };
    void CUnmannedTraderTradeInfo::NotifyIncome(char byRace, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*, char, uint16_t);
        (org_ptr(0x140392110L))(this, byRace, wIndex);
    };
    void CUnmannedTraderTradeInfo::NotifyIncome()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*);
        (org_ptr(0x1403924b0L))(this);
    };
    void CUnmannedTraderTradeInfo::SaveINI()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*);
        (org_ptr(0x140392380L))(this);
    };
    void CUnmannedTraderTradeInfo::UpdateIncome()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*);
        (org_ptr(0x140392700L))(this);
    };
    CUnmannedTraderTradeInfo::~CUnmannedTraderTradeInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*);
        (org_ptr(0x140391ef0L))(this);
    };
    void CUnmannedTraderTradeInfo::dtor_CUnmannedTraderTradeInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderTradeInfo*);
        (org_ptr(0x140391ef0L))(this);
    };
END_ATF_NAMESPACE
