#include <_nuclear_bomb_position_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_nuclear_bomb_position_inform_zoclctor__nuclear_bomb_position_inform_zocl2_ptr _nuclear_bomb_position_inform_zoclctor__nuclear_bomb_position_inform_zocl2_next(nullptr);
        Info::_nuclear_bomb_position_inform_zoclctor__nuclear_bomb_position_inform_zocl2_clbk _nuclear_bomb_position_inform_zoclctor__nuclear_bomb_position_inform_zocl2_user(nullptr);
        
        
        void _nuclear_bomb_position_inform_zoclctor__nuclear_bomb_position_inform_zocl2_wrapper(struct _nuclear_bomb_position_inform_zocl* _this)
        {
           _nuclear_bomb_position_inform_zoclctor__nuclear_bomb_position_inform_zocl2_user(_this, _nuclear_bomb_position_inform_zoclctor__nuclear_bomb_position_inform_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _nuclear_bomb_position_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14013e5e0L,
                (LPVOID *)&_nuclear_bomb_position_inform_zoclctor__nuclear_bomb_position_inform_zocl2_user,
                (LPVOID *)&_nuclear_bomb_position_inform_zoclctor__nuclear_bomb_position_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_nuclear_bomb_position_inform_zoclctor__nuclear_bomb_position_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_nuclear_bomb_position_inform_zocl::*)())&_nuclear_bomb_position_inform_zocl::ctor__nuclear_bomb_position_inform_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
