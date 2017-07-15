#include <_alter_action_point_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_alter_action_point_zoclctor__alter_action_point_zocl2_ptr _alter_action_point_zoclctor__alter_action_point_zocl2_next(nullptr);
        Info::_alter_action_point_zoclctor__alter_action_point_zocl2_clbk _alter_action_point_zoclctor__alter_action_point_zocl2_user(nullptr);
        
        
        void _alter_action_point_zoclctor__alter_action_point_zocl2_wrapper(struct _alter_action_point_zocl* _this)
        {
           _alter_action_point_zoclctor__alter_action_point_zocl2_user(_this, _alter_action_point_zoclctor__alter_action_point_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _alter_action_point_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f07a0L,
                (LPVOID *)&_alter_action_point_zoclctor__alter_action_point_zocl2_user,
                (LPVOID *)&_alter_action_point_zoclctor__alter_action_point_zocl2_next,
                (LPVOID)cast_pointer_function(_alter_action_point_zoclctor__alter_action_point_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_alter_action_point_zocl::*)())&_alter_action_point_zocl::ctor__alter_action_point_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
