#include <_target_monster_aggro_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_target_monster_aggro_inform_zoclInit2_ptr _target_monster_aggro_inform_zoclInit2_next(nullptr);
        Info::_target_monster_aggro_inform_zoclInit2_clbk _target_monster_aggro_inform_zoclInit2_user(nullptr);
        
        
        Info::_target_monster_aggro_inform_zoclctor__target_monster_aggro_inform_zocl4_ptr _target_monster_aggro_inform_zoclctor__target_monster_aggro_inform_zocl4_next(nullptr);
        Info::_target_monster_aggro_inform_zoclctor__target_monster_aggro_inform_zocl4_clbk _target_monster_aggro_inform_zoclctor__target_monster_aggro_inform_zocl4_user(nullptr);
        
        void _target_monster_aggro_inform_zoclInit2_wrapper(struct _target_monster_aggro_inform_zocl* _this)
        {
           _target_monster_aggro_inform_zoclInit2_user(_this, _target_monster_aggro_inform_zoclInit2_next);
        };
        
        void _target_monster_aggro_inform_zoclctor__target_monster_aggro_inform_zocl4_wrapper(struct _target_monster_aggro_inform_zocl* _this)
        {
           _target_monster_aggro_inform_zoclctor__target_monster_aggro_inform_zocl4_user(_this, _target_monster_aggro_inform_zoclctor__target_monster_aggro_inform_zocl4_next);
        };
        
        ::std::array<hook_record, 2> _target_monster_aggro_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f0060L,
                (LPVOID *)&_target_monster_aggro_inform_zoclInit2_user,
                (LPVOID *)&_target_monster_aggro_inform_zoclInit2_next,
                (LPVOID)cast_pointer_function(_target_monster_aggro_inform_zoclInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_target_monster_aggro_inform_zocl::*)())&_target_monster_aggro_inform_zocl::Init)
            },
            _hook_record {
                (LPVOID)0x1400f0010L,
                (LPVOID *)&_target_monster_aggro_inform_zoclctor__target_monster_aggro_inform_zocl4_user,
                (LPVOID *)&_target_monster_aggro_inform_zoclctor__target_monster_aggro_inform_zocl4_next,
                (LPVOID)cast_pointer_function(_target_monster_aggro_inform_zoclctor__target_monster_aggro_inform_zocl4_wrapper),
                (LPVOID)cast_pointer_function((void(_target_monster_aggro_inform_zocl::*)())&_target_monster_aggro_inform_zocl::ctor__target_monster_aggro_inform_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
