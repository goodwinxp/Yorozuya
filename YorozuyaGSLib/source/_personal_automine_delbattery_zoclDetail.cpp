#include <_personal_automine_delbattery_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_personal_automine_delbattery_zoclctor__personal_automine_delbattery_zocl2_ptr _personal_automine_delbattery_zoclctor__personal_automine_delbattery_zocl2_next(nullptr);
        Info::_personal_automine_delbattery_zoclctor__personal_automine_delbattery_zocl2_clbk _personal_automine_delbattery_zoclctor__personal_automine_delbattery_zocl2_user(nullptr);
        
        Info::_personal_automine_delbattery_zoclsize4_ptr _personal_automine_delbattery_zoclsize4_next(nullptr);
        Info::_personal_automine_delbattery_zoclsize4_clbk _personal_automine_delbattery_zoclsize4_user(nullptr);
        
        
        void _personal_automine_delbattery_zoclctor__personal_automine_delbattery_zocl2_wrapper(struct _personal_automine_delbattery_zocl* _this)
        {
           _personal_automine_delbattery_zoclctor__personal_automine_delbattery_zocl2_user(_this, _personal_automine_delbattery_zoclctor__personal_automine_delbattery_zocl2_next);
        };
        int _personal_automine_delbattery_zoclsize4_wrapper(struct _personal_automine_delbattery_zocl* _this)
        {
           return _personal_automine_delbattery_zoclsize4_user(_this, _personal_automine_delbattery_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _personal_automine_delbattery_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402de130L,
                (LPVOID *)&_personal_automine_delbattery_zoclctor__personal_automine_delbattery_zocl2_user,
                (LPVOID *)&_personal_automine_delbattery_zoclctor__personal_automine_delbattery_zocl2_next,
                (LPVOID)cast_pointer_function(_personal_automine_delbattery_zoclctor__personal_automine_delbattery_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_personal_automine_delbattery_zocl::*)())&_personal_automine_delbattery_zocl::ctor__personal_automine_delbattery_zocl)
            },
            _hook_record {
                (LPVOID)0x1402de160L,
                (LPVOID *)&_personal_automine_delbattery_zoclsize4_user,
                (LPVOID *)&_personal_automine_delbattery_zoclsize4_next,
                (LPVOID)cast_pointer_function(_personal_automine_delbattery_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_personal_automine_delbattery_zocl::*)())&_personal_automine_delbattery_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
