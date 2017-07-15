#include <_SYN_HEADER.hpp>


START_ATF_NAMESPACE
    _SYN_HEADER::_SYN_HEADER()
    {
        using org_ptr = void (WINAPIV*)(struct _SYN_HEADER*);
        (org_ptr(0x14043ed80L))(this);
    };
    void _SYN_HEADER::ctor__SYN_HEADER()
    {
        using org_ptr = void (WINAPIV*)(struct _SYN_HEADER*);
        (org_ptr(0x14043ed80L))(this);
    };
END_ATF_NAMESPACE
