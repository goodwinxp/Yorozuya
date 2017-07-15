#include <CWeeklyGuildRankOwnerInfo.hpp>


START_ATF_NAMESPACE
    CWeeklyGuildRankOwnerInfo::CWeeklyGuildRankOwnerInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankOwnerInfo*);
        (org_ptr(0x1402cf7c0L))(this);
    };
    void CWeeklyGuildRankOwnerInfo::ctor_CWeeklyGuildRankOwnerInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankOwnerInfo*);
        (org_ptr(0x1402cf7c0L))(this);
    };
    void CWeeklyGuildRankOwnerInfo::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankOwnerInfo*);
        (org_ptr(0x1402ca5a0L))(this);
    };
    bool CWeeklyGuildRankOwnerInfo::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankOwnerInfo*);
        return (org_ptr(0x1402cf9f0L))(this);
    };
    CWeeklyGuildRankOwnerInfo::~CWeeklyGuildRankOwnerInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankOwnerInfo*);
        (org_ptr(0x1402cf810L))(this);
    };
    void CWeeklyGuildRankOwnerInfo::dtor_CWeeklyGuildRankOwnerInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankOwnerInfo*);
        (org_ptr(0x1402cf810L))(this);
    };
END_ATF_NAMESPACE
