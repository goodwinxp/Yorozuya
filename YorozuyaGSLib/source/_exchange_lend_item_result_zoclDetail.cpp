#include <_exchange_lend_item_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_exchange_lend_item_result_zoclsize2_ptr _exchange_lend_item_result_zoclsize2_next(nullptr);
        Info::_exchange_lend_item_result_zoclsize2_clbk _exchange_lend_item_result_zoclsize2_user(nullptr);
        
        int _exchange_lend_item_result_zoclsize2_wrapper(struct _exchange_lend_item_result_zocl* _this)
        {
           return _exchange_lend_item_result_zoclsize2_user(_this, _exchange_lend_item_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _exchange_lend_item_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef270L,
                (LPVOID *)&_exchange_lend_item_result_zoclsize2_user,
                (LPVOID *)&_exchange_lend_item_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_exchange_lend_item_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_exchange_lend_item_result_zocl::*)())&_exchange_lend_item_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
