#include <GUILD_BATTLE__CNormalGuildBattleStateReady.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateReady::CNormalGuildBattleStateReady()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReady*);
        (org_ptr(0x1403f0770L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateReady::ctor_CNormalGuildBattleStateReady()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReady*);
        (org_ptr(0x1403f0770L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateReady::Enter(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReady*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f07c0L))(this, pkBattle);
    };
    ATL::CTimeSpan* GUILD_BATTLE::CNormalGuildBattleStateReady::GetTerm(ATL::CTimeSpan* result)
    {
        using org_ptr = ATL::CTimeSpan* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReady*, ATL::CTimeSpan*);
        return (org_ptr(0x14007fcf0L))(this, result);
    };
    GUILD_BATTLE::CNormalGuildBattleStateReady::~CNormalGuildBattleStateReady()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReady*);
        (org_ptr(0x14007fc90L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateReady::dtor_CNormalGuildBattleStateReady()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReady*);
        (org_ptr(0x14007fc90L))(this);
    };
END_ATF_NAMESPACE
