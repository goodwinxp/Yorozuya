#include <CWeeklyGuildRankRecordDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CWeeklyGuildRankRecordctor_CWeeklyGuildRankRecord2_ptr CWeeklyGuildRankRecordctor_CWeeklyGuildRankRecord2_next(nullptr);
        Info::CWeeklyGuildRankRecordctor_CWeeklyGuildRankRecord2_clbk CWeeklyGuildRankRecordctor_CWeeklyGuildRankRecord2_user(nullptr);
        
        Info::CWeeklyGuildRankRecordClear4_ptr CWeeklyGuildRankRecordClear4_next(nullptr);
        Info::CWeeklyGuildRankRecordClear4_clbk CWeeklyGuildRankRecordClear4_user(nullptr);
        
        
        Info::CWeeklyGuildRankRecorddtor_CWeeklyGuildRankRecord8_ptr CWeeklyGuildRankRecorddtor_CWeeklyGuildRankRecord8_next(nullptr);
        Info::CWeeklyGuildRankRecorddtor_CWeeklyGuildRankRecord8_clbk CWeeklyGuildRankRecorddtor_CWeeklyGuildRankRecord8_user(nullptr);
        
        
        void CWeeklyGuildRankRecordctor_CWeeklyGuildRankRecord2_wrapper(struct CWeeklyGuildRankRecord* _this)
        {
           CWeeklyGuildRankRecordctor_CWeeklyGuildRankRecord2_user(_this, CWeeklyGuildRankRecordctor_CWeeklyGuildRankRecord2_next);
        };
        void CWeeklyGuildRankRecordClear4_wrapper(struct CWeeklyGuildRankRecord* _this)
        {
           CWeeklyGuildRankRecordClear4_user(_this, CWeeklyGuildRankRecordClear4_next);
        };
        
        void CWeeklyGuildRankRecorddtor_CWeeklyGuildRankRecord8_wrapper(struct CWeeklyGuildRankRecord* _this)
        {
           CWeeklyGuildRankRecorddtor_CWeeklyGuildRankRecord8_user(_this, CWeeklyGuildRankRecorddtor_CWeeklyGuildRankRecord8_next);
        };
        
        ::std::array<hook_record, 3> CWeeklyGuildRankRecord_functions = 
        {
            _hook_record {
                (LPVOID)0x1402cf910L,
                (LPVOID *)&CWeeklyGuildRankRecordctor_CWeeklyGuildRankRecord2_user,
                (LPVOID *)&CWeeklyGuildRankRecordctor_CWeeklyGuildRankRecord2_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankRecordctor_CWeeklyGuildRankRecord2_wrapper),
                (LPVOID)cast_pointer_function((void(CWeeklyGuildRankRecord::*)())&CWeeklyGuildRankRecord::ctor_CWeeklyGuildRankRecord)
            },
            _hook_record {
                (LPVOID)0x1402ca510L,
                (LPVOID *)&CWeeklyGuildRankRecordClear4_user,
                (LPVOID *)&CWeeklyGuildRankRecordClear4_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankRecordClear4_wrapper),
                (LPVOID)cast_pointer_function((void(CWeeklyGuildRankRecord::*)())&CWeeklyGuildRankRecord::Clear)
            },
            _hook_record {
                (LPVOID)0x1402cf900L,
                (LPVOID *)&CWeeklyGuildRankRecorddtor_CWeeklyGuildRankRecord8_user,
                (LPVOID *)&CWeeklyGuildRankRecorddtor_CWeeklyGuildRankRecord8_next,
                (LPVOID)cast_pointer_function(CWeeklyGuildRankRecorddtor_CWeeklyGuildRankRecord8_wrapper),
                (LPVOID)cast_pointer_function((void(CWeeklyGuildRankRecord::*)())&CWeeklyGuildRankRecord::dtor_CWeeklyGuildRankRecord)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
