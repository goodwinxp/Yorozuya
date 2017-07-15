#include <_store_list_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_store_list_result_zoclctor__store_list_result_zocl2_ptr _store_list_result_zoclctor__store_list_result_zocl2_next(nullptr);
        Info::_store_list_result_zoclctor__store_list_result_zocl2_clbk _store_list_result_zoclctor__store_list_result_zocl2_user(nullptr);
        
        Info::_store_list_result_zoclsize4_ptr _store_list_result_zoclsize4_next(nullptr);
        Info::_store_list_result_zoclsize4_clbk _store_list_result_zoclsize4_user(nullptr);
        
        
        void _store_list_result_zoclctor__store_list_result_zocl2_wrapper(struct _store_list_result_zocl* _this)
        {
           _store_list_result_zoclctor__store_list_result_zocl2_user(_this, _store_list_result_zoclctor__store_list_result_zocl2_next);
        };
        int _store_list_result_zoclsize4_wrapper(struct _store_list_result_zocl* _this)
        {
           return _store_list_result_zoclsize4_user(_this, _store_list_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _store_list_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400ef8b0L,
                (LPVOID *)&_store_list_result_zoclctor__store_list_result_zocl2_user,
                (LPVOID *)&_store_list_result_zoclctor__store_list_result_zocl2_next,
                (LPVOID)cast_pointer_function(_store_list_result_zoclctor__store_list_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_store_list_result_zocl::*)())&_store_list_result_zocl::ctor__store_list_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400ef8d0L,
                (LPVOID *)&_store_list_result_zoclsize4_user,
                (LPVOID *)&_store_list_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_store_list_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_store_list_result_zocl::*)())&_store_list_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
