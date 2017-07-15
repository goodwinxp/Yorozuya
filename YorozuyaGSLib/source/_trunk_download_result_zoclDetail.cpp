#include <_trunk_download_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_trunk_download_result_zoclctor__trunk_download_result_zocl2_ptr _trunk_download_result_zoclctor__trunk_download_result_zocl2_next(nullptr);
        Info::_trunk_download_result_zoclctor__trunk_download_result_zocl2_clbk _trunk_download_result_zoclctor__trunk_download_result_zocl2_user(nullptr);
        
        Info::_trunk_download_result_zoclsize4_ptr _trunk_download_result_zoclsize4_next(nullptr);
        Info::_trunk_download_result_zoclsize4_clbk _trunk_download_result_zoclsize4_user(nullptr);
        
        
        void _trunk_download_result_zoclctor__trunk_download_result_zocl2_wrapper(struct _trunk_download_result_zocl* _this)
        {
           _trunk_download_result_zoclctor__trunk_download_result_zocl2_user(_this, _trunk_download_result_zoclctor__trunk_download_result_zocl2_next);
        };
        int _trunk_download_result_zoclsize4_wrapper(struct _trunk_download_result_zocl* _this)
        {
           return _trunk_download_result_zoclsize4_user(_this, _trunk_download_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _trunk_download_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400eff00L,
                (LPVOID *)&_trunk_download_result_zoclctor__trunk_download_result_zocl2_user,
                (LPVOID *)&_trunk_download_result_zoclctor__trunk_download_result_zocl2_next,
                (LPVOID)cast_pointer_function(_trunk_download_result_zoclctor__trunk_download_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_trunk_download_result_zocl::*)())&_trunk_download_result_zocl::ctor__trunk_download_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400eff30L,
                (LPVOID *)&_trunk_download_result_zoclsize4_user,
                (LPVOID *)&_trunk_download_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_trunk_download_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_trunk_download_result_zocl::*)())&_trunk_download_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
