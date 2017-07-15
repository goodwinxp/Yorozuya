#include <BossSchedule.hpp>


START_ATF_NAMESPACE
    BossSchedule::BossSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule*);
        (org_ptr(0x14041b680L))(this);
    };
    void BossSchedule::ctor_BossSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule*);
        (org_ptr(0x14041b680L))(this);
    };
    struct ATL::CTime* BossSchedule::Make_LastTimeRespawnSystemTime(struct ATL::CTime* result, char* strTimeValue)
    {
        using org_ptr = struct ATL::CTime* (WINAPIV*)(struct ATL::CTime*, char*);
        return (org_ptr(0x14041a670L))(result, strTimeValue);
    };
    bool BossSchedule::Make_LastTimeRespawnSystemTimeString(char* strBuff, int nBuffSize)
    {
        using org_ptr = bool (WINAPIV*)(struct BossSchedule*, char*, int);
        return (org_ptr(0x14041a4b0L))(this, strBuff, nBuffSize);
    };
    uint16_t BossSchedule::Make_LiveCount(char* strTimeValue)
    {
        using org_ptr = uint16_t (WINAPIV*)(char*);
        return (org_ptr(0x14041a8c0L))(strTimeValue);
    };
    bool BossSchedule::Make_LiveCountString(char* strBuff, int nBuffSize)
    {
        using org_ptr = bool (WINAPIV*)(struct BossSchedule*, char*, int);
        return (org_ptr(0x14041a600L))(this, strBuff, nBuffSize);
    };
    void BossSchedule::Save_LastRespawnSystemTime(struct ATL::CTime* systime)
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule*, struct ATL::CTime*);
        (org_ptr(0x14041a250L))(this, systime);
    };
    void BossSchedule::Save_LiveCount(uint16_t wCount)
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule*, uint16_t);
        (org_ptr(0x14041a380L))(this, wCount);
    };
    BossSchedule::~BossSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule*);
        (org_ptr(0x14041a1f0L))(this);
    };
    void BossSchedule::dtor_BossSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct BossSchedule*);
        (org_ptr(0x14041a1f0L))(this);
    };
    
END_ATF_NAMESPACE
