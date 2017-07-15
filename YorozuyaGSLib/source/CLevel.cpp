#include <CLevel.hpp>


START_ATF_NAMESPACE
    void CLevel::CalcR3Fog()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e26f0L))(this);
    };
    void CLevel::DrawBBox(float* arg_0, float* arg_1, uint32_t arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, float*, float*, uint32_t);
        (org_ptr(0x1404e2250L))(this, arg_0, arg_1, arg_2);
    };
    void CLevel::DrawBBox(int16_t* arg_0, int16_t* arg_1, uint32_t arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, int16_t*, int16_t*, uint32_t);
        (org_ptr(0x1404e2670L))(this, arg_0, arg_1, arg_2);
    };
    void CLevel::DrawLeafBBox()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e0b50L))(this);
    };
    void CLevel::DrawMapAlphaRender(float* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, float*);
        (org_ptr(0x1404e08b0L))(this, arg_0);
    };
    void CLevel::DrawMapEntitiesRender()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e07d0L))(this);
    };
    void CLevel::DrawMapRender()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e0850L))(this);
    };
    void CLevel::DrawMatBBox()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e0b60L))(this);
    };
    void CLevel::DrawShadowRender(float* arg_0, float* arg_1, float* arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, float*, float*, float*);
        (org_ptr(0x1404e0820L))(this, arg_0, arg_1, arg_2);
    };
    void CLevel::DrawSkyBoxRender()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e0700L))(this);
    };
    void CLevel::DrawTestBox(float* arg_0, float* arg_1, uint32_t arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, float*, float*, uint32_t);
        (org_ptr(0x1404e09b0L))(this, arg_0, arg_1, arg_2);
    };
    void CLevel::FrameMove()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e2e60L))(this);
    };
    unsigned int CLevel::GetEnvironment()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CLevel*);
        return (org_ptr(0x140074ea0L))(this);
    };
    float CLevel::GetFirstYpos(float* arg_0, float* arg_1, float* arg_2)
    {
        using org_ptr = float (WINAPIV*)(struct CLevel*, float*, float*, float*);
        return (org_ptr(0x1404e0b10L))(this, arg_0, arg_1, arg_2);
    };
    float CLevel::GetFirstYpos(float* arg_0, int arg_1)
    {
        using org_ptr = float (WINAPIV*)(struct CLevel*, float*, int);
        return (org_ptr(0x1404e0af0L))(this, arg_0, arg_1);
    };
    float CLevel::GetFirstYpos(float* arg_0, int16_t* arg_1, int16_t* arg_2)
    {
        using org_ptr = float (WINAPIV*)(struct CLevel*, float*, int16_t*, int16_t*);
        return (org_ptr(0x1404e0b30L))(this, arg_0, arg_1, arg_2);
    };
    void CLevel::GetFrustumNormalPlane(float** arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, float**);
        (org_ptr(0x1404e26d0L))(this, arg_0);
    };
    char* CLevel::GetMapName()
    {
        using org_ptr = char* (WINAPIV*)(struct CLevel*);
        return (org_ptr(0x1404e26c0L))(this);
    };
    int CLevel::GetNextYpos(float* arg_0, float* arg_1)
    {
        using org_ptr = int (WINAPIV*)(struct CLevel*, float*, float*);
        return (org_ptr(0x1404e0b70L))(this, arg_0, arg_1);
    };
    int64_t CLevel::GetNextYposFar(float* arg_0, float* arg_1, float* arg_2)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CLevel*, float*, float*, float*);
        return (org_ptr(0x1404e1100L))(this, arg_0, arg_1, arg_2);
    };
    int64_t CLevel::GetNextYposFarProgress(float* arg_0, float* arg_1, float* arg_2)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CLevel*, float*, float*, float*);
        return (org_ptr(0x1404e15b0L))(this, arg_0, arg_1, arg_2);
    };
    int CLevel::GetNextYposForServer(float* arg_0, float* arg_1)
    {
        using org_ptr = int (WINAPIV*)(struct CLevel*, float*, float*);
        return (org_ptr(0x1404e0f50L))(this, arg_0, arg_1);
    };
    int64_t CLevel::GetNextYposForServerFar(float* arg_0, float* arg_1, float* arg_2)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CLevel*, float*, float*, float*);
        return (org_ptr(0x1404e1b00L))(this, arg_0, arg_1, arg_2);
    };
    int CLevel::GetNextYposNoAttr(float* arg_0, float* arg_1)
    {
        using org_ptr = int (WINAPIV*)(struct CLevel*, float*, float*);
        return (org_ptr(0x1404e0d60L))(this, arg_0, arg_1);
    };
    uint32_t CLevel::GetPath(float* arg_0, float* arg_1, float** arg_2, uint32_t* arg_3, int arg_4)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CLevel*, float*, float*, float**, uint32_t*, int);
        return (org_ptr(0x1404e2110L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    uint32_t CLevel::GetPathFromDepth(float* arg_0, float* arg_1, int arg_2, float** arg_3, uint32_t* arg_4)
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CLevel*, float*, float*, int, float**, uint32_t*);
        return (org_ptr(0x1404e21b0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    int64_t CLevel::GetPointFromScreenRay(int32_t arg_0, int32_t arg_1, float** arg_2)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CLevel*, int32_t, int32_t, float**);
        return (org_ptr(0x1404e0a70L))(this, arg_0, arg_1, arg_2);
    };
    int64_t CLevel::GetPointFromScreenRayFar(int32_t arg_0, int32_t arg_1, float** arg_2)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CLevel*, int32_t, int32_t, float**);
        return (org_ptr(0x1404e0ab0L))(this, arg_0, arg_1, arg_2);
    };
    void CLevel::HearMapSound()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e26e0L))(this);
    };
    int CLevel::IsCollisionRayAABB(int32_t arg_0, int32_t arg_1, float* arg_2, float* arg_3, float** arg_4)
    {
        using org_ptr = int (WINAPIV*)(struct CLevel*, int32_t, int32_t, float*, float*, float**);
        return (org_ptr(0x1404e1f60L))(this, arg_0, arg_1, arg_2, arg_3, arg_4);
    };
    int CLevel::IsLoadedBsp()
    {
        using org_ptr = int (WINAPIV*)(struct CLevel*);
        return (org_ptr(0x140189120L))(this);
    };
    void CLevel::LoadLevel(char* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, char*);
        (org_ptr(0x1404dfd00L))(this, arg_0);
    };
    void CLevel::PrepareShadowRender(float* arg_0, void* arg_1, float arg_2, uint32_t arg_3, float arg_4, float arg_5)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, float*, void*, float, uint32_t, float, float);
        (org_ptr(0x1404e07e0L))(this, arg_0, arg_1, arg_2, arg_3, arg_4, arg_5);
    };
    void CLevel::ReLoadAllMaterial()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e0580L))(this);
    };
    void CLevel::ReleaseLevel()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404dfc40L))(this);
    };
    void CLevel::ScreenShot()
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e0910L))(this);
    };
    void CLevel::SetCameraPos(float* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, float*);
        (org_ptr(0x1404e0830L))(this, arg_0);
    };
    void CLevel::SetEnvironment(uint32_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, uint32_t);
        (org_ptr(0x1404dfce0L))(this, arg_0);
    };
    void CLevel::SetViewMatrix(struct D3DXMATRIX* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CLevel*, struct D3DXMATRIX*);
        (org_ptr(0x1404e0610L))(this, arg_0);
    };
    CLevel::~CLevel()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CLevel*);
        (org_ptr(0x1404e2d90L))(this);
    };
    int64_t CLevel::dtor_CLevel()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CLevel*);
        return (org_ptr(0x1404e2d90L))(this);
    };
END_ATF_NAMESPACE
