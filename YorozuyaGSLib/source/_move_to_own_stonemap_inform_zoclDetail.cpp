#include <_move_to_own_stonemap_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_move_to_own_stonemap_inform_zoclsize2_ptr _move_to_own_stonemap_inform_zoclsize2_next(nullptr);
        Info::_move_to_own_stonemap_inform_zoclsize2_clbk _move_to_own_stonemap_inform_zoclsize2_user(nullptr);
        
        int _move_to_own_stonemap_inform_zoclsize2_wrapper(struct _move_to_own_stonemap_inform_zocl* _this)
        {
           return _move_to_own_stonemap_inform_zoclsize2_user(_this, _move_to_own_stonemap_inform_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _move_to_own_stonemap_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f03d0L,
                (LPVOID *)&_move_to_own_stonemap_inform_zoclsize2_user,
                (LPVOID *)&_move_to_own_stonemap_inform_zoclsize2_next,
                (LPVOID)cast_pointer_function(_move_to_own_stonemap_inform_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_move_to_own_stonemap_inform_zocl::*)())&_move_to_own_stonemap_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
