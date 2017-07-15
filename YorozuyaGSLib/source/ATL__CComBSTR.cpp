#include <ATL__CComBSTR.hpp>


START_ATF_NAMESPACE
    ATL::CComBSTR::~CComBSTR()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CComBSTR*);
        (org_ptr(0x1404dc4e0L))(this);
    };
    void ATL::CComBSTR::dtor_CComBSTR()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CComBSTR*);
        (org_ptr(0x1404dc4e0L))(this);
    };
END_ATF_NAMESPACE
