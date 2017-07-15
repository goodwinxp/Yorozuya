#include <_unmannedtrader_regist_item_success_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_unmannedtrader_regist_item_success_result_zoclsize2_ptr _unmannedtrader_regist_item_success_result_zoclsize2_next(nullptr);
        Info::_unmannedtrader_regist_item_success_result_zoclsize2_clbk _unmannedtrader_regist_item_success_result_zoclsize2_user(nullptr);
        
        int _unmannedtrader_regist_item_success_result_zoclsize2_wrapper(struct _unmannedtrader_regist_item_success_result_zocl* _this)
        {
           return _unmannedtrader_regist_item_success_result_zoclsize2_user(_this, _unmannedtrader_regist_item_success_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _unmannedtrader_regist_item_success_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14035fd80L,
                (LPVOID *)&_unmannedtrader_regist_item_success_result_zoclsize2_user,
                (LPVOID *)&_unmannedtrader_regist_item_success_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_unmannedtrader_regist_item_success_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_unmannedtrader_regist_item_success_result_zocl::*)())&_unmannedtrader_regist_item_success_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
