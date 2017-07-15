#include <GUILD_BATTLE__CGuildBattleReservedScheduleMapGroup.hpp>


START_ATF_NAMESPACE
    char GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::Add(unsigned int uiFieldInx, unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt, struct GUILD_BATTLE::CGuildBattleSchedule** ppkSchedule, unsigned int* uiSLID)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int, unsigned int, struct GUILD_BATTLE::CGuildBattleSchedule**, unsigned int*);
        return (org_ptr(0x1403dc440L))(this, uiFieldInx, dwStartTimeInx, dwElapseTimeCnt, ppkSchedule, uiSLID);
    };
    GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::CGuildBattleReservedScheduleMapGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        (org_ptr(0x1403dba50L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::ctor_CGuildBattleReservedScheduleMapGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        (org_ptr(0x1403dba50L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::CleanUpDanglingReservedSchedule()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        return (org_ptr(0x1403dc5f0L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::Clear(unsigned int uiMapID, unsigned int dwID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int);
        return (org_ptr(0x1403dc020L))(this, uiMapID, dwID);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::Clear()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        return (org_ptr(0x1403dc230L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::CopyUseTimeField(unsigned int uiMapID, bool* pbField)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*, unsigned int, bool*);
        return (org_ptr(0x1403dc4f0L))(this, uiMapID, pbField);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::Flip()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        (org_ptr(0x1403dc1a0L))(this);
    };
    unsigned int GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::GetCurScheduleID(unsigned int uiMapID)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*, unsigned int);
        return (org_ptr(0x1403dc710L))(this, uiMapID);
    };
    unsigned int GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::GetDayID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        return (org_ptr(0x1403d9a90L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::GetSLID(unsigned int uiMapID, unsigned int* uiSLID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int*);
        return (org_ptr(0x1403dc680L))(this, uiMapID, uiSLID);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::Init(unsigned int uiDayInx, unsigned int uiMapCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int);
        return (org_ptr(0x1403dbb90L))(this, uiDayInx, uiMapCnt);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::IsDone()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        return (org_ptr(0x1403ded60L))(this);
    };
    char GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::IsEmptyTime(unsigned int uiFieldInx, unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1403dc3c0L))(this, uiFieldInx, dwStartTimeInx, dwElapseTimeCnt);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::Load(bool bToday)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*, bool);
        return (org_ptr(0x1403dbdc0L))(this, bToday);
    };
    bool GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::Loop()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        return (org_ptr(0x1403dc0d0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::PushDQSClear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        (org_ptr(0x1403dc2e0L))(this);
    };
    struct GUILD_BATTLE::CGuildBattleSchedule* GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::UpdateUseFlag(unsigned int uiMapID, unsigned int dwID)
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleSchedule* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*, unsigned int, unsigned int);
        return (org_ptr(0x1403dc560L))(this, uiMapID, dwID);
    };
    GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::~CGuildBattleReservedScheduleMapGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        (org_ptr(0x1403dba90L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup::dtor_CGuildBattleReservedScheduleMapGroup()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedScheduleMapGroup*);
        (org_ptr(0x1403dba90L))(this);
    };
END_ATF_NAMESPACE
