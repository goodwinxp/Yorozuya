#include <_force_download_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_force_download_result_zoclctor__force_download_result_zocl2_ptr _force_download_result_zoclctor__force_download_result_zocl2_next(nullptr);
        Info::_force_download_result_zoclctor__force_download_result_zocl2_clbk _force_download_result_zoclctor__force_download_result_zocl2_user(nullptr);
        
        Info::_force_download_result_zoclsize4_ptr _force_download_result_zoclsize4_next(nullptr);
        Info::_force_download_result_zoclsize4_clbk _force_download_result_zoclsize4_user(nullptr);
        
        
        void _force_download_result_zoclctor__force_download_result_zocl2_wrapper(struct _force_download_result_zocl* _this)
        {
           _force_download_result_zoclctor__force_download_result_zocl2_user(_this, _force_download_result_zoclctor__force_download_result_zocl2_next);
        };
        int _force_download_result_zoclsize4_wrapper(struct _force_download_result_zocl* _this)
        {
           return _force_download_result_zoclsize4_user(_this, _force_download_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _force_download_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef500L,
                (LPVOID *)&_force_download_result_zoclctor__force_download_result_zocl2_user,
                (LPVOID *)&_force_download_result_zoclctor__force_download_result_zocl2_next,
                (LPVOID)cast_pointer_function(_force_download_result_zoclctor__force_download_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_force_download_result_zocl::*)())&_force_download_result_zocl::ctor__force_download_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400ef520L,
                (LPVOID *)&_force_download_result_zoclsize4_user,
                (LPVOID *)&_force_download_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_force_download_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_force_download_result_zocl::*)())&_force_download_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
