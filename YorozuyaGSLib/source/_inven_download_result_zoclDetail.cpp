#include <_inven_download_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_inven_download_result_zoclctor__inven_download_result_zocl2_ptr _inven_download_result_zoclctor__inven_download_result_zocl2_next(nullptr);
        Info::_inven_download_result_zoclctor__inven_download_result_zocl2_clbk _inven_download_result_zoclctor__inven_download_result_zocl2_user(nullptr);
        
        Info::_inven_download_result_zoclsize4_ptr _inven_download_result_zoclsize4_next(nullptr);
        Info::_inven_download_result_zoclsize4_clbk _inven_download_result_zoclsize4_user(nullptr);
        
        
        void _inven_download_result_zoclctor__inven_download_result_zocl2_wrapper(struct _inven_download_result_zocl* _this)
        {
           _inven_download_result_zoclctor__inven_download_result_zocl2_user(_this, _inven_download_result_zoclctor__inven_download_result_zocl2_next);
        };
        int _inven_download_result_zoclsize4_wrapper(struct _inven_download_result_zocl* _this)
        {
           return _inven_download_result_zoclsize4_user(_this, _inven_download_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _inven_download_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef330L,
                (LPVOID *)&_inven_download_result_zoclctor__inven_download_result_zocl2_user,
                (LPVOID *)&_inven_download_result_zoclctor__inven_download_result_zocl2_next,
                (LPVOID)cast_pointer_function(_inven_download_result_zoclctor__inven_download_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_inven_download_result_zocl::*)())&_inven_download_result_zocl::ctor__inven_download_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400ef350L,
                (LPVOID *)&_inven_download_result_zoclsize4_user,
                (LPVOID *)&_inven_download_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_inven_download_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_inven_download_result_zocl::*)())&_inven_download_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
