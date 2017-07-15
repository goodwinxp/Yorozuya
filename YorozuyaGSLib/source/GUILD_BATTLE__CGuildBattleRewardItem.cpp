#include <GUILD_BATTLE__CGuildBattleRewardItem.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CGuildBattleRewardItem::CGuildBattleRewardItem()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItem*);
        (org_ptr(0x1403c8ef0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleRewardItem::ctor_CGuildBattleRewardItem()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItem*);
        (org_ptr(0x1403c8ef0L))(this);
    };
    char GUILD_BATTLE::CGuildBattleRewardItem::GetAmount()
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItem*);
        return (org_ptr(0x1403eae80L))(this);
    };
    char* GUILD_BATTLE::CGuildBattleRewardItem::GetItemCode()
    {
        using org_ptr = char* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItem*);
        return (org_ptr(0x1403c9270L))(this);
    };
    struct GUILD_BATTLE::CGuildBattleRewardItem* GUILD_BATTLE::CGuildBattleRewardItem::Give(struct CPlayer* pkPlayer)
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleRewardItem* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItem*, struct CPlayer*);
        return (org_ptr(0x1403c90e0L))(this, pkPlayer);
    };
    bool GUILD_BATTLE::CGuildBattleRewardItem::Init(uint16_t usInx)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItem*, uint16_t);
        return (org_ptr(0x1403c8f30L))(this, usInx);
    };
    bool GUILD_BATTLE::CGuildBattleRewardItem::IsNull()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItem*);
        return (org_ptr(0x1403eaea0L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleRewardItem::SetItem(char* szItemCode)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleRewardItem*, char*);
        return (org_ptr(0x1403c92d0L))(this, szItemCode);
    };
END_ATF_NAMESPACE
