#include <_sf_delay_download_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_sf_delay_download_result_zoclctor__sf_delay_download_result_zocl2_ptr _sf_delay_download_result_zoclctor__sf_delay_download_result_zocl2_next(nullptr);
        Info::_sf_delay_download_result_zoclctor__sf_delay_download_result_zocl2_clbk _sf_delay_download_result_zoclctor__sf_delay_download_result_zocl2_user(nullptr);
        
        
        void _sf_delay_download_result_zoclctor__sf_delay_download_result_zocl2_wrapper(struct _sf_delay_download_result_zocl* _this)
        {
           _sf_delay_download_result_zoclctor__sf_delay_download_result_zocl2_user(_this, _sf_delay_download_result_zoclctor__sf_delay_download_result_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _sf_delay_download_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f05d0L,
                (LPVOID *)&_sf_delay_download_result_zoclctor__sf_delay_download_result_zocl2_user,
                (LPVOID *)&_sf_delay_download_result_zoclctor__sf_delay_download_result_zocl2_next,
                (LPVOID)cast_pointer_function(_sf_delay_download_result_zoclctor__sf_delay_download_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_sf_delay_download_result_zocl::*)())&_sf_delay_download_result_zocl::ctor__sf_delay_download_result_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
