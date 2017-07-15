#include <_param_cash_selectDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_param_cash_selectctor__param_cash_select2_ptr _param_cash_selectctor__param_cash_select2_next(nullptr);
        Info::_param_cash_selectctor__param_cash_select2_clbk _param_cash_selectctor__param_cash_select2_user(nullptr);
        
        Info::_param_cash_selectsize4_ptr _param_cash_selectsize4_next(nullptr);
        Info::_param_cash_selectsize4_clbk _param_cash_selectsize4_user(nullptr);
        
        
        Info::_param_cash_selectdtor__param_cash_select6_ptr _param_cash_selectdtor__param_cash_select6_next(nullptr);
        Info::_param_cash_selectdtor__param_cash_select6_clbk _param_cash_selectdtor__param_cash_select6_user(nullptr);
        
        
        void _param_cash_selectctor__param_cash_select2_wrapper(struct _param_cash_select* _this, unsigned int dwAc, unsigned int dwAv, uint16_t wSock)
        {
           _param_cash_selectctor__param_cash_select2_user(_this, dwAc, dwAv, wSock, _param_cash_selectctor__param_cash_select2_next);
        };
        int _param_cash_selectsize4_wrapper(struct _param_cash_select* _this)
        {
           return _param_cash_selectsize4_user(_this, _param_cash_selectsize4_next);
        };
        
        void _param_cash_selectdtor__param_cash_select6_wrapper(struct _param_cash_select* _this)
        {
           _param_cash_selectdtor__param_cash_select6_user(_this, _param_cash_selectdtor__param_cash_select6_next);
        };
        
        ::std::array<hook_record, 3> _param_cash_select_functions = 
        {
            _hook_record {
                (LPVOID)0x140304a80L,
                (LPVOID *)&_param_cash_selectctor__param_cash_select2_user,
                (LPVOID *)&_param_cash_selectctor__param_cash_select2_next,
                (LPVOID)cast_pointer_function(_param_cash_selectctor__param_cash_select2_wrapper),
                (LPVOID)cast_pointer_function((void(_param_cash_select::*)(unsigned int, unsigned int, uint16_t))&_param_cash_select::ctor__param_cash_select)
            },
            _hook_record {
                (LPVOID)0x140304b30L,
                (LPVOID *)&_param_cash_selectsize4_user,
                (LPVOID *)&_param_cash_selectsize4_next,
                (LPVOID)cast_pointer_function(_param_cash_selectsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_param_cash_select::*)())&_param_cash_select::size)
            },
            _hook_record {
                (LPVOID)0x140304af0L,
                (LPVOID *)&_param_cash_selectdtor__param_cash_select6_user,
                (LPVOID *)&_param_cash_selectdtor__param_cash_select6_next,
                (LPVOID)cast_pointer_function(_param_cash_selectdtor__param_cash_select6_wrapper),
                (LPVOID)cast_pointer_function((void(_param_cash_select::*)())&_param_cash_select::dtor__param_cash_select)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
