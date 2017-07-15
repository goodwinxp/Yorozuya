#include <ATL__CTimeSpanDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Detail
        {
            
            Info::ATL__CTimeSpanctor_CTimeSpan1_ptr ATL__CTimeSpanctor_CTimeSpan1_next(nullptr);
            Info::ATL__CTimeSpanctor_CTimeSpan1_clbk ATL__CTimeSpanctor_CTimeSpan1_user(nullptr);
            
            
            Info::ATL__CTimeSpanctor_CTimeSpan2_ptr ATL__CTimeSpanctor_CTimeSpan2_next(nullptr);
            Info::ATL__CTimeSpanctor_CTimeSpan2_clbk ATL__CTimeSpanctor_CTimeSpan2_user(nullptr);
            
            
            Info::ATL__CTimeSpanctor_CTimeSpan3_ptr ATL__CTimeSpanctor_CTimeSpan3_next(nullptr);
            Info::ATL__CTimeSpanctor_CTimeSpan3_clbk ATL__CTimeSpanctor_CTimeSpan3_user(nullptr);
            
            Info::ATL__CTimeSpanGetDays4_ptr ATL__CTimeSpanGetDays4_next(nullptr);
            Info::ATL__CTimeSpanGetDays4_clbk ATL__CTimeSpanGetDays4_user(nullptr);
            
            Info::ATL__CTimeSpanGetHours5_ptr ATL__CTimeSpanGetHours5_next(nullptr);
            Info::ATL__CTimeSpanGetHours5_clbk ATL__CTimeSpanGetHours5_user(nullptr);
            
            Info::ATL__CTimeSpanGetMinutes6_ptr ATL__CTimeSpanGetMinutes6_next(nullptr);
            Info::ATL__CTimeSpanGetMinutes6_clbk ATL__CTimeSpanGetMinutes6_user(nullptr);
            
            Info::ATL__CTimeSpanGetSeconds7_ptr ATL__CTimeSpanGetSeconds7_next(nullptr);
            Info::ATL__CTimeSpanGetSeconds7_clbk ATL__CTimeSpanGetSeconds7_user(nullptr);
            
            Info::ATL__CTimeSpanGetTimeSpan8_ptr ATL__CTimeSpanGetTimeSpan8_next(nullptr);
            Info::ATL__CTimeSpanGetTimeSpan8_clbk ATL__CTimeSpanGetTimeSpan8_user(nullptr);
            
            Info::ATL__CTimeSpanGetTotalHours9_ptr ATL__CTimeSpanGetTotalHours9_next(nullptr);
            Info::ATL__CTimeSpanGetTotalHours9_clbk ATL__CTimeSpanGetTotalHours9_user(nullptr);
            
            Info::ATL__CTimeSpanGetTotalMinutes10_ptr ATL__CTimeSpanGetTotalMinutes10_next(nullptr);
            Info::ATL__CTimeSpanGetTotalMinutes10_clbk ATL__CTimeSpanGetTotalMinutes10_user(nullptr);
            
            Info::ATL__CTimeSpanGetTotalSeconds11_ptr ATL__CTimeSpanGetTotalSeconds11_next(nullptr);
            Info::ATL__CTimeSpanGetTotalSeconds11_clbk ATL__CTimeSpanGetTotalSeconds11_user(nullptr);
            
            
            void ATL__CTimeSpanctor_CTimeSpan1_wrapper(struct ATL::CTimeSpan* _this, int64_t time)
            {
               ATL__CTimeSpanctor_CTimeSpan1_user(_this, time, ATL__CTimeSpanctor_CTimeSpan1_next);
            };
            
            void ATL__CTimeSpanctor_CTimeSpan2_wrapper(struct ATL::CTimeSpan* _this, int lDays, int nHours, int nMins, int nSecs)
            {
               ATL__CTimeSpanctor_CTimeSpan2_user(_this, lDays, nHours, nMins, nSecs, ATL__CTimeSpanctor_CTimeSpan2_next);
            };
            
            void ATL__CTimeSpanctor_CTimeSpan3_wrapper(struct ATL::CTimeSpan* _this)
            {
               ATL__CTimeSpanctor_CTimeSpan3_user(_this, ATL__CTimeSpanctor_CTimeSpan3_next);
            };
            int64_t ATL__CTimeSpanGetDays4_wrapper(struct ATL::CTimeSpan* _this)
            {
               return ATL__CTimeSpanGetDays4_user(_this, ATL__CTimeSpanGetDays4_next);
            };
            int ATL__CTimeSpanGetHours5_wrapper(struct ATL::CTimeSpan* _this)
            {
               return ATL__CTimeSpanGetHours5_user(_this, ATL__CTimeSpanGetHours5_next);
            };
            int ATL__CTimeSpanGetMinutes6_wrapper(struct ATL::CTimeSpan* _this)
            {
               return ATL__CTimeSpanGetMinutes6_user(_this, ATL__CTimeSpanGetMinutes6_next);
            };
            int ATL__CTimeSpanGetSeconds7_wrapper(struct ATL::CTimeSpan* _this)
            {
               return ATL__CTimeSpanGetSeconds7_user(_this, ATL__CTimeSpanGetSeconds7_next);
            };
            int64_t ATL__CTimeSpanGetTimeSpan8_wrapper(struct ATL::CTimeSpan* _this)
            {
               return ATL__CTimeSpanGetTimeSpan8_user(_this, ATL__CTimeSpanGetTimeSpan8_next);
            };
            int64_t ATL__CTimeSpanGetTotalHours9_wrapper(struct ATL::CTimeSpan* _this)
            {
               return ATL__CTimeSpanGetTotalHours9_user(_this, ATL__CTimeSpanGetTotalHours9_next);
            };
            int64_t ATL__CTimeSpanGetTotalMinutes10_wrapper(struct ATL::CTimeSpan* _this)
            {
               return ATL__CTimeSpanGetTotalMinutes10_user(_this, ATL__CTimeSpanGetTotalMinutes10_next);
            };
            int64_t ATL__CTimeSpanGetTotalSeconds11_wrapper(struct ATL::CTimeSpan* _this)
            {
               return ATL__CTimeSpanGetTotalSeconds11_user(_this, ATL__CTimeSpanGetTotalSeconds11_next);
            };
            
            ::std::array<hook_record, 11> CTimeSpan_functions = 
            {
                _hook_record {
                    (LPVOID)0x140672200L,
                    (LPVOID *)&ATL__CTimeSpanctor_CTimeSpan1_user,
                    (LPVOID *)&ATL__CTimeSpanctor_CTimeSpan1_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanctor_CTimeSpan1_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTimeSpan::*)(int64_t))&ATL::CTimeSpan::ctor_CTimeSpan)
                },
                _hook_record {
                    (LPVOID)0x140672230L,
                    (LPVOID *)&ATL__CTimeSpanctor_CTimeSpan2_user,
                    (LPVOID *)&ATL__CTimeSpanctor_CTimeSpan2_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanctor_CTimeSpan2_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTimeSpan::*)(int, int, int, int))&ATL::CTimeSpan::ctor_CTimeSpan)
                },
                _hook_record {
                    (LPVOID)0x1406721e0L,
                    (LPVOID *)&ATL__CTimeSpanctor_CTimeSpan3_user,
                    (LPVOID *)&ATL__CTimeSpanctor_CTimeSpan3_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanctor_CTimeSpan3_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTimeSpan::*)())&ATL::CTimeSpan::ctor_CTimeSpan)
                },
                _hook_record {
                    (LPVOID)0x140672280L,
                    (LPVOID *)&ATL__CTimeSpanGetDays4_user,
                    (LPVOID *)&ATL__CTimeSpanGetDays4_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanGetDays4_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(ATL::CTimeSpan::*)())&ATL::CTimeSpan::GetDays)
                },
                _hook_record {
                    (LPVOID)0x1406722c0L,
                    (LPVOID *)&ATL__CTimeSpanGetHours5_user,
                    (LPVOID *)&ATL__CTimeSpanGetHours5_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanGetHours5_wrapper),
                    (LPVOID)cast_pointer_function((int(ATL::CTimeSpan::*)())&ATL::CTimeSpan::GetHours)
                },
                _hook_record {
                    (LPVOID)0x140672320L,
                    (LPVOID *)&ATL__CTimeSpanGetMinutes6_user,
                    (LPVOID *)&ATL__CTimeSpanGetMinutes6_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanGetMinutes6_wrapper),
                    (LPVOID)cast_pointer_function((int(ATL::CTimeSpan::*)())&ATL::CTimeSpan::GetMinutes)
                },
                _hook_record {
                    (LPVOID)0x140672380L,
                    (LPVOID *)&ATL__CTimeSpanGetSeconds7_user,
                    (LPVOID *)&ATL__CTimeSpanGetSeconds7_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanGetSeconds7_wrapper),
                    (LPVOID)cast_pointer_function((int(ATL::CTimeSpan::*)())&ATL::CTimeSpan::GetSeconds)
                },
                _hook_record {
                    (LPVOID)0x1406723c0L,
                    (LPVOID *)&ATL__CTimeSpanGetTimeSpan8_user,
                    (LPVOID *)&ATL__CTimeSpanGetTimeSpan8_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanGetTimeSpan8_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(ATL::CTimeSpan::*)())&ATL::CTimeSpan::GetTimeSpan)
                },
                _hook_record {
                    (LPVOID)0x1406722a0L,
                    (LPVOID *)&ATL__CTimeSpanGetTotalHours9_user,
                    (LPVOID *)&ATL__CTimeSpanGetTotalHours9_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanGetTotalHours9_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(ATL::CTimeSpan::*)())&ATL::CTimeSpan::GetTotalHours)
                },
                _hook_record {
                    (LPVOID)0x140672300L,
                    (LPVOID *)&ATL__CTimeSpanGetTotalMinutes10_user,
                    (LPVOID *)&ATL__CTimeSpanGetTotalMinutes10_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanGetTotalMinutes10_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(ATL::CTimeSpan::*)())&ATL::CTimeSpan::GetTotalMinutes)
                },
                _hook_record {
                    (LPVOID)0x140672360L,
                    (LPVOID *)&ATL__CTimeSpanGetTotalSeconds11_user,
                    (LPVOID *)&ATL__CTimeSpanGetTotalSeconds11_next,
                    (LPVOID)cast_pointer_function(ATL__CTimeSpanGetTotalSeconds11_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(ATL::CTimeSpan::*)())&ATL::CTimeSpan::GetTotalSeconds)
                },
            };
        }; // end namespace Detail
    }; // end namespace ATL
END_ATF_NAMESPACE
