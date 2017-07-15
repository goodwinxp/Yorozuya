#include <_golden_box_item.hpp>


START_ATF_NAMESPACE
    _golden_box_item::_golden_box_item()
    {
        using org_ptr = void (WINAPIV*)(struct _golden_box_item*);
        (org_ptr(0x140416a10L))(this);
    };
    void _golden_box_item::ctor__golden_box_item()
    {
        using org_ptr = void (WINAPIV*)(struct _golden_box_item*);
        (org_ptr(0x140416a10L))(this);
    };
    
END_ATF_NAMESPACE
