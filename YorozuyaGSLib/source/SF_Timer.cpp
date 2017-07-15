#include <SF_Timer.hpp>


START_ATF_NAMESPACE
    int SF_Timer::CheckTime(unsigned int dwLoopTime)
    {
        using org_ptr = int (WINAPIV*)(struct SF_Timer*, unsigned int);
        return (org_ptr(0x140155620L))(this, dwLoopTime);
    };
    SF_Timer::SF_Timer()
    {
        using org_ptr = void (WINAPIV*)(struct SF_Timer*);
        (org_ptr(0x14014fc70L))(this);
    };
    void SF_Timer::ctor_SF_Timer()
    {
        using org_ptr = void (WINAPIV*)(struct SF_Timer*);
        (org_ptr(0x14014fc70L))(this);
    };
    void SF_Timer::Set(unsigned int dwTimeDelay)
    {
        using org_ptr = void (WINAPIV*)(struct SF_Timer*, unsigned int);
        (org_ptr(0x140155920L))(this, dwTimeDelay);
    };
END_ATF_NAMESPACE
