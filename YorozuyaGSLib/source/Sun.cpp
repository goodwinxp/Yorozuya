#include <Sun.hpp>


START_ATF_NAMESPACE
    struct D3DXVECTOR4* Sun::ComputeAttenuation(short retstr, struct D3DXVECTOR4* arg_0, float arg_1)
    {
        using org_ptr = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short, struct D3DXVECTOR4*, float);
        return (org_ptr(0x140521fb0L))(this, retstr, arg_0, arg_1);
    };
    void Sun::Dump2(struct _iobuf* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct Sun*, struct _iobuf*);
        (org_ptr(0x1405227f0L))(this, arg_0);
    };
    void Sun::FrameMove()
    {
        using org_ptr = void (WINAPIV*)(struct Sun*);
        (org_ptr(0x140522210L))(this);
    };
    float Sun::GetAlpha()
    {
        using org_ptr = float (WINAPIV*)(struct Sun*);
        return (org_ptr(0x1404ede20L))(this);
    };
    struct D3DXVECTOR4* Sun::GetColor(short retstr)
    {
        using org_ptr = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short);
        return (org_ptr(0x140522180L))(this, retstr);
    };
    struct D3DXVECTOR4* Sun::GetColorAndIntensity(short retstr)
    {
        using org_ptr = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short);
        return (org_ptr(0x140522630L))(this, retstr);
    };
    struct D3DXVECTOR4* Sun::GetColorWithIntensity(short retstr)
    {
        using org_ptr = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short);
        return (org_ptr(0x140522660L))(this, retstr);
    };
    void Sun::GetDirection(float* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct Sun*, float*);
        (org_ptr(0x140504da0L))(this, arg_0);
    };
    struct D3DXVECTOR4* Sun::GetDirection(short retstr)
    {
        using org_ptr = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short);
        return (org_ptr(0x140521f90L))(this, retstr);
    };
    float Sun::GetIntensity()
    {
        using org_ptr = float (WINAPIV*)(struct Sun*);
        return (org_ptr(0x140522170L))(this);
    };
    float Sun::GetNightAlpha()
    {
        using org_ptr = float (WINAPIV*)(struct Sun*);
        return (org_ptr(0x1404f5940L))(this);
    };
    void Sun::Interpolate(struct Sun* arg_0, struct Sun* arg_1, float arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct Sun*, struct Sun*, struct Sun*, float);
        (org_ptr(0x1405226c0L))(this, arg_0, arg_1, arg_2);
    };
    void Sun::InvalidateSun()
    {
        using org_ptr = void (WINAPIV*)(struct Sun*);
        (org_ptr(0x1405221e0L))(this);
    };
    void Sun::Read2(struct _iobuf* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct Sun*, struct _iobuf*);
        (org_ptr(0x140522850L))(this, arg_0);
    };
    void Sun::Render()
    {
        using org_ptr = void (WINAPIV*)(struct Sun*);
        (org_ptr(0x1405222e0L))(this);
    };
    void Sun::RestoreSun()
    {
        using org_ptr = void (WINAPIV*)(struct Sun*);
        (org_ptr(0x1405221b0L))(this);
    };
    void Sun::SetAlpha(float arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct Sun*, float);
        (org_ptr(0x140504d90L))(this, arg_0);
    };
    void Sun::SetNightAlpha(float arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct Sun*, float);
        (org_ptr(0x140504dc0L))(this, arg_0);
    };
    void Sun::SetScale(float arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct Sun*, float);
        (org_ptr(0x140504d80L))(this, arg_0);
    };
    void Sun::SetSunThetaPhi(float arg_0, float arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct Sun*, float, float);
        (org_ptr(0x140504d60L))(this, arg_0, arg_1);
    };
    void Sun::SetTime(float arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct Sun*, float);
        (org_ptr(0x140504d70L))(this, arg_0);
    };
    Sun::~Sun()
    {
        using org_ptr = int64_t (WINAPIV*)(struct Sun*);
        (org_ptr(0x140504d50L))(this);
    };
    int64_t Sun::dtor_Sun()
    {
        using org_ptr = int64_t (WINAPIV*)(struct Sun*);
        return (org_ptr(0x140504d50L))(this);
    };
END_ATF_NAMESPACE
