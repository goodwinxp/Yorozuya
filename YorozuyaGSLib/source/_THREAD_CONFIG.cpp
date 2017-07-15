#include <_THREAD_CONFIG.hpp>


START_ATF_NAMESPACE
    _THREAD_CONFIG::_THREAD_CONFIG()
    {
        using org_ptr = void (WINAPIV*)(struct _THREAD_CONFIG*);
        (org_ptr(0x14043ea90L))(this);
    };
    void _THREAD_CONFIG::ctor__THREAD_CONFIG()
    {
        using org_ptr = void (WINAPIV*)(struct _THREAD_CONFIG*);
        (org_ptr(0x14043ea90L))(this);
    };
END_ATF_NAMESPACE
