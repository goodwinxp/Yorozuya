#include <_ore_cutting_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_ore_cutting_result_zoclctor__ore_cutting_result_zocl2_ptr _ore_cutting_result_zoclctor__ore_cutting_result_zocl2_next(nullptr);
        Info::_ore_cutting_result_zoclctor__ore_cutting_result_zocl2_clbk _ore_cutting_result_zoclctor__ore_cutting_result_zocl2_user(nullptr);
        
        Info::_ore_cutting_result_zoclsize4_ptr _ore_cutting_result_zoclsize4_next(nullptr);
        Info::_ore_cutting_result_zoclsize4_clbk _ore_cutting_result_zoclsize4_user(nullptr);
        
        
        void _ore_cutting_result_zoclctor__ore_cutting_result_zocl2_wrapper(struct _ore_cutting_result_zocl* _this)
        {
           _ore_cutting_result_zoclctor__ore_cutting_result_zocl2_user(_this, _ore_cutting_result_zoclctor__ore_cutting_result_zocl2_next);
        };
        int _ore_cutting_result_zoclsize4_wrapper(struct _ore_cutting_result_zocl* _this)
        {
           return _ore_cutting_result_zoclsize4_user(_this, _ore_cutting_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _ore_cutting_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efa50L,
                (LPVOID *)&_ore_cutting_result_zoclctor__ore_cutting_result_zocl2_user,
                (LPVOID *)&_ore_cutting_result_zoclctor__ore_cutting_result_zocl2_next,
                (LPVOID)cast_pointer_function(_ore_cutting_result_zoclctor__ore_cutting_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_ore_cutting_result_zocl::*)())&_ore_cutting_result_zocl::ctor__ore_cutting_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400efa70L,
                (LPVOID *)&_ore_cutting_result_zoclsize4_user,
                (LPVOID *)&_ore_cutting_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_ore_cutting_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_ore_cutting_result_zocl::*)())&_ore_cutting_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
