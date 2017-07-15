#include <_check_speed_hack_ansDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_check_speed_hack_anssize2_ptr _check_speed_hack_anssize2_next(nullptr);
        Info::_check_speed_hack_anssize2_clbk _check_speed_hack_anssize2_user(nullptr);
        
        int _check_speed_hack_anssize2_wrapper(struct _check_speed_hack_ans* _this)
        {
           return _check_speed_hack_anssize2_user(_this, _check_speed_hack_anssize2_next);
        };
        
        ::std::array<hook_record, 1> _check_speed_hack_ans_functions = 
        {
            _hook_record {
                (LPVOID)0x14047db50L,
                (LPVOID *)&_check_speed_hack_anssize2_user,
                (LPVOID *)&_check_speed_hack_anssize2_next,
                (LPVOID)cast_pointer_function(_check_speed_hack_anssize2_wrapper),
                (LPVOID)cast_pointer_function((int(_check_speed_hack_ans::*)())&_check_speed_hack_ans::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
