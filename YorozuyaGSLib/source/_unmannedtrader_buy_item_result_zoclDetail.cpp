#include <_unmannedtrader_buy_item_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_unmannedtrader_buy_item_result_zoclctor__unmannedtrader_buy_item_result_zocl2_ptr _unmannedtrader_buy_item_result_zoclctor__unmannedtrader_buy_item_result_zocl2_next(nullptr);
        Info::_unmannedtrader_buy_item_result_zoclctor__unmannedtrader_buy_item_result_zocl2_clbk _unmannedtrader_buy_item_result_zoclctor__unmannedtrader_buy_item_result_zocl2_user(nullptr);
        
        Info::_unmannedtrader_buy_item_result_zoclsize4_ptr _unmannedtrader_buy_item_result_zoclsize4_next(nullptr);
        Info::_unmannedtrader_buy_item_result_zoclsize4_clbk _unmannedtrader_buy_item_result_zoclsize4_user(nullptr);
        
        
        void _unmannedtrader_buy_item_result_zoclctor__unmannedtrader_buy_item_result_zocl2_wrapper(struct _unmannedtrader_buy_item_result_zocl* _this)
        {
           _unmannedtrader_buy_item_result_zoclctor__unmannedtrader_buy_item_result_zocl2_user(_this, _unmannedtrader_buy_item_result_zoclctor__unmannedtrader_buy_item_result_zocl2_next);
        };
        int _unmannedtrader_buy_item_result_zoclsize4_wrapper(struct _unmannedtrader_buy_item_result_zocl* _this)
        {
           return _unmannedtrader_buy_item_result_zoclsize4_user(_this, _unmannedtrader_buy_item_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _unmannedtrader_buy_item_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x140351860L,
                (LPVOID *)&_unmannedtrader_buy_item_result_zoclctor__unmannedtrader_buy_item_result_zocl2_user,
                (LPVOID *)&_unmannedtrader_buy_item_result_zoclctor__unmannedtrader_buy_item_result_zocl2_next,
                (LPVOID)cast_pointer_function(_unmannedtrader_buy_item_result_zoclctor__unmannedtrader_buy_item_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_unmannedtrader_buy_item_result_zocl::*)())&_unmannedtrader_buy_item_result_zocl::ctor__unmannedtrader_buy_item_result_zocl)
            },
            _hook_record {
                (LPVOID)0x140351890L,
                (LPVOID *)&_unmannedtrader_buy_item_result_zoclsize4_user,
                (LPVOID *)&_unmannedtrader_buy_item_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_unmannedtrader_buy_item_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_unmannedtrader_buy_item_result_zocl::*)())&_unmannedtrader_buy_item_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
