#include <R3Camera.hpp>


START_ATF_NAMESPACE
    float R3Camera::GetDist()
    {
        using org_ptr = float (WINAPIV*)(struct R3Camera*);
        return (org_ptr(0x1405134f0L))(this);
    };
    float R3Camera::GetPh()
    {
        using org_ptr = float (WINAPIV*)(struct R3Camera*);
        return (org_ptr(0x1405134e0L))(this);
    };
    void R3Camera::GetPoint(float* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float*);
        (org_ptr(0x140513500L))(this, arg_0);
    };
    void R3Camera::GetPos(float* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float*);
        (org_ptr(0x140513520L))(this, arg_0);
    };
    void R3Camera::GetSmoothTarPoint(float* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float*);
        (org_ptr(0x1405135c0L))(this, arg_0);
    };
    float R3Camera::GetTh()
    {
        using org_ptr = float (WINAPIV*)(struct R3Camera*);
        return (org_ptr(0x1405134d0L))(this);
    };
    struct D3DXMATRIX* R3Camera::GetViewMatrix()
    {
        using org_ptr = struct D3DXMATRIX* (WINAPIV*)(struct R3Camera*);
        return (org_ptr(0x140513540L))(this);
    };
    void R3Camera::MakeCameraAndViewMatrix()
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*);
        (org_ptr(0x140513a60L))(this);
    };
    void R3Camera::MakeViewMatrix(struct D3DXMATRIX* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, struct D3DXMATRIX*);
        (org_ptr(0x1405136f0L))(this, arg_0);
    };
    void R3Camera::SetBspPtr(void* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, void*);
        (org_ptr(0x1405136e0L))(this, arg_0);
    };
    void R3Camera::SetDist(float arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float);
        (org_ptr(0x140513590L))(this, arg_0);
    };
    void R3Camera::SetMatrix(struct Matrix4* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, struct Matrix4*);
        (org_ptr(0x140513ae0L))(this, arg_0);
    };
    void R3Camera::SetPoint(float arg_0, float arg_1, float arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float, float, float);
        (org_ptr(0x140513550L))(this, arg_0, arg_1, arg_2);
    };
    void R3Camera::SetPos(float arg_0, float arg_1, float arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float, float, float);
        (org_ptr(0x140513570L))(this, arg_0, arg_1, arg_2);
    };
    void R3Camera::SetSmoothDistLoop(float arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float);
        (org_ptr(0x140513b30L))(this, arg_0);
    };
    void R3Camera::SetSmoothPointLoop(float arg_0, float arg_1, float arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float, float, float);
        (org_ptr(0x1405135e0L))(this, arg_0, arg_1, arg_2);
    };
    void R3Camera::SetSmoothTarPoint(float arg_0, float arg_1, float arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float, float, float);
        (org_ptr(0x1405135a0L))(this, arg_0, arg_1, arg_2);
    };
    void R3Camera::SetSmoothThPhLoop(float arg_0, float arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float, float);
        (org_ptr(0x140513630L))(this, arg_0, arg_1);
    };
    void R3Camera::SetSmoothValue(float arg_0, float arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float, float);
        (org_ptr(0x1405136c0L))(this, arg_0, arg_1);
    };
    void R3Camera::SetThPh(float arg_0, float arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*, float, float);
        (org_ptr(0x140513580L))(this, arg_0, arg_1);
    };
    void R3Camera::SetViewMatrix()
    {
        using org_ptr = void (WINAPIV*)(struct R3Camera*);
        (org_ptr(0x140513b00L))(this);
    };
    R3Camera::~R3Camera()
    {
        using org_ptr = int64_t (WINAPIV*)(struct R3Camera*);
        (org_ptr(0x1405134c0L))(this);
    };
    int64_t R3Camera::dtor_R3Camera()
    {
        using org_ptr = int64_t (WINAPIV*)(struct R3Camera*);
        return (org_ptr(0x1405134c0L))(this);
    };
END_ATF_NAMESPACE
