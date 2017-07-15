#include <CWeeklyGuildRankManager.hpp>


START_ATF_NAMESPACE
    CWeeklyGuildRankManager::CWeeklyGuildRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*);
        (org_ptr(0x1402cc280L))(this);
    };
    void CWeeklyGuildRankManager::ctor_CWeeklyGuildRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*);
        (org_ptr(0x1402cc280L))(this);
    };
    void CWeeklyGuildRankManager::CompleteLoadeTodayRank(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*, char, char*);
        (org_ptr(0x1402cca60L))(this, byRet, pLoadData);
    };
    void CWeeklyGuildRankManager::CompleteUpdateClear(char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*, char);
        (org_ptr(0x1402ccd30L))(this, byRet);
    };
    void CWeeklyGuildRankManager::CompleteUpdateWeeklyOwner(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*, char, char*);
        (org_ptr(0x1402ccc10L))(this, byRet, pLoadData);
    };
    bool CWeeklyGuildRankManager::CreatePvpPointGuildRank(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*, char*);
        return (org_ptr(0x1402ce3a0L))(this, szDate);
    };
    void CWeeklyGuildRankManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1402cc3a0L))();
    };
    struct CGuild* CWeeklyGuildRankManager::GetPrevOwnerGuild(char byRace, char byNth)
    {
        using org_ptr = struct CGuild* (WINAPIV*)(struct CWeeklyGuildRankManager*, char, char);
        return (org_ptr(0x1402d78d0L))(this, byRace, byNth);
    };
    void CWeeklyGuildRankManager::GetPrevRankDate(char* szDate, int iBuffSize)
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*, char*, int);
        (org_ptr(0x1402cd690L))(this, szDate, iBuffSize);
    };
    void CWeeklyGuildRankManager::GetTodayRankDate(char* szDate, int iBuffSize)
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*, char*, int);
        (org_ptr(0x1402cd920L))(this, szDate, iBuffSize);
    };
    bool CWeeklyGuildRankManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*);
        return (org_ptr(0x1402cc420L))(this);
    };
    bool CWeeklyGuildRankManager::InitNextSetOwnerDate()
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*);
        return (org_ptr(0x1402cd250L))(this);
    };
    bool CWeeklyGuildRankManager::InsertDefaultWeeklyPvpPointSumRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*);
        return (org_ptr(0x1402ce0e0L))(this);
    };
    bool CWeeklyGuildRankManager::InsertSettlementOwner(struct CRFWorldDatabase* pkWorldDB, char* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*, struct CRFWorldDatabase*, char*);
        return (org_ptr(0x1402cce80L))(this, pkWorldDB, pData);
    };
    struct CWeeklyGuildRankManager* CWeeklyGuildRankManager::Instance()
    {
        using org_ptr = struct CWeeklyGuildRankManager* (WINAPIV*)();
        return (org_ptr(0x1402cc2e0L))();
    };
    bool CWeeklyGuildRankManager::IsEmptyRank(struct _pvppoint_guild_rank_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*, struct _pvppoint_guild_rank_info*);
        return (org_ptr(0x1402cdb80L))(this, pkInfo);
    };
    bool CWeeklyGuildRankManager::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*);
        return (org_ptr(0x1402cc490L))(this);
    };
    int64_t CWeeklyGuildRankManager::LoadINILastRankTime()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CWeeklyGuildRankManager*);
        return (org_ptr(0x1402cd0f0L))(this);
    };
    bool CWeeklyGuildRankManager::LoadPrevOwner()
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*);
        return (org_ptr(0x1402cd4f0L))(this);
    };
    bool CWeeklyGuildRankManager::LoadPrevTable(char* szDate, struct _pvppoint_guild_rank_info* kInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*, char*, struct _pvppoint_guild_rank_info*);
        return (org_ptr(0x1402ce140L))(this, szDate, kInfo);
    };
    void CWeeklyGuildRankManager::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*);
        (org_ptr(0x1402cc700L))(this);
    };
    void CWeeklyGuildRankManager::OrderRank(struct _pvppoint_guild_rank_info* pkInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*, struct _pvppoint_guild_rank_info*);
        (org_ptr(0x1402cdc00L))(this, pkInfo);
    };
    bool CWeeklyGuildRankManager::PushDQSIncWeeklyPvpPointSum(unsigned int dwGuildSerial, long double dPoint)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*, unsigned int, long double);
        return (org_ptr(0x1402ccda0L))(this, dwGuildSerial, dPoint);
    };
    void CWeeklyGuildRankManager::PushSettlementOwnerDBLog(char* pInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*, char*);
        (org_ptr(0x1402cde90L))(this, pInfo);
    };
    bool CWeeklyGuildRankManager::SaveINI()
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*);
        return (org_ptr(0x1402cd9d0L))(this);
    };
    bool CWeeklyGuildRankManager::SelectOwnerGuild(char* szDate, struct _weeklyguildrank_owner_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*, char*, struct _weeklyguildrank_owner_info*);
        return (org_ptr(0x1402ce690L))(this, szDate, pkInfo);
    };
    void CWeeklyGuildRankManager::Send(unsigned int dwVer, char byTabRace, struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*, unsigned int, char, struct CPlayer*);
        (org_ptr(0x1402cd030L))(this, dwVer, byTabRace, pkPlayer);
    };
    void CWeeklyGuildRankManager::SetNextRankDate()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*);
        (org_ptr(0x1402cd3f0L))(this);
    };
    void CWeeklyGuildRankManager::SetSettlementAreaManageOwnerGuild()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*);
        (org_ptr(0x1402cdd60L))(this);
    };
    bool CWeeklyGuildRankManager::UpdateOwnerGuild(char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*, char*);
        return (org_ptr(0x1402ce600L))(this, szDate);
    };
    bool CWeeklyGuildRankManager::UpdateRankDBRecord(char* szDate, struct _pvppoint_guild_rank_info* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*, char*, struct _pvppoint_guild_rank_info*);
        return (org_ptr(0x1402ce4e0L))(this, szDate, pkInfo);
    };
    bool CWeeklyGuildRankManager::UpdateTodayRank(char* pLoadData)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*, char*);
        return (org_ptr(0x1402cc7f0L))(this, pLoadData);
    };
    int CWeeklyGuildRankManager::UpdateTodayTable(char* szDate, struct _pvppoint_guild_rank_info* pkInfo)
    {
        using org_ptr = int (WINAPIV*)(struct CWeeklyGuildRankManager*, char*, struct _pvppoint_guild_rank_info*);
        return (org_ptr(0x1402ce250L))(this, szDate, pkInfo);
    };
    bool CWeeklyGuildRankManager::UpdateWeeklyOwner(char* pLoadData)
    {
        using org_ptr = bool (WINAPIV*)(struct CWeeklyGuildRankManager*, char*);
        return (org_ptr(0x1402cc950L))(this, pLoadData);
    };
    CWeeklyGuildRankManager::~CWeeklyGuildRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*);
        (org_ptr(0x1402cfac0L))(this);
    };
    void CWeeklyGuildRankManager::dtor_CWeeklyGuildRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct CWeeklyGuildRankManager*);
        (org_ptr(0x1402cfac0L))(this);
    };
END_ATF_NAMESPACE
