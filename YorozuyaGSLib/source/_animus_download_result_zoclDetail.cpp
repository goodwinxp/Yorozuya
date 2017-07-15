#include <_animus_download_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_animus_download_result_zoclctor__animus_download_result_zocl2_ptr _animus_download_result_zoclctor__animus_download_result_zocl2_next(nullptr);
        Info::_animus_download_result_zoclctor__animus_download_result_zocl2_clbk _animus_download_result_zoclctor__animus_download_result_zocl2_user(nullptr);
        
        Info::_animus_download_result_zoclsize4_ptr _animus_download_result_zoclsize4_next(nullptr);
        Info::_animus_download_result_zoclsize4_clbk _animus_download_result_zoclsize4_user(nullptr);
        
        
        void _animus_download_result_zoclctor__animus_download_result_zocl2_wrapper(struct _animus_download_result_zocl* _this)
        {
           _animus_download_result_zoclctor__animus_download_result_zocl2_user(_this, _animus_download_result_zoclctor__animus_download_result_zocl2_next);
        };
        int _animus_download_result_zoclsize4_wrapper(struct _animus_download_result_zocl* _this)
        {
           return _animus_download_result_zoclsize4_user(_this, _animus_download_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _animus_download_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef840L,
                (LPVOID *)&_animus_download_result_zoclctor__animus_download_result_zocl2_user,
                (LPVOID *)&_animus_download_result_zoclctor__animus_download_result_zocl2_next,
                (LPVOID)cast_pointer_function(_animus_download_result_zoclctor__animus_download_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_animus_download_result_zocl::*)())&_animus_download_result_zocl::ctor__animus_download_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400ef860L,
                (LPVOID *)&_animus_download_result_zoclsize4_user,
                (LPVOID *)&_animus_download_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_animus_download_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_animus_download_result_zocl::*)())&_animus_download_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
