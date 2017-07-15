#include <_unit_bullet_paramDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_unit_bullet_paramIsFill2_ptr _unit_bullet_paramIsFill2_next(nullptr);
        Info::_unit_bullet_paramIsFill2_clbk _unit_bullet_paramIsFill2_user(nullptr);
        
        int _unit_bullet_paramIsFill2_wrapper(struct _unit_bullet_param* _this)
        {
           return _unit_bullet_paramIsFill2_user(_this, _unit_bullet_paramIsFill2_next);
        };
        
        ::std::array<hook_record, 1> _unit_bullet_param_functions = 
        {
            _hook_record {
                (LPVOID)0x1401083b0L,
                (LPVOID *)&_unit_bullet_paramIsFill2_user,
                (LPVOID *)&_unit_bullet_paramIsFill2_next,
                (LPVOID)cast_pointer_function(_unit_bullet_paramIsFill2_wrapper),
                (LPVOID)cast_pointer_function((int(_unit_bullet_param::*)())&_unit_bullet_param::IsFill)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
