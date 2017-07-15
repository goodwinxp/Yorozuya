#include <CExtDummy.hpp>


START_ATF_NAMESPACE
    void CExtDummy::DrawAllDummyBBox()
    {
        using org_ptr = void (WINAPIV*)(struct CExtDummy*);
        (org_ptr(0x1404dfb10L))(this);
    };
    void CExtDummy::DrawDummyBBox(uint32_t arg_0)
    {
        using org_ptr = void (WINAPIV*)(struct CExtDummy*, uint32_t);
        (org_ptr(0x1404df820L))(this, arg_0);
    };
    struct _EXT_DUMMY* CExtDummy::GetDummy(uint32_t arg_0)
    {
        using org_ptr = struct _EXT_DUMMY* (WINAPIV*)(struct CExtDummy*, uint32_t);
        return (org_ptr(0x1404df080L))(this, arg_0);
    };
    void CExtDummy::GetDummyList(uint32_t arg_0, uint32_t* arg_1, uint32_t* arg_2)
    {
        using org_ptr = void (WINAPIV*)(struct CExtDummy*, uint32_t, uint32_t*, uint32_t*);
        (org_ptr(0x1404df1d0L))(this, arg_0, arg_1, arg_2);
    };
    int CExtDummy::GetLocalFromWorld(float** arg_0, uint32_t arg_1, float* arg_2)
    {
        using org_ptr = int (WINAPIV*)(struct CExtDummy*, float**, uint32_t, float*);
        return (org_ptr(0x1404df180L))(this, arg_0, arg_1, arg_2);
    };
    unsigned int CExtDummy::GetTotalNum()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CExtDummy*);
        return (org_ptr(0x140189e40L))(this);
    };
    int CExtDummy::GetWorldFromLocal(float** arg_0, uint32_t arg_1, float* arg_2)
    {
        using org_ptr = int (WINAPIV*)(struct CExtDummy*, float**, uint32_t, float*);
        return (org_ptr(0x1404df130L))(this, arg_0, arg_1, arg_2);
    };
    int CExtDummy::IsInBBox(uint32_t arg_0, float* arg_1)
    {
        using org_ptr = int (WINAPIV*)(struct CExtDummy*, uint32_t, float*);
        return (org_ptr(0x1404df0b0L))(this, arg_0, arg_1);
    };
    int CExtDummy::LoadExtDummy(char* arg_0)
    {
        using org_ptr = int (WINAPIV*)(struct CExtDummy*, char*);
        return (org_ptr(0x1404df220L))(this, arg_0);
    };
    void CExtDummy::ReleaseExtDummy()
    {
        using org_ptr = void (WINAPIV*)(struct CExtDummy*);
        (org_ptr(0x1404df7f0L))(this);
    };
    CExtDummy::~CExtDummy()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CExtDummy*);
        (org_ptr(0x1404df070L))(this);
    };
    int64_t CExtDummy::dtor_CExtDummy()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CExtDummy*);
        return (org_ptr(0x1404df070L))(this);
    };
END_ATF_NAMESPACE
