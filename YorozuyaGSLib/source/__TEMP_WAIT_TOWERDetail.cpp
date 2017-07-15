#include <__TEMP_WAIT_TOWERDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__TEMP_WAIT_TOWERctor___TEMP_WAIT_TOWER2_ptr __TEMP_WAIT_TOWERctor___TEMP_WAIT_TOWER2_next(nullptr);
        Info::__TEMP_WAIT_TOWERctor___TEMP_WAIT_TOWER2_clbk __TEMP_WAIT_TOWERctor___TEMP_WAIT_TOWER2_user(nullptr);
        
        
        void __TEMP_WAIT_TOWERctor___TEMP_WAIT_TOWER2_wrapper(struct __TEMP_WAIT_TOWER* _this)
        {
           __TEMP_WAIT_TOWERctor___TEMP_WAIT_TOWER2_user(_this, __TEMP_WAIT_TOWERctor___TEMP_WAIT_TOWER2_next);
        };
        
        ::std::array<hook_record, 1> __TEMP_WAIT_TOWER_functions = 
        {
            _hook_record {
                (LPVOID)0x140132ae0L,
                (LPVOID *)&__TEMP_WAIT_TOWERctor___TEMP_WAIT_TOWER2_user,
                (LPVOID *)&__TEMP_WAIT_TOWERctor___TEMP_WAIT_TOWER2_next,
                (LPVOID)cast_pointer_function(__TEMP_WAIT_TOWERctor___TEMP_WAIT_TOWER2_wrapper),
                (LPVOID)cast_pointer_function((void(__TEMP_WAIT_TOWER::*)())&__TEMP_WAIT_TOWER::ctor___TEMP_WAIT_TOWER)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
