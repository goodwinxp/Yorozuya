#include <Sky.hpp>


START_ATF_NAMESPACE
    int32_t Sky::CreateVertexBuffer()
    {
        using org_ptr = int32_t (WINAPIV*)(struct Sky*);
        return (org_ptr(0x140522db0L))(this);
    };
    int32_t Sky::FillupVertexBuffer()
    {
        using org_ptr = int32_t (WINAPIV*)(struct Sky*);
        return (org_ptr(0x140522a00L))(this);
    };
    void Sky::InvalidateSky()
    {
        using org_ptr = void (WINAPIV*)(struct Sky*);
        (org_ptr(0x1405229b0L))(this);
    };
    int32_t Sky::Render()
    {
        using org_ptr = int32_t (WINAPIV*)(struct Sky*);
        return (org_ptr(0x140522e90L))(this);
    };
    void Sky::RestoreSky()
    {
        using org_ptr = void (WINAPIV*)(struct Sky*);
        (org_ptr(0x140522f80L))(this);
    };
    Sky::Sky()
    {
        using org_ptr = int64_t (WINAPIV*)(struct Sky*);
        (org_ptr(0x140522970L))(this);
    };
    int64_t Sky::ctor_Sky()
    {
        using org_ptr = int64_t (WINAPIV*)(struct Sky*);
        return (org_ptr(0x140522970L))(this);
    };
    Sky::~Sky()
    {
        using org_ptr = int64_t (WINAPIV*)(struct Sky*);
        (org_ptr(0x1405229a0L))(this);
    };
    int64_t Sky::dtor_Sky()
    {
        using org_ptr = int64_t (WINAPIV*)(struct Sky*);
        return (org_ptr(0x1405229a0L))(this);
    };
END_ATF_NAMESPACE
