#include <GUILD_BATTLE__CNormalGuildBattleStateFin.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateFin::CNormalGuildBattleStateFin()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateFin*);
        (org_ptr(0x1403f0f20L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateFin::ctor_CNormalGuildBattleStateFin()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateFin*);
        (org_ptr(0x1403f0f20L))(this);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateFin::Fin(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateFin*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f0f70L))(this, pkBattle);
    };
    int GUILD_BATTLE::CNormalGuildBattleStateFin::ctor_Fin(struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateFin*, struct GUILD_BATTLE::CNormalGuildBattle*);
        return (org_ptr(0x1403f0f70L))(this, pkBattle);
    };
    ATL::CTimeSpan* GUILD_BATTLE::CNormalGuildBattleStateFin::GetTerm(ATL::CTimeSpan* result)
    {
        using org_ptr = ATL::CTimeSpan* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateFin*, ATL::CTimeSpan*);
        return (org_ptr(0x1400802e0L))(this, result);
    };
    GUILD_BATTLE::CNormalGuildBattleStateFin::~CNormalGuildBattleStateFin()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateFin*);
        (org_ptr(0x140080280L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateFin::dtor_CNormalGuildBattleStateFin()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateFin*);
        (org_ptr(0x140080280L))(this);
    };
END_ATF_NAMESPACE
