#include <GUILD_BATTLE__CGuildBattleScheduler.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CGuildBattleScheduler::CGuildBattleScheduler()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduler*);
        (org_ptr(0x1403deda0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleScheduler::ctor_CGuildBattleScheduler()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduler*);
        (org_ptr(0x1403deda0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleScheduler::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403dd7c0L))();
    };
    bool GUILD_BATTLE::CGuildBattleScheduler::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduler*);
        return (org_ptr(0x1403dd840L))(this);
    };
    struct GUILD_BATTLE::CGuildBattleScheduler* GUILD_BATTLE::CGuildBattleScheduler::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleScheduler* (WINAPIV*)();
        return (org_ptr(0x1403dd700L))();
    };
    bool GUILD_BATTLE::CGuildBattleScheduler::UpdateClearGuildBattleScheduleDayInfo(unsigned int dwStartSLID, unsigned int dwEndSLID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduler*, unsigned int, unsigned int);
        return (org_ptr(0x1403dd8b0L))(this, dwStartSLID, dwEndSLID);
    };
    GUILD_BATTLE::CGuildBattleScheduler::~CGuildBattleScheduler()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduler*);
        (org_ptr(0x1403dee20L))(this);
    };
    void GUILD_BATTLE::CGuildBattleScheduler::dtor_CGuildBattleScheduler()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduler*);
        (org_ptr(0x1403dee20L))(this);
    };
END_ATF_NAMESPACE
