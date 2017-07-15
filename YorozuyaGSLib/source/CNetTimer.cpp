#include <CNetTimer.hpp>


START_ATF_NAMESPACE
    void CNetTimer::BeginTimer(unsigned int dwTerm)
    {
        using org_ptr = void (WINAPIV*)(struct CNetTimer*, unsigned int);
        (org_ptr(0x140304b40L))(this, dwTerm);
    };
    CNetTimer::CNetTimer()
    {
        using org_ptr = void (WINAPIV*)(struct CNetTimer*);
        (org_ptr(0x1403044c0L))(this);
    };
    void CNetTimer::ctor_CNetTimer()
    {
        using org_ptr = void (WINAPIV*)(struct CNetTimer*);
        (org_ptr(0x1403044c0L))(this);
    };
    bool CNetTimer::CountingTimer()
    {
        using org_ptr = bool (WINAPIV*)(struct CNetTimer*);
        return (org_ptr(0x140416b00L))(this);
    };
END_ATF_NAMESPACE
