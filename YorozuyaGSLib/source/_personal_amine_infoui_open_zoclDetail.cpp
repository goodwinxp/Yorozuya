#include <_personal_amine_infoui_open_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_personal_amine_infoui_open_zoclctor__personal_amine_infoui_open_zocl2_ptr _personal_amine_infoui_open_zoclctor__personal_amine_infoui_open_zocl2_next(nullptr);
        Info::_personal_amine_infoui_open_zoclctor__personal_amine_infoui_open_zocl2_clbk _personal_amine_infoui_open_zoclctor__personal_amine_infoui_open_zocl2_user(nullptr);
        
        Info::_personal_amine_infoui_open_zoclsize4_ptr _personal_amine_infoui_open_zoclsize4_next(nullptr);
        Info::_personal_amine_infoui_open_zoclsize4_clbk _personal_amine_infoui_open_zoclsize4_user(nullptr);
        
        
        void _personal_amine_infoui_open_zoclctor__personal_amine_infoui_open_zocl2_wrapper(struct _personal_amine_infoui_open_zocl* _this)
        {
           _personal_amine_infoui_open_zoclctor__personal_amine_infoui_open_zocl2_user(_this, _personal_amine_infoui_open_zoclctor__personal_amine_infoui_open_zocl2_next);
        };
        int _personal_amine_infoui_open_zoclsize4_wrapper(struct _personal_amine_infoui_open_zocl* _this)
        {
           return _personal_amine_infoui_open_zoclsize4_user(_this, _personal_amine_infoui_open_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _personal_amine_infoui_open_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402de1d0L,
                (LPVOID *)&_personal_amine_infoui_open_zoclctor__personal_amine_infoui_open_zocl2_user,
                (LPVOID *)&_personal_amine_infoui_open_zoclctor__personal_amine_infoui_open_zocl2_next,
                (LPVOID)cast_pointer_function(_personal_amine_infoui_open_zoclctor__personal_amine_infoui_open_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_personal_amine_infoui_open_zocl::*)())&_personal_amine_infoui_open_zocl::ctor__personal_amine_infoui_open_zocl)
            },
            _hook_record {
                (LPVOID)0x1402de220L,
                (LPVOID *)&_personal_amine_infoui_open_zoclsize4_user,
                (LPVOID *)&_personal_amine_infoui_open_zoclsize4_next,
                (LPVOID)cast_pointer_function(_personal_amine_infoui_open_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_personal_amine_infoui_open_zocl::*)())&_personal_amine_infoui_open_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
