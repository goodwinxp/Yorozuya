#include <_SOCK_TYPE_PARAM.hpp>


START_ATF_NAMESPACE
    _SOCK_TYPE_PARAM::_SOCK_TYPE_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct _SOCK_TYPE_PARAM*);
        (org_ptr(0x140204d40L))(this);
    };
    void _SOCK_TYPE_PARAM::ctor__SOCK_TYPE_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct _SOCK_TYPE_PARAM*);
        (org_ptr(0x140204d40L))(this);
    };
END_ATF_NAMESPACE
