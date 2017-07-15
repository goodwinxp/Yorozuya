#include <_conditional_event_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_conditional_event_inform_zoclsize2_ptr _conditional_event_inform_zoclsize2_next(nullptr);
        Info::_conditional_event_inform_zoclsize2_clbk _conditional_event_inform_zoclsize2_user(nullptr);
        
        int _conditional_event_inform_zoclsize2_wrapper(struct _conditional_event_inform_zocl* _this)
        {
           return _conditional_event_inform_zoclsize2_user(_this, _conditional_event_inform_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _conditional_event_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14030d770L,
                (LPVOID *)&_conditional_event_inform_zoclsize2_user,
                (LPVOID *)&_conditional_event_inform_zoclsize2_next,
                (LPVOID)cast_pointer_function(_conditional_event_inform_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_conditional_event_inform_zocl::*)())&_conditional_event_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
