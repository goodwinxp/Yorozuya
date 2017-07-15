#include <_storage_refresh_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_storage_refresh_inform_zoclctor__storage_refresh_inform_zocl2_ptr _storage_refresh_inform_zoclctor__storage_refresh_inform_zocl2_next(nullptr);
        Info::_storage_refresh_inform_zoclctor__storage_refresh_inform_zocl2_clbk _storage_refresh_inform_zoclctor__storage_refresh_inform_zocl2_user(nullptr);
        
        
        void _storage_refresh_inform_zoclctor__storage_refresh_inform_zocl2_wrapper(struct _storage_refresh_inform_zocl* _this)
        {
           _storage_refresh_inform_zoclctor__storage_refresh_inform_zocl2_user(_this, _storage_refresh_inform_zoclctor__storage_refresh_inform_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _storage_refresh_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef110L,
                (LPVOID *)&_storage_refresh_inform_zoclctor__storage_refresh_inform_zocl2_user,
                (LPVOID *)&_storage_refresh_inform_zoclctor__storage_refresh_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_storage_refresh_inform_zoclctor__storage_refresh_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_storage_refresh_inform_zocl::*)())&_storage_refresh_inform_zocl::ctor__storage_refresh_inform_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
