#include <GUILD_BATTLE__CGuildBattleRewardItemManager.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CGuildBattleRewardItemManager::CGuildBattleRewardItemManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItemManager*);
        (org_ptr(0x1403c93a0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleRewardItemManager::ctor_CGuildBattleRewardItemManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItemManager*);
        (org_ptr(0x1403c93a0L))(this);
    };
    struct GUILD_BATTLE::CGuildBattleRewardItem* GUILD_BATTLE::CGuildBattleRewardItemManager::Give(struct CPlayer* pkPlayer)
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleRewardItem* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItemManager*, struct CPlayer*);
        return (org_ptr(0x1403eaf00L))(this, pkPlayer);
    };
    bool GUILD_BATTLE::CGuildBattleRewardItemManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItemManager*);
        return (org_ptr(0x1403c9420L))(this);
    };
    struct GUILD_BATTLE::CGuildBattleRewardItemManager* GUILD_BATTLE::CGuildBattleRewardItemManager::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleRewardItemManager* (WINAPIV*)();
        return (org_ptr(0x1403d9790L))();
    };
    GUILD_BATTLE::CGuildBattleRewardItemManager::~CGuildBattleRewardItemManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItemManager*);
        (org_ptr(0x1403c93e0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleRewardItemManager::dtor_CGuildBattleRewardItemManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItemManager*);
        (org_ptr(0x1403c93e0L))(this);
    };
END_ATF_NAMESPACE
