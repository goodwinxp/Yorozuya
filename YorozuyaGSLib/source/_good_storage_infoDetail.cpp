#include <_good_storage_infoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_good_storage_infoctor__good_storage_info2_ptr _good_storage_infoctor__good_storage_info2_next(nullptr);
        Info::_good_storage_infoctor__good_storage_info2_clbk _good_storage_infoctor__good_storage_info2_user(nullptr);
        
        
        void _good_storage_infoctor__good_storage_info2_wrapper(struct _good_storage_info* _this)
        {
           _good_storage_infoctor__good_storage_info2_user(_this, _good_storage_infoctor__good_storage_info2_next);
        };
        
        ::std::array<hook_record, 1> _good_storage_info_functions = 
        {
            _hook_record {
                (LPVOID)0x140263710L,
                (LPVOID *)&_good_storage_infoctor__good_storage_info2_user,
                (LPVOID *)&_good_storage_infoctor__good_storage_info2_next,
                (LPVOID)cast_pointer_function(_good_storage_infoctor__good_storage_info2_wrapper),
                (LPVOID)cast_pointer_function((void(_good_storage_info::*)())&_good_storage_info::ctor__good_storage_info)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
