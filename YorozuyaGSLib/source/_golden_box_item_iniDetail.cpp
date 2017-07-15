#include <_golden_box_item_iniDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_golden_box_item_inictor__golden_box_item_ini2_ptr _golden_box_item_inictor__golden_box_item_ini2_next(nullptr);
        Info::_golden_box_item_inictor__golden_box_item_ini2_clbk _golden_box_item_inictor__golden_box_item_ini2_user(nullptr);
        
        
        void _golden_box_item_inictor__golden_box_item_ini2_wrapper(struct _golden_box_item_ini* _this)
        {
           _golden_box_item_inictor__golden_box_item_ini2_user(_this, _golden_box_item_inictor__golden_box_item_ini2_next);
        };
        
        ::std::array<hook_record, 1> _golden_box_item_ini_functions = 
        {
            _hook_record {
                (LPVOID)0x1404169c0L,
                (LPVOID *)&_golden_box_item_inictor__golden_box_item_ini2_user,
                (LPVOID *)&_golden_box_item_inictor__golden_box_item_ini2_next,
                (LPVOID)cast_pointer_function(_golden_box_item_inictor__golden_box_item_ini2_wrapper),
                (LPVOID)cast_pointer_function((void(_golden_box_item_ini::*)())&_golden_box_item_ini::ctor__golden_box_item_ini)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
