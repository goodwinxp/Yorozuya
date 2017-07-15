#include <_R3ENGINE_STATEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_R3ENGINE_STATEctor__R3ENGINE_STATE1_ptr _R3ENGINE_STATEctor__R3ENGINE_STATE1_next(nullptr);
        Info::_R3ENGINE_STATEctor__R3ENGINE_STATE1_clbk _R3ENGINE_STATEctor__R3ENGINE_STATE1_user(nullptr);
        
        
        int64_t _R3ENGINE_STATEctor__R3ENGINE_STATE1_wrapper(struct _R3ENGINE_STATE* _this)
        {
           return _R3ENGINE_STATEctor__R3ENGINE_STATE1_user(_this, _R3ENGINE_STATEctor__R3ENGINE_STATE1_next);
        };
        
        ::std::array<hook_record, 1> _R3ENGINE_STATE_functions = 
        {
            _hook_record {
                (LPVOID)0x1404ec4b0L,
                (LPVOID *)&_R3ENGINE_STATEctor__R3ENGINE_STATE1_user,
                (LPVOID *)&_R3ENGINE_STATEctor__R3ENGINE_STATE1_next,
                (LPVOID)cast_pointer_function(_R3ENGINE_STATEctor__R3ENGINE_STATE1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(_R3ENGINE_STATE::*)())&_R3ENGINE_STATE::ctor__R3ENGINE_STATE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
