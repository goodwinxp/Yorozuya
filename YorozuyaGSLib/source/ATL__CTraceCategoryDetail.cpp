#include <ATL__CTraceCategoryDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Detail
        {
            
            Info::ATL__CTraceCategoryctor_CTraceCategory1_ptr ATL__CTraceCategoryctor_CTraceCategory1_next(nullptr);
            Info::ATL__CTraceCategoryctor_CTraceCategory1_clbk ATL__CTraceCategoryctor_CTraceCategory1_user(nullptr);
            
            
            void ATL__CTraceCategoryctor_CTraceCategory1_wrapper(struct ATL::CTraceCategory* _this, char* pszCategoryName, unsigned int nStartingLevel)
            {
               ATL__CTraceCategoryctor_CTraceCategory1_user(_this, pszCategoryName, nStartingLevel, ATL__CTraceCategoryctor_CTraceCategory1_next);
            };
            
            ::std::array<hook_record, 1> CTraceCategory_functions = 
            {
                _hook_record {
                    (LPVOID)0x14066da00L,
                    (LPVOID *)&ATL__CTraceCategoryctor_CTraceCategory1_user,
                    (LPVOID *)&ATL__CTraceCategoryctor_CTraceCategory1_next,
                    (LPVOID)cast_pointer_function(ATL__CTraceCategoryctor_CTraceCategory1_wrapper),
                    (LPVOID)cast_pointer_function((void(ATL::CTraceCategory::*)(char*, unsigned int))&ATL::CTraceCategory::ctor_CTraceCategory)
                },
            };
        }; // end namespace Detail
    }; // end namespace ATL
END_ATF_NAMESPACE
