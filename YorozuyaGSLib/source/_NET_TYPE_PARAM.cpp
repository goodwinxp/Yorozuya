#include <_NET_TYPE_PARAM.hpp>


START_ATF_NAMESPACE
    _NET_TYPE_PARAM::_NET_TYPE_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct _NET_TYPE_PARAM*);
        (org_ptr(0x140204be0L))(this);
    };
    void _NET_TYPE_PARAM::ctor__NET_TYPE_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct _NET_TYPE_PARAM*);
        (org_ptr(0x140204be0L))(this);
    };
END_ATF_NAMESPACE
