#include <_golden_box_item_event.hpp>


START_ATF_NAMESPACE
    _golden_box_item_event::_golden_box_item_event()
    {
        using org_ptr = void (WINAPIV*)(struct _golden_box_item_event*);
        (org_ptr(0x1404168f0L))(this);
    };
    void _golden_box_item_event::ctor__golden_box_item_event()
    {
        using org_ptr = void (WINAPIV*)(struct _golden_box_item_event*);
        (org_ptr(0x1404168f0L))(this);
    };
    _golden_box_item_event::~_golden_box_item_event()
    {
        using org_ptr = void (WINAPIV*)(struct _golden_box_item_event*);
        (org_ptr(0x140416ab0L))(this);
    };
    void _golden_box_item_event::dtor__golden_box_item_event()
    {
        using org_ptr = void (WINAPIV*)(struct _golden_box_item_event*);
        (org_ptr(0x140416ab0L))(this);
    };
END_ATF_NAMESPACE
