#include <GUILD_BATTLE__CNormalGuildBattleStateCountDown.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateCountDown::CNormalGuildBattleStateCountDown()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateCountDown*);
        (org_ptr(0x1403f0820L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateCountDown::ctor_CNormalGuildBattleStateCountDown()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateCountDown*);
        (org_ptr(0x1403f0820L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateCountDown::Enter(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateCountDown*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f0870L))(this, pkBattle);
    };
    ATL::CTimeSpan* GUILD_BATTLE::CNormalGuildBattleStateCountDown::GetTerm(ATL::CTimeSpan* result)
    {
        using org_ptr = ATL::CTimeSpan* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateCountDown*, ATL::CTimeSpan*);
        return (org_ptr(0x14007fdc0L))(this, result);
    };
    GUILD_BATTLE::CNormalGuildBattleStateCountDown::~CNormalGuildBattleStateCountDown()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateCountDown*);
        (org_ptr(0x14007fd60L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateCountDown::dtor_CNormalGuildBattleStateCountDown()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateCountDown*);
        (org_ptr(0x14007fd60L))(this);
    };
END_ATF_NAMESPACE
