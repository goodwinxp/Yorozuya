#include <GUILD_BATTLE__CGuildBattleState.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CGuildBattleState::CGuildBattleState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleState*);
        (org_ptr(0x1403dee30L))(this);
    };
    void GUILD_BATTLE::CGuildBattleState::ctor_CGuildBattleState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleState*);
        (org_ptr(0x1403dee30L))(this);
    };
    int GUILD_BATTLE::CGuildBattleState::Enter(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleState*, struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x14007f760L))(this, pkBattle);
    };
    int GUILD_BATTLE::CGuildBattleState::Fin(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleState*, struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x14007f7a0L))(this, pkBattle);
    };
    ATL::CTimeSpan* GUILD_BATTLE::CGuildBattleState::GetTerm(ATL::CTimeSpan* result)
    {
        using org_ptr = struct ATL::CTimeSpan* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleState*, ATL::CTimeSpan*);
        return (org_ptr(0x14007f7c0L))(this, result);
    };
    void GUILD_BATTLE::CGuildBattleState::Log(char* szMsg)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleState*, char*);
        (org_ptr(0x1403dee60L))(this, szMsg);
    };
    int GUILD_BATTLE::CGuildBattleState::Loop(struct GUILD_BATTLE::CGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleState*, struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x14007f780L))(this, pkBattle);
    };
    GUILD_BATTLE::CGuildBattleState::~CGuildBattleState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleState*);
        (org_ptr(0x14007f740L))(this);
    };
    void GUILD_BATTLE::CGuildBattleState::dtor_CGuildBattleState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleState*);
        (org_ptr(0x14007f740L))(this);
    };
    
END_ATF_NAMESPACE
