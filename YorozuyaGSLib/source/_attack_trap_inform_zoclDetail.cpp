#include <_attack_trap_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_attack_trap_inform_zoclctor__attack_trap_inform_zocl2_ptr _attack_trap_inform_zoclctor__attack_trap_inform_zocl2_next(nullptr);
        Info::_attack_trap_inform_zoclctor__attack_trap_inform_zocl2_clbk _attack_trap_inform_zoclctor__attack_trap_inform_zocl2_user(nullptr);
        
        Info::_attack_trap_inform_zoclsize4_ptr _attack_trap_inform_zoclsize4_next(nullptr);
        Info::_attack_trap_inform_zoclsize4_clbk _attack_trap_inform_zoclsize4_user(nullptr);
        
        
        void _attack_trap_inform_zoclctor__attack_trap_inform_zocl2_wrapper(struct _attack_trap_inform_zocl* _this)
        {
           _attack_trap_inform_zoclctor__attack_trap_inform_zocl2_user(_this, _attack_trap_inform_zoclctor__attack_trap_inform_zocl2_next);
        };
        int _attack_trap_inform_zoclsize4_wrapper(struct _attack_trap_inform_zocl* _this)
        {
           return _attack_trap_inform_zoclsize4_user(_this, _attack_trap_inform_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _attack_trap_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x140141400L,
                (LPVOID *)&_attack_trap_inform_zoclctor__attack_trap_inform_zocl2_user,
                (LPVOID *)&_attack_trap_inform_zoclctor__attack_trap_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_attack_trap_inform_zoclctor__attack_trap_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_attack_trap_inform_zocl::*)())&_attack_trap_inform_zocl::ctor__attack_trap_inform_zocl)
            },
            _hook_record {
                (LPVOID)0x140141420L,
                (LPVOID *)&_attack_trap_inform_zoclsize4_user,
                (LPVOID *)&_attack_trap_inform_zoclsize4_next,
                (LPVOID)cast_pointer_function(_attack_trap_inform_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_attack_trap_inform_zocl::*)())&_attack_trap_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
