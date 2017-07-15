#include <CWeeklyGuildRankRecord.hpp>


START_ATF_NAMESPACE
    CWeeklyGuildRankRecord::CWeeklyGuildRankRecord()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankRecord*);
        (org_ptr(0x1402cf910L))(this);
    };
    void CWeeklyGuildRankRecord::ctor_CWeeklyGuildRankRecord()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankRecord*);
        (org_ptr(0x1402cf910L))(this);
    };
    void CWeeklyGuildRankRecord::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankRecord*);
        (org_ptr(0x1402ca510L))(this);
    };
    CWeeklyGuildRankRecord::~CWeeklyGuildRankRecord()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankRecord*);
        (org_ptr(0x1402cf900L))(this);
    };
    void CWeeklyGuildRankRecord::dtor_CWeeklyGuildRankRecord()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankRecord*);
        (org_ptr(0x1402cf900L))(this);
    };
END_ATF_NAMESPACE
