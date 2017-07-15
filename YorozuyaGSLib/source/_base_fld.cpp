#include <_base_fld.hpp>


START_ATF_NAMESPACE
    _base_fld::_base_fld()
    {
        using org_ptr = void (WINAPIV*)(struct _base_fld*);
        (org_ptr(0x140161930L))(this);
    };
    void _base_fld::ctor__base_fld()
    {
        using org_ptr = void (WINAPIV*)(struct _base_fld*);
        (org_ptr(0x140161930L))(this);
    };
END_ATF_NAMESPACE
