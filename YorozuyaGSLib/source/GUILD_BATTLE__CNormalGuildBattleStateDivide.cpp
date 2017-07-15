#include <GUILD_BATTLE__CNormalGuildBattleStateDivide.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateDivide::CNormalGuildBattleStateDivide()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateDivide*);
        (org_ptr(0x1403f0d20L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateDivide::ctor_CNormalGuildBattleStateDivide()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateDivide*);
        (org_ptr(0x1403f0d20L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateDivide::Fin(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateDivide*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f0d70L))(this, pkBattle);
    };
    ATL::CTimeSpan* GUILD_BATTLE::CNormalGuildBattleStateDivide::GetTerm(ATL::CTimeSpan* result)
    {
        using org_ptr = ATL::CTimeSpan* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateDivide*, ATL::CTimeSpan*);
        return (org_ptr(0x140080160L))(this, result);
    };
    GUILD_BATTLE::CNormalGuildBattleStateDivide::~CNormalGuildBattleStateDivide()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateDivide*);
        (org_ptr(0x140080100L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateDivide::dtor_CNormalGuildBattleStateDivide()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateDivide*);
        (org_ptr(0x140080100L))(this);
    };
END_ATF_NAMESPACE
