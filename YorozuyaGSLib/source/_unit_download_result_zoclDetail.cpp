#include <_unit_download_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_unit_download_result_zoclctor__unit_download_result_zocl2_ptr _unit_download_result_zoclctor__unit_download_result_zocl2_next(nullptr);
        Info::_unit_download_result_zoclctor__unit_download_result_zocl2_clbk _unit_download_result_zoclctor__unit_download_result_zocl2_user(nullptr);
        
        Info::_unit_download_result_zoclsize4_ptr _unit_download_result_zoclsize4_next(nullptr);
        Info::_unit_download_result_zoclsize4_clbk _unit_download_result_zoclsize4_user(nullptr);
        
        
        void _unit_download_result_zoclctor__unit_download_result_zocl2_wrapper(struct _unit_download_result_zocl* _this)
        {
           _unit_download_result_zoclctor__unit_download_result_zocl2_user(_this, _unit_download_result_zoclctor__unit_download_result_zocl2_next);
        };
        int _unit_download_result_zoclsize4_wrapper(struct _unit_download_result_zocl* _this)
        {
           return _unit_download_result_zoclsize4_user(_this, _unit_download_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _unit_download_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef730L,
                (LPVOID *)&_unit_download_result_zoclctor__unit_download_result_zocl2_user,
                (LPVOID *)&_unit_download_result_zoclctor__unit_download_result_zocl2_next,
                (LPVOID)cast_pointer_function(_unit_download_result_zoclctor__unit_download_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_unit_download_result_zocl::*)())&_unit_download_result_zocl::ctor__unit_download_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400ef7a0L,
                (LPVOID *)&_unit_download_result_zoclsize4_user,
                (LPVOID *)&_unit_download_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_unit_download_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_unit_download_result_zocl::*)())&_unit_download_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
