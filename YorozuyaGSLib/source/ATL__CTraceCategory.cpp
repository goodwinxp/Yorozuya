#include <ATL__CTraceCategory.hpp>


START_ATF_NAMESPACE
    ATL::CTraceCategory::CTraceCategory(char* pszCategoryName, unsigned int nStartingLevel)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTraceCategory*, char*, unsigned int);
        (org_ptr(0x14066da00L))(this, pszCategoryName, nStartingLevel);
    };
    void ATL::CTraceCategory::ctor_CTraceCategory(char* pszCategoryName, unsigned int nStartingLevel)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTraceCategory*, char*, unsigned int);
        (org_ptr(0x14066da00L))(this, pszCategoryName, nStartingLevel);
    };
END_ATF_NAMESPACE
