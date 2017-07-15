#include <CTextureRender.hpp>


START_ATF_NAMESPACE
    int64_t CTextureRender::BeginScene(uint32_t arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CTextureRender*, uint32_t);
        return (org_ptr(0x140529f10L))(this, arg_0);
    };
    void CTextureRender::ClearFrameBuffer(uint32_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CTextureRender*, uint32_t);
        (org_ptr(0x140529e50L))(this, arg_0);
    };
    int64_t CTextureRender::CreateTexture(struct IDirect3DDevice8* arg_0, uint32_t arg_1, uint32_t arg_2, int arg_3)
    {
        using org_ptr = int64_t (WINAPIV*)(struct CTextureRender*, struct IDirect3DDevice8*, uint32_t, uint32_t, int);
        return (org_ptr(0x140529c50L))(this, arg_0, arg_1, arg_2, arg_3);
    };
    void CTextureRender::EndScene()
    {
        using org_ptr = void (WINAPIV*)(struct CTextureRender*);
        (org_ptr(0x140529eb0L))(this);
    };
    struct IDirect3DTexture8* CTextureRender::GetD3DTexture()
    {
        using org_ptr = struct IDirect3DTexture8* (WINAPIV*)(struct CTextureRender*);
        return (org_ptr(0x1404ede30L))(this);
    };
    uint32_t CTextureRender::GetXSize()
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CTextureRender*);
        return (org_ptr(0x140513ec0L))(this);
    };
    uint32_t CTextureRender::GetYSize()
    {
        using org_ptr = uint32_t (WINAPIV*)(struct CTextureRender*);
        return (org_ptr(0x140513ed0L))(this);
    };
    int64_t CTextureRender::IsLoaded()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CTextureRender*);
        return (org_ptr(0x140513eb0L))(this);
    };
    void CTextureRender::ReleaseTexture()
    {
        using org_ptr = void (WINAPIV*)(struct CTextureRender*);
        (org_ptr(0x140529ba0L))(this);
    };
    void CTextureRender::SetClearAtOnce(int arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CTextureRender*, int);
        (org_ptr(0x140513ee0L))(this, arg_0);
    };
    CTextureRender::~CTextureRender()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CTextureRender*);
        (org_ptr(0x140529b90L))(this);
    };
    int64_t CTextureRender::dtor_CTextureRender()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CTextureRender*);
        return (org_ptr(0x140529b90L))(this);
    };
END_ATF_NAMESPACE
