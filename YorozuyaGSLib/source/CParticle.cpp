#include <CParticle.hpp>


START_ATF_NAMESPACE
    void CParticle::CheckCollision(int arg_0, float arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, int, float);
        (org_ptr(0x140518ef0L))(this, arg_0, arg_1);
    };
    void CParticle::CopyParticleToSaveParticle(struct _SAVE_PARTICLE* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, struct _SAVE_PARTICLE*);
        (org_ptr(0x140517070L))(this, arg_0);
    };
    void CParticle::CopySaveParticleToParticle(struct _SAVE_PARTICLE* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, struct _SAVE_PARTICLE*);
        (org_ptr(0x140517140L))(this, arg_0);
    };
    void CParticle::GetBBox(float* arg_0, float* arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, float*, float*);
        (org_ptr(0x14051a760L))(this, arg_0, arg_1);
    };
    void CParticle::GetFlickerARGB(int arg_0, uint32_t* arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, int, uint32_t*);
        (org_ptr(0x140518580L))(this, arg_0, arg_1);
    };
    void CParticle::GetPartcleStep(int arg_0, float arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, int, float);
        (org_ptr(0x140519560L))(this, arg_0, arg_1);
    };
    uint32_t CParticle::GetParticleState()
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CParticle*);
        return (org_ptr(0x1405173a0L))(this);
    };
    void CParticle::InitElement(int arg_0, float arg_1)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, int, float);
        (org_ptr(0x140519af0L))(this, arg_0, arg_1);
    };
    void CParticle::InitParticle()
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*);
        (org_ptr(0x14051ad20L))(this);
    };
    int64_t CParticle::LoadParticleSPT(char* arg_0, uint32_t arg_1)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CParticle*, char*, uint32_t);
        return (org_ptr(0x140517750L))(this, arg_0, arg_1);
    };
    int32_t CParticle::Loop()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CParticle*);
        return (org_ptr(0x14051a710L))(this);
    };
    void CParticle::ReInitParticle(int arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, int);
        (org_ptr(0x14051ae00L))(this, arg_0);
    };
    int32_t CParticle::RealLoop()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CParticle*);
        return (org_ptr(0x14051a3c0L))(this);
    };
    void CParticle::ReleaseEntity()
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*);
        (org_ptr(0x140518e90L))(this);
    };
    void CParticle::ReleaseParticle()
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*);
        (org_ptr(0x140517260L))(this);
    };
    void CParticle::ResetOnePerTime()
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*);
        (org_ptr(0x140517230L))(this);
    };
    void CParticle::SetCreatePos(float* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, float*);
        (org_ptr(0x1404ede00L))(this, arg_0);
    };
    void CParticle::SetParticleState(uint32_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, uint32_t);
        (org_ptr(0x14051aeb0L))(this, arg_0);
    };
    void CParticle::SetPreCalcParticle(uint32_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*, uint32_t);
        (org_ptr(0x1405171e0L))(this, arg_0);
    };
    void CParticle::SetStartBoxArea()
    {
        using org_ptr = void (WINAPIV*)(struct CParticle*);
        (org_ptr(0x140518600L))(this);
    };
    int32_t CParticle::SpecialLoop()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CParticle*);
        return (org_ptr(0x14052ac70L))(this);
    };
    int32_t CParticle::SpecialLoop2()
    {
        using org_ptr = int32_t (WINAPIV*)(struct CParticle*);
        return (org_ptr(0x14052a1a0L))(this);
    };
    CParticle::~CParticle()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CParticle*);
        (org_ptr(0x140516fe0L))(this);
    };
    int64_t CParticle::dtor_CParticle()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CParticle*);
        return (org_ptr(0x140516fe0L))(this);
    };
END_ATF_NAMESPACE
