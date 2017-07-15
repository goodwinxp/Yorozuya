#include <GUILD_BATTLE__CNormalGuildBattleStateRound.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateRound::CNormalGuildBattleStateRound()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*);
        (org_ptr(0x1403f0fd0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRound::ctor_CNormalGuildBattleStateRound()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*);
        (org_ptr(0x1403f0fd0L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRound::Enter(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*, struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x1403f1020L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRound::Enter(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f3180L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRound::Fin(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*, struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x1403f1100L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRound::Fin(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f31c0L))(this, pkBattle);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRound::Log(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle, char* szFormat)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*, struct GUILD_BATTLE::CNormalGuildBattle*, char*);
        (org_ptr(0x1403f1170L))(this, pkBattle, szFormat);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRound::Loop(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*, struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x1403f1090L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRound::Loop(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f31a0L))(this, pkBattle);
    };
    GUILD_BATTLE::CNormalGuildBattleStateRound::~CNormalGuildBattleStateRound()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*);
        (org_ptr(0x1403f31e0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRound::dtor_CNormalGuildBattleStateRound()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRound*);
        (org_ptr(0x1403f31e0L))(this);
    };
END_ATF_NAMESPACE
