#include <_param_cashDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_param_cashctor__param_cash2_ptr _param_cashctor__param_cash2_next(nullptr);
        Info::_param_cashctor__param_cash2_clbk _param_cashctor__param_cash2_user(nullptr);
        
        
        Info::_param_cashdtor__param_cash4_ptr _param_cashdtor__param_cash4_next(nullptr);
        Info::_param_cashdtor__param_cash4_clbk _param_cashdtor__param_cash4_user(nullptr);
        
        
        void _param_cashctor__param_cash2_wrapper(struct _param_cash* _this, unsigned int dwAccount, unsigned int dwAvator, uint16_t wSock)
        {
           _param_cashctor__param_cash2_user(_this, dwAccount, dwAvator, wSock, _param_cashctor__param_cash2_next);
        };
        
        void _param_cashdtor__param_cash4_wrapper(struct _param_cash* _this)
        {
           _param_cashdtor__param_cash4_user(_this, _param_cashdtor__param_cash4_next);
        };
        
        ::std::array<hook_record, 2> _param_cash_functions = 
        {
            _hook_record {
                (LPVOID)0x1402f2890L,
                (LPVOID *)&_param_cashctor__param_cash2_user,
                (LPVOID *)&_param_cashctor__param_cash2_next,
                (LPVOID)cast_pointer_function(_param_cashctor__param_cash2_wrapper),
                (LPVOID)cast_pointer_function((void(_param_cash::*)(unsigned int, unsigned int, uint16_t))&_param_cash::ctor__param_cash)
            },
            _hook_record {
                (LPVOID)0x1402f2910L,
                (LPVOID *)&_param_cashdtor__param_cash4_user,
                (LPVOID *)&_param_cashdtor__param_cash4_next,
                (LPVOID)cast_pointer_function(_param_cashdtor__param_cash4_wrapper),
                (LPVOID)cast_pointer_function((void(_param_cash::*)())&_param_cash::dtor__param_cash)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
