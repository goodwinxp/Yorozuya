#include <CSUItemSystem.hpp>


START_ATF_NAMESPACE
    CSUItemSystem::CSUItemSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CSUItemSystem*);
        (org_ptr(0x1402e3d70L))(this);
    };
    void CSUItemSystem::ctor_CSUItemSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CSUItemSystem*);
        (org_ptr(0x1402e3d70L))(this);
    };
    void CSUItemSystem::Class_Init()
    {
        using org_ptr = void (WINAPIV*)(struct CSUItemSystem*);
        (org_ptr(0x1402e3f40L))(this);
    };
    struct CRecordData* CSUItemSystem::GetCRecordData_SetItem()
    {
        using org_ptr = struct CRecordData* (WINAPIV*)(struct CSUItemSystem*);
        return (org_ptr(0x1402e4680L))(this);
    };
    struct CSetItemType* CSUItemSystem::GetCSetItemType()
    {
        using org_ptr = struct CSetItemType* (WINAPIV*)(struct CSUItemSystem*);
        return (org_ptr(0x1402e46d0L))(this);
    };
    int CSUItemSystem::GetSetItemTableInfo(unsigned int dwSetItemEff, char* pStrCode, int nBufSize)
    {
        using org_ptr = int (WINAPIV*)(struct CSUItemSystem*, unsigned int, char*, int);
        return (org_ptr(0x1402e4280L))(this, dwSetItemEff, pStrCode, nBufSize);
    };
    struct CSUItemSystem* CSUItemSystem::Instance()
    {
        using org_ptr = struct CSUItemSystem* (WINAPIV*)();
        return (org_ptr(0x1402e3cb0L))();
    };
    bool CSUItemSystem::SUItemSystem_CheckData()
    {
        using org_ptr = bool (WINAPIV*)(struct CSUItemSystem*);
        return (org_ptr(0x1402e4100L))(this);
    };
    bool CSUItemSystem::SUItemSystem_Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CSUItemSystem*);
        return (org_ptr(0x1402e3f80L))(this);
    };
    bool CSUItemSystem::SUItemSystem_UnInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CSUItemSystem*);
        return (org_ptr(0x1402e40c0L))(this);
    };
    CSUItemSystem::~CSUItemSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CSUItemSystem*);
        (org_ptr(0x1402e3e60L))(this);
    };
    void CSUItemSystem::dtor_CSUItemSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CSUItemSystem*);
        (org_ptr(0x1402e3e60L))(this);
    };
END_ATF_NAMESPACE
