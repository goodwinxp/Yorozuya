#include <MiningTicket.hpp>


START_ATF_NAMESPACE
    int MiningTicket::AuthLastCriTicket(uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
    {
        using org_ptr = int (WINAPIV*)(struct MiningTicket*, uint16_t, char, char, char, char);
        return (org_ptr(0x1400d01d0L))(this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime);
    };
    int MiningTicket::AuthLastMentalTicket(uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
    {
        using org_ptr = int (WINAPIV*)(struct MiningTicket*, uint16_t, char, char, char, char);
        return (org_ptr(0x1400cfdb0L))(this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime);
    };
    unsigned int MiningTicket::GetLastCriTicket()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct MiningTicket*);
        return (org_ptr(0x1400d0000L))(this);
    };
    unsigned int MiningTicket::GetLastMentalTicket()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct MiningTicket*);
        return (org_ptr(0x1400d0120L))(this);
    };
    void MiningTicket::Init()
    {
        using org_ptr = void (WINAPIV*)(struct MiningTicket*);
        (org_ptr(0x140073b60L))(this);
    };
    MiningTicket::MiningTicket()
    {
        using org_ptr = void (WINAPIV*)(struct MiningTicket*);
        (org_ptr(0x140073b10L))(this);
    };
    void MiningTicket::ctor_MiningTicket()
    {
        using org_ptr = void (WINAPIV*)(struct MiningTicket*);
        (org_ptr(0x140073b10L))(this);
    };
    void MiningTicket::SetLastCriTicket(unsigned int uiCriTicket)
    {
        using org_ptr = void (WINAPIV*)(struct MiningTicket*, unsigned int);
        (org_ptr(0x140078e90L))(this, uiCriTicket);
    };
    void MiningTicket::SetLastCriTicket(uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
    {
        using org_ptr = void (WINAPIV*)(struct MiningTicket*, uint16_t, char, char, char, char);
        (org_ptr(0x1400cff00L))(this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime);
    };
    void MiningTicket::SetLastMentalTicket(unsigned int uiMentalTicket)
    {
        using org_ptr = void (WINAPIV*)(struct MiningTicket*, unsigned int);
        (org_ptr(0x140078eb0L))(this, uiMentalTicket);
    };
    void MiningTicket::SetLastMentalTicket(uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
    {
        using org_ptr = void (WINAPIV*)(struct MiningTicket*, uint16_t, char, char, char, char);
        (org_ptr(0x1400d0020L))(this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime);
    };
    void MiningTicket::_AuthKeyTicket::Init()
    {
        using org_ptr = void (WINAPIV*)(struct MiningTicket::_AuthKeyTicket*);
        (org_ptr(0x140073bc0L))(this);
    };
    void MiningTicket::_AuthKeyTicket::Set(unsigned int uiSrc)
    {
        using org_ptr = void (WINAPIV*)(struct MiningTicket::_AuthKeyTicket*, unsigned int);
        (org_ptr(0x140078ed0L))(this, uiSrc);
    };
    void MiningTicket::_AuthKeyTicket::Set(uint16_t byYear, char byMonth, char byDay, char byHour, char byNumofTime)
    {
        using org_ptr = void (WINAPIV*)(struct MiningTicket::_AuthKeyTicket*, uint16_t, char, char, char, char);
        (org_ptr(0x1400a6ba0L))(this, byYear, byMonth, byDay, byHour, byNumofTime);
    };
END_ATF_NAMESPACE
