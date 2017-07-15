#include <GUILD_BATTLE__CNormalGuildBattleStateRoundProcess.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::CNormalGuildBattleStateRoundProcess()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess*);
        (org_ptr(0x1403f1770L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::ctor_CNormalGuildBattleStateRoundProcess()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess*);
        (org_ptr(0x1403f1770L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::Enter(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f1970L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::Loop(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f1a00L))(this, pkBattle);
    };
    GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::~CNormalGuildBattleStateRoundProcess()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess*);
        (org_ptr(0x1403f1890L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRoundProcess::dtor_CNormalGuildBattleStateRoundProcess()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundProcess*);
        (org_ptr(0x1403f1890L))(this);
    };
END_ATF_NAMESPACE
