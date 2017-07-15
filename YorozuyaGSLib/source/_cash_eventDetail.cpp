#include <_cash_eventDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_cash_eventctor__cash_event2_ptr _cash_eventctor__cash_event2_next(nullptr);
        Info::_cash_eventctor__cash_event2_clbk _cash_eventctor__cash_event2_user(nullptr);
        
        
        Info::_cash_eventdtor__cash_event4_ptr _cash_eventdtor__cash_event4_next(nullptr);
        Info::_cash_eventdtor__cash_event4_clbk _cash_eventdtor__cash_event4_user(nullptr);
        
        
        void _cash_eventctor__cash_event2_wrapper(struct _cash_event* _this)
        {
           _cash_eventctor__cash_event2_user(_this, _cash_eventctor__cash_event2_next);
        };
        
        void _cash_eventdtor__cash_event4_wrapper(struct _cash_event* _this)
        {
           _cash_eventdtor__cash_event4_user(_this, _cash_eventdtor__cash_event4_next);
        };
        
        ::std::array<hook_record, 2> _cash_event_functions = 
        {
            _hook_record {
                (LPVOID)0x140304540L,
                (LPVOID *)&_cash_eventctor__cash_event2_user,
                (LPVOID *)&_cash_eventctor__cash_event2_next,
                (LPVOID)cast_pointer_function(_cash_eventctor__cash_event2_wrapper),
                (LPVOID)cast_pointer_function((void(_cash_event::*)())&_cash_event::ctor__cash_event)
            },
            _hook_record {
                (LPVOID)0x140304720L,
                (LPVOID *)&_cash_eventdtor__cash_event4_user,
                (LPVOID *)&_cash_eventdtor__cash_event4_next,
                (LPVOID)cast_pointer_function(_cash_eventdtor__cash_event4_wrapper),
                (LPVOID)cast_pointer_function((void(_cash_event::*)())&_cash_event::dtor__cash_event)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
