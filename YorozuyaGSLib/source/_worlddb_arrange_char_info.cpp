#include <_worlddb_arrange_char_info.hpp>


START_ATF_NAMESPACE
    _worlddb_arrange_char_info::_worlddb_arrange_char_info()
    {
        using org_ptr = void (WINAPIV*)(struct _worlddb_arrange_char_info*);
        (org_ptr(0x1401bf040L))(this);
    };
    void _worlddb_arrange_char_info::ctor__worlddb_arrange_char_info()
    {
        using org_ptr = void (WINAPIV*)(struct _worlddb_arrange_char_info*);
        (org_ptr(0x1401bf040L))(this);
    };
END_ATF_NAMESPACE
