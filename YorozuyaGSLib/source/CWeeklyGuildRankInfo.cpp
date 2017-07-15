#include <CWeeklyGuildRankInfo.hpp>


START_ATF_NAMESPACE
    CWeeklyGuildRankInfo::CWeeklyGuildRankInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        (org_ptr(0x1402ca640L))(this);
    };
    void CWeeklyGuildRankInfo::ctor_CWeeklyGuildRankInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        (org_ptr(0x1402ca640L))(this);
    };
    bool CWeeklyGuildRankInfo::CheckEmpty(struct _pvppoint_guild_rank_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankInfo*, struct _pvppoint_guild_rank_info*);
        return (org_ptr(0x1402cb7d0L))(this, pkInfo);
    };
    void CWeeklyGuildRankInfo::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        (org_ptr(0x1402cf820L))(this);
    };
    void CWeeklyGuildRankInfo::ClearOwner()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        (org_ptr(0x1402caf30L))(this);
    };
    void CWeeklyGuildRankInfo::ClearRank()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        (org_ptr(0x1402caac0L))(this);
    };
    int CWeeklyGuildRankInfo::Find(char byRace, unsigned int dwGuildSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CWeeklyGuildRankInfo*, char, unsigned int);
        return (org_ptr(0x1402cb700L))(this, byRace, dwGuildSerial);
    };
    struct CGuild* CWeeklyGuildRankInfo::GetCurOwnerGuild(char byRace, char byNth)
    {
        using org_ptr = struct CGuild* (WINAPIV*)(struct CWeeklyGuildRankInfo*, char, char);
        return (org_ptr(0x1402cb630L))(this, byRace, byNth);
    };
    struct CGuild* CWeeklyGuildRankInfo::GetOwnerGuild(char byRace, char byNth)
    {
        using org_ptr = struct CGuild* (WINAPIV*)(struct CWeeklyGuildRankInfo*, char, char);
        return (org_ptr(0x1402cbd80L))(this, byRace, byNth);
    };
    struct CGuild* CWeeklyGuildRankInfo::GetPrevOwnerGuild(char byRace, char byNth)
    {
        using org_ptr = struct CGuild* (WINAPIV*)(struct CWeeklyGuildRankInfo*, char, char);
        return (org_ptr(0x1402cb560L))(this, byRace, byNth);
    };
    bool CWeeklyGuildRankInfo::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        return (org_ptr(0x1402ca8e0L))(this);
    };
    bool CWeeklyGuildRankInfo::IsNoDataPrev()
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        return (org_ptr(0x1402cfd60L))(this);
    };
    bool CWeeklyGuildRankInfo::IsNoDataToday()
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        return (org_ptr(0x1402cfb90L))(this);
    };
    bool CWeeklyGuildRankInfo::Load(struct _pvppoint_guild_rank_info* pkInfo, bool* bNoData)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankInfo*, struct _pvppoint_guild_rank_info*, bool*);
        return (org_ptr(0x1402cb890L))(this, pkInfo, bNoData);
    };
    bool CWeeklyGuildRankInfo::LoadOwner(struct _weeklyguildrank_owner_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankInfo*, struct _weeklyguildrank_owner_info*);
        return (org_ptr(0x1402cac50L))(this, pkInfo);
    };
    bool CWeeklyGuildRankInfo::LoadPrev(struct _pvppoint_guild_rank_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankInfo*, struct _pvppoint_guild_rank_info*);
        return (org_ptr(0x1402cfd80L))(this, pkInfo);
    };
    bool CWeeklyGuildRankInfo::LoadToday(struct _pvppoint_guild_rank_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankInfo*, struct _pvppoint_guild_rank_info*);
        return (org_ptr(0x1402cfb30L))(this, pkInfo);
    };
    void CWeeklyGuildRankInfo::Send(unsigned int dwVer, int n, char byTabRace, char bySelfRace, unsigned int dwGuildSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankInfo*, unsigned int, int, char, char, unsigned int);
        (org_ptr(0x1402cafd0L))(this, dwVer, n, byTabRace, bySelfRace, dwGuildSerial);
    };
    void CWeeklyGuildRankInfo::SetNoDataFlagToday()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        (org_ptr(0x1402cfb10L))(this);
    };
    bool CWeeklyGuildRankInfo::Update(struct _pvppoint_guild_rank_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankInfo*, struct _pvppoint_guild_rank_info*);
        return (org_ptr(0x1402cfbb0L))(this, pkInfo);
    };
    bool CWeeklyGuildRankInfo::UpdateOwner(struct _weeklyguildrank_owner_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankInfo*, struct _weeklyguildrank_owner_info*);
        return (org_ptr(0x1402cfcf0L))(this, pkInfo);
    };
    CWeeklyGuildRankInfo::~CWeeklyGuildRankInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        (org_ptr(0x1402ca720L))(this);
    };
    void CWeeklyGuildRankInfo::dtor_CWeeklyGuildRankInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankInfo*);
        (org_ptr(0x1402ca720L))(this);
    };
END_ATF_NAMESPACE
