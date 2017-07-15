#include <C24TimerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::C24Timerctor_C24Timer2_ptr C24Timerctor_C24Timer2_next(nullptr);
        Info::C24Timerctor_C24Timer2_clbk C24Timerctor_C24Timer2_user(nullptr);
        
        Info::C24TimerGet24TimeFromTickTime4_ptr C24TimerGet24TimeFromTickTime4_next(nullptr);
        Info::C24TimerGet24TimeFromTickTime4_clbk C24TimerGet24TimeFromTickTime4_user(nullptr);
        
        Info::C24TimerInit6_ptr C24TimerInit6_next(nullptr);
        Info::C24TimerInit6_clbk C24TimerInit6_user(nullptr);
        
        
        Info::C24Timerdtor_C24Timer8_ptr C24Timerdtor_C24Timer8_next(nullptr);
        Info::C24Timerdtor_C24Timer8_clbk C24Timerdtor_C24Timer8_user(nullptr);
        
        
        void C24Timerctor_C24Timer2_wrapper(struct C24Timer* _this)
        {
           C24Timerctor_C24Timer2_user(_this, C24Timerctor_C24Timer2_next);
        };
        unsigned int C24TimerGet24TimeFromTickTime4_wrapper(struct C24Timer* _this, unsigned int dwTickTime)
        {
           return C24TimerGet24TimeFromTickTime4_user(_this, dwTickTime, C24TimerGet24TimeFromTickTime4_next);
        };
        void C24TimerInit6_wrapper(struct C24Timer* _this)
        {
           C24TimerInit6_user(_this, C24TimerInit6_next);
        };
        
        void C24Timerdtor_C24Timer8_wrapper(struct C24Timer* _this)
        {
           C24Timerdtor_C24Timer8_user(_this, C24Timerdtor_C24Timer8_next);
        };
        
        ::std::array<hook_record, 4> C24Timer_functions = 
        {
            _hook_record {
                (LPVOID)0x140284dc0L,
                (LPVOID *)&C24Timerctor_C24Timer2_user,
                (LPVOID *)&C24Timerctor_C24Timer2_next,
                (LPVOID)cast_pointer_function(C24Timerctor_C24Timer2_wrapper),
                (LPVOID)cast_pointer_function((void(C24Timer::*)())&C24Timer::ctor_C24Timer)
            },
            _hook_record {
                (LPVOID)0x140284d30L,
                (LPVOID *)&C24TimerGet24TimeFromTickTime4_user,
                (LPVOID *)&C24TimerGet24TimeFromTickTime4_next,
                (LPVOID)cast_pointer_function(C24TimerGet24TimeFromTickTime4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(C24Timer::*)(unsigned int))&C24Timer::Get24TimeFromTickTime)
            },
            _hook_record {
                (LPVOID)0x140284e10L,
                (LPVOID *)&C24TimerInit6_user,
                (LPVOID *)&C24TimerInit6_next,
                (LPVOID)cast_pointer_function(C24TimerInit6_wrapper),
                (LPVOID)cast_pointer_function((void(C24Timer::*)())&C24Timer::Init)
            },
            _hook_record {
                (LPVOID)0x140284e80L,
                (LPVOID *)&C24Timerdtor_C24Timer8_user,
                (LPVOID *)&C24Timerdtor_C24Timer8_next,
                (LPVOID)cast_pointer_function(C24Timerdtor_C24Timer8_wrapper),
                (LPVOID)cast_pointer_function((void(C24Timer::*)())&C24Timer::dtor_C24Timer)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
