#include <_param_cash_total_sellingDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_param_cash_total_sellingsize2_ptr _param_cash_total_sellingsize2_next(nullptr);
        Info::_param_cash_total_sellingsize2_clbk _param_cash_total_sellingsize2_user(nullptr);
        
        int _param_cash_total_sellingsize2_wrapper(struct _param_cash_total_selling* _this)
        {
           return _param_cash_total_sellingsize2_user(_this, _param_cash_total_sellingsize2_next);
        };
        
        ::std::array<hook_record, 1> _param_cash_total_selling_functions = 
        {
            _hook_record {
                (LPVOID)0x140304bb0L,
                (LPVOID *)&_param_cash_total_sellingsize2_user,
                (LPVOID *)&_param_cash_total_sellingsize2_next,
                (LPVOID)cast_pointer_function(_param_cash_total_sellingsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_param_cash_total_selling::*)())&_param_cash_total_selling::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
