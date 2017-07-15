#include <_Init_action_point_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_Init_action_point_zoclctor__Init_action_point_zocl2_ptr _Init_action_point_zoclctor__Init_action_point_zocl2_next(nullptr);
        Info::_Init_action_point_zoclctor__Init_action_point_zocl2_clbk _Init_action_point_zoclctor__Init_action_point_zocl2_user(nullptr);
        
        
        void _Init_action_point_zoclctor__Init_action_point_zocl2_wrapper(struct _Init_action_point_zocl* _this)
        {
           _Init_action_point_zoclctor__Init_action_point_zocl2_user(_this, _Init_action_point_zoclctor__Init_action_point_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _Init_action_point_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f07f0L,
                (LPVOID *)&_Init_action_point_zoclctor__Init_action_point_zocl2_user,
                (LPVOID *)&_Init_action_point_zoclctor__Init_action_point_zocl2_next,
                (LPVOID)cast_pointer_function(_Init_action_point_zoclctor__Init_action_point_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_Init_action_point_zocl::*)())&_Init_action_point_zocl::ctor__Init_action_point_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
