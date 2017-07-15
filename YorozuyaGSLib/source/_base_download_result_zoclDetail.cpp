#include <_base_download_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_base_download_result_zoclsize2_ptr _base_download_result_zoclsize2_next(nullptr);
        Info::_base_download_result_zoclsize2_clbk _base_download_result_zoclsize2_user(nullptr);
        
        int _base_download_result_zoclsize2_wrapper(struct _base_download_result_zocl* _this)
        {
           return _base_download_result_zoclsize2_user(_this, _base_download_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _base_download_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef280L,
                (LPVOID *)&_base_download_result_zoclsize2_user,
                (LPVOID *)&_base_download_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_base_download_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_base_download_result_zocl::*)())&_base_download_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
