#include <_golden_box_item_eventDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_golden_box_item_eventctor__golden_box_item_event2_ptr _golden_box_item_eventctor__golden_box_item_event2_next(nullptr);
        Info::_golden_box_item_eventctor__golden_box_item_event2_clbk _golden_box_item_eventctor__golden_box_item_event2_user(nullptr);
        
        
        Info::_golden_box_item_eventdtor__golden_box_item_event4_ptr _golden_box_item_eventdtor__golden_box_item_event4_next(nullptr);
        Info::_golden_box_item_eventdtor__golden_box_item_event4_clbk _golden_box_item_eventdtor__golden_box_item_event4_user(nullptr);
        
        
        void _golden_box_item_eventctor__golden_box_item_event2_wrapper(struct _golden_box_item_event* _this)
        {
           _golden_box_item_eventctor__golden_box_item_event2_user(_this, _golden_box_item_eventctor__golden_box_item_event2_next);
        };
        
        void _golden_box_item_eventdtor__golden_box_item_event4_wrapper(struct _golden_box_item_event* _this)
        {
           _golden_box_item_eventdtor__golden_box_item_event4_user(_this, _golden_box_item_eventdtor__golden_box_item_event4_next);
        };
        
        ::std::array<hook_record, 2> _golden_box_item_event_functions = 
        {
            _hook_record {
                (LPVOID)0x1404168f0L,
                (LPVOID *)&_golden_box_item_eventctor__golden_box_item_event2_user,
                (LPVOID *)&_golden_box_item_eventctor__golden_box_item_event2_next,
                (LPVOID)cast_pointer_function(_golden_box_item_eventctor__golden_box_item_event2_wrapper),
                (LPVOID)cast_pointer_function((void(_golden_box_item_event::*)())&_golden_box_item_event::ctor__golden_box_item_event)
            },
            _hook_record {
                (LPVOID)0x140416ab0L,
                (LPVOID *)&_golden_box_item_eventdtor__golden_box_item_event4_user,
                (LPVOID *)&_golden_box_item_eventdtor__golden_box_item_event4_next,
                (LPVOID)cast_pointer_function(_golden_box_item_eventdtor__golden_box_item_event4_wrapper),
                (LPVOID)cast_pointer_function((void(_golden_box_item_event::*)())&_golden_box_item_event::dtor__golden_box_item_event)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
