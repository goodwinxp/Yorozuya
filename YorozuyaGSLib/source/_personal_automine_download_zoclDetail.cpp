#include <_personal_automine_download_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_personal_automine_download_zoclsize2_ptr _personal_automine_download_zoclsize2_next(nullptr);
        Info::_personal_automine_download_zoclsize2_clbk _personal_automine_download_zoclsize2_user(nullptr);
        
        int _personal_automine_download_zoclsize2_wrapper(struct _personal_automine_download_zocl* _this)
        {
           return _personal_automine_download_zoclsize2_user(_this, _personal_automine_download_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _personal_automine_download_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef3c0L,
                (LPVOID *)&_personal_automine_download_zoclsize2_user,
                (LPVOID *)&_personal_automine_download_zoclsize2_next,
                (LPVOID)cast_pointer_function(_personal_automine_download_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_personal_automine_download_zocl::*)())&_personal_automine_download_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
