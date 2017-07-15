#include <_cash_event_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_cash_event_inform_zoclctor__cash_event_inform_zocl2_ptr _cash_event_inform_zoclctor__cash_event_inform_zocl2_next(nullptr);
        Info::_cash_event_inform_zoclctor__cash_event_inform_zocl2_clbk _cash_event_inform_zoclctor__cash_event_inform_zocl2_user(nullptr);
        
        Info::_cash_event_inform_zoclsize4_ptr _cash_event_inform_zoclsize4_next(nullptr);
        Info::_cash_event_inform_zoclsize4_clbk _cash_event_inform_zoclsize4_user(nullptr);
        
        
        void _cash_event_inform_zoclctor__cash_event_inform_zocl2_wrapper(struct _cash_event_inform_zocl* _this)
        {
           _cash_event_inform_zoclctor__cash_event_inform_zocl2_user(_this, _cash_event_inform_zoclctor__cash_event_inform_zocl2_next);
        };
        int _cash_event_inform_zoclsize4_wrapper(struct _cash_event_inform_zocl* _this)
        {
           return _cash_event_inform_zoclsize4_user(_this, _cash_event_inform_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _cash_event_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14030d710L,
                (LPVOID *)&_cash_event_inform_zoclctor__cash_event_inform_zocl2_user,
                (LPVOID *)&_cash_event_inform_zoclctor__cash_event_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_cash_event_inform_zoclctor__cash_event_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_cash_event_inform_zocl::*)())&_cash_event_inform_zocl::ctor__cash_event_inform_zocl)
            },
            _hook_record {
                (LPVOID)0x14030d760L,
                (LPVOID *)&_cash_event_inform_zoclsize4_user,
                (LPVOID *)&_cash_event_inform_zoclsize4_next,
                (LPVOID)cast_pointer_function(_cash_event_inform_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_cash_event_inform_zocl::*)())&_cash_event_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
