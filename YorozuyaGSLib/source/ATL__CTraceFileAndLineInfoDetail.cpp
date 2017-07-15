#include <ATL__CTraceFileAndLineInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Detail
        {
            
            Info::ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_ptr ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_next(nullptr);
            Info::ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_clbk ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_user(nullptr);
            
            
            void ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_wrapper(struct ATL::CTraceFileAndLineInfo* _this, char* pszFileName, int nLineNo)
            {
               ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_user(_this, pszFileName, nLineNo, ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_next);
            };
            
            ::std::array<hook_record, 1> CTraceFileAndLineInfo_functions = 
            {
                _hook_record {
                    (LPVOID)0x140024ff0L,
                    (LPVOID *)&ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_user,
                    (LPVOID *)&ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_next,
                    (LPVOID)cast_pointer_function(ATL__CTraceFileAndLineInfoctor_CTraceFileAndLineInfo2_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTraceFileAndLineInfo::*)(char*, int))&ATL::CTraceFileAndLineInfo::ctor_CTraceFileAndLineInfo)
                },
            };
        }; // end namespace Detail
    }; // end namespace ATL
END_ATF_NAMESPACE
