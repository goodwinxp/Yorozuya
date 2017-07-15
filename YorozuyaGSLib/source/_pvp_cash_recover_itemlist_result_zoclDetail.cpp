#include <_pvp_cash_recover_itemlist_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_pvp_cash_recover_itemlist_result_zoclctor__pvp_cash_recover_itemlist_result_zocl2_ptr _pvp_cash_recover_itemlist_result_zoclctor__pvp_cash_recover_itemlist_result_zocl2_next(nullptr);
        Info::_pvp_cash_recover_itemlist_result_zoclctor__pvp_cash_recover_itemlist_result_zocl2_clbk _pvp_cash_recover_itemlist_result_zoclctor__pvp_cash_recover_itemlist_result_zocl2_user(nullptr);
        
        Info::_pvp_cash_recover_itemlist_result_zoclsize4_ptr _pvp_cash_recover_itemlist_result_zoclsize4_next(nullptr);
        Info::_pvp_cash_recover_itemlist_result_zoclsize4_clbk _pvp_cash_recover_itemlist_result_zoclsize4_user(nullptr);
        
        
        void _pvp_cash_recover_itemlist_result_zoclctor__pvp_cash_recover_itemlist_result_zocl2_wrapper(struct _pvp_cash_recover_itemlist_result_zocl* _this)
        {
           _pvp_cash_recover_itemlist_result_zoclctor__pvp_cash_recover_itemlist_result_zocl2_user(_this, _pvp_cash_recover_itemlist_result_zoclctor__pvp_cash_recover_itemlist_result_zocl2_next);
        };
        int _pvp_cash_recover_itemlist_result_zoclsize4_wrapper(struct _pvp_cash_recover_itemlist_result_zocl* _this)
        {
           return _pvp_cash_recover_itemlist_result_zoclsize4_user(_this, _pvp_cash_recover_itemlist_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _pvp_cash_recover_itemlist_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f6d70L,
                (LPVOID *)&_pvp_cash_recover_itemlist_result_zoclctor__pvp_cash_recover_itemlist_result_zocl2_user,
                (LPVOID *)&_pvp_cash_recover_itemlist_result_zoclctor__pvp_cash_recover_itemlist_result_zocl2_next,
                (LPVOID)cast_pointer_function(_pvp_cash_recover_itemlist_result_zoclctor__pvp_cash_recover_itemlist_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_pvp_cash_recover_itemlist_result_zocl::*)())&_pvp_cash_recover_itemlist_result_zocl::ctor__pvp_cash_recover_itemlist_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1403f6dc0L,
                (LPVOID *)&_pvp_cash_recover_itemlist_result_zoclsize4_user,
                (LPVOID *)&_pvp_cash_recover_itemlist_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_pvp_cash_recover_itemlist_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_pvp_cash_recover_itemlist_result_zocl::*)())&_pvp_cash_recover_itemlist_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
