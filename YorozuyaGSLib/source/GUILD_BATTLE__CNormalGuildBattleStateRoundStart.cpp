#include <GUILD_BATTLE__CNormalGuildBattleStateRoundStart.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateRoundStart::CNormalGuildBattleStateRoundStart()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart*);
        (org_ptr(0x1403f1350L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRoundStart::ctor_CNormalGuildBattleStateRoundStart()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart*);
        (org_ptr(0x1403f1350L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRoundStart::Enter(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f1550L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRoundStart::Fin(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f1660L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRoundStart::Loop(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f15e0L))(this, pkBattle);
    };
    GUILD_BATTLE::CNormalGuildBattleStateRoundStart::~CNormalGuildBattleStateRoundStart()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart*);
        (org_ptr(0x1403f1470L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRoundStart::dtor_CNormalGuildBattleStateRoundStart()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundStart*);
        (org_ptr(0x1403f1470L))(this);
    };
END_ATF_NAMESPACE
