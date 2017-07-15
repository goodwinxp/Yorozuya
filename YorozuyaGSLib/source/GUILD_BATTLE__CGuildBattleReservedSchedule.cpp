#include <GUILD_BATTLE__CGuildBattleReservedSchedule.hpp>


START_ATF_NAMESPACE
    char GUILD_BATTLE::CGuildBattleReservedSchedule::Add(unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt, struct GUILD_BATTLE::CGuildBattleSchedule** ppkSchedule)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*, unsigned int, unsigned int, struct GUILD_BATTLE::CGuildBattleSchedule**);
        return (org_ptr(0x1403dac40L))(this, dwStartTimeInx, dwElapseTimeCnt, ppkSchedule);
    };
    GUILD_BATTLE::CGuildBattleReservedSchedule::CGuildBattleReservedSchedule(unsigned int uiScheduleListID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*, unsigned int);
        (org_ptr(0x1403dab60L))(this, uiScheduleListID);
    };
    void GUILD_BATTLE::CGuildBattleReservedSchedule::ctor_CGuildBattleReservedSchedule(unsigned int uiScheduleListID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*, unsigned int);
        (org_ptr(0x1403dab60L))(this, uiScheduleListID);
    };
    bool GUILD_BATTLE::CGuildBattleReservedSchedule::CheckNextEvent(int iRet)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*, int);
        return (org_ptr(0x1403db750L))(this, iRet);
    };
    bool GUILD_BATTLE::CGuildBattleReservedSchedule::CleanUpDanglingReservedSchedule()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        return (org_ptr(0x1403db570L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleReservedSchedule::Clear(unsigned int dwID)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*, unsigned int);
        return (org_ptr(0x1403db420L))(this, dwID);
    };
    void GUILD_BATTLE::CGuildBattleReservedSchedule::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        (org_ptr(0x1403dae20L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedSchedule::ClearElapsedSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        (org_ptr(0x1403db950L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleReservedSchedule::CopyUseTimeField(bool* pbField)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*, bool*);
        return (org_ptr(0x1403dad20L))(this, pbField);
    };
    void GUILD_BATTLE::CGuildBattleReservedSchedule::Flip()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        (org_ptr(0x1403db4b0L))(this);
    };
    unsigned int GUILD_BATTLE::CGuildBattleReservedSchedule::GetCurScheduleID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        return (org_ptr(0x1403db640L))(this);
    };
    unsigned int GUILD_BATTLE::CGuildBattleReservedSchedule::GetID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        return (org_ptr(0x1403dec40L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleReservedSchedule::IsDone()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        return (org_ptr(0x1403dec60L))(this);
    };
    char GUILD_BATTLE::CGuildBattleReservedSchedule::IsEmptyTime(unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*, unsigned int, unsigned int);
        return (org_ptr(0x1403dabc0L))(this, dwStartTimeInx, dwElapseTimeCnt);
    };
    bool GUILD_BATTLE::CGuildBattleReservedSchedule::Load(bool bToday, struct _worlddb_guild_battle_schedule_list* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*, bool, struct _worlddb_guild_battle_schedule_list*);
        return (org_ptr(0x1403daea0L))(this, bToday, pkInfo);
    };
    bool GUILD_BATTLE::CGuildBattleReservedSchedule::Loop()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        return (org_ptr(0x1403dad80L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleReservedSchedule::Next()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        return (org_ptr(0x1403db7f0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedSchedule::UpdateUseField(unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*, unsigned int, unsigned int);
        (org_ptr(0x1403db8d0L))(this, dwStartTimeInx, dwElapseTimeCnt);
    };
    struct GUILD_BATTLE::CGuildBattleSchedule* GUILD_BATTLE::CGuildBattleReservedSchedule::UpdateUseFlag(unsigned int dwID)
    {
        using org_ptr = struct GUILD_BATTLE::CGuildBattleSchedule* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*, unsigned int);
        return (org_ptr(0x1403db4f0L))(this, dwID);
    };
    GUILD_BATTLE::CGuildBattleReservedSchedule::~CGuildBattleReservedSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        (org_ptr(0x1403dabb0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleReservedSchedule::dtor_CGuildBattleReservedSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleReservedSchedule*);
        (org_ptr(0x1403dabb0L))(this);
    };
END_ATF_NAMESPACE
