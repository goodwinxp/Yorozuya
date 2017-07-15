#include <BossScheduleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::BossSchedulector_BossSchedule2_ptr BossSchedulector_BossSchedule2_next(nullptr);
        Info::BossSchedulector_BossSchedule2_clbk BossSchedulector_BossSchedule2_user(nullptr);
        
        Info::BossScheduleMake_LastTimeRespawnSystemTime4_ptr BossScheduleMake_LastTimeRespawnSystemTime4_next(nullptr);
        Info::BossScheduleMake_LastTimeRespawnSystemTime4_clbk BossScheduleMake_LastTimeRespawnSystemTime4_user(nullptr);
        
        Info::BossScheduleMake_LastTimeRespawnSystemTimeString6_ptr BossScheduleMake_LastTimeRespawnSystemTimeString6_next(nullptr);
        Info::BossScheduleMake_LastTimeRespawnSystemTimeString6_clbk BossScheduleMake_LastTimeRespawnSystemTimeString6_user(nullptr);
        
        Info::BossScheduleMake_LiveCount8_ptr BossScheduleMake_LiveCount8_next(nullptr);
        Info::BossScheduleMake_LiveCount8_clbk BossScheduleMake_LiveCount8_user(nullptr);
        
        Info::BossScheduleMake_LiveCountString10_ptr BossScheduleMake_LiveCountString10_next(nullptr);
        Info::BossScheduleMake_LiveCountString10_clbk BossScheduleMake_LiveCountString10_user(nullptr);
        
        Info::BossScheduleSave_LastRespawnSystemTime12_ptr BossScheduleSave_LastRespawnSystemTime12_next(nullptr);
        Info::BossScheduleSave_LastRespawnSystemTime12_clbk BossScheduleSave_LastRespawnSystemTime12_user(nullptr);
        
        Info::BossScheduleSave_LiveCount14_ptr BossScheduleSave_LiveCount14_next(nullptr);
        Info::BossScheduleSave_LiveCount14_clbk BossScheduleSave_LiveCount14_user(nullptr);
        
        
        Info::BossScheduledtor_BossSchedule18_ptr BossScheduledtor_BossSchedule18_next(nullptr);
        Info::BossScheduledtor_BossSchedule18_clbk BossScheduledtor_BossSchedule18_user(nullptr);
        
        
        void BossSchedulector_BossSchedule2_wrapper(struct BossSchedule* _this)
        {
           BossSchedulector_BossSchedule2_user(_this, BossSchedulector_BossSchedule2_next);
        };
        struct ATL::CTime* BossScheduleMake_LastTimeRespawnSystemTime4_wrapper(struct ATL::CTime* result, char* strTimeValue)
        {
           return BossScheduleMake_LastTimeRespawnSystemTime4_user(result, strTimeValue, BossScheduleMake_LastTimeRespawnSystemTime4_next);
        };
        bool BossScheduleMake_LastTimeRespawnSystemTimeString6_wrapper(struct BossSchedule* _this, char* strBuff, int nBuffSize)
        {
           return BossScheduleMake_LastTimeRespawnSystemTimeString6_user(_this, strBuff, nBuffSize, BossScheduleMake_LastTimeRespawnSystemTimeString6_next);
        };
        uint16_t BossScheduleMake_LiveCount8_wrapper(char* strTimeValue)
        {
           return BossScheduleMake_LiveCount8_user(strTimeValue, BossScheduleMake_LiveCount8_next);
        };
        bool BossScheduleMake_LiveCountString10_wrapper(struct BossSchedule* _this, char* strBuff, int nBuffSize)
        {
           return BossScheduleMake_LiveCountString10_user(_this, strBuff, nBuffSize, BossScheduleMake_LiveCountString10_next);
        };
        void BossScheduleSave_LastRespawnSystemTime12_wrapper(struct BossSchedule* _this, struct ATL::CTime* systime)
        {
           BossScheduleSave_LastRespawnSystemTime12_user(_this, systime, BossScheduleSave_LastRespawnSystemTime12_next);
        };
        void BossScheduleSave_LiveCount14_wrapper(struct BossSchedule* _this, uint16_t wCount)
        {
           BossScheduleSave_LiveCount14_user(_this, wCount, BossScheduleSave_LiveCount14_next);
        };
        
        void BossScheduledtor_BossSchedule18_wrapper(struct BossSchedule* _this)
        {
           BossScheduledtor_BossSchedule18_user(_this, BossScheduledtor_BossSchedule18_next);
        };
        
        ::std::array<hook_record, 8> BossSchedule_functions = 
        {
            _hook_record {
                (LPVOID)0x14041b680L,
                (LPVOID *)&BossSchedulector_BossSchedule2_user,
                (LPVOID *)&BossSchedulector_BossSchedule2_next,
                (LPVOID)cast_pointer_function(BossSchedulector_BossSchedule2_wrapper),
                (LPVOID)cast_pointer_function((void(BossSchedule::*)())&BossSchedule::ctor_BossSchedule)
            },
            _hook_record {
                (LPVOID)0x14041a670L,
                (LPVOID *)&BossScheduleMake_LastTimeRespawnSystemTime4_user,
                (LPVOID *)&BossScheduleMake_LastTimeRespawnSystemTime4_next,
                (LPVOID)cast_pointer_function(BossScheduleMake_LastTimeRespawnSystemTime4_wrapper),
                (LPVOID)cast_pointer_function((struct ATL::CTime*(*)(struct ATL::CTime*, char*))&BossSchedule::Make_LastTimeRespawnSystemTime)
            },
            _hook_record {
                (LPVOID)0x14041a4b0L,
                (LPVOID *)&BossScheduleMake_LastTimeRespawnSystemTimeString6_user,
                (LPVOID *)&BossScheduleMake_LastTimeRespawnSystemTimeString6_next,
                (LPVOID)cast_pointer_function(BossScheduleMake_LastTimeRespawnSystemTimeString6_wrapper),
                (LPVOID)cast_pointer_function((bool(BossSchedule::*)(char*, int))&BossSchedule::Make_LastTimeRespawnSystemTimeString)
            },
            _hook_record {
                (LPVOID)0x14041a8c0L,
                (LPVOID *)&BossScheduleMake_LiveCount8_user,
                (LPVOID *)&BossScheduleMake_LiveCount8_next,
                (LPVOID)cast_pointer_function(BossScheduleMake_LiveCount8_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(*)(char*))&BossSchedule::Make_LiveCount)
            },
            _hook_record {
                (LPVOID)0x14041a600L,
                (LPVOID *)&BossScheduleMake_LiveCountString10_user,
                (LPVOID *)&BossScheduleMake_LiveCountString10_next,
                (LPVOID)cast_pointer_function(BossScheduleMake_LiveCountString10_wrapper),
                (LPVOID)cast_pointer_function((bool(BossSchedule::*)(char*, int))&BossSchedule::Make_LiveCountString)
            },
            _hook_record {
                (LPVOID)0x14041a250L,
                (LPVOID *)&BossScheduleSave_LastRespawnSystemTime12_user,
                (LPVOID *)&BossScheduleSave_LastRespawnSystemTime12_next,
                (LPVOID)cast_pointer_function(BossScheduleSave_LastRespawnSystemTime12_wrapper),
                (LPVOID)cast_pointer_function((void(BossSchedule::*)(struct ATL::CTime*))&BossSchedule::Save_LastRespawnSystemTime)
            },
            _hook_record {
                (LPVOID)0x14041a380L,
                (LPVOID *)&BossScheduleSave_LiveCount14_user,
                (LPVOID *)&BossScheduleSave_LiveCount14_next,
                (LPVOID)cast_pointer_function(BossScheduleSave_LiveCount14_wrapper),
                (LPVOID)cast_pointer_function((void(BossSchedule::*)(uint16_t))&BossSchedule::Save_LiveCount)
            },
            _hook_record {
                (LPVOID)0x14041a1f0L,
                (LPVOID *)&BossScheduledtor_BossSchedule18_user,
                (LPVOID *)&BossScheduledtor_BossSchedule18_next,
                (LPVOID)cast_pointer_function(BossScheduledtor_BossSchedule18_wrapper),
                (LPVOID)cast_pointer_function((void(BossSchedule::*)())&BossSchedule::dtor_BossSchedule)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
