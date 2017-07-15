#include <_nuclear_bomb_current_state_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_nuclear_bomb_current_state_zoclsize2_ptr _nuclear_bomb_current_state_zoclsize2_next(nullptr);
        Info::_nuclear_bomb_current_state_zoclsize2_clbk _nuclear_bomb_current_state_zoclsize2_user(nullptr);
        
        int _nuclear_bomb_current_state_zoclsize2_wrapper(struct _nuclear_bomb_current_state_zocl* _this)
        {
           return _nuclear_bomb_current_state_zoclsize2_user(_this, _nuclear_bomb_current_state_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _nuclear_bomb_current_state_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14013e150L,
                (LPVOID *)&_nuclear_bomb_current_state_zoclsize2_user,
                (LPVOID *)&_nuclear_bomb_current_state_zoclsize2_next,
                (LPVOID)cast_pointer_function(_nuclear_bomb_current_state_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_nuclear_bomb_current_state_zocl::*)())&_nuclear_bomb_current_state_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
