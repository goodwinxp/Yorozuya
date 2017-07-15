#include <CTotalGuildRankInfo.hpp>


START_ATF_NAMESPACE
    CTotalGuildRankInfo::CTotalGuildRankInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankInfo*);
        (org_ptr(0x1402c86e0L))(this);
    };
    void CTotalGuildRankInfo::ctor_CTotalGuildRankInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankInfo*);
        (org_ptr(0x1402c86e0L))(this);
    };
    void CTotalGuildRankInfo::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankInfo*);
        (org_ptr(0x1402c93d0L))(this);
    };
    int CTotalGuildRankInfo::Find(char byRace, unsigned int dwGuildSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CTotalGuildRankInfo*, char, unsigned int);
        return (org_ptr(0x1402c9300L))(this, byRace, dwGuildSerial);
    };
    bool CTotalGuildRankInfo::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CTotalGuildRankInfo*);
        return (org_ptr(0x1402c8870L))(this);
    };
    bool CTotalGuildRankInfo::Load(struct _total_guild_rank_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CTotalGuildRankInfo*, struct _total_guild_rank_info*);
        return (org_ptr(0x1402c8a20L))(this, pkInfo);
    };
    void CTotalGuildRankInfo::Send(unsigned int dwVer, int n, char byTabRace, char bySelfRace, unsigned int dwGuildSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankInfo*, unsigned int, int, char, char, unsigned int);
        (org_ptr(0x1402c8e60L))(this, dwVer, n, byTabRace, bySelfRace, dwGuildSerial);
    };
    void CTotalGuildRankInfo::SetNoDataFlag()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankInfo*);
        (org_ptr(0x1402ca480L))(this);
    };
    bool CTotalGuildRankInfo::Update(struct _total_guild_rank_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CTotalGuildRankInfo*, struct _total_guild_rank_info*);
        return (org_ptr(0x1402ca4a0L))(this, pkInfo);
    };
    CTotalGuildRankInfo::~CTotalGuildRankInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankInfo*);
        (org_ptr(0x1402c8740L))(this);
    };
    void CTotalGuildRankInfo::dtor_CTotalGuildRankInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankInfo*);
        (org_ptr(0x1402c8740L))(this);
    };
END_ATF_NAMESPACE
