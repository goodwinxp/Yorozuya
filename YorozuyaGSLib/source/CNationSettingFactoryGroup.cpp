#include <CNationSettingFactoryGroup.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryGroup::CNationSettingFactoryGroup()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryGroup*);
        (org_ptr(0x140229810L))(this);
    };
    void CNationSettingFactoryGroup::ctor_CNationSettingFactoryGroup()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryGroup*);
        (org_ptr(0x140229810L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryGroup::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryGroup*, int, char*, bool);
        return (org_ptr(0x140229750L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
    int CNationSettingFactoryGroup::Init()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingFactoryGroup*);
        return (org_ptr(0x1402178a0L))(this);
    };
    CNationSettingFactoryGroup::~CNationSettingFactoryGroup()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryGroup*);
        (org_ptr(0x140229860L))(this);
    };
    void CNationSettingFactoryGroup::dtor_CNationSettingFactoryGroup()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryGroup*);
        (org_ptr(0x140229860L))(this);
    };
END_ATF_NAMESPACE
