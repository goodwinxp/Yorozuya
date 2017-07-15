#include <_map_fld.hpp>


START_ATF_NAMESPACE
    _map_fld::_map_fld()
    {
        using org_ptr = void (WINAPIV*)(struct _map_fld*);
        (org_ptr(0x140198ff0L))(this);
    };
    void _map_fld::ctor__map_fld()
    {
        using org_ptr = void (WINAPIV*)(struct _map_fld*);
        (org_ptr(0x140198ff0L))(this);
    };
END_ATF_NAMESPACE
