#include <ATL__CTime.hpp>


START_ATF_NAMESPACE
    ATL::CTime::CTime(struct _FILETIME* fileTime, int nDST)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*, struct _FILETIME*, int);
        (org_ptr(0x140672cf0L))(this, fileTime, nDST);
    };
    void ATL::CTime::ctor_CTime(struct _FILETIME* fileTime, int nDST)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*, struct _FILETIME*, int);
        (org_ptr(0x140672cf0L))(this, fileTime, nDST);
    };
    ATL::CTime::CTime(struct _SYSTEMTIME* sysTime, int nDST)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*, struct _SYSTEMTIME*, int);
        (org_ptr(0x140672c10L))(this, sysTime, nDST);
    };
    void ATL::CTime::ctor_CTime(struct _SYSTEMTIME* sysTime, int nDST)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*, struct _SYSTEMTIME*, int);
        (org_ptr(0x140672c10L))(this, sysTime, nDST);
    };
    ATL::CTime::CTime(int64_t time)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*, int64_t);
        (org_ptr(0x1406726e0L))(this, time);
    };
    void ATL::CTime::ctor_CTime(int64_t time)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*, int64_t);
        (org_ptr(0x1406726e0L))(this, time);
    };
    ATL::CTime::CTime(int nYear, int nMonth, int nDay, int nHour, int nMin, int nSec, int nDST)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*, int, int, int, int, int, int, int);
        (org_ptr(0x140672710L))(this, nYear, nMonth, nDay, nHour, nMin, nSec, nDST);
    };
    void ATL::CTime::ctor_CTime(int nYear, int nMonth, int nDay, int nHour, int nMin, int nSec, int nDST)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*, int, int, int, int, int, int, int);
        (org_ptr(0x140672710L))(this, nYear, nMonth, nDay, nHour, nMin, nSec, nDST);
    };
    ATL::CTime::CTime(uint16_t wDosDate, uint16_t wDosTime, int nDST)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*, uint16_t, uint16_t, int);
        (org_ptr(0x140672b00L))(this, wDosDate, wDosTime, nDST);
    };
    void ATL::CTime::ctor_CTime(uint16_t wDosDate, uint16_t wDosTime, int nDST)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*, uint16_t, uint16_t, int);
        (org_ptr(0x140672b00L))(this, wDosDate, wDosTime, nDST);
    };
    ATL::CTime::CTime()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*);
        (org_ptr(0x1406726c0L))(this);
    };
    void ATL::CTime::ctor_CTime()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTime*);
        (org_ptr(0x1406726c0L))(this);
    };
    bool ATL::CTime::GetAsSystemTime(struct _SYSTEMTIME* timeDest)
    {
        using org_ptr = bool (WINAPIV*)(struct ATL::CTime*, struct _SYSTEMTIME*);
        return (org_ptr(0x140673260L))(this, timeDest);
    };
    int ATL::CTime::GetDay()
    {
        using org_ptr = int (WINAPIV*)(struct ATL::CTime*);
        return (org_ptr(0x1406733f0L))(this);
    };
    int ATL::CTime::GetDayOfWeek()
    {
        using org_ptr = int (WINAPIV*)(struct ATL::CTime*);
        return (org_ptr(0x140673530L))(this);
    };
    struct tm* ATL::CTime::GetGmtTm(struct tm* ptm)
    {
        using org_ptr = struct tm* (WINAPIV*)(struct ATL::CTime*, struct tm*);
        return (org_ptr(0x1406730a0L))(this, ptm);
    };
    int ATL::CTime::GetHour()
    {
        using org_ptr = int (WINAPIV*)(struct ATL::CTime*);
        return (org_ptr(0x140673440L))(this);
    };
    struct tm* ATL::CTime::GetLocalTm(struct tm* ptm)
    {
        using org_ptr = struct tm* (WINAPIV*)(struct ATL::CTime*, struct tm*);
        return (org_ptr(0x140673180L))(this, ptm);
    };
    int ATL::CTime::GetMinute()
    {
        using org_ptr = int (WINAPIV*)(struct ATL::CTime*);
        return (org_ptr(0x140673490L))(this);
    };
    int ATL::CTime::GetMonth()
    {
        using org_ptr = int (WINAPIV*)(struct ATL::CTime*);
        return (org_ptr(0x1406733a0L))(this);
    };
    int ATL::CTime::GetSecond()
    {
        using org_ptr = int (WINAPIV*)(struct ATL::CTime*);
        return (org_ptr(0x1406734e0L))(this);
    };
    struct ATL::CTime* ATL::CTime::GetTickCount(struct ATL::CTime* result)
    {
        using org_ptr = struct ATL::CTime* (WINAPIV*)(struct ATL::CTime*);
        return (org_ptr(0x140672640L))(result);
    };
    int64_t ATL::CTime::GetTime()
    {
        using org_ptr = int64_t (WINAPIV*)(struct ATL::CTime*);
        return (org_ptr(0x140673330L))(this);
    };
    int ATL::CTime::GetYear()
    {
        using org_ptr = int (WINAPIV*)(struct ATL::CTime*);
        return (org_ptr(0x140673350L))(this);
    };
    int ATL::CTime::IsValidFILETIME(struct _FILETIME* fileTime)
    {
        using org_ptr = int (WINAPIV*)(struct _FILETIME*);
        return (org_ptr(0x140672670L))(fileTime);
    };
END_ATF_NAMESPACE
