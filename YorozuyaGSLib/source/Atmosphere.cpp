#include <Atmosphere.hpp>


START_ATF_NAMESPACE
    void Atmosphere::CalculateScatteringConstants()
    {
        using org_ptr = void (WINAPIV*)(struct Atmosphere*);
        (org_ptr(0x140522fd0L))(this);
    };
    void Atmosphere::Dump2(struct _iobuf* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct Atmosphere*, struct _iobuf*);
        (org_ptr(0x1405231e0L))(this, arg_0);
    };
    struct D3DXVECTOR3* Atmosphere::GetBetaDashMie(short retstr)
    {
        using org_ptr = struct D3DXVECTOR3* (WINAPIV*)(struct Atmosphere*, short);
        return (org_ptr(0x140504e40L))(this, retstr);
    };
    struct D3DXVECTOR3* Atmosphere::GetBetaDashRayleigh(short retstr)
    {
        using org_ptr = struct D3DXVECTOR3* (WINAPIV*)(struct Atmosphere*, short);
        return (org_ptr(0x140504e00L))(this, retstr);
    };
    struct D3DXVECTOR3* Atmosphere::GetBetaMie(short retstr)
    {
        using org_ptr = struct D3DXVECTOR3* (WINAPIV*)(struct Atmosphere*, short);
        return (org_ptr(0x140504e20L))(this, retstr);
    };
    struct D3DXVECTOR3* Atmosphere::GetBetaRayleigh(short retstr)
    {
        using org_ptr = struct D3DXVECTOR3* (WINAPIV*)(struct Atmosphere*, short);
        return (org_ptr(0x140504de0L))(this, retstr);
    };
    void Atmosphere::Interpolate(struct Atmosphere* arg_0, struct Atmosphere* arg_1, float arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct Atmosphere*, struct Atmosphere*, struct Atmosphere*, float);
        (org_ptr(0x140523160L))(this, arg_0, arg_1, arg_2);
    };
    void Atmosphere::Read2(struct _iobuf* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct Atmosphere*, struct _iobuf*);
        (org_ptr(0x140523280L))(this, arg_0);
    };
    Atmosphere::~Atmosphere()
    {
        using org_ptr = int64_t (WINAPIV*)(struct Atmosphere*);
        (org_ptr(0x140504dd0L))(this);
    };
    int64_t Atmosphere::dtor_Atmosphere()
    {
        using org_ptr = int64_t (WINAPIV*)(struct Atmosphere*);
        return (org_ptr(0x140504dd0L))(this);
    };
END_ATF_NAMESPACE
