#include <GUILD_BATTLE__CGuildBattleScheduleManager.hpp>


START_ATF_NAMESPACE
    char GUILD_BATTLE::CGuildBattleScheduleManager::Add(unsigned int uiFieldInx, unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt, struct GUILD_BATTLE::CGuildBattleSchedule** ppkSchedule, unsigned int* uiSLID)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*, unsigned int, unsigned int, unsigned int, struct GUILD_BATTLE::CGuildBattleSchedule**, unsigned int*);
        return (org_ptr(0x1403d9180L))(this, uiFieldInx, dwStartTimeInx, dwElapseTimeCnt, ppkSchedule, uiSLID);
    };
    bool GUILD_BATTLE::CGuildBattleScheduleManager::AddDefaultDBTable()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        return (org_ptr(0x1403dd320L))(this);
    };
    GUILD_BATTLE::CGuildBattleScheduleManager::CGuildBattleScheduleManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        (org_ptr(0x1403dc830L))(this);
    };
    void GUILD_BATTLE::CGuildBattleScheduleManager::ctor_CGuildBattleScheduleManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        (org_ptr(0x1403dc830L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleScheduleManager::CleanUpDanglingReservedSchedule()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        return (org_ptr(0x1403dd1c0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleScheduleManager::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        (org_ptr(0x1403dd480L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleScheduleManager::ClearTommorowScheduleByID(unsigned int uiMapID, unsigned int dwID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*, unsigned int, unsigned int);
        return (org_ptr(0x1403dd0d0L))(this, uiMapID, dwID);
    };
    void GUILD_BATTLE::CGuildBattleScheduleManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403dcad0L))();
    };
    void GUILD_BATTLE::CGuildBattleScheduleManager::Flip()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        (org_ptr(0x1403dd3b0L))(this);
    };
    unsigned int GUILD_BATTLE::CGuildBattleScheduleManager::GetCurScheduleID(unsigned int uiMapID)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*, unsigned int);
        return (org_ptr(0x1403dd2d0L))(this, uiMapID);
    };
    unsigned int GUILD_BATTLE::CGuildBattleScheduleManager::GetTodayDayID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        return (org_ptr(0x1403d9a40L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleScheduleManager::GetTodaySLIDByMap(unsigned int uiMap, unsigned int* uiSLID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*, unsigned int, unsigned int*);
        return (org_ptr(0x1403dd230L))(this, uiMap, uiSLID);
    };
    unsigned int GUILD_BATTLE::CGuildBattleScheduleManager::GetTomorrowDayID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        return (org_ptr(0x1403d9ab0L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleScheduleManager::GetTomorrowSLIDByMap(unsigned int uiMap, unsigned int* uiSLID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*, unsigned int, unsigned int*);
        return (org_ptr(0x1403dd280L))(this, uiMap, uiSLID);
    };
    bool GUILD_BATTLE::CGuildBattleScheduleManager::Init(unsigned int uiMapCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*, unsigned int);
        return (org_ptr(0x1403dcb50L))(this, uiMapCnt);
    };
    struct GUILD_BATTLE::CGuildBattleScheduleManager* GUILD_BATTLE::CGuildBattleScheduleManager::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleScheduleManager* (WINAPIV*)();
        return (org_ptr(0x1403dca10L))();
    };
    int GUILD_BATTLE::CGuildBattleScheduleManager::IsDayChanged()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        return (org_ptr(0x1403dd530L))(this);
    };
    char GUILD_BATTLE::CGuildBattleScheduleManager::IsEmptyTime(unsigned int uiFieldInx, unsigned int dwStartTimeInx)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*, unsigned int, unsigned int);
        return (org_ptr(0x1403d9870L))(this, uiFieldInx, dwStartTimeInx);
    };
    bool GUILD_BATTLE::CGuildBattleScheduleManager::Load(int iCurDay, unsigned int uiOldMapCnt, int iToday, int iTodayDayID, int iTomorrow, int iTomorrowDayID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*, int, unsigned int, int, int, int, int);
        return (org_ptr(0x1403dcdd0L))(this, iCurDay, uiOldMapCnt, iToday, iTodayDayID, iTomorrow, iTomorrowDayID);
    };
    void GUILD_BATTLE::CGuildBattleScheduleManager::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        (org_ptr(0x1403dcd30L))(this);
    };
    void GUILD_BATTLE::CGuildBattleScheduleManager::SetNextEvnet()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        (org_ptr(0x1403dd6c0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleScheduleManager::UpdateDayChangedWork()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        (org_ptr(0x1403dd650L))(this);
    };
    struct GUILD_BATTLE::CGuildBattleSchedule* GUILD_BATTLE::CGuildBattleScheduleManager::UpdateUseFlag(unsigned int uiDayID, unsigned int uiMapID, unsigned int dwID)
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleSchedule* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1403dd120L))(this, uiDayID, uiMapID, dwID);
    };
    GUILD_BATTLE::CGuildBattleScheduleManager::~CGuildBattleScheduleManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        (org_ptr(0x1403dc8e0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleScheduleManager::dtor_CGuildBattleScheduleManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleScheduleManager*);
        (org_ptr(0x1403dc8e0L))(this);
    };
END_ATF_NAMESPACE
