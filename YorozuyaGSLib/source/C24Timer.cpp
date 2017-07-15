#include <C24Timer.hpp>


START_ATF_NAMESPACE
    C24Timer::C24Timer()
    {
        using org_ptr = void (WINAPIV*)(struct C24Timer*);
        (org_ptr(0x140284dc0L))(this);
    };
    void C24Timer::ctor_C24Timer()
    {
        using org_ptr = void (WINAPIV*)(struct C24Timer*);
        (org_ptr(0x140284dc0L))(this);
    };
    unsigned int C24Timer::Get24TimeFromTickTime(unsigned int dwTickTime)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct C24Timer*, unsigned int);
        return (org_ptr(0x140284d30L))(this, dwTickTime);
    };
    void C24Timer::Init()
    {
        using org_ptr = void (WINAPIV*)(struct C24Timer*);
        (org_ptr(0x140284e10L))(this);
    };
    C24Timer::~C24Timer()
    {
        using org_ptr = void (WINAPIV*)(struct C24Timer*);
        (org_ptr(0x140284e80L))(this);
    };
    void C24Timer::dtor_C24Timer()
    {
        using org_ptr = void (WINAPIV*)(struct C24Timer*);
        (org_ptr(0x140284e80L))(this);
    };
END_ATF_NAMESPACE
