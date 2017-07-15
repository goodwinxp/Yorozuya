#include <GUILD_BATTLE__CGuildBattleRankManager.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CGuildBattleRankManager::CGuildBattleRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*);
        (org_ptr(0x1403ca2f0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleRankManager::ctor_CGuildBattleRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*);
        (org_ptr(0x1403ca2f0L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleRankManager::CheckRecord(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*, unsigned int);
        return (org_ptr(0x1403cb7c0L))(this, dwGuildSerial);
    };
    void GUILD_BATTLE::CGuildBattleRankManager::CleanUp()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*);
        (org_ptr(0x1403cb3f0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleRankManager::Clear(char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*, char);
        (org_ptr(0x1403cb530L))(this, byRace);
    };
    void GUILD_BATTLE::CGuildBattleRankManager::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*);
        (org_ptr(0x1403cb4b0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleRankManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403ca430L))();
    };
    bool GUILD_BATTLE::CGuildBattleRankManager::Find(char byRace, unsigned int dwGuildSerial, int* iFindInx, char* byFindPage)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*, char, unsigned int, int*, char*);
        return (org_ptr(0x1403cb6f0L))(this, byRace, dwGuildSerial, iFindInx, byFindPage);
    };
    bool GUILD_BATTLE::CGuildBattleRankManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*);
        return (org_ptr(0x1403ca4b0L))(this);
    };
    struct GUILD_BATTLE::CGuildBattleRankManager* GUILD_BATTLE::CGuildBattleRankManager::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleRankManager* (WINAPIV*)();
        return (org_ptr(0x1403ca370L))();
    };
    bool GUILD_BATTLE::CGuildBattleRankManager::Load(char byRace)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*, char);
        return (org_ptr(0x1403cb820L))(this, byRace);
    };
    bool GUILD_BATTLE::CGuildBattleRankManager::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*);
        return (org_ptr(0x1403ca610L))(this);
    };
    void GUILD_BATTLE::CGuildBattleRankManager::PushClearGuildBattleRank()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*);
        (org_ptr(0x1403cb380L))(this);
    };
    void GUILD_BATTLE::CGuildBattleRankManager::PushCreateGuildBattleRankTable()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*);
        (org_ptr(0x1403cb250L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleRankManager::SelectGuildBattleRankList(char byRace, char* pOutData)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*, char, char*);
        return (org_ptr(0x1403caf70L))(this, byRace, pOutData);
    };
    void GUILD_BATTLE::CGuildBattleRankManager::Send(int n, char bySelfRace, unsigned int dwCurVer, char byTabRace, char byPage, unsigned int dwGuildSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*, int, char, unsigned int, char, char, unsigned int);
        (org_ptr(0x1403ca9c0L))(this, n, bySelfRace, dwCurVer, byTabRace, byPage, dwGuildSerial);
    };
    bool GUILD_BATTLE::CGuildBattleRankManager::Update(char byRace, char* pLoadData)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*, char, char*);
        return (org_ptr(0x1403ca680L))(this, byRace, pLoadData);
    };
    bool GUILD_BATTLE::CGuildBattleRankManager::UpdateDraw(char by1PRace, unsigned int dw1PGuildSerial, char by2PRace, unsigned int dw2PGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*, char, unsigned int, char, unsigned int);
        return (org_ptr(0x1403cb120L))(this, by1PRace, dw1PGuildSerial, by2PRace, dw2PGuildSerial);
    };
    bool GUILD_BATTLE::CGuildBattleRankManager::UpdateWinLose(char byWinRace, unsigned int dwWinGuildSerial, char byLoseRace, unsigned int dwLoseGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*, char, unsigned int, char, unsigned int);
        return (org_ptr(0x1403caff0L))(this, byWinRace, dwWinGuildSerial, byLoseRace, dwLoseGuildSerial);
    };
    GUILD_BATTLE::CGuildBattleRankManager::~CGuildBattleRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*);
        (org_ptr(0x1403ca330L))(this);
    };
    void GUILD_BATTLE::CGuildBattleRankManager::dtor_CGuildBattleRankManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRankManager*);
        (org_ptr(0x1403ca330L))(this);
    };
END_ATF_NAMESPACE
