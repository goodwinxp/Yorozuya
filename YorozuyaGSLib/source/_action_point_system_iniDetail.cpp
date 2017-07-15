#include <_action_point_system_iniDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_action_point_system_inictor__action_point_system_ini2_ptr _action_point_system_inictor__action_point_system_ini2_next(nullptr);
        Info::_action_point_system_inictor__action_point_system_ini2_clbk _action_point_system_inictor__action_point_system_ini2_user(nullptr);
        
        
        void _action_point_system_inictor__action_point_system_ini2_wrapper(struct _action_point_system_ini* _this)
        {
           _action_point_system_inictor__action_point_system_ini2_user(_this, _action_point_system_inictor__action_point_system_ini2_next);
        };
        
        ::std::array<hook_record, 1> _action_point_system_ini_functions = 
        {
            _hook_record {
                (LPVOID)0x140411de0L,
                (LPVOID *)&_action_point_system_inictor__action_point_system_ini2_user,
                (LPVOID *)&_action_point_system_inictor__action_point_system_ini2_next,
                (LPVOID)cast_pointer_function(_action_point_system_inictor__action_point_system_ini2_wrapper),
                (LPVOID)cast_pointer_function((void(_action_point_system_ini::*)())&_action_point_system_ini::ctor__action_point_system_ini)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
