#include <GUILD_BATTLE__CNormalGuildBattleStateListPool.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateListPool::CNormalGuildBattleStateListPool()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateListPool*);
        (org_ptr(0x1403f22b0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateListPool::ctor_CNormalGuildBattleStateListPool()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateListPool*);
        (org_ptr(0x1403f22b0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateListPool::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateListPool*);
        (org_ptr(0x1403f2640L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateListPool::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403f2430L))();
    };
    struct GUILD_BATTLE::CNormalGuildBattleStateList* GUILD_BATTLE::CNormalGuildBattleStateListPool::Get(unsigned int dwID)
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleStateList* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateListPool*, unsigned int);
        return (org_ptr(0x1403f26d0L))(this, dwID);
    };
    bool GUILD_BATTLE::CNormalGuildBattleStateListPool::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateListPool*);
        return (org_ptr(0x1403f24b0L))(this);
    };
    struct GUILD_BATTLE::CNormalGuildBattleStateListPool* GUILD_BATTLE::CNormalGuildBattleStateListPool::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CNormalGuildBattleStateListPool* (WINAPIV*)();
        return (org_ptr(0x1403f2370L))();
    };
    GUILD_BATTLE::CNormalGuildBattleStateListPool::~CNormalGuildBattleStateListPool()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateListPool*);
        (org_ptr(0x1403f22e0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateListPool::dtor_CNormalGuildBattleStateListPool()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateListPool*);
        (org_ptr(0x1403f22e0L))(this);
    };
END_ATF_NAMESPACE
