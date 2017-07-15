#include <_unmannedtrader_close_item_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_unmannedtrader_close_item_inform_zoclsize2_ptr _unmannedtrader_close_item_inform_zoclsize2_next(nullptr);
        Info::_unmannedtrader_close_item_inform_zoclsize2_clbk _unmannedtrader_close_item_inform_zoclsize2_user(nullptr);
        
        int _unmannedtrader_close_item_inform_zoclsize2_wrapper(struct _unmannedtrader_close_item_inform_zocl* _this)
        {
           return _unmannedtrader_close_item_inform_zoclsize2_user(_this, _unmannedtrader_close_item_inform_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _unmannedtrader_close_item_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14035fd70L,
                (LPVOID *)&_unmannedtrader_close_item_inform_zoclsize2_user,
                (LPVOID *)&_unmannedtrader_close_item_inform_zoclsize2_next,
                (LPVOID)cast_pointer_function(_unmannedtrader_close_item_inform_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_unmannedtrader_close_item_inform_zocl::*)())&_unmannedtrader_close_item_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
