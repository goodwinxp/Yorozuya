#include <CAlpha.hpp>


START_ATF_NAMESPACE
    void CAlpha::CheckAlphaAlloc()
    {
        using org_ptr = void (WINAPIV*)(struct CAlpha*);
        (org_ptr(0x14051ccf0L))(this);
    };
    uint32_t* CAlpha::GetAlphaFace()
    {
        using org_ptr = uint32_t* (WINAPIV*)(struct CAlpha*);
        return (org_ptr(0x14051cdd0L))(this);
    };
    uint32_t CAlpha::GetAlphaFaceCnt()
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CAlpha*);
        return (org_ptr(0x14051cdc0L))(this);
    };
    void CAlpha::InitAlpha(void* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CAlpha*, void*);
        (org_ptr(0x14051ccd0L))(this, arg_0);
    };
    void CAlpha::LoopInitAlphaStack()
    {
        using org_ptr = void (WINAPIV*)(struct CAlpha*);
        (org_ptr(0x14051cce0L))(this);
    };
    void CAlpha::SetAlphaEntityStack(uint16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CAlpha*, uint16_t);
        (org_ptr(0x14051cf90L))(this, arg_0);
    };
    void CAlpha::SetAlphaStack(uint16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CAlpha*, uint16_t);
        (org_ptr(0x14051cda0L))(this, arg_0);
    };
    void CAlpha::SetCoronaStack(uint16_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CAlpha*, uint16_t);
        (org_ptr(0x14051cf70L))(this, arg_0);
    };
    uint32_t* CAlpha::SortAlphaStack(float* arg_0)
    {
        using org_ptr = uint32_t* (WINAPIV*)(struct CAlpha*, float*);
        return (org_ptr(0x14051cde0L))(this, arg_0);
    };
    CAlpha::~CAlpha()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CAlpha*);
        (org_ptr(0x14051cc90L))(this);
    };
    int64_t CAlpha::dtor_CAlpha()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CAlpha*);
        return (org_ptr(0x14051cc90L))(this);
    };
END_ATF_NAMESPACE
