#include <_npclink_check_item_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_npclink_check_item_result_zoclsize2_ptr _npclink_check_item_result_zoclsize2_next(nullptr);
        Info::_npclink_check_item_result_zoclsize2_clbk _npclink_check_item_result_zoclsize2_user(nullptr);
        
        int _npclink_check_item_result_zoclsize2_wrapper(struct _npclink_check_item_result_zocl* _this)
        {
           return _npclink_check_item_result_zoclsize2_user(_this, _npclink_check_item_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _npclink_check_item_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f06a0L,
                (LPVOID *)&_npclink_check_item_result_zoclsize2_user,
                (LPVOID *)&_npclink_check_item_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_npclink_check_item_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_npclink_check_item_result_zocl::*)())&_npclink_check_item_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
