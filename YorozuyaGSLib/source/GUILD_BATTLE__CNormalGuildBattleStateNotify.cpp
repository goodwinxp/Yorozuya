#include <GUILD_BATTLE__CNormalGuildBattleStateNotify.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateNotify::CNormalGuildBattleStateNotify()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateNotify*);
        (org_ptr(0x1403f06b0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateNotify::ctor_CNormalGuildBattleStateNotify()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateNotify*);
        (org_ptr(0x1403f06b0L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateNotify::Enter(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateNotify*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f0700L))(this, pkBattle);
    };
    ATL::CTimeSpan* GUILD_BATTLE::CNormalGuildBattleStateNotify::GetTerm(ATL::CTimeSpan* result)
    {
        using org_ptr = ATL::CTimeSpan* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateNotify*, ATL::CTimeSpan*);
        return (org_ptr(0x14007fc20L))(this, result);
    };
    GUILD_BATTLE::CNormalGuildBattleStateNotify::~CNormalGuildBattleStateNotify()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateNotify*);
        (org_ptr(0x14007faf0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateNotify::dtor_CNormalGuildBattleStateNotify()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateNotify*);
        (org_ptr(0x14007faf0L))(this);
    };
END_ATF_NAMESPACE
