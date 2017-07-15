#include <GUILD_BATTLE__CNormalGuildBattleStateList.hpp>


START_ATF_NAMESPACE
    bool GUILD_BATTLE::CNormalGuildBattleStateList::AdvanceRegenState()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        return (org_ptr(0x1403eb220L))(this);
    };
    GUILD_BATTLE::CNormalGuildBattleStateList::CNormalGuildBattleStateList()
        : CGuildBattleStateList(7, 0, 1)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        (org_ptr(0x1403f1e80L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateList::ctor_CNormalGuildBattleStateList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        (org_ptr(0x1403f1e80L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleStateList::IsInBattle()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        return (org_ptr(0x14007c0f0L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleStateList::IsInBattleRegenState()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        return (org_ptr(0x1403d9500L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleStateList::IsReadyOrCountState()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        return (org_ptr(0x14007c020L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateList::SetBattleTime(struct ATL::CTimeSpan kTime)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*, struct ATL::CTimeSpan);
        (org_ptr(0x1403d9070L))(this, kTime);
    };
    bool GUILD_BATTLE::CNormalGuildBattleStateList::SetGotoRegenState()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        return (org_ptr(0x1403f3290L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateList::SetNextState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        (org_ptr(0x140080340L))(this);
    };
    GUILD_BATTLE::CNormalGuildBattleStateList::~CNormalGuildBattleStateList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        (org_ptr(0x14007f850L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateList::dtor_CNormalGuildBattleStateList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateList*);
        (org_ptr(0x14007f850L))(this);
    };
    
END_ATF_NAMESPACE
