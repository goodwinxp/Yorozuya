#include <GUILD_BATTLE__CNormalGuildBattleStateRoundReturnStartPos.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::CNormalGuildBattleStateRoundReturnStartPos()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos*);
        (org_ptr(0x1403f1b10L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::ctor_CNormalGuildBattleStateRoundReturnStartPos()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos*);
        (org_ptr(0x1403f1b10L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::Enter(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f1d10L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::Loop(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f1da0L))(this, pkBattle);
    };
    GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::~CNormalGuildBattleStateRoundReturnStartPos()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos*);
        (org_ptr(0x1403f1c30L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos::dtor_CNormalGuildBattleStateRoundReturnStartPos()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundReturnStartPos*);
        (org_ptr(0x1403f1c30L))(this);
    };
END_ATF_NAMESPACE
