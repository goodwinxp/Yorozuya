#include <GUILD_BATTLE__CGuildBattleReservedScheduleListManager.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CGuildBattleReservedScheduleListManager::CGuildBattleReservedScheduleListManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*);
        (org_ptr(0x1403cd260L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleListManager::ctor_CGuildBattleReservedScheduleListManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*);
        (org_ptr(0x1403cd260L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleListManager::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*);
        (org_ptr(0x1403cd970L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleListManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1403cd420L))();
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleListManager::Flip()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*);
        (org_ptr(0x1403cd8f0L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleListManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*);
        return (org_ptr(0x1403cd4a0L))(this);
    };
    struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager* GUILD_BATTLE::CGuildBattleReservedScheduleListManager::Instance()
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager* (WINAPIV*)();
        return (org_ptr(0x1403cd360L))();
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleListManager::Load(int iCurDay, unsigned int uiOldMapCnt, int iToday, int iTomorrow)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*, int, unsigned int, int, int);
        return (org_ptr(0x1403cd540L))(this, iCurDay, uiOldMapCnt, iToday, iTomorrow);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleListManager::LoadTodaySchedule()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*);
        return (org_ptr(0x1403cdd00L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleListManager::LoadTomorrowSchedule()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*);
        return (org_ptr(0x1403cdda0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleListManager::PushDQS(unsigned int dwMapID, unsigned int dwSLID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*, unsigned int, unsigned int);
        (org_ptr(0x1403cd690L))(this, dwMapID, dwSLID);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleListManager::Send(unsigned int uiMapID, int n, unsigned int dwVer, char byDay, char byPage, unsigned int dwGuildSerial)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*, unsigned int, int, unsigned int, char, char, unsigned int);
        (org_ptr(0x1403cd830L))(this, uiMapID, n, dwVer, byDay, byPage, dwGuildSerial);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleListManager::UpdateReservedShedule(unsigned int dwSLID, char* byOutData)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*, unsigned int, char*);
        return (org_ptr(0x1403cd720L))(this, dwSLID, byOutData);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleListManager::UpdateTodaySchedule(unsigned int uiMapID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*, unsigned int);
        return (org_ptr(0x1403cd9c0L))(this, uiMapID);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleListManager::UpdateTomorrowComplete(unsigned int dwMapID, char* pLoadData)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*, unsigned int, char*);
        (org_ptr(0x1403cd7a0L))(this, dwMapID, pLoadData);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleListManager::UpdateTomorrowSchedule(unsigned int uiMapID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*, unsigned int);
        return (org_ptr(0x1403cdb60L))(this, uiMapID);
    };
    GUILD_BATTLE::CGuildBattleReservedScheduleListManager::~CGuildBattleReservedScheduleListManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*);
        (org_ptr(0x1403cd300L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleListManager::dtor_CGuildBattleReservedScheduleListManager()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleListManager*);
        (org_ptr(0x1403cd300L))(this);
    };
END_ATF_NAMESPACE
