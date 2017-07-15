#include <ATL__CFileTimeSpanDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Detail
        {
            
            Info::ATL__CFileTimeSpanctor_CFileTimeSpan1_ptr ATL__CFileTimeSpanctor_CFileTimeSpan1_next(nullptr);
            Info::ATL__CFileTimeSpanctor_CFileTimeSpan1_clbk ATL__CFileTimeSpanctor_CFileTimeSpan1_user(nullptr);
            
            
            Info::ATL__CFileTimeSpanctor_CFileTimeSpan2_ptr ATL__CFileTimeSpanctor_CFileTimeSpan2_next(nullptr);
            Info::ATL__CFileTimeSpanctor_CFileTimeSpan2_clbk ATL__CFileTimeSpanctor_CFileTimeSpan2_user(nullptr);
            
            
            Info::ATL__CFileTimeSpanctor_CFileTimeSpan3_ptr ATL__CFileTimeSpanctor_CFileTimeSpan3_next(nullptr);
            Info::ATL__CFileTimeSpanctor_CFileTimeSpan3_clbk ATL__CFileTimeSpanctor_CFileTimeSpan3_user(nullptr);
            
            Info::ATL__CFileTimeSpanGetTimeSpan4_ptr ATL__CFileTimeSpanGetTimeSpan4_next(nullptr);
            Info::ATL__CFileTimeSpanGetTimeSpan4_clbk ATL__CFileTimeSpanGetTimeSpan4_user(nullptr);
            
            Info::ATL__CFileTimeSpanSetTimeSpan5_ptr ATL__CFileTimeSpanSetTimeSpan5_next(nullptr);
            Info::ATL__CFileTimeSpanSetTimeSpan5_clbk ATL__CFileTimeSpanSetTimeSpan5_user(nullptr);
            
            
            void ATL__CFileTimeSpanctor_CFileTimeSpan1_wrapper(struct ATL::CFileTimeSpan* _this, struct ATL::CFileTimeSpan* span)
            {
               ATL__CFileTimeSpanctor_CFileTimeSpan1_user(_this, span, ATL__CFileTimeSpanctor_CFileTimeSpan1_next);
            };
            
            void ATL__CFileTimeSpanctor_CFileTimeSpan2_wrapper(struct ATL::CFileTimeSpan* _this, int64_t nSpan)
            {
               ATL__CFileTimeSpanctor_CFileTimeSpan2_user(_this, nSpan, ATL__CFileTimeSpanctor_CFileTimeSpan2_next);
            };
            
            void ATL__CFileTimeSpanctor_CFileTimeSpan3_wrapper(struct ATL::CFileTimeSpan* _this)
            {
               ATL__CFileTimeSpanctor_CFileTimeSpan3_user(_this, ATL__CFileTimeSpanctor_CFileTimeSpan3_next);
            };
            int64_t ATL__CFileTimeSpanGetTimeSpan4_wrapper(struct ATL::CFileTimeSpan* _this)
            {
               return ATL__CFileTimeSpanGetTimeSpan4_user(_this, ATL__CFileTimeSpanGetTimeSpan4_next);
            };
            void ATL__CFileTimeSpanSetTimeSpan5_wrapper(struct ATL::CFileTimeSpan* _this, int64_t nSpan)
            {
               ATL__CFileTimeSpanSetTimeSpan5_user(_this, nSpan, ATL__CFileTimeSpanSetTimeSpan5_next);
            };
            
            ::std::array<hook_record, 5> CFileTimeSpan_functions = 
            {
                _hook_record {
                    (LPVOID)0x1406735a0L,
                    (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan1_user,
                    (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan1_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimeSpanctor_CFileTimeSpan1_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CFileTimeSpan::*)(struct ATL::CFileTimeSpan*))&ATL::CFileTimeSpan::ctor_CFileTimeSpan)
                },
                _hook_record {
                    (LPVOID)0x1406735d0L,
                    (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan2_user,
                    (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan2_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimeSpanctor_CFileTimeSpan2_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CFileTimeSpan::*)(int64_t))&ATL::CFileTimeSpan::ctor_CFileTimeSpan)
                },
                _hook_record {
                    (LPVOID)0x140673580L,
                    (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan3_user,
                    (LPVOID *)&ATL__CFileTimeSpanctor_CFileTimeSpan3_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimeSpanctor_CFileTimeSpan3_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CFileTimeSpan::*)())&ATL::CFileTimeSpan::ctor_CFileTimeSpan)
                },
                _hook_record {
                    (LPVOID)0x1406738b0L,
                    (LPVOID *)&ATL__CFileTimeSpanGetTimeSpan4_user,
                    (LPVOID *)&ATL__CFileTimeSpanGetTimeSpan4_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimeSpanGetTimeSpan4_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(ATL::CFileTimeSpan::*)())&ATL::CFileTimeSpan::GetTimeSpan)
                },
                _hook_record {
                    (LPVOID)0x1406738d0L,
                    (LPVOID *)&ATL__CFileTimeSpanSetTimeSpan5_user,
                    (LPVOID *)&ATL__CFileTimeSpanSetTimeSpan5_next,
                    (LPVOID)cast_pointer_function(ATL__CFileTimeSpanSetTimeSpan5_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CFileTimeSpan::*)(int64_t))&ATL::CFileTimeSpan::SetTimeSpan)
                },
            };
        }; // end namespace Detail
    }; // end namespace ATL
END_ATF_NAMESPACE
