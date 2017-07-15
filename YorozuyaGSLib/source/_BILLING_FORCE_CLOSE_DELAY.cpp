#include <_BILLING_FORCE_CLOSE_DELAY.hpp>


START_ATF_NAMESPACE
    void _BILLING_FORCE_CLOSE_DELAY::Process(unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct _BILLING_FORCE_CLOSE_DELAY*, unsigned int, unsigned int);
        (org_ptr(0x140066480L))(this, dwIndex, dwSerial);
    };
    _BILLING_FORCE_CLOSE_DELAY::_BILLING_FORCE_CLOSE_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _BILLING_FORCE_CLOSE_DELAY*);
        (org_ptr(0x14007f390L))(this);
    };
    void _BILLING_FORCE_CLOSE_DELAY::ctor__BILLING_FORCE_CLOSE_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _BILLING_FORCE_CLOSE_DELAY*);
        (org_ptr(0x14007f390L))(this);
    };
    _BILLING_FORCE_CLOSE_DELAY::~_BILLING_FORCE_CLOSE_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _BILLING_FORCE_CLOSE_DELAY*);
        (org_ptr(0x140080490L))(this);
    };
    void _BILLING_FORCE_CLOSE_DELAY::dtor__BILLING_FORCE_CLOSE_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _BILLING_FORCE_CLOSE_DELAY*);
        (org_ptr(0x140080490L))(this);
    };
END_ATF_NAMESPACE
