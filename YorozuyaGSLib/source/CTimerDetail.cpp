#include <CTimerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CTimerCalculateTime1_ptr CTimerCalculateTime1_next(nullptr);
        Info::CTimerCalculateTime1_clbk CTimerCalculateTime1_user(nullptr);
        
        Info::CTimerGetDuration2_ptr CTimerGetDuration2_next(nullptr);
        Info::CTimerGetDuration2_clbk CTimerGetDuration2_user(nullptr);
        
        Info::CTimerGetLoopTime3_ptr CTimerGetLoopTime3_next(nullptr);
        Info::CTimerGetLoopTime3_clbk CTimerGetLoopTime3_user(nullptr);
        
        Info::CTimerGetTicks4_ptr CTimerGetTicks4_next(nullptr);
        Info::CTimerGetTicks4_clbk CTimerGetTicks4_user(nullptr);
        
        Info::CTimerGetTime5_ptr CTimerGetTime5_next(nullptr);
        Info::CTimerGetTime5_clbk CTimerGetTime5_user(nullptr);
        
        Info::CTimerSetMinFPS6_ptr CTimerSetMinFPS6_next(nullptr);
        Info::CTimerSetMinFPS6_clbk CTimerSetMinFPS6_user(nullptr);
        
        Info::CTimerSetTime7_ptr CTimerSetTime7_next(nullptr);
        Info::CTimerSetTime7_clbk CTimerSetTime7_user(nullptr);
        
        void CTimerCalculateTime1_wrapper(struct CTimer* _this)
        {
           CTimerCalculateTime1_user(_this, CTimerCalculateTime1_next);
        };
        float CTimerGetDuration2_wrapper(struct CTimer* _this)
        {
           return CTimerGetDuration2_user(_this, CTimerGetDuration2_next);
        };
        float CTimerGetLoopTime3_wrapper(struct CTimer* _this)
        {
           return CTimerGetLoopTime3_user(_this, CTimerGetLoopTime3_next);
        };
        uint64_t CTimerGetTicks4_wrapper(struct CTimer* _this)
        {
           return CTimerGetTicks4_user(_this, CTimerGetTicks4_next);
        };
        float CTimerGetTime5_wrapper(struct CTimer* _this)
        {
           return CTimerGetTime5_user(_this, CTimerGetTime5_next);
        };
        void CTimerSetMinFPS6_wrapper(struct CTimer* _this, float arg_0)
        {
           CTimerSetMinFPS6_user(_this, arg_0, CTimerSetMinFPS6_next);
        };
        void CTimerSetTime7_wrapper(struct CTimer* _this, float arg_0)
        {
           CTimerSetTime7_user(_this, arg_0, CTimerSetTime7_next);
        };
        
        ::std::array<hook_record, 7> CTimer_functions = 
        {
            _hook_record {
                (LPVOID)0x1404e2aa0L,
                (LPVOID *)&CTimerCalculateTime1_user,
                (LPVOID *)&CTimerCalculateTime1_next,
                (LPVOID)cast_pointer_function(CTimerCalculateTime1_wrapper),
                (LPVOID)cast_pointer_function((void(CTimer::*)())&CTimer::CalculateTime)
            },
            _hook_record {
                (LPVOID)0x1404e2a70L,
                (LPVOID *)&CTimerGetDuration2_user,
                (LPVOID *)&CTimerGetDuration2_next,
                (LPVOID)cast_pointer_function(CTimerGetDuration2_wrapper),
                (LPVOID)cast_pointer_function((float(CTimer::*)())&CTimer::GetDuration)
            },
            _hook_record {
                (LPVOID)0x1404e2bf0L,
                (LPVOID *)&CTimerGetLoopTime3_user,
                (LPVOID *)&CTimerGetLoopTime3_next,
                (LPVOID)cast_pointer_function(CTimerGetLoopTime3_wrapper),
                (LPVOID)cast_pointer_function((float(CTimer::*)())&CTimer::GetLoopTime)
            },
            _hook_record {
                (LPVOID)0x1404e2a20L,
                (LPVOID *)&CTimerGetTicks4_user,
                (LPVOID *)&CTimerGetTicks4_next,
                (LPVOID)cast_pointer_function(CTimerGetTicks4_wrapper),
                (LPVOID)cast_pointer_function((uint64_t(CTimer::*)())&CTimer::GetTicks)
            },
            _hook_record {
                (LPVOID)0x1404e2c00L,
                (LPVOID *)&CTimerGetTime5_user,
                (LPVOID *)&CTimerGetTime5_next,
                (LPVOID)cast_pointer_function(CTimerGetTime5_wrapper),
                (LPVOID)cast_pointer_function((float(CTimer::*)())&CTimer::GetTime)
            },
            _hook_record {
                (LPVOID)0x1404e2c20L,
                (LPVOID *)&CTimerSetMinFPS6_user,
                (LPVOID *)&CTimerSetMinFPS6_next,
                (LPVOID)cast_pointer_function(CTimerSetMinFPS6_wrapper),
                (LPVOID)cast_pointer_function((void(CTimer::*)(float))&CTimer::SetMinFPS)
            },
            _hook_record {
                (LPVOID)0x1404e2c10L,
                (LPVOID *)&CTimerSetTime7_user,
                (LPVOID *)&CTimerSetTime7_next,
                (LPVOID)cast_pointer_function(CTimerSetTime7_wrapper),
                (LPVOID)cast_pointer_function((void(CTimer::*)(float))&CTimer::SetTime)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
