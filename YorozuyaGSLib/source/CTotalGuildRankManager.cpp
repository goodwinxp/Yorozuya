#include <CTotalGuildRankManager.hpp>


START_ATF_NAMESPACE
    CTotalGuildRankManager::CTotalGuildRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankManager*);
        (org_ptr(0x1402c9550L))(this);
    };
    void CTotalGuildRankManager::ctor_CTotalGuildRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankManager*);
        (org_ptr(0x1402c9550L))(this);
    };
    void CTotalGuildRankManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1402c9660L))();
    };
    bool CTotalGuildRankManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CTotalGuildRankManager*);
        return (org_ptr(0x1402c96e0L))(this);
    };
    struct CTotalGuildRankManager* CTotalGuildRankManager::Instance()
    {
        using org_ptr = struct CTotalGuildRankManager* (WINAPIV*)();
        return (org_ptr(0x1402c95a0L))();
    };
    int CTotalGuildRankManager::Load(char byDayAfter, struct _total_guild_rank_info* pkInfo)
    {
        using org_ptr = int (WINAPIV*)(struct CTotalGuildRankManager*, char, struct _total_guild_rank_info*);
        return (org_ptr(0x1402c9a70L))(this, byDayAfter, pkInfo);
    };
    bool CTotalGuildRankManager::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CTotalGuildRankManager*);
        return (org_ptr(0x1402c9740L))(this);
    };
    void CTotalGuildRankManager::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankManager*);
        (org_ptr(0x1402c9820L))(this);
    };
    void CTotalGuildRankManager::OrderRank(struct _total_guild_rank_info* pkInfo)
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankManager*, struct _total_guild_rank_info*);
        (org_ptr(0x1402c9bf0L))(this, pkInfo);
    };
    void CTotalGuildRankManager::Send(unsigned int dwVer, char byTabRace, struct CPlayer* pkPlayer)
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankManager*, unsigned int, char, struct CPlayer*);
        (org_ptr(0x1402c99b0L))(this, dwVer, byTabRace, pkPlayer);
    };
    bool CTotalGuildRankManager::Update(char* pLoadData)
    {
        using org_ptr = bool (WINAPIV*)(struct CTotalGuildRankManager*, char*);
        return (org_ptr(0x1402c98b0L))(this, pLoadData);
    };
    void CTotalGuildRankManager::UpdateComlete(char byRet, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankManager*, char, char*);
        (org_ptr(0x1402c9910L))(this, byRet, pLoadData);
    };
    CTotalGuildRankManager::~CTotalGuildRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankManager*);
        (org_ptr(0x1402ca430L))(this);
    };
    void CTotalGuildRankManager::dtor_CTotalGuildRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct CTotalGuildRankManager*);
        (org_ptr(0x1402ca430L))(this);
    };
END_ATF_NAMESPACE
