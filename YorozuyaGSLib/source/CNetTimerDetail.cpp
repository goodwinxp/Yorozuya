#include <CNetTimerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CNetTimerBeginTimer2_ptr CNetTimerBeginTimer2_next(nullptr);
        Info::CNetTimerBeginTimer2_clbk CNetTimerBeginTimer2_user(nullptr);
        
        
        Info::CNetTimerctor_CNetTimer4_ptr CNetTimerctor_CNetTimer4_next(nullptr);
        Info::CNetTimerctor_CNetTimer4_clbk CNetTimerctor_CNetTimer4_user(nullptr);
        
        Info::CNetTimerCountingTimer6_ptr CNetTimerCountingTimer6_next(nullptr);
        Info::CNetTimerCountingTimer6_clbk CNetTimerCountingTimer6_user(nullptr);
        
        void CNetTimerBeginTimer2_wrapper(struct CNetTimer* _this, unsigned int dwTerm)
        {
           CNetTimerBeginTimer2_user(_this, dwTerm, CNetTimerBeginTimer2_next);
        };
        
        void CNetTimerctor_CNetTimer4_wrapper(struct CNetTimer* _this)
        {
           CNetTimerctor_CNetTimer4_user(_this, CNetTimerctor_CNetTimer4_next);
        };
        bool CNetTimerCountingTimer6_wrapper(struct CNetTimer* _this)
        {
           return CNetTimerCountingTimer6_user(_this, CNetTimerCountingTimer6_next);
        };
        
        ::std::array<hook_record, 3> CNetTimer_functions = 
        {
            _hook_record {
                (LPVOID)0x140304b40L,
                (LPVOID *)&CNetTimerBeginTimer2_user,
                (LPVOID *)&CNetTimerBeginTimer2_next,
                (LPVOID)cast_pointer_function(CNetTimerBeginTimer2_wrapper),
                (LPVOID)cast_pointer_function((void(CNetTimer::*)(unsigned int))&CNetTimer::BeginTimer)
            },
            _hook_record {
                (LPVOID)0x1403044c0L,
                (LPVOID *)&CNetTimerctor_CNetTimer4_user,
                (LPVOID *)&CNetTimerctor_CNetTimer4_next,
                (LPVOID)cast_pointer_function(CNetTimerctor_CNetTimer4_wrapper),
                (LPVOID)cast_pointer_function((void(CNetTimer::*)())&CNetTimer::ctor_CNetTimer)
            },
            _hook_record {
                (LPVOID)0x140416b00L,
                (LPVOID *)&CNetTimerCountingTimer6_user,
                (LPVOID *)&CNetTimerCountingTimer6_next,
                (LPVOID)cast_pointer_function(CNetTimerCountingTimer6_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetTimer::*)())&CNetTimer::CountingTimer)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
