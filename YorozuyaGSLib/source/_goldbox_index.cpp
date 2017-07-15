#include <_goldbox_index.hpp>


START_ATF_NAMESPACE
    _goldbox_index::_goldbox_index()
    {
        using org_ptr = void (WINAPIV*)(struct _goldbox_index*);
        (org_ptr(0x140416c60L))(this);
    };
    void _goldbox_index::ctor__goldbox_index()
    {
        using org_ptr = void (WINAPIV*)(struct _goldbox_index*);
        (org_ptr(0x140416c60L))(this);
    };
END_ATF_NAMESPACE
