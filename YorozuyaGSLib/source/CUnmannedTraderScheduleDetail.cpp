#include <CUnmannedTraderScheduleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderSchedulector_CUnmannedTraderSchedule2_ptr CUnmannedTraderSchedulector_CUnmannedTraderSchedule2_next(nullptr);
        Info::CUnmannedTraderSchedulector_CUnmannedTraderSchedule2_clbk CUnmannedTraderSchedulector_CUnmannedTraderSchedule2_user(nullptr);
        
        Info::CUnmannedTraderScheduleClear4_ptr CUnmannedTraderScheduleClear4_next(nullptr);
        Info::CUnmannedTraderScheduleClear4_clbk CUnmannedTraderScheduleClear4_user(nullptr);
        
        Info::CUnmannedTraderScheduleCompleteClear6_ptr CUnmannedTraderScheduleCompleteClear6_next(nullptr);
        Info::CUnmannedTraderScheduleCompleteClear6_clbk CUnmannedTraderScheduleCompleteClear6_user(nullptr);
        
        Info::CUnmannedTraderScheduleGetOwnerSerial8_ptr CUnmannedTraderScheduleGetOwnerSerial8_next(nullptr);
        Info::CUnmannedTraderScheduleGetOwnerSerial8_clbk CUnmannedTraderScheduleGetOwnerSerial8_user(nullptr);
        
        Info::CUnmannedTraderScheduleGetRegistSerial10_ptr CUnmannedTraderScheduleGetRegistSerial10_next(nullptr);
        Info::CUnmannedTraderScheduleGetRegistSerial10_clbk CUnmannedTraderScheduleGetRegistSerial10_user(nullptr);
        
        Info::CUnmannedTraderScheduleGetType12_ptr CUnmannedTraderScheduleGetType12_next(nullptr);
        Info::CUnmannedTraderScheduleGetType12_clbk CUnmannedTraderScheduleGetType12_user(nullptr);
        
        Info::CUnmannedTraderScheduleIsDone14_ptr CUnmannedTraderScheduleIsDone14_next(nullptr);
        Info::CUnmannedTraderScheduleIsDone14_clbk CUnmannedTraderScheduleIsDone14_user(nullptr);
        
        Info::CUnmannedTraderScheduleIsWait16_ptr CUnmannedTraderScheduleIsWait16_next(nullptr);
        Info::CUnmannedTraderScheduleIsWait16_clbk CUnmannedTraderScheduleIsWait16_user(nullptr);
        
        Info::CUnmannedTraderSchedulePushClear18_ptr CUnmannedTraderSchedulePushClear18_next(nullptr);
        Info::CUnmannedTraderSchedulePushClear18_clbk CUnmannedTraderSchedulePushClear18_user(nullptr);
        
        Info::CUnmannedTraderScheduleSet20_ptr CUnmannedTraderScheduleSet20_next(nullptr);
        Info::CUnmannedTraderScheduleSet20_clbk CUnmannedTraderScheduleSet20_user(nullptr);
        
        
        Info::CUnmannedTraderScheduledtor_CUnmannedTraderSchedule24_ptr CUnmannedTraderScheduledtor_CUnmannedTraderSchedule24_next(nullptr);
        Info::CUnmannedTraderScheduledtor_CUnmannedTraderSchedule24_clbk CUnmannedTraderScheduledtor_CUnmannedTraderSchedule24_user(nullptr);
        
        
        void CUnmannedTraderSchedulector_CUnmannedTraderSchedule2_wrapper(struct CUnmannedTraderSchedule* _this)
        {
           CUnmannedTraderSchedulector_CUnmannedTraderSchedule2_user(_this, CUnmannedTraderSchedulector_CUnmannedTraderSchedule2_next);
        };
        void CUnmannedTraderScheduleClear4_wrapper(struct CUnmannedTraderSchedule* _this)
        {
           CUnmannedTraderScheduleClear4_user(_this, CUnmannedTraderScheduleClear4_next);
        };
        void CUnmannedTraderScheduleCompleteClear6_wrapper(struct CUnmannedTraderSchedule* _this, char byDBQueryRet, char byProcRet)
        {
           CUnmannedTraderScheduleCompleteClear6_user(_this, byDBQueryRet, byProcRet, CUnmannedTraderScheduleCompleteClear6_next);
        };
        unsigned int CUnmannedTraderScheduleGetOwnerSerial8_wrapper(struct CUnmannedTraderSchedule* _this)
        {
           return CUnmannedTraderScheduleGetOwnerSerial8_user(_this, CUnmannedTraderScheduleGetOwnerSerial8_next);
        };
        unsigned int CUnmannedTraderScheduleGetRegistSerial10_wrapper(struct CUnmannedTraderSchedule* _this)
        {
           return CUnmannedTraderScheduleGetRegistSerial10_user(_this, CUnmannedTraderScheduleGetRegistSerial10_next);
        };
        char CUnmannedTraderScheduleGetType12_wrapper(struct CUnmannedTraderSchedule* _this)
        {
           return CUnmannedTraderScheduleGetType12_user(_this, CUnmannedTraderScheduleGetType12_next);
        };
        bool CUnmannedTraderScheduleIsDone14_wrapper(struct CUnmannedTraderSchedule* _this)
        {
           return CUnmannedTraderScheduleIsDone14_user(_this, CUnmannedTraderScheduleIsDone14_next);
        };
        bool CUnmannedTraderScheduleIsWait16_wrapper(struct CUnmannedTraderSchedule* _this)
        {
           return CUnmannedTraderScheduleIsWait16_user(_this, CUnmannedTraderScheduleIsWait16_next);
        };
        void CUnmannedTraderSchedulePushClear18_wrapper(struct CUnmannedTraderSchedule* _this, bool bTimeLimit)
        {
           CUnmannedTraderSchedulePushClear18_user(_this, bTimeLimit, CUnmannedTraderSchedulePushClear18_next);
        };
        void CUnmannedTraderScheduleSet20_wrapper(struct CUnmannedTraderSchedule* _this, char byType, unsigned int dwSerial, int64_t tEndTime, unsigned int dwOwnerSerial, unsigned int dwK)
        {
           CUnmannedTraderScheduleSet20_user(_this, byType, dwSerial, tEndTime, dwOwnerSerial, dwK, CUnmannedTraderScheduleSet20_next);
        };
        
        void CUnmannedTraderScheduledtor_CUnmannedTraderSchedule24_wrapper(struct CUnmannedTraderSchedule* _this)
        {
           CUnmannedTraderScheduledtor_CUnmannedTraderSchedule24_user(_this, CUnmannedTraderScheduledtor_CUnmannedTraderSchedule24_next);
        };
        
        ::std::array<hook_record, 11> CUnmannedTraderSchedule_functions = 
        {
            _hook_record {
                (LPVOID)0x140394580L,
                (LPVOID *)&CUnmannedTraderSchedulector_CUnmannedTraderSchedule2_user,
                (LPVOID *)&CUnmannedTraderSchedulector_CUnmannedTraderSchedule2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulector_CUnmannedTraderSchedule2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSchedule::*)())&CUnmannedTraderSchedule::ctor_CUnmannedTraderSchedule)
            },
            _hook_record {
                (LPVOID)0x140351b00L,
                (LPVOID *)&CUnmannedTraderScheduleClear4_user,
                (LPVOID *)&CUnmannedTraderScheduleClear4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderScheduleClear4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSchedule::*)())&CUnmannedTraderSchedule::Clear)
            },
            _hook_record {
                (LPVOID)0x1403978c0L,
                (LPVOID *)&CUnmannedTraderScheduleCompleteClear6_user,
                (LPVOID *)&CUnmannedTraderScheduleCompleteClear6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderScheduleCompleteClear6_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSchedule::*)(char, char))&CUnmannedTraderSchedule::CompleteClear)
            },
            _hook_record {
                (LPVOID)0x140394710L,
                (LPVOID *)&CUnmannedTraderScheduleGetOwnerSerial8_user,
                (LPVOID *)&CUnmannedTraderScheduleGetOwnerSerial8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderScheduleGetOwnerSerial8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CUnmannedTraderSchedule::*)())&CUnmannedTraderSchedule::GetOwnerSerial)
            },
            _hook_record {
                (LPVOID)0x140394ac0L,
                (LPVOID *)&CUnmannedTraderScheduleGetRegistSerial10_user,
                (LPVOID *)&CUnmannedTraderScheduleGetRegistSerial10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderScheduleGetRegistSerial10_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CUnmannedTraderSchedule::*)())&CUnmannedTraderSchedule::GetRegistSerial)
            },
            _hook_record {
                (LPVOID)0x140394aa0L,
                (LPVOID *)&CUnmannedTraderScheduleGetType12_user,
                (LPVOID *)&CUnmannedTraderScheduleGetType12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderScheduleGetType12_wrapper),
                (LPVOID)cast_pointer_function((char(CUnmannedTraderSchedule::*)())&CUnmannedTraderSchedule::GetType)
            },
            _hook_record {
                (LPVOID)0x140394730L,
                (LPVOID *)&CUnmannedTraderScheduleIsDone14_user,
                (LPVOID *)&CUnmannedTraderScheduleIsDone14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderScheduleIsDone14_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSchedule::*)())&CUnmannedTraderSchedule::IsDone)
            },
            _hook_record {
                (LPVOID)0x140394c10L,
                (LPVOID *)&CUnmannedTraderScheduleIsWait16_user,
                (LPVOID *)&CUnmannedTraderScheduleIsWait16_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderScheduleIsWait16_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderSchedule::*)())&CUnmannedTraderSchedule::IsWait)
            },
            _hook_record {
                (LPVOID)0x1403976e0L,
                (LPVOID *)&CUnmannedTraderSchedulePushClear18_user,
                (LPVOID *)&CUnmannedTraderSchedulePushClear18_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderSchedulePushClear18_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSchedule::*)(bool))&CUnmannedTraderSchedule::PushClear)
            },
            _hook_record {
                (LPVOID)0x140397620L,
                (LPVOID *)&CUnmannedTraderScheduleSet20_user,
                (LPVOID *)&CUnmannedTraderScheduleSet20_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderScheduleSet20_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSchedule::*)(char, unsigned int, int64_t, unsigned int, unsigned int))&CUnmannedTraderSchedule::Set)
            },
            _hook_record {
                (LPVOID)0x1403945d0L,
                (LPVOID *)&CUnmannedTraderScheduledtor_CUnmannedTraderSchedule24_user,
                (LPVOID *)&CUnmannedTraderScheduledtor_CUnmannedTraderSchedule24_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderScheduledtor_CUnmannedTraderSchedule24_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderSchedule::*)())&CUnmannedTraderSchedule::dtor_CUnmannedTraderSchedule)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
