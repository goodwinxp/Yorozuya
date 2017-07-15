#include <CAITimerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CAITimerctor_CAITimer2_ptr CAITimerctor_CAITimer2_next(nullptr);
        Info::CAITimerctor_CAITimer2_clbk CAITimerctor_CAITimer2_user(nullptr);
        
        Info::CAITimerCheck4_ptr CAITimerCheck4_next(nullptr);
        Info::CAITimerCheck4_clbk CAITimerCheck4_user(nullptr);
        
        Info::CAITimerInit6_ptr CAITimerInit6_next(nullptr);
        Info::CAITimerInit6_clbk CAITimerInit6_user(nullptr);
        
        Info::CAITimerSet8_ptr CAITimerSet8_next(nullptr);
        Info::CAITimerSet8_clbk CAITimerSet8_user(nullptr);
        
        
        void CAITimerctor_CAITimer2_wrapper(struct CAITimer* _this)
        {
           CAITimerctor_CAITimer2_user(_this, CAITimerctor_CAITimer2_next);
        };
        int CAITimerCheck4_wrapper(struct CAITimer* _this)
        {
           return CAITimerCheck4_user(_this, CAITimerCheck4_next);
        };
        void CAITimerInit6_wrapper(struct CAITimer* _this, unsigned int delay)
        {
           CAITimerInit6_user(_this, delay, CAITimerInit6_next);
        };
        void CAITimerSet8_wrapper(struct CAITimer* _this, unsigned int delay)
        {
           CAITimerSet8_user(_this, delay, CAITimerSet8_next);
        };
        
        ::std::array<hook_record, 4> CAITimer_functions = 
        {
            _hook_record {
                (LPVOID)0x14012cbd0L,
                (LPVOID *)&CAITimerctor_CAITimer2_user,
                (LPVOID *)&CAITimerctor_CAITimer2_next,
                (LPVOID)cast_pointer_function(CAITimerctor_CAITimer2_wrapper),
                (LPVOID)cast_pointer_function((void(CAITimer::*)())&CAITimer::ctor_CAITimer)
            },
            _hook_record {
                (LPVOID)0x14012d4d0L,
                (LPVOID *)&CAITimerCheck4_user,
                (LPVOID *)&CAITimerCheck4_next,
                (LPVOID)cast_pointer_function(CAITimerCheck4_wrapper),
                (LPVOID)cast_pointer_function((int(CAITimer::*)())&CAITimer::Check)
            },
            _hook_record {
                (LPVOID)0x14012ced0L,
                (LPVOID *)&CAITimerInit6_user,
                (LPVOID *)&CAITimerInit6_next,
                (LPVOID)cast_pointer_function(CAITimerInit6_wrapper),
                (LPVOID)cast_pointer_function((void(CAITimer::*)(unsigned int))&CAITimer::Init)
            },
            _hook_record {
                (LPVOID)0x14012cf00L,
                (LPVOID *)&CAITimerSet8_user,
                (LPVOID *)&CAITimerSet8_next,
                (LPVOID)cast_pointer_function(CAITimerSet8_wrapper),
                (LPVOID)cast_pointer_function((void(CAITimer::*)(unsigned int))&CAITimer::Set)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
