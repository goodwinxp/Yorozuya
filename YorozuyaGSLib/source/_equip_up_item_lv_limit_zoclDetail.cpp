#include <_equip_up_item_lv_limit_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_equip_up_item_lv_limit_zoclctor__equip_up_item_lv_limit_zocl2_ptr _equip_up_item_lv_limit_zoclctor__equip_up_item_lv_limit_zocl2_next(nullptr);
        Info::_equip_up_item_lv_limit_zoclctor__equip_up_item_lv_limit_zocl2_clbk _equip_up_item_lv_limit_zoclctor__equip_up_item_lv_limit_zocl2_user(nullptr);
        
        
        void _equip_up_item_lv_limit_zoclctor__equip_up_item_lv_limit_zocl2_wrapper(struct _equip_up_item_lv_limit_zocl* _this)
        {
           _equip_up_item_lv_limit_zoclctor__equip_up_item_lv_limit_zocl2_user(_this, _equip_up_item_lv_limit_zoclctor__equip_up_item_lv_limit_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _equip_up_item_lv_limit_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f06f0L,
                (LPVOID *)&_equip_up_item_lv_limit_zoclctor__equip_up_item_lv_limit_zocl2_user,
                (LPVOID *)&_equip_up_item_lv_limit_zoclctor__equip_up_item_lv_limit_zocl2_next,
                (LPVOID)cast_pointer_function(_equip_up_item_lv_limit_zoclctor__equip_up_item_lv_limit_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_equip_up_item_lv_limit_zocl::*)())&_equip_up_item_lv_limit_zocl::ctor__equip_up_item_lv_limit_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
