#include <CTimer.hpp>


START_ATF_NAMESPACE
    void CTimer::CalculateTime()
    {
        using org_ptr = void (WINAPIV*)(struct CTimer*);
        (org_ptr(0x1404e2aa0L))(this);
    };
    float CTimer::GetDuration()
    {
        using org_ptr = float (WINAPIV*)(struct CTimer*);
        return (org_ptr(0x1404e2a70L))(this);
    };
    float CTimer::GetLoopTime()
    {
        using org_ptr = float (WINAPIV*)(struct CTimer*);
        return (org_ptr(0x1404e2bf0L))(this);
    };
    uint64_t CTimer::GetTicks()
    {
        using org_ptr = uint64_t (WINAPIV*)(struct CTimer*);
        return (org_ptr(0x1404e2a20L))(this);
    };
    float CTimer::GetTime()
    {
        using org_ptr = float (WINAPIV*)(struct CTimer*);
        return (org_ptr(0x1404e2c00L))(this);
    };
    void CTimer::SetMinFPS(float arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CTimer*, float);
        (org_ptr(0x1404e2c20L))(this, arg_0);
    };
    void CTimer::SetTime(float arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CTimer*, float);
        (org_ptr(0x1404e2c10L))(this, arg_0);
    };
END_ATF_NAMESPACE
