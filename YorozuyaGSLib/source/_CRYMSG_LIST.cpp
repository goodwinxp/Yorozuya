#include <_CRYMSG_LIST.hpp>


START_ATF_NAMESPACE
    void _CRYMSG_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _CRYMSG_LIST*);
        (org_ptr(0x140073a80L))(this);
    };
    _CRYMSG_LIST::_CRYMSG_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _CRYMSG_LIST*);
        (org_ptr(0x1400739a0L))(this);
    };
    void _CRYMSG_LIST::ctor__CRYMSG_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _CRYMSG_LIST*);
        (org_ptr(0x1400739a0L))(this);
    };
    void _CRYMSG_LIST::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _CRYMSG_LIST::_LIST*);
        (org_ptr(0x140073a60L))(this);
    };
    _CRYMSG_LIST::_LIST::_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _CRYMSG_LIST::_LIST*);
        (org_ptr(0x140073a10L))(this);
    };
    void _CRYMSG_LIST::_LIST::ctor__LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _CRYMSG_LIST::_LIST*);
        (org_ptr(0x140073a10L))(this);
    };
END_ATF_NAMESPACE
