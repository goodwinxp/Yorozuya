#include <GUILD_BATTLE__CNormalGuildBattleStateReturn.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateReturn::CNormalGuildBattleStateReturn()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReturn*);
        (org_ptr(0x1403f0e10L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateReturn::ctor_CNormalGuildBattleStateReturn()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReturn*);
        (org_ptr(0x1403f0e10L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateReturn::Fin(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReturn*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f0e60L))(this, pkBattle);
    };
    ATL::CTimeSpan* GUILD_BATTLE::CNormalGuildBattleStateReturn::GetTerm(ATL::CTimeSpan* result)
    {
        using org_ptr = ATL::CTimeSpan* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReturn*, ATL::CTimeSpan*);
        return (org_ptr(0x140080220L))(this, result);
    };
    GUILD_BATTLE::CNormalGuildBattleStateReturn::~CNormalGuildBattleStateReturn()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReturn*);
        (org_ptr(0x1400801c0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateReturn::dtor_CNormalGuildBattleStateReturn()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateReturn*);
        (org_ptr(0x1400801c0L))(this);
    };
END_ATF_NAMESPACE
