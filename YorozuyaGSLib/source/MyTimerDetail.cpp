#include <MyTimerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::MyTimerGetTime2_ptr MyTimerGetTime2_next(nullptr);
        Info::MyTimerGetTime2_clbk MyTimerGetTime2_user(nullptr);
        
        struct MyTimer::TIME* MyTimerGetTime2_wrapper()
        {
           return MyTimerGetTime2_user(MyTimerGetTime2_next);
        };
        
        ::std::array<hook_record, 1> MyTimer_functions = 
        {
            _hook_record {
                (LPVOID)0x1402f2500L,
                (LPVOID *)&MyTimerGetTime2_user,
                (LPVOID *)&MyTimerGetTime2_next,
                (LPVOID)cast_pointer_function(MyTimerGetTime2_wrapper),
                (LPVOID)cast_pointer_function((struct MyTimer::TIME*(*)())&MyTimer::GetTime)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
