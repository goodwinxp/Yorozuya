#include <CSkyBox.hpp>


START_ATF_NAMESPACE
    void CSkyBox::DrawSkyBox(void* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CSkyBox*, void*);
        (org_ptr(0x1404f5be0L))(this, arg_0);
    };
    int64_t CSkyBox::GetUsedVertexBufferSize()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CSkyBox*);
        return (org_ptr(0x1404f5a50L))(this);
    };
    void CSkyBox::LoadSkyBox(char* arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CSkyBox*, char*);
        (org_ptr(0x1404f5a60L))(this, arg_0);
    };
    void CSkyBox::ReleaseSkyBox()
    {
        using org_ptr = void (WINAPIV*)(struct CSkyBox*);
        (org_ptr(0x1404f5bc0L))(this);
    };
    CSkyBox::~CSkyBox()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CSkyBox*);
        (org_ptr(0x1404f5a40L))(this);
    };
    int64_t CSkyBox::dtor_CSkyBox()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CSkyBox*);
        return (org_ptr(0x1404f5a40L))(this);
    };
END_ATF_NAMESPACE
