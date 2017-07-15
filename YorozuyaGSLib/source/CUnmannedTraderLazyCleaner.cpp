#include <CUnmannedTraderLazyCleaner.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderLazyCleaner::CUnmannedTraderLazyCleaner()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderLazyCleaner*);
        (org_ptr(0x140392a50L))(this);
    };
    void CUnmannedTraderLazyCleaner::ctor_CUnmannedTraderLazyCleaner()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderLazyCleaner*);
        (org_ptr(0x140392a50L))(this);
    };
    void CUnmannedTraderLazyCleaner::CompleteUpdateClear(char* p)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderLazyCleaner*, char*);
        (org_ptr(0x140392cf0L))(this, p);
    };
    bool CUnmannedTraderLazyCleaner::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderLazyCleaner*);
        return (org_ptr(0x140392980L))(this);
    };
    void CUnmannedTraderLazyCleaner::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderLazyCleaner*);
        (org_ptr(0x140392b10L))(this);
    };
    char CUnmannedTraderLazyCleaner::ProcUpdate(char byState, struct _SYSTEMTIME* pCurTime, bool* pbRemain)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderLazyCleaner*, char, struct _SYSTEMTIME*, bool*);
        return (org_ptr(0x140392e00L))(this, byState, pCurTime, pbRemain);
    };
    char CUnmannedTraderLazyCleaner::UpdateClear(char* p)
    {
        using org_ptr = char (WINAPIV*)(struct CUnmannedTraderLazyCleaner*, char*);
        return (org_ptr(0x140392bd0L))(this, p);
    };
    CUnmannedTraderLazyCleaner::~CUnmannedTraderLazyCleaner()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderLazyCleaner*);
        (org_ptr(0x140392a90L))(this);
    };
    void CUnmannedTraderLazyCleaner::dtor_CUnmannedTraderLazyCleaner()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderLazyCleaner*);
        (org_ptr(0x140392a90L))(this);
    };
END_ATF_NAMESPACE
