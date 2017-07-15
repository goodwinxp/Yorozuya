#include <_SYN_DATA.hpp>


START_ATF_NAMESPACE
    _SYN_DATA::_SYN_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct _SYN_DATA*);
        (org_ptr(0x14043ed10L))(this);
    };
    void _SYN_DATA::ctor__SYN_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct _SYN_DATA*);
        (org_ptr(0x14043ed10L))(this);
    };
    _SYN_DATA::~_SYN_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct _SYN_DATA*);
        (org_ptr(0x14043ecb0L))(this);
    };
    void _SYN_DATA::dtor__SYN_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct _SYN_DATA*);
        (org_ptr(0x14043ecb0L))(this);
    };
END_ATF_NAMESPACE
