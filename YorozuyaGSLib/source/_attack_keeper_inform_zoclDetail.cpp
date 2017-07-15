#include <_attack_keeper_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_ptr _attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_next(nullptr);
        Info::_attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_clbk _attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_user(nullptr);
        
        Info::_attack_keeper_inform_zoclsize4_ptr _attack_keeper_inform_zoclsize4_next(nullptr);
        Info::_attack_keeper_inform_zoclsize4_clbk _attack_keeper_inform_zoclsize4_user(nullptr);
        
        
        void _attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_wrapper(struct _attack_keeper_inform_zocl* _this)
        {
           _attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_user(_this, _attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_next);
        };
        int _attack_keeper_inform_zoclsize4_wrapper(struct _attack_keeper_inform_zocl* _this)
        {
           return _attack_keeper_inform_zoclsize4_user(_this, _attack_keeper_inform_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _attack_keeper_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x140136c00L,
                (LPVOID *)&_attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_user,
                (LPVOID *)&_attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_attack_keeper_inform_zoclctor__attack_keeper_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_attack_keeper_inform_zocl::*)())&_attack_keeper_inform_zocl::ctor__attack_keeper_inform_zocl)
            },
            _hook_record {
                (LPVOID)0x140136c20L,
                (LPVOID *)&_attack_keeper_inform_zoclsize4_user,
                (LPVOID *)&_attack_keeper_inform_zoclsize4_next,
                (LPVOID)cast_pointer_function(_attack_keeper_inform_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_attack_keeper_inform_zocl::*)())&_attack_keeper_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
