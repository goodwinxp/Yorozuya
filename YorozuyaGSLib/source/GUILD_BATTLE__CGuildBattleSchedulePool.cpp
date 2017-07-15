#include <GUILD_BATTLE__CGuildBattleSchedulePool.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CGuildBattleSchedulePool::CGuildBattleSchedulePool()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*);
        (org_ptr(0x1403da430L))(this);
    };
    void GUILD_BATTLE::CGuildBattleSchedulePool::ctor_CGuildBattleSchedulePool()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*);
        (org_ptr(0x1403da430L))(this);
    };
    void GUILD_BATTLE::CGuildBattleSchedulePool::ClearAll()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*);
        (org_ptr(0x1403da890L))(this);
    };
    void GUILD_BATTLE::CGuildBattleSchedulePool::ClearByDayID(unsigned int uiDayID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*, unsigned int);
        (org_ptr(0x1403da930L))(this, uiDayID);
    };
    void GUILD_BATTLE::CGuildBattleSchedulePool::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403da640L))();
    };
    struct GUILD_BATTLE::CGuildBattleSchedule* GUILD_BATTLE::CGuildBattleSchedulePool::Get(unsigned int uiSLID, unsigned int dwStartInx)
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleSchedule* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*, unsigned int, unsigned int);
        return (org_ptr(0x1403dea50L))(this, uiSLID, dwStartInx);
    };
    struct GUILD_BATTLE::CGuildBattleSchedule* GUILD_BATTLE::CGuildBattleSchedulePool::Get(unsigned int dwSID)
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleSchedule* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*, unsigned int);
        return (org_ptr(0x1403daa30L))(this, dwSID);
    };
    struct GUILD_BATTLE::CGuildBattleSchedule* GUILD_BATTLE::CGuildBattleSchedulePool::GetRef(unsigned int dwSID)
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleSchedule* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*, unsigned int);
        return (org_ptr(0x1403dab00L))(this, dwSID);
    };
    unsigned int GUILD_BATTLE::CGuildBattleSchedulePool::GetSID(unsigned int uiSLID, unsigned int dwStartInx)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*, unsigned int, unsigned int);
        return (org_ptr(0x1403dec80L))(this, uiSLID, dwStartInx);
    };
    bool GUILD_BATTLE::CGuildBattleSchedulePool::Init(unsigned int uiMapCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*, unsigned int);
        return (org_ptr(0x1403da6c0L))(this, uiMapCnt);
    };
    struct GUILD_BATTLE::CGuildBattleSchedulePool* GUILD_BATTLE::CGuildBattleSchedulePool::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleSchedulePool* (WINAPIV*)();
        return (org_ptr(0x1403da580L))();
    };
    GUILD_BATTLE::CGuildBattleSchedulePool::~CGuildBattleSchedulePool()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*);
        (org_ptr(0x1403da470L))(this);
    };
    void GUILD_BATTLE::CGuildBattleSchedulePool::dtor_CGuildBattleSchedulePool()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedulePool*);
        (org_ptr(0x1403da470L))(this);
    };
END_ATF_NAMESPACE
