#include <_attack_paramDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_attack_paramctor__attack_param2_ptr _attack_paramctor__attack_param2_next(nullptr);
        Info::_attack_paramctor__attack_param2_clbk _attack_paramctor__attack_param2_user(nullptr);
        
        
        void _attack_paramctor__attack_param2_wrapper(struct _attack_param* _this)
        {
           _attack_paramctor__attack_param2_user(_this, _attack_paramctor__attack_param2_next);
        };
        
        ::std::array<hook_record, 1> _attack_param_functions = 
        {
            _hook_record {
                (LPVOID)0x14008e4a0L,
                (LPVOID *)&_attack_paramctor__attack_param2_user,
                (LPVOID *)&_attack_paramctor__attack_param2_next,
                (LPVOID)cast_pointer_function(_attack_paramctor__attack_param2_wrapper),
                (LPVOID)cast_pointer_function((void(_attack_param::*)())&_attack_param::ctor__attack_param)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
