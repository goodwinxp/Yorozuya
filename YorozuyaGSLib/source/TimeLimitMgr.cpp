#include <TimeLimitMgr.hpp>


START_ATF_NAMESPACE
    void TimeLimitMgr::Chack_Time()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        (org_ptr(0x14040e500L))(this);
    };
    bool TimeLimitMgr::CheckPlayerStatus(uint16_t wIndex, unsigned int dwLastContSaveTime, char* pbyStatus, unsigned int* pdwFatigue)
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitMgr*, uint16_t, unsigned int, char*, unsigned int*);
        return (org_ptr(0x14040e860L))(this, wIndex, dwLastContSaveTime, pbyStatus, pdwFatigue);
    };
    unsigned int TimeLimitMgr::ClacLastLogoutTimeSec(unsigned int dwLastConnTime)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct TimeLimitMgr*, unsigned int);
        return (org_ptr(0x14040dc30L))(this, dwLastConnTime);
    };
    unsigned int TimeLimitMgr::ClacLastLogoutTimeToFatigue(unsigned int dwLastConnTime)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct TimeLimitMgr*, unsigned int);
        return (org_ptr(0x14040d8f0L))(this, dwLastConnTime);
    };
    void TimeLimitMgr::Delete_All()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        (org_ptr(0x14040e480L))(this);
    };
    struct Player_TL_Status* TimeLimitMgr::Find_Data(unsigned int dwSerial)
    {
        using org_ptr = struct Player_TL_Status* (WINAPIV*)(struct TimeLimitMgr*, unsigned int);
        return (org_ptr(0x14040e3b0L))(this, dwSerial);
    };
    struct Player_TL_Status* TimeLimitMgr::Find_Data(uint16_t wIndex)
    {
        using org_ptr = struct Player_TL_Status* (WINAPIV*)(struct TimeLimitMgr*, uint16_t);
        return (org_ptr(0x14040e360L))(this, wIndex);
    };
    uint16_t TimeLimitMgr::GetEndPlayTime()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct TimeLimitMgr*);
        return (org_ptr(0x1400f0760L))(this);
    };
    uint16_t TimeLimitMgr::GetPeriodCnt()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct TimeLimitMgr*);
        return (org_ptr(0x14029da20L))(this);
    };
    unsigned int TimeLimitMgr::GetPlayFDegree()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct TimeLimitMgr*);
        return (org_ptr(0x1400f0740L))(this);
    };
    uint16_t TimeLimitMgr::GetPlayerData(uint16_t wIndex, char* psStatus, long double* pdPercent)
    {
        using org_ptr = uint16_t (WINAPIV*)(struct TimeLimitMgr*, uint16_t, char*, long double*);
        return (org_ptr(0x14040ed20L))(this, wIndex, psStatus, pdPercent);
    };
    long double TimeLimitMgr::GetPlayerPenalty(uint16_t wIndex)
    {
        using org_ptr = long double (WINAPIV*)(struct TimeLimitMgr*, uint16_t);
        return (org_ptr(0x14040ebf0L))(this, wIndex);
    };
    char TimeLimitMgr::GetPlayerStatus(uint16_t wIndex)
    {
        using org_ptr = char (WINAPIV*)(struct TimeLimitMgr*, uint16_t);
        return (org_ptr(0x14040eca0L))(this, wIndex);
    };
    void TimeLimitMgr::InitializeTLMgr()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        (org_ptr(0x14040d4e0L))(this);
    };
    void TimeLimitMgr::InsertPlayerStatus(uint16_t wIndex, unsigned int dwAccountSerial, char byStatus, unsigned int dwFatigue, unsigned int dwLastLogoutTime, bool bAgeLimit)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*, uint16_t, unsigned int, char, unsigned int, unsigned int, bool);
        (org_ptr(0x14040ea70L))(this, wIndex, dwAccountSerial, byStatus, dwFatigue, dwLastLogoutTime, bAgeLimit);
    };
    struct TimeLimitMgr* TimeLimitMgr::Instance()
    {
        using org_ptr = struct TimeLimitMgr* (WINAPIV*)();
        return (org_ptr(0x14040ce50L))();
    };
    void TimeLimitMgr::LoadTLINIFile()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        (org_ptr(0x14040cf10L))(this);
    };
    void TimeLimitMgr::Pop_Data(unsigned int dwAccountSerial, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int, uint16_t);
        (org_ptr(0x14040e2d0L))(this, dwAccountSerial, wIndex);
    };
    void TimeLimitMgr::Push_Data(struct Player_TL_Status* data, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*, struct Player_TL_Status*, uint16_t);
        (org_ptr(0x14040e1f0L))(this, data, wIndex);
    };
    void TimeLimitMgr::ReInitFatigue()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        (org_ptr(0x14040d610L))(this);
    };
    void TimeLimitMgr::ReSetPercent(uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*, uint16_t);
        (org_ptr(0x14040d6c0L))(this, wIndex);
    };
    bool TimeLimitMgr::SetConfig(uint16_t time1, uint16_t time2, uint16_t time3, uint16_t time4, uint16_t time5)
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitMgr*, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t);
        return (org_ptr(0x14040edb0L))(this, time1, time2, time3, time4, time5);
    };
    void TimeLimitMgr::SetLogoutFDegree(unsigned int dwDegree)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int);
        (org_ptr(0x14029dab0L))(this, dwDegree);
    };
    void TimeLimitMgr::SetPlayFDegree(unsigned int dwDegree)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int);
        (org_ptr(0x14029da80L))(this, dwDegree);
    };
    void TimeLimitMgr::SetTLEnable(uint16_t wState)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*, uint16_t);
        (org_ptr(0x14029daf0L))(this, wState);
    };
    void TimeLimitMgr::SetTime(unsigned int dwTime, uint16_t iIndex)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*, unsigned int, uint16_t);
        (org_ptr(0x14029da40L))(this, dwTime, iIndex);
    };
    unsigned int TimeLimitMgr::SumMinuteBetweenSec(struct tm* tmLast)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct TimeLimitMgr*, struct tm*);
        return (org_ptr(0x14040e0d0L))(this, tmLast);
    };
    unsigned int TimeLimitMgr::SumMinuteOne(struct _SYSTEMTIME* tm)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct TimeLimitMgr*, struct _SYSTEMTIME*);
        return (org_ptr(0x14040df50L))(this, tm);
    };
    TimeLimitMgr::TimeLimitMgr()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        (org_ptr(0x14040ccd0L))(this);
    };
    void TimeLimitMgr::ctor_TimeLimitMgr()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        (org_ptr(0x14040ccd0L))(this);
    };
    bool TimeLimitMgr::UpdatePlayerStatus(uint16_t wIndex, unsigned int dwFatigue, char wStatus)
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitMgr*, uint16_t, unsigned int, char);
        return (org_ptr(0x14040eb20L))(this, wIndex, dwFatigue, wStatus);
    };
    TimeLimitMgr::~TimeLimitMgr()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        (org_ptr(0x14040cd40L))(this);
    };
    void TimeLimitMgr::dtor_TimeLimitMgr()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitMgr*);
        (org_ptr(0x14040cd40L))(this);
    };
END_ATF_NAMESPACE
