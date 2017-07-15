#include <_radar_char_list_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_radar_char_list_result_zoclctor__radar_char_list_result_zocl2_ptr _radar_char_list_result_zoclctor__radar_char_list_result_zocl2_next(nullptr);
        Info::_radar_char_list_result_zoclctor__radar_char_list_result_zocl2_clbk _radar_char_list_result_zoclctor__radar_char_list_result_zocl2_user(nullptr);
        
        Info::_radar_char_list_result_zoclsize4_ptr _radar_char_list_result_zoclsize4_next(nullptr);
        Info::_radar_char_list_result_zoclsize4_clbk _radar_char_list_result_zoclsize4_user(nullptr);
        
        
        void _radar_char_list_result_zoclctor__radar_char_list_result_zocl2_wrapper(struct _radar_char_list_result_zocl* _this)
        {
           _radar_char_list_result_zoclctor__radar_char_list_result_zocl2_user(_this, _radar_char_list_result_zoclctor__radar_char_list_result_zocl2_next);
        };
        int _radar_char_list_result_zoclsize4_wrapper(struct _radar_char_list_result_zocl* _this)
        {
           return _radar_char_list_result_zoclsize4_user(_this, _radar_char_list_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _radar_char_list_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f03e0L,
                (LPVOID *)&_radar_char_list_result_zoclctor__radar_char_list_result_zocl2_user,
                (LPVOID *)&_radar_char_list_result_zoclctor__radar_char_list_result_zocl2_next,
                (LPVOID)cast_pointer_function(_radar_char_list_result_zoclctor__radar_char_list_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_radar_char_list_result_zocl::*)())&_radar_char_list_result_zocl::ctor__radar_char_list_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400f0410L,
                (LPVOID *)&_radar_char_list_result_zoclsize4_user,
                (LPVOID *)&_radar_char_list_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_radar_char_list_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_radar_char_list_result_zocl::*)())&_radar_char_list_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
