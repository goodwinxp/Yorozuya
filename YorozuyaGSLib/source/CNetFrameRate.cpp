#include <CNetFrameRate.hpp>


START_ATF_NAMESPACE
    CNetFrameRate::CNetFrameRate()
    {
        using org_ptr = void (WINAPIV*)(struct CNetFrameRate*);
        (org_ptr(0x14047c990L))(this);
    };
    void CNetFrameRate::ctor_CNetFrameRate()
    {
        using org_ptr = void (WINAPIV*)(struct CNetFrameRate*);
        (org_ptr(0x14047c990L))(this);
    };
    void CNetFrameRate::CalcFrameRate()
    {
        using org_ptr = void (WINAPIV*)(struct CNetFrameRate*);
        (org_ptr(0x14047d8c0L))(this);
    };
END_ATF_NAMESPACE
