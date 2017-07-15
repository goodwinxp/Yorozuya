#include <_golden_box_item_ini.hpp>


START_ATF_NAMESPACE
    _golden_box_item_ini::_golden_box_item_ini()
    {
        using org_ptr = void (WINAPIV*)(struct _golden_box_item_ini*);
        (org_ptr(0x1404169c0L))(this);
    };
    void _golden_box_item_ini::ctor__golden_box_item_ini()
    {
        using org_ptr = void (WINAPIV*)(struct _golden_box_item_ini*);
        (org_ptr(0x1404169c0L))(this);
    };
    
END_ATF_NAMESPACE
