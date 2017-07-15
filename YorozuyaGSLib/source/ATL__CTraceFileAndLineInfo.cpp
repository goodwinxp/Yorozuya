#include <ATL__CTraceFileAndLineInfo.hpp>


START_ATF_NAMESPACE
    ATL::CTraceFileAndLineInfo::CTraceFileAndLineInfo(char* pszFileName, int nLineNo)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTraceFileAndLineInfo*, char*, int);
        (org_ptr(0x140024ff0L))(this, pszFileName, nLineNo);
    };
    void ATL::CTraceFileAndLineInfo::ctor_CTraceFileAndLineInfo(char* pszFileName, int nLineNo)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTraceFileAndLineInfo*, char*, int);
        (org_ptr(0x140024ff0L))(this, pszFileName, nLineNo);
    };
END_ATF_NAMESPACE
