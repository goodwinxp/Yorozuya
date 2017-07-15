#include <_ANIMUS_RETURN_DELAY.hpp>


START_ATF_NAMESPACE
    void _ANIMUS_RETURN_DELAY::Process(unsigned int dwIndex, unsigned int dwSerial)
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_RETURN_DELAY*, unsigned int, unsigned int);
        (org_ptr(0x140066400L))(this, dwIndex, dwSerial);
    };
    _ANIMUS_RETURN_DELAY::_ANIMUS_RETURN_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_RETURN_DELAY*);
        (org_ptr(0x14007f200L))(this);
    };
    void _ANIMUS_RETURN_DELAY::ctor__ANIMUS_RETURN_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_RETURN_DELAY*);
        (org_ptr(0x14007f200L))(this);
    };
    _ANIMUS_RETURN_DELAY::~_ANIMUS_RETURN_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_RETURN_DELAY*);
        (org_ptr(0x140080370L))(this);
    };
    void _ANIMUS_RETURN_DELAY::dtor__ANIMUS_RETURN_DELAY()
    {
        using org_ptr = void (WINAPIV*)(struct _ANIMUS_RETURN_DELAY*);
        (org_ptr(0x140080370L))(this);
    };
END_ATF_NAMESPACE
