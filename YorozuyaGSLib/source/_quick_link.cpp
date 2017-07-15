#include <_quick_link.hpp>


START_ATF_NAMESPACE
    _quick_link::_quick_link()
    {
        using org_ptr = void (WINAPIV*)(struct _quick_link*);
        (org_ptr(0x14010e060L))(this);
    };
    void _quick_link::ctor__quick_link()
    {
        using org_ptr = void (WINAPIV*)(struct _quick_link*);
        (org_ptr(0x14010e060L))(this);
    };
    void _quick_link::init()
    {
        using org_ptr = void (WINAPIV*)(struct _quick_link*);
        (org_ptr(0x14010e0b0L))(this);
    };
END_ATF_NAMESPACE
