#include <CAITimer.hpp>


START_ATF_NAMESPACE
    CAITimer::CAITimer()
    {
        using org_ptr = void (WINAPIV*)(struct CAITimer*);
        (org_ptr(0x14012cbd0L))(this);
    };
    void CAITimer::ctor_CAITimer()
    {
        using org_ptr = void (WINAPIV*)(struct CAITimer*);
        (org_ptr(0x14012cbd0L))(this);
    };
    int CAITimer::Check()
    {
        using org_ptr = int (WINAPIV*)(struct CAITimer*);
        return (org_ptr(0x14012d4d0L))(this);
    };
    void CAITimer::Init(unsigned int delay)
    {
        using org_ptr = void (WINAPIV*)(struct CAITimer*, unsigned int);
        (org_ptr(0x14012ced0L))(this, delay);
    };
    void CAITimer::Set(unsigned int delay)
    {
        using org_ptr = void (WINAPIV*)(struct CAITimer*, unsigned int);
        (org_ptr(0x14012cf00L))(this, delay);
    };
END_ATF_NAMESPACE
