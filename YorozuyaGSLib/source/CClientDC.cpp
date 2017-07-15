#include <CClientDC.hpp>


START_ATF_NAMESPACE
    CClientDC::~CClientDC()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CClientDC*);
        (org_ptr(0x1404dc282L))(this);
    };
    int64_t CClientDC::dtor_CClientDC()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CClientDC*);
        return (org_ptr(0x1404dc282L))(this);
    };
END_ATF_NAMESPACE
