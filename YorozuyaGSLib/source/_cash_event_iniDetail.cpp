#include <_cash_event_iniDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_cash_event_inictor__cash_event_ini2_ptr _cash_event_inictor__cash_event_ini2_next(nullptr);
        Info::_cash_event_inictor__cash_event_ini2_clbk _cash_event_inictor__cash_event_ini2_user(nullptr);
        
        
        void _cash_event_inictor__cash_event_ini2_wrapper(struct _cash_event_ini* _this)
        {
           _cash_event_inictor__cash_event_ini2_user(_this, _cash_event_inictor__cash_event_ini2_next);
        };
        
        ::std::array<hook_record, 1> _cash_event_ini_functions = 
        {
            _hook_record {
                (LPVOID)0x140304610L,
                (LPVOID *)&_cash_event_inictor__cash_event_ini2_user,
                (LPVOID *)&_cash_event_inictor__cash_event_ini2_next,
                (LPVOID)cast_pointer_function(_cash_event_inictor__cash_event_ini2_wrapper),
                (LPVOID)cast_pointer_function((void(_cash_event_ini::*)())&_cash_event_ini::ctor__cash_event_ini)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
