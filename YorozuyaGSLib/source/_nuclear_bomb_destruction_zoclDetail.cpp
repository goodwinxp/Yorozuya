#include <_nuclear_bomb_destruction_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_nuclear_bomb_destruction_zoclctor__nuclear_bomb_destruction_zocl2_ptr _nuclear_bomb_destruction_zoclctor__nuclear_bomb_destruction_zocl2_next(nullptr);
        Info::_nuclear_bomb_destruction_zoclctor__nuclear_bomb_destruction_zocl2_clbk _nuclear_bomb_destruction_zoclctor__nuclear_bomb_destruction_zocl2_user(nullptr);
        
        Info::_nuclear_bomb_destruction_zoclsize4_ptr _nuclear_bomb_destruction_zoclsize4_next(nullptr);
        Info::_nuclear_bomb_destruction_zoclsize4_clbk _nuclear_bomb_destruction_zoclsize4_user(nullptr);
        
        
        void _nuclear_bomb_destruction_zoclctor__nuclear_bomb_destruction_zocl2_wrapper(struct _nuclear_bomb_destruction_zocl* _this)
        {
           _nuclear_bomb_destruction_zoclctor__nuclear_bomb_destruction_zocl2_user(_this, _nuclear_bomb_destruction_zoclctor__nuclear_bomb_destruction_zocl2_next);
        };
        int _nuclear_bomb_destruction_zoclsize4_wrapper(struct _nuclear_bomb_destruction_zocl* _this)
        {
           return _nuclear_bomb_destruction_zoclsize4_user(_this, _nuclear_bomb_destruction_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _nuclear_bomb_destruction_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14013e740L,
                (LPVOID *)&_nuclear_bomb_destruction_zoclctor__nuclear_bomb_destruction_zocl2_user,
                (LPVOID *)&_nuclear_bomb_destruction_zoclctor__nuclear_bomb_destruction_zocl2_next,
                (LPVOID)cast_pointer_function(_nuclear_bomb_destruction_zoclctor__nuclear_bomb_destruction_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_nuclear_bomb_destruction_zocl::*)())&_nuclear_bomb_destruction_zocl::ctor__nuclear_bomb_destruction_zocl)
            },
            _hook_record {
                (LPVOID)0x14013e790L,
                (LPVOID *)&_nuclear_bomb_destruction_zoclsize4_user,
                (LPVOID *)&_nuclear_bomb_destruction_zoclsize4_next,
                (LPVOID)cast_pointer_function(_nuclear_bomb_destruction_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_nuclear_bomb_destruction_zocl::*)())&_nuclear_bomb_destruction_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
