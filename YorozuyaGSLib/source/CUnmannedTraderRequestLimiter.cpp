#include <CUnmannedTraderRequestLimiter.hpp>


START_ATF_NAMESPACE
    CUnmannedTraderRequestLimiter::CUnmannedTraderRequestLimiter()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRequestLimiter*);
        (org_ptr(0x14035f1f0L))(this);
    };
    void CUnmannedTraderRequestLimiter::ctor_CUnmannedTraderRequestLimiter()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRequestLimiter*);
        (org_ptr(0x14035f1f0L))(this);
    };
    void CUnmannedTraderRequestLimiter::ClearRequset()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRequestLimiter*);
        (org_ptr(0x14035f6a0L))(this);
    };
    bool CUnmannedTraderRequestLimiter::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct CUnmannedTraderRequestLimiter*);
        return (org_ptr(0x140360550L))(this);
    };
    void CUnmannedTraderRequestLimiter::SetRequest(int iRequest)
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRequestLimiter*, int);
        (org_ptr(0x14035f6c0L))(this, iRequest);
    };
    CUnmannedTraderRequestLimiter::~CUnmannedTraderRequestLimiter()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRequestLimiter*);
        (org_ptr(0x14035f210L))(this);
    };
    void CUnmannedTraderRequestLimiter::dtor_CUnmannedTraderRequestLimiter()
    {
        using org_ptr = void (WINAPIV*)(struct CUnmannedTraderRequestLimiter*);
        (org_ptr(0x14035f210L))(this);
    };
    
END_ATF_NAMESPACE
