#include <GUILD_BATTLE__CNormalGuildBattleState.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleState::CNormalGuildBattleState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*);
        (org_ptr(0x1403f3120L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleState::ctor_CNormalGuildBattleState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*);
        (org_ptr(0x1403f3120L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleState::Enter(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*, struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x1403f0380L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleState::Enter(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x14007fbc0L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleState::Fin(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*, struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x1403f0460L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleState::Fin(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x14007fc00L))(this, pkBattle);
    };
    void GUILD_BATTLE::CNormalGuildBattleState::Goal()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*);
        (org_ptr(0x14007fbb0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleState::Log(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle, char* szFormat)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*, struct GUILD_BATTLE::CNormalGuildBattle*, char*);
        (org_ptr(0x1403f04d0L))(this, pkBattle, szFormat);
    };
    int GUILD_BATTLE::CNormalGuildBattleState::Loop(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*, struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x1403f03f0L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleState::Loop(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x14007fbe0L))(this, pkBattle);
    };
    GUILD_BATTLE::CNormalGuildBattleState::~CNormalGuildBattleState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*);
        (org_ptr(0x14007fb50L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleState::dtor_CNormalGuildBattleState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleState*);
        (org_ptr(0x14007fb50L))(this);
    };
END_ATF_NAMESPACE
