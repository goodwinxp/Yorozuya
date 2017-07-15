#include <D3DXVECTOR2.hpp>


START_ATF_NAMESPACE
    D3DXVECTOR2::D3DXVECTOR2()
    {
        using org_ptr = void (WINAPIV*)(struct D3DXVECTOR2*);
        (org_ptr(0x14012d1d0L))(this);
    };
    void D3DXVECTOR2::ctor_D3DXVECTOR2()
    {
        using org_ptr = void (WINAPIV*)(struct D3DXVECTOR2*);
        (org_ptr(0x14012d1d0L))(this);
    };
END_ATF_NAMESPACE
