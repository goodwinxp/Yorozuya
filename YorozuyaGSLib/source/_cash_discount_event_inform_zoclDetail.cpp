#include <_cash_discount_event_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_cash_discount_event_inform_zoclsize2_ptr _cash_discount_event_inform_zoclsize2_next(nullptr);
        Info::_cash_discount_event_inform_zoclsize2_clbk _cash_discount_event_inform_zoclsize2_user(nullptr);
        
        int _cash_discount_event_inform_zoclsize2_wrapper(struct _cash_discount_event_inform_zocl* _this)
        {
           return _cash_discount_event_inform_zoclsize2_user(_this, _cash_discount_event_inform_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _cash_discount_event_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14030d700L,
                (LPVOID *)&_cash_discount_event_inform_zoclsize2_user,
                (LPVOID *)&_cash_discount_event_inform_zoclsize2_next,
                (LPVOID)cast_pointer_function(_cash_discount_event_inform_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_cash_discount_event_inform_zocl::*)())&_cash_discount_event_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
