#include <_a_trade_clear_item_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_a_trade_clear_item_result_zoclsize2_ptr _a_trade_clear_item_result_zoclsize2_next(nullptr);
        Info::_a_trade_clear_item_result_zoclsize2_clbk _a_trade_clear_item_result_zoclsize2_user(nullptr);
        
        int _a_trade_clear_item_result_zoclsize2_wrapper(struct _a_trade_clear_item_result_zocl* _this)
        {
           return _a_trade_clear_item_result_zoclsize2_user(_this, _a_trade_clear_item_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _a_trade_clear_item_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14035fdc0L,
                (LPVOID *)&_a_trade_clear_item_result_zoclsize2_user,
                (LPVOID *)&_a_trade_clear_item_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_a_trade_clear_item_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_a_trade_clear_item_result_zocl::*)())&_a_trade_clear_item_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
