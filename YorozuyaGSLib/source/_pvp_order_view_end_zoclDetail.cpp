#include <_pvp_order_view_end_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_pvp_order_view_end_zoclsize2_ptr _pvp_order_view_end_zoclsize2_next(nullptr);
        Info::_pvp_order_view_end_zoclsize2_clbk _pvp_order_view_end_zoclsize2_user(nullptr);
        
        int _pvp_order_view_end_zoclsize2_wrapper(struct _pvp_order_view_end_zocl* _this)
        {
           return _pvp_order_view_end_zoclsize2_user(_this, _pvp_order_view_end_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _pvp_order_view_end_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f8690L,
                (LPVOID *)&_pvp_order_view_end_zoclsize2_user,
                (LPVOID *)&_pvp_order_view_end_zoclsize2_next,
                (LPVOID)cast_pointer_function(_pvp_order_view_end_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_pvp_order_view_end_zocl::*)())&_pvp_order_view_end_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
