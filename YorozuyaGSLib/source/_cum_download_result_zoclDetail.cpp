#include <_cum_download_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_cum_download_result_zoclctor__cum_download_result_zocl2_ptr _cum_download_result_zoclctor__cum_download_result_zocl2_next(nullptr);
        Info::_cum_download_result_zoclctor__cum_download_result_zocl2_clbk _cum_download_result_zoclctor__cum_download_result_zocl2_user(nullptr);
        
        Info::_cum_download_result_zoclsize4_ptr _cum_download_result_zoclsize4_next(nullptr);
        Info::_cum_download_result_zoclsize4_clbk _cum_download_result_zoclsize4_user(nullptr);
        
        
        void _cum_download_result_zoclctor__cum_download_result_zocl2_wrapper(struct _cum_download_result_zocl* _this)
        {
           _cum_download_result_zoclctor__cum_download_result_zocl2_user(_this, _cum_download_result_zoclctor__cum_download_result_zocl2_next);
        };
        int _cum_download_result_zoclsize4_wrapper(struct _cum_download_result_zocl* _this)
        {
           return _cum_download_result_zoclsize4_user(_this, _cum_download_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _cum_download_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef420L,
                (LPVOID *)&_cum_download_result_zoclctor__cum_download_result_zocl2_user,
                (LPVOID *)&_cum_download_result_zoclctor__cum_download_result_zocl2_next,
                (LPVOID)cast_pointer_function(_cum_download_result_zoclctor__cum_download_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_cum_download_result_zocl::*)())&_cum_download_result_zocl::ctor__cum_download_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400ef480L,
                (LPVOID *)&_cum_download_result_zoclsize4_user,
                (LPVOID *)&_cum_download_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_cum_download_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_cum_download_result_zocl::*)())&_cum_download_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
