#include <CTotalGuildRankRecordDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CTotalGuildRankRecordctor_CTotalGuildRankRecord2_ptr CTotalGuildRankRecordctor_CTotalGuildRankRecord2_next(nullptr);
        Info::CTotalGuildRankRecordctor_CTotalGuildRankRecord2_clbk CTotalGuildRankRecordctor_CTotalGuildRankRecord2_user(nullptr);
        
        Info::CTotalGuildRankRecordClear4_ptr CTotalGuildRankRecordClear4_next(nullptr);
        Info::CTotalGuildRankRecordClear4_clbk CTotalGuildRankRecordClear4_user(nullptr);
        
        
        Info::CTotalGuildRankRecorddtor_CTotalGuildRankRecord8_ptr CTotalGuildRankRecorddtor_CTotalGuildRankRecord8_next(nullptr);
        Info::CTotalGuildRankRecorddtor_CTotalGuildRankRecord8_clbk CTotalGuildRankRecorddtor_CTotalGuildRankRecord8_user(nullptr);
        
        
        void CTotalGuildRankRecordctor_CTotalGuildRankRecord2_wrapper(struct CTotalGuildRankRecord* _this)
        {
           CTotalGuildRankRecordctor_CTotalGuildRankRecord2_user(_this, CTotalGuildRankRecordctor_CTotalGuildRankRecord2_next);
        };
        void CTotalGuildRankRecordClear4_wrapper(struct CTotalGuildRankRecord* _this)
        {
           CTotalGuildRankRecordClear4_user(_this, CTotalGuildRankRecordClear4_next);
        };
        
        void CTotalGuildRankRecorddtor_CTotalGuildRankRecord8_wrapper(struct CTotalGuildRankRecord* _this)
        {
           CTotalGuildRankRecorddtor_CTotalGuildRankRecord8_user(_this, CTotalGuildRankRecorddtor_CTotalGuildRankRecord8_next);
        };
        
        ::std::array<hook_record, 3> CTotalGuildRankRecord_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c85d0L,
                (LPVOID *)&CTotalGuildRankRecordctor_CTotalGuildRankRecord2_user,
                (LPVOID *)&CTotalGuildRankRecordctor_CTotalGuildRankRecord2_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankRecordctor_CTotalGuildRankRecord2_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankRecord::*)())&CTotalGuildRankRecord::ctor_CTotalGuildRankRecord)
            },
            _hook_record {
                (LPVOID)0x1402c8650L,
                (LPVOID *)&CTotalGuildRankRecordClear4_user,
                (LPVOID *)&CTotalGuildRankRecordClear4_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankRecordClear4_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankRecord::*)())&CTotalGuildRankRecord::Clear)
            },
            _hook_record {
                (LPVOID)0x1402c8610L,
                (LPVOID *)&CTotalGuildRankRecorddtor_CTotalGuildRankRecord8_user,
                (LPVOID *)&CTotalGuildRankRecorddtor_CTotalGuildRankRecord8_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankRecorddtor_CTotalGuildRankRecord8_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankRecord::*)())&CTotalGuildRankRecord::dtor_CTotalGuildRankRecord)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
