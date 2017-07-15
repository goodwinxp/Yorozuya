#include <GUILD_BATTLE__CGuildBattleSchedule.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CGuildBattleSchedule::CGuildBattleSchedule(unsigned int dwScheduleID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*, unsigned int);
        (org_ptr(0x1403d9b00L))(this, dwScheduleID);
    };
    void GUILD_BATTLE::CGuildBattleSchedule::ctor_CGuildBattleSchedule(unsigned int dwScheduleID)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*, unsigned int);
        (org_ptr(0x1403d9b00L))(this, dwScheduleID);
    };
    int GUILD_BATTLE::CGuildBattleSchedule::Check()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403d9de0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleSchedule::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        (org_ptr(0x1403d9e90L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleSchedule::ClearDB()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403d9f10L))(this);
    };
    struct ATL::CTimeSpan* GUILD_BATTLE::CGuildBattleSchedule::GetBattleTime(struct ATL::CTimeSpan* result)
    {
        using org_ptr = struct ATL::CTimeSpan* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*, struct ATL::CTimeSpan*);
        return (org_ptr(0x1403d9120L))(this, result);
    };
    int GUILD_BATTLE::CGuildBattleSchedule::GetBattleTurm()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403d9440L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleSchedule::GetLeftTime(char* byHour, char* byMin, char* bySec)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*, char*, char*, char*);
        return (org_ptr(0x1403da220L))(this, byHour, byMin, bySec);
    };
    int64_t GUILD_BATTLE::CGuildBattleSchedule::GetRealStartTime()
    {
        using org_ptr = int64_t (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403d93f0L))(this);
    };
    unsigned int GUILD_BATTLE::CGuildBattleSchedule::GetSID()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403d9100L))(this);
    };
    int GUILD_BATTLE::CGuildBattleSchedule::GetState()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403d93d0L))(this);
    };
    struct ATL::CTime* GUILD_BATTLE::CGuildBattleSchedule::GetTime(struct ATL::CTime* result)
    {
        using org_ptr = struct ATL::CTime* (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*, struct ATL::CTime*);
        return (org_ptr(0x1403deac0L))(this, result);
    };
    bool GUILD_BATTLE::CGuildBattleSchedule::IsDone()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403de9f0L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleSchedule::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403de990L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleSchedule::IsProc()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403deaf0L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleSchedule::IsWait()
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403deb50L))(this);
    };
    bool GUILD_BATTLE::CGuildBattleSchedule::Load(bool bToday, unsigned int dwScheduleID, char ucState, int64_t tTime, uint16_t wTumeMin)
    {
        using org_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*, bool, unsigned int, char, int64_t, uint16_t);
        return (org_ptr(0x1403d9f60L))(this, bToday, dwScheduleID, ucState, tTime, wTumeMin);
    };
    int GUILD_BATTLE::CGuildBattleSchedule::Process()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        return (org_ptr(0x1403da3b0L))(this);
    };
    char GUILD_BATTLE::CGuildBattleSchedule::Set(unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt)
    {
        using org_ptr = char (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*, unsigned int, unsigned int);
        return (org_ptr(0x1403d9b90L))(this, dwStartTimeInx, dwElapseTimeCnt);
    };
    void GUILD_BATTLE::CGuildBattleSchedule::SetProcState()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        (org_ptr(0x1403debb0L))(this);
    };
    void GUILD_BATTLE::CGuildBattleSchedule::SetStateList(struct GUILD_BATTLE::CGuildBattleStateList* pkStateList)
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*, struct GUILD_BATTLE::CGuildBattleStateList*);
        (org_ptr(0x1403d9150L))(this, pkStateList);
    };
    GUILD_BATTLE::CGuildBattleSchedule::~CGuildBattleSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        (org_ptr(0x1403d9b80L))(this);
    };
    void GUILD_BATTLE::CGuildBattleSchedule::dtor_CGuildBattleSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattleSchedule*);
        (org_ptr(0x1403d9b80L))(this);
    };
    
END_ATF_NAMESPACE
