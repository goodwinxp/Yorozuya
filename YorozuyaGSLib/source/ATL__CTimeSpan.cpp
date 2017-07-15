#include <ATL__CTimeSpan.hpp>


START_ATF_NAMESPACE
    ATL::CTimeSpan::CTimeSpan(int64_t time)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTimeSpan*, int64_t);
        (org_ptr(0x140672200L))(this, time);
    };
    void ATL::CTimeSpan::ctor_CTimeSpan(int64_t time)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTimeSpan*, int64_t);
        (org_ptr(0x140672200L))(this, time);
    };
    ATL::CTimeSpan::CTimeSpan(int lDays, int nHours, int nMins, int nSecs)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTimeSpan*, int, int, int, int);
        (org_ptr(0x140672230L))(this, lDays, nHours, nMins, nSecs);
    };
    void ATL::CTimeSpan::ctor_CTimeSpan(int lDays, int nHours, int nMins, int nSecs)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTimeSpan*, int, int, int, int);
        (org_ptr(0x140672230L))(this, lDays, nHours, nMins, nSecs);
    };
    ATL::CTimeSpan::CTimeSpan()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTimeSpan*);
        (org_ptr(0x1406721e0L))(this);
    };
    void ATL::CTimeSpan::ctor_CTimeSpan()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTimeSpan*);
        (org_ptr(0x1406721e0L))(this);
    };
    int64_t ATL::CTimeSpan::GetDays()
    {
        using org_ptr = int64_t (WINAPIV*)(struct ATL::CTimeSpan*);
        return (org_ptr(0x140672280L))(this);
    };
    int ATL::CTimeSpan::GetHours()
    {
        using org_ptr = int (WINAPIV*)(struct ATL::CTimeSpan*);
        return (org_ptr(0x1406722c0L))(this);
    };
    int ATL::CTimeSpan::GetMinutes()
    {
        using org_ptr = int (WINAPIV*)(struct ATL::CTimeSpan*);
        return (org_ptr(0x140672320L))(this);
    };
    int ATL::CTimeSpan::GetSeconds()
    {
        using org_ptr = int (WINAPIV*)(struct ATL::CTimeSpan*);
        return (org_ptr(0x140672380L))(this);
    };
    int64_t ATL::CTimeSpan::GetTimeSpan()
    {
        using org_ptr = int64_t (WINAPIV*)(struct ATL::CTimeSpan*);
        return (org_ptr(0x1406723c0L))(this);
    };
    int64_t ATL::CTimeSpan::GetTotalHours()
    {
        using org_ptr = int64_t (WINAPIV*)(struct ATL::CTimeSpan*);
        return (org_ptr(0x1406722a0L))(this);
    };
    int64_t ATL::CTimeSpan::GetTotalMinutes()
    {
        using org_ptr = int64_t (WINAPIV*)(struct ATL::CTimeSpan*);
        return (org_ptr(0x140672300L))(this);
    };
    int64_t ATL::CTimeSpan::GetTotalSeconds()
    {
        using org_ptr = int64_t (WINAPIV*)(struct ATL::CTimeSpan*);
        return (org_ptr(0x140672360L))(this);
    };
END_ATF_NAMESPACE
