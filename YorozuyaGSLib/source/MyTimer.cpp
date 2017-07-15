#include <MyTimer.hpp>


START_ATF_NAMESPACE
    struct MyTimer::TIME* MyTimer::GetTime()
    {
        using org_ptr = struct MyTimer::TIME* (WINAPIV*)();
        return (org_ptr(0x1402f2500L))();
    };
    MyTimer::TIME::TIME()
    {
        using org_ptr = void (WINAPIV*)(struct MyTimer::TIME*);
        (org_ptr(0x140318020L))(this);
    };
    void MyTimer::TIME::ctor_TIME()
    {
        using org_ptr = void (WINAPIV*)(struct MyTimer::TIME*);
        (org_ptr(0x140318020L))(this);
    };
END_ATF_NAMESPACE
