#include <GUILD_BATTLE__CNormalGuildBattleStateInBattle.hpp>


START_ATF_NAMESPACE
    bool GUILD_BATTLE::CNormalGuildBattleStateInBattle::AdvanceRegenState()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*);
        return (org_ptr(0x1403eb290L))(this);
    };
    GUILD_BATTLE::CNormalGuildBattleStateInBattle::CNormalGuildBattleStateInBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*);
        (org_ptr(0x1403f0950L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateInBattle::ctor_CNormalGuildBattleStateInBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*);
        (org_ptr(0x1403f0950L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateInBattle::Enter(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f0a00L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateInBattle::Fin(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f0b50L))(this, pkBattle);
    };
    struct ATL::CTimeSpan* GUILD_BATTLE::CNormalGuildBattleStateInBattle::GetTerm(struct ATL::CTimeSpan* result)
    {
        using org_ptr = struct ATL::CTimeSpan* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*, struct ATL::CTimeSpan*);
        return (org_ptr(0x1400800d0L))(this, result);
    };
    bool GUILD_BATTLE::CNormalGuildBattleStateInBattle::IsInBattleRegenState()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*);
        return (org_ptr(0x1403d9570L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateInBattle::Loop(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*, struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x140080070L))(this, pkBattle);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateInBattle::SetBattleTime(struct ATL::CTimeSpan kTime)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*, struct ATL::CTimeSpan);
        (org_ptr(0x1403d90d0L))(this, kTime);
    };
    bool GUILD_BATTLE::CNormalGuildBattleStateInBattle::SetGotoRegenState()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*);
        return (org_ptr(0x1403f3300L))(this);
    };
    GUILD_BATTLE::CNormalGuildBattleStateInBattle::~CNormalGuildBattleStateInBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*);
        (org_ptr(0x14007fe30L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateInBattle::dtor_CNormalGuildBattleStateInBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle*);
        (org_ptr(0x14007fe30L))(this);
    };
END_ATF_NAMESPACE
