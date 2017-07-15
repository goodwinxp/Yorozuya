#include <CMyTimer.hpp>


START_ATF_NAMESPACE
    void CMyTimer::BeginTimer(unsigned int dwTerm)
    {
        using org_ptr = void (WINAPIV*)(struct CMyTimer*, unsigned int);
        (org_ptr(0x1404389d0L))(this, dwTerm);
    };
    void CMyTimer::BeginTimerAddLapse(unsigned int dwTerm, unsigned int dwAddLapse)
    {
        using org_ptr = void (WINAPIV*)(struct CMyTimer*, unsigned int, unsigned int);
        (org_ptr(0x140438a30L))(this, dwTerm, dwAddLapse);
    };
    CMyTimer::CMyTimer()
    {
        using org_ptr = void (WINAPIV*)(struct CMyTimer*);
        (org_ptr(0x140438980L))(this);
    };
    void CMyTimer::ctor_CMyTimer()
    {
        using org_ptr = void (WINAPIV*)(struct CMyTimer*);
        (org_ptr(0x140438980L))(this);
    };
    void CMyTimer::CountingAddTickOld(unsigned int dwAddGap)
    {
        using org_ptr = void (WINAPIV*)(struct CMyTimer*, unsigned int);
        (org_ptr(0x140438ab0L))(this, dwAddGap);
    };
    bool CMyTimer::CountingTimer()
    {
        using org_ptr = bool (WINAPIV*)(struct CMyTimer*);
        return (org_ptr(0x140438ae0L))(this);
    };
    unsigned int CMyTimer::GetTerm()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CMyTimer*);
        return (org_ptr(0x140438c10L))(this);
    };
    void CMyTimer::NextTimeRun()
    {
        using org_ptr = void (WINAPIV*)(struct CMyTimer*);
        (org_ptr(0x140438b80L))(this);
    };
    void CMyTimer::StopTimer()
    {
        using org_ptr = void (WINAPIV*)(struct CMyTimer*);
        (org_ptr(0x140438a90L))(this);
    };
    void CMyTimer::TermTimeRun()
    {
        using org_ptr = void (WINAPIV*)(struct CMyTimer*);
        (org_ptr(0x140438bd0L))(this);
    };
    CMyTimer::~CMyTimer()
    {
        using org_ptr = void (WINAPIV*)(struct CMyTimer*);
        (org_ptr(0x140072960L))(this);
    };
    void CMyTimer::dtor_CMyTimer()
    {
        using org_ptr = void (WINAPIV*)(struct CMyTimer*);
        (org_ptr(0x140072960L))(this);
    };
END_ATF_NAMESPACE
