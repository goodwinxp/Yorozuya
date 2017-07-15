#include <ATL__CTrace.hpp>


START_ATF_NAMESPACE
    ATL::CTrace::CTrace(int (WINAPIV* pfnCrtDbgReport)(int, char*, int, char*, char*))
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTrace*, int (WINAPIV*)(int, char*, int, char*, char*));
        (org_ptr(0x14066ddd0L))(this, pfnCrtDbgReport);
    };
    void ATL::CTrace::ctor_CTrace(int (WINAPIV* pfnCrtDbgReport)(int, char*, int, char*, char*))
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTrace*, int (WINAPIV*)(int, char*, int, char*, char*));
        (org_ptr(0x14066ddd0L))(this, pfnCrtDbgReport);
    };
    bool ATL::CTrace::ChangeCategory(uint64_t dwCategory, unsigned int nLevel, ATLTRACESTATUS eStatus)
    {
        using org_ptr = bool (WINAPIV*)(struct ATL::CTrace*, uint64_t, unsigned int, ATLTRACESTATUS);
        return (org_ptr(0x14066da60L))(this, dwCategory, nLevel, eStatus);
    };
    uint64_t ATL::CTrace::RegisterCategory(char* pszCategory)
    {
        using org_ptr = uint64_t (WINAPIV*)(struct ATL::CTrace*, char*);
        return (org_ptr(0x14066dab0L))(this, pszCategory);
    };
    void ATL::CTrace::TraceV(char* pszFileName, int nLine, uint64_t dwCategory, unsigned int nLevel, char* pszFmt, char* args)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTrace*, char*, int, uint64_t, unsigned int, char*, char*);
        (org_ptr(0x140025100L))(this, pszFileName, nLine, dwCategory, nLevel, pszFmt, args);
    };
    ATL::CTrace::~CTrace()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTrace*);
        (org_ptr(0x14066dfa0L))(this);
    };
    void ATL::CTrace::dtor_CTrace()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CTrace*);
        (org_ptr(0x14066dfa0L))(this);
    };
END_ATF_NAMESPACE
