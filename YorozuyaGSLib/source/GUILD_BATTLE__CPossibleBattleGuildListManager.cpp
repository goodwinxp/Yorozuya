#include <GUILD_BATTLE__CPossibleBattleGuildListManager.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CPossibleBattleGuildListManager::CPossibleBattleGuildListManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*);
        (org_ptr(0x1403c9530L))(this);
    };
    void GUILD_BATTLE::CPossibleBattleGuildListManager::ctor_CPossibleBattleGuildListManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*);
        (org_ptr(0x1403c9530L))(this);
    };
    void GUILD_BATTLE::CPossibleBattleGuildListManager::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*);
        (org_ptr(0x1403d98e0L))(this);
    };
    void GUILD_BATTLE::CPossibleBattleGuildListManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403c9710L))();
    };
    void GUILD_BATTLE::CPossibleBattleGuildListManager::DoDayChangedWork()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*);
        (org_ptr(0x1403c9ae0L))(this);
    };
    bool GUILD_BATTLE::CPossibleBattleGuildListManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*);
        return (org_ptr(0x1403c9790L))(this);
    };
    struct GUILD_BATTLE::CPossibleBattleGuildListManager* GUILD_BATTLE::CPossibleBattleGuildListManager::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CPossibleBattleGuildListManager* (WINAPIV*)();
        return (org_ptr(0x1403c9650L))();
    };
    bool GUILD_BATTLE::CPossibleBattleGuildListManager::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*);
        return (org_ptr(0x1403c99f0L))(this);
    };
    bool GUILD_BATTLE::CPossibleBattleGuildListManager::MakePage(char byRace, char ucPage, uint16_t* wLastGuildInx)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*, char, char, uint16_t*);
        return (org_ptr(0x1403c9d70L))(this, byRace, ucPage, wLastGuildInx);
    };
    void GUILD_BATTLE::CPossibleBattleGuildListManager::Send(int n, char byRace, char byPage, unsigned int dwVer)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*, int, char, char, unsigned int);
        (org_ptr(0x1403d9990L))(this, n, byRace, byPage, dwVer);
    };
    void GUILD_BATTLE::CPossibleBattleGuildListManager::SendErrorResult(int n, char byRet)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*, int, char);
        (org_ptr(0x1403ca260L))(this, n, byRet);
    };
    void GUILD_BATTLE::CPossibleBattleGuildListManager::SendFirst(int n, char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*, int, char);
        (org_ptr(0x1403d9920L))(this, n, byRace);
    };
    char GUILD_BATTLE::CPossibleBattleGuildListManager::SendInfo(int n, char byRace, char byPage, unsigned int dwVer)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*, int, char, char, unsigned int);
        return (org_ptr(0x1403ca110L))(this, n, byRace, byPage, dwVer);
    };
    void GUILD_BATTLE::CPossibleBattleGuildListManager::UpdateGuildList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*);
        (org_ptr(0x1403c9b90L))(this);
    };
    GUILD_BATTLE::CPossibleBattleGuildListManager::~CPossibleBattleGuildListManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*);
        (org_ptr(0x1403c9580L))(this);
    };
    void GUILD_BATTLE::CPossibleBattleGuildListManager::dtor_CPossibleBattleGuildListManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CPossibleBattleGuildListManager*);
        (org_ptr(0x1403c9580L))(this);
    };
END_ATF_NAMESPACE
