#include <_db_golden_box_item.hpp>


START_ATF_NAMESPACE
    _db_golden_box_item::_db_golden_box_item()
    {
        using org_ptr = void (WINAPIV*)(struct _db_golden_box_item*);
        (org_ptr(0x140416a60L))(this);
    };
    void _db_golden_box_item::ctor__db_golden_box_item()
    {
        using org_ptr = void (WINAPIV*)(struct _db_golden_box_item*);
        (org_ptr(0x140416a60L))(this);
    };
    
END_ATF_NAMESPACE
