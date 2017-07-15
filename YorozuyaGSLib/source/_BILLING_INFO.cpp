#include <_BILLING_INFO.hpp>


START_ATF_NAMESPACE
    bool _BILLING_INFO::IsPcBangType()
    {
        using org_ptr = bool (WINAPIV*)(struct _BILLING_INFO*);
        return (org_ptr(0x1400d3c50L))(this);
    };
    _BILLING_INFO::_BILLING_INFO()
    {
        using org_ptr = void (WINAPIV*)(struct _BILLING_INFO*);
        (org_ptr(0x14011f000L))(this);
    };
    void _BILLING_INFO::ctor__BILLING_INFO()
    {
        using org_ptr = void (WINAPIV*)(struct _BILLING_INFO*);
        (org_ptr(0x14011f000L))(this);
    };
END_ATF_NAMESPACE
