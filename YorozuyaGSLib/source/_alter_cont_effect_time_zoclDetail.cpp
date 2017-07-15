#include <_alter_cont_effect_time_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_alter_cont_effect_time_zoclctor__alter_cont_effect_time_zocl2_ptr _alter_cont_effect_time_zoclctor__alter_cont_effect_time_zocl2_next(nullptr);
        Info::_alter_cont_effect_time_zoclctor__alter_cont_effect_time_zocl2_clbk _alter_cont_effect_time_zoclctor__alter_cont_effect_time_zocl2_user(nullptr);
        
        Info::_alter_cont_effect_time_zoclsize4_ptr _alter_cont_effect_time_zoclsize4_next(nullptr);
        Info::_alter_cont_effect_time_zoclsize4_clbk _alter_cont_effect_time_zoclsize4_user(nullptr);
        
        
        void _alter_cont_effect_time_zoclctor__alter_cont_effect_time_zocl2_wrapper(struct _alter_cont_effect_time_zocl* _this)
        {
           _alter_cont_effect_time_zoclctor__alter_cont_effect_time_zocl2_user(_this, _alter_cont_effect_time_zoclctor__alter_cont_effect_time_zocl2_next);
        };
        int _alter_cont_effect_time_zoclsize4_wrapper(struct _alter_cont_effect_time_zocl* _this)
        {
           return _alter_cont_effect_time_zoclsize4_user(_this, _alter_cont_effect_time_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _alter_cont_effect_time_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efdf0L,
                (LPVOID *)&_alter_cont_effect_time_zoclctor__alter_cont_effect_time_zocl2_user,
                (LPVOID *)&_alter_cont_effect_time_zoclctor__alter_cont_effect_time_zocl2_next,
                (LPVOID)cast_pointer_function(_alter_cont_effect_time_zoclctor__alter_cont_effect_time_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_alter_cont_effect_time_zocl::*)())&_alter_cont_effect_time_zocl::ctor__alter_cont_effect_time_zocl)
            },
            _hook_record {
                (LPVOID)0x1400efe10L,
                (LPVOID *)&_alter_cont_effect_time_zoclsize4_user,
                (LPVOID *)&_alter_cont_effect_time_zoclsize4_next,
                (LPVOID)cast_pointer_function(_alter_cont_effect_time_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_alter_cont_effect_time_zocl::*)())&_alter_cont_effect_time_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
