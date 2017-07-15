#include <_personal_amine_mineore_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_personal_amine_mineore_zoclctor__personal_amine_mineore_zocl2_ptr _personal_amine_mineore_zoclctor__personal_amine_mineore_zocl2_next(nullptr);
        Info::_personal_amine_mineore_zoclctor__personal_amine_mineore_zocl2_clbk _personal_amine_mineore_zoclctor__personal_amine_mineore_zocl2_user(nullptr);
        
        Info::_personal_amine_mineore_zoclclear4_ptr _personal_amine_mineore_zoclclear4_next(nullptr);
        Info::_personal_amine_mineore_zoclclear4_clbk _personal_amine_mineore_zoclclear4_user(nullptr);
        
        Info::_personal_amine_mineore_zoclsize6_ptr _personal_amine_mineore_zoclsize6_next(nullptr);
        Info::_personal_amine_mineore_zoclsize6_clbk _personal_amine_mineore_zoclsize6_user(nullptr);
        
        
        void _personal_amine_mineore_zoclctor__personal_amine_mineore_zocl2_wrapper(struct _personal_amine_mineore_zocl* _this)
        {
           _personal_amine_mineore_zoclctor__personal_amine_mineore_zocl2_user(_this, _personal_amine_mineore_zoclctor__personal_amine_mineore_zocl2_next);
        };
        void _personal_amine_mineore_zoclclear4_wrapper(struct _personal_amine_mineore_zocl* _this)
        {
           _personal_amine_mineore_zoclclear4_user(_this, _personal_amine_mineore_zoclclear4_next);
        };
        int _personal_amine_mineore_zoclsize6_wrapper(struct _personal_amine_mineore_zocl* _this)
        {
           return _personal_amine_mineore_zoclsize6_user(_this, _personal_amine_mineore_zoclsize6_next);
        };
        
        ::std::array<hook_record, 3> _personal_amine_mineore_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14029d5a0L,
                (LPVOID *)&_personal_amine_mineore_zoclctor__personal_amine_mineore_zocl2_user,
                (LPVOID *)&_personal_amine_mineore_zoclctor__personal_amine_mineore_zocl2_next,
                (LPVOID)cast_pointer_function(_personal_amine_mineore_zoclctor__personal_amine_mineore_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_personal_amine_mineore_zocl::*)())&_personal_amine_mineore_zocl::ctor__personal_amine_mineore_zocl)
            },
            _hook_record {
                (LPVOID)0x1402ddf10L,
                (LPVOID *)&_personal_amine_mineore_zoclclear4_user,
                (LPVOID *)&_personal_amine_mineore_zoclclear4_next,
                (LPVOID)cast_pointer_function(_personal_amine_mineore_zoclclear4_wrapper),
                (LPVOID)cast_pointer_function((void(_personal_amine_mineore_zocl::*)())&_personal_amine_mineore_zocl::clear)
            },
            _hook_record {
                (LPVOID)0x14029d650L,
                (LPVOID *)&_personal_amine_mineore_zoclsize6_user,
                (LPVOID *)&_personal_amine_mineore_zoclsize6_next,
                (LPVOID)cast_pointer_function(_personal_amine_mineore_zoclsize6_wrapper),
                (LPVOID)cast_pointer_function((int(_personal_amine_mineore_zocl::*)())&_personal_amine_mineore_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
