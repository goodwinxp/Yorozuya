#include <ATL__CAtlException.hpp>


START_ATF_NAMESPACE
    ATL::CAtlException::CAtlException(HRESULT hr)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CAtlException*, HRESULT);
        (org_ptr(0x14066dd10L))(this, hr);
    };
    void ATL::CAtlException::ctor_CAtlException(HRESULT hr)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CAtlException*, HRESULT);
        (org_ptr(0x14066dd10L))(this, hr);
    };
END_ATF_NAMESPACE
