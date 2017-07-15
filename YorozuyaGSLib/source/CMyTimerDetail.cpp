#include <CMyTimerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CMyTimerBeginTimer2_ptr CMyTimerBeginTimer2_next(nullptr);
        Info::CMyTimerBeginTimer2_clbk CMyTimerBeginTimer2_user(nullptr);
        
        Info::CMyTimerBeginTimerAddLapse4_ptr CMyTimerBeginTimerAddLapse4_next(nullptr);
        Info::CMyTimerBeginTimerAddLapse4_clbk CMyTimerBeginTimerAddLapse4_user(nullptr);
        
        
        Info::CMyTimerctor_CMyTimer6_ptr CMyTimerctor_CMyTimer6_next(nullptr);
        Info::CMyTimerctor_CMyTimer6_clbk CMyTimerctor_CMyTimer6_user(nullptr);
        
        Info::CMyTimerCountingAddTickOld8_ptr CMyTimerCountingAddTickOld8_next(nullptr);
        Info::CMyTimerCountingAddTickOld8_clbk CMyTimerCountingAddTickOld8_user(nullptr);
        
        Info::CMyTimerCountingTimer10_ptr CMyTimerCountingTimer10_next(nullptr);
        Info::CMyTimerCountingTimer10_clbk CMyTimerCountingTimer10_user(nullptr);
        
        Info::CMyTimerGetTerm12_ptr CMyTimerGetTerm12_next(nullptr);
        Info::CMyTimerGetTerm12_clbk CMyTimerGetTerm12_user(nullptr);
        
        Info::CMyTimerNextTimeRun14_ptr CMyTimerNextTimeRun14_next(nullptr);
        Info::CMyTimerNextTimeRun14_clbk CMyTimerNextTimeRun14_user(nullptr);
        
        Info::CMyTimerStopTimer16_ptr CMyTimerStopTimer16_next(nullptr);
        Info::CMyTimerStopTimer16_clbk CMyTimerStopTimer16_user(nullptr);
        
        Info::CMyTimerTermTimeRun18_ptr CMyTimerTermTimeRun18_next(nullptr);
        Info::CMyTimerTermTimeRun18_clbk CMyTimerTermTimeRun18_user(nullptr);
        
        
        Info::CMyTimerdtor_CMyTimer23_ptr CMyTimerdtor_CMyTimer23_next(nullptr);
        Info::CMyTimerdtor_CMyTimer23_clbk CMyTimerdtor_CMyTimer23_user(nullptr);
        
        void CMyTimerBeginTimer2_wrapper(struct CMyTimer* _this, unsigned int dwTerm)
        {
           CMyTimerBeginTimer2_user(_this, dwTerm, CMyTimerBeginTimer2_next);
        };
        void CMyTimerBeginTimerAddLapse4_wrapper(struct CMyTimer* _this, unsigned int dwTerm, unsigned int dwAddLapse)
        {
           CMyTimerBeginTimerAddLapse4_user(_this, dwTerm, dwAddLapse, CMyTimerBeginTimerAddLapse4_next);
        };
        
        void CMyTimerctor_CMyTimer6_wrapper(struct CMyTimer* _this)
        {
           CMyTimerctor_CMyTimer6_user(_this, CMyTimerctor_CMyTimer6_next);
        };
        void CMyTimerCountingAddTickOld8_wrapper(struct CMyTimer* _this, unsigned int dwAddGap)
        {
           CMyTimerCountingAddTickOld8_user(_this, dwAddGap, CMyTimerCountingAddTickOld8_next);
        };
        bool CMyTimerCountingTimer10_wrapper(struct CMyTimer* _this)
        {
           return CMyTimerCountingTimer10_user(_this, CMyTimerCountingTimer10_next);
        };
        unsigned int CMyTimerGetTerm12_wrapper(struct CMyTimer* _this)
        {
           return CMyTimerGetTerm12_user(_this, CMyTimerGetTerm12_next);
        };
        void CMyTimerNextTimeRun14_wrapper(struct CMyTimer* _this)
        {
           CMyTimerNextTimeRun14_user(_this, CMyTimerNextTimeRun14_next);
        };
        void CMyTimerStopTimer16_wrapper(struct CMyTimer* _this)
        {
           CMyTimerStopTimer16_user(_this, CMyTimerStopTimer16_next);
        };
        void CMyTimerTermTimeRun18_wrapper(struct CMyTimer* _this)
        {
           CMyTimerTermTimeRun18_user(_this, CMyTimerTermTimeRun18_next);
        };
        
        void CMyTimerdtor_CMyTimer23_wrapper(struct CMyTimer* _this)
        {
           CMyTimerdtor_CMyTimer23_user(_this, CMyTimerdtor_CMyTimer23_next);
        };
        
        ::std::array<hook_record, 10> CMyTimer_functions = 
        {
            _hook_record {
                (LPVOID)0x1404389d0L,
                (LPVOID *)&CMyTimerBeginTimer2_user,
                (LPVOID *)&CMyTimerBeginTimer2_next,
                (LPVOID)cast_pointer_function(CMyTimerBeginTimer2_wrapper),
                (LPVOID)cast_pointer_function((void(CMyTimer::*)(unsigned int))&CMyTimer::BeginTimer)
            },
            _hook_record {
                (LPVOID)0x140438a30L,
                (LPVOID *)&CMyTimerBeginTimerAddLapse4_user,
                (LPVOID *)&CMyTimerBeginTimerAddLapse4_next,
                (LPVOID)cast_pointer_function(CMyTimerBeginTimerAddLapse4_wrapper),
                (LPVOID)cast_pointer_function((void(CMyTimer::*)(unsigned int, unsigned int))&CMyTimer::BeginTimerAddLapse)
            },
            _hook_record {
                (LPVOID)0x140438980L,
                (LPVOID *)&CMyTimerctor_CMyTimer6_user,
                (LPVOID *)&CMyTimerctor_CMyTimer6_next,
                (LPVOID)cast_pointer_function(CMyTimerctor_CMyTimer6_wrapper),
                (LPVOID)cast_pointer_function((void(CMyTimer::*)())&CMyTimer::ctor_CMyTimer)
            },
            _hook_record {
                (LPVOID)0x140438ab0L,
                (LPVOID *)&CMyTimerCountingAddTickOld8_user,
                (LPVOID *)&CMyTimerCountingAddTickOld8_next,
                (LPVOID)cast_pointer_function(CMyTimerCountingAddTickOld8_wrapper),
                (LPVOID)cast_pointer_function((void(CMyTimer::*)(unsigned int))&CMyTimer::CountingAddTickOld)
            },
            _hook_record {
                (LPVOID)0x140438ae0L,
                (LPVOID *)&CMyTimerCountingTimer10_user,
                (LPVOID *)&CMyTimerCountingTimer10_next,
                (LPVOID)cast_pointer_function(CMyTimerCountingTimer10_wrapper),
                (LPVOID)cast_pointer_function((bool(CMyTimer::*)())&CMyTimer::CountingTimer)
            },
            _hook_record {
                (LPVOID)0x140438c10L,
                (LPVOID *)&CMyTimerGetTerm12_user,
                (LPVOID *)&CMyTimerGetTerm12_next,
                (LPVOID)cast_pointer_function(CMyTimerGetTerm12_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CMyTimer::*)())&CMyTimer::GetTerm)
            },
            _hook_record {
                (LPVOID)0x140438b80L,
                (LPVOID *)&CMyTimerNextTimeRun14_user,
                (LPVOID *)&CMyTimerNextTimeRun14_next,
                (LPVOID)cast_pointer_function(CMyTimerNextTimeRun14_wrapper),
                (LPVOID)cast_pointer_function((void(CMyTimer::*)())&CMyTimer::NextTimeRun)
            },
            _hook_record {
                (LPVOID)0x140438a90L,
                (LPVOID *)&CMyTimerStopTimer16_user,
                (LPVOID *)&CMyTimerStopTimer16_next,
                (LPVOID)cast_pointer_function(CMyTimerStopTimer16_wrapper),
                (LPVOID)cast_pointer_function((void(CMyTimer::*)())&CMyTimer::StopTimer)
            },
            _hook_record {
                (LPVOID)0x140438bd0L,
                (LPVOID *)&CMyTimerTermTimeRun18_user,
                (LPVOID *)&CMyTimerTermTimeRun18_next,
                (LPVOID)cast_pointer_function(CMyTimerTermTimeRun18_wrapper),
                (LPVOID)cast_pointer_function((void(CMyTimer::*)())&CMyTimer::TermTimeRun)
            },
            _hook_record {
                (LPVOID)0x140072960L,
                (LPVOID *)&CMyTimerdtor_CMyTimer23_user,
                (LPVOID *)&CMyTimerdtor_CMyTimer23_next,
                (LPVOID)cast_pointer_function(CMyTimerdtor_CMyTimer23_wrapper),
                (LPVOID)cast_pointer_function((void(CMyTimer::*)())&CMyTimer::dtor_CMyTimer)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
