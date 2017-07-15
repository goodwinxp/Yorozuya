#include <_buy_store_success_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_buy_store_success_zoclctor__buy_store_success_zocl2_ptr _buy_store_success_zoclctor__buy_store_success_zocl2_next(nullptr);
        Info::_buy_store_success_zoclctor__buy_store_success_zocl2_clbk _buy_store_success_zoclctor__buy_store_success_zocl2_user(nullptr);
        
        Info::_buy_store_success_zoclsize4_ptr _buy_store_success_zoclsize4_next(nullptr);
        Info::_buy_store_success_zoclsize4_clbk _buy_store_success_zoclsize4_user(nullptr);
        
        
        void _buy_store_success_zoclctor__buy_store_success_zocl2_wrapper(struct _buy_store_success_zocl* _this)
        {
           _buy_store_success_zoclctor__buy_store_success_zocl2_user(_this, _buy_store_success_zoclctor__buy_store_success_zocl2_next);
        };
        int _buy_store_success_zoclsize4_wrapper(struct _buy_store_success_zocl* _this)
        {
           return _buy_store_success_zoclsize4_user(_this, _buy_store_success_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _buy_store_success_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef130L,
                (LPVOID *)&_buy_store_success_zoclctor__buy_store_success_zocl2_user,
                (LPVOID *)&_buy_store_success_zoclctor__buy_store_success_zocl2_next,
                (LPVOID)cast_pointer_function(_buy_store_success_zoclctor__buy_store_success_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_buy_store_success_zocl::*)())&_buy_store_success_zocl::ctor__buy_store_success_zocl)
            },
            _hook_record {
                (LPVOID)0x1400ef150L,
                (LPVOID *)&_buy_store_success_zoclsize4_user,
                (LPVOID *)&_buy_store_success_zoclsize4_next,
                (LPVOID)cast_pointer_function(_buy_store_success_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_buy_store_success_zocl::*)())&_buy_store_success_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
