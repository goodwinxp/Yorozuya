#include <CD3DCamera.hpp>


START_ATF_NAMESPACE
    CD3DCamera::CD3DCamera()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CD3DCamera*);
        (org_ptr(0x14052c940L))(this);
    };
    int64_t CD3DCamera::ctor_CD3DCamera()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CD3DCamera*);
        return (org_ptr(0x14052c940L))(this);
    };
    void CD3DCamera::SetProjParams(float arg_0, float arg_1, float arg_2, float arg_3)
    {
        using org_ptr = void (WINAPIV*)(struct CD3DCamera*, float, float, float, float);
        (org_ptr(0x14052c8f0L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    void CD3DCamera::SetViewParams(struct D3DXVECTOR3* arg_0, struct D3DXVECTOR3* arg_1, struct D3DXVECTOR3* arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CD3DCamera*, struct D3DXVECTOR3*, struct D3DXVECTOR3*, struct D3DXVECTOR3*);
        (org_ptr(0x14052c7a0L))(this, arg_0, arg_1, arg_2);
    };
END_ATF_NAMESPACE
