#include <_SRAND.hpp>


START_ATF_NAMESPACE
    _SRAND::_SRAND()
    {
        using org_ptr = void (WINAPIV*)(struct _SRAND*);
        (org_ptr(0x140202390L))(this);
    };
    void _SRAND::ctor__SRAND()
    {
        using org_ptr = void (WINAPIV*)(struct _SRAND*);
        (org_ptr(0x140202390L))(this);
    };
END_ATF_NAMESPACE
