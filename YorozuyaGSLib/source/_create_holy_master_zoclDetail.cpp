#include <_create_holy_master_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_create_holy_master_zoclctor__create_holy_master_zocl2_ptr _create_holy_master_zoclctor__create_holy_master_zocl2_next(nullptr);
        Info::_create_holy_master_zoclctor__create_holy_master_zocl2_clbk _create_holy_master_zoclctor__create_holy_master_zocl2_user(nullptr);
        
        
        void _create_holy_master_zoclctor__create_holy_master_zocl2_wrapper(struct _create_holy_master_zocl* _this)
        {
           _create_holy_master_zoclctor__create_holy_master_zocl2_user(_this, _create_holy_master_zoclctor__create_holy_master_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _create_holy_master_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x140284cb0L,
                (LPVOID *)&_create_holy_master_zoclctor__create_holy_master_zocl2_user,
                (LPVOID *)&_create_holy_master_zoclctor__create_holy_master_zocl2_next,
                (LPVOID)cast_pointer_function(_create_holy_master_zoclctor__create_holy_master_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_create_holy_master_zocl::*)())&_create_holy_master_zocl::ctor__create_holy_master_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
