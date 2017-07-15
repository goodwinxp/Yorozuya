#include <_other_shape_part_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_other_shape_part_zoclctor__other_shape_part_zocl2_ptr _other_shape_part_zoclctor__other_shape_part_zocl2_next(nullptr);
        Info::_other_shape_part_zoclctor__other_shape_part_zocl2_clbk _other_shape_part_zoclctor__other_shape_part_zocl2_user(nullptr);
        
        Info::_other_shape_part_zoclsize4_ptr _other_shape_part_zoclsize4_next(nullptr);
        Info::_other_shape_part_zoclsize4_clbk _other_shape_part_zoclsize4_user(nullptr);
        
        
        void _other_shape_part_zoclctor__other_shape_part_zocl2_wrapper(struct _other_shape_part_zocl* _this)
        {
           _other_shape_part_zoclctor__other_shape_part_zocl2_user(_this, _other_shape_part_zoclctor__other_shape_part_zocl2_next);
        };
        int _other_shape_part_zoclsize4_wrapper(struct _other_shape_part_zocl* _this)
        {
           return _other_shape_part_zoclsize4_user(_this, _other_shape_part_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _other_shape_part_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x140072ba0L,
                (LPVOID *)&_other_shape_part_zoclctor__other_shape_part_zocl2_user,
                (LPVOID *)&_other_shape_part_zoclctor__other_shape_part_zocl2_next,
                (LPVOID)cast_pointer_function(_other_shape_part_zoclctor__other_shape_part_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_other_shape_part_zocl::*)())&_other_shape_part_zocl::ctor__other_shape_part_zocl)
            },
            _hook_record {
                (LPVOID)0x1400ef080L,
                (LPVOID *)&_other_shape_part_zoclsize4_user,
                (LPVOID *)&_other_shape_part_zoclsize4_next,
                (LPVOID)cast_pointer_function(_other_shape_part_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_other_shape_part_zocl::*)())&_other_shape_part_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
