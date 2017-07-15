#include <GUILD_BATTLE__CNormalGuildBattleStateRoundList.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CNormalGuildBattleStateRoundList::CNormalGuildBattleStateRoundList()
        : CGuildBattleStateList(3, 1, 1)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundList*);
        (org_ptr(0x1403f2150L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRoundList::ctor_CNormalGuildBattleStateRoundList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundList*);
        (org_ptr(0x1403f2150L))(this);
    };
    bool GUILD_BATTLE::CNormalGuildBattleStateRoundList::IsInBattleRegenState()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundList*);
        return (org_ptr(0x1403d95c0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRoundList::SetNextState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundList*);
        (org_ptr(0x140080040L))(this);
    };
    GUILD_BATTLE::CNormalGuildBattleStateRoundList::~CNormalGuildBattleStateRoundList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundList*);
        (org_ptr(0x14007fee0L))(this);
    };
    void GUILD_BATTLE::CNormalGuildBattleStateRoundList::dtor_CNormalGuildBattleStateRoundList()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleStateRoundList*);
        (org_ptr(0x14007fee0L))(this);
    };
    
END_ATF_NAMESPACE
