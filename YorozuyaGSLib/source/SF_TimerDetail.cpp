#include <SF_TimerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::SF_TimerCheckTime2_ptr SF_TimerCheckTime2_next(nullptr);
        Info::SF_TimerCheckTime2_clbk SF_TimerCheckTime2_user(nullptr);
        
        
        Info::SF_Timerctor_SF_Timer4_ptr SF_Timerctor_SF_Timer4_next(nullptr);
        Info::SF_Timerctor_SF_Timer4_clbk SF_Timerctor_SF_Timer4_user(nullptr);
        
        Info::SF_TimerSet6_ptr SF_TimerSet6_next(nullptr);
        Info::SF_TimerSet6_clbk SF_TimerSet6_user(nullptr);
        
        int SF_TimerCheckTime2_wrapper(struct SF_Timer* _this, unsigned int dwLoopTime)
        {
           return SF_TimerCheckTime2_user(_this, dwLoopTime, SF_TimerCheckTime2_next);
        };
        
        void SF_Timerctor_SF_Timer4_wrapper(struct SF_Timer* _this)
        {
           SF_Timerctor_SF_Timer4_user(_this, SF_Timerctor_SF_Timer4_next);
        };
        void SF_TimerSet6_wrapper(struct SF_Timer* _this, unsigned int dwTimeDelay)
        {
           SF_TimerSet6_user(_this, dwTimeDelay, SF_TimerSet6_next);
        };
        
        ::std::array<hook_record, 3> SF_Timer_functions = 
        {
            _hook_record {
                (LPVOID)0x140155620L,
                (LPVOID *)&SF_TimerCheckTime2_user,
                (LPVOID *)&SF_TimerCheckTime2_next,
                (LPVOID)cast_pointer_function(SF_TimerCheckTime2_wrapper),
                (LPVOID)cast_pointer_function((int(SF_Timer::*)(unsigned int))&SF_Timer::CheckTime)
            },
            _hook_record {
                (LPVOID)0x14014fc70L,
                (LPVOID *)&SF_Timerctor_SF_Timer4_user,
                (LPVOID *)&SF_Timerctor_SF_Timer4_next,
                (LPVOID)cast_pointer_function(SF_Timerctor_SF_Timer4_wrapper),
                (LPVOID)cast_pointer_function((void(SF_Timer::*)())&SF_Timer::ctor_SF_Timer)
            },
            _hook_record {
                (LPVOID)0x140155920L,
                (LPVOID *)&SF_TimerSet6_user,
                (LPVOID *)&SF_TimerSet6_next,
                (LPVOID)cast_pointer_function(SF_TimerSet6_wrapper),
                (LPVOID)cast_pointer_function((void(SF_Timer::*)(unsigned int))&SF_Timer::Set)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
