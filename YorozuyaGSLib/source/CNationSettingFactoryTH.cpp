#include <CNationSettingFactoryTH.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryTH::CNationSettingFactoryTH()
        : CNationSettingFactory(764)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryTH*);
        (org_ptr(0x1402198e0L))(this);
    };
    void CNationSettingFactoryTH::ctor_CNationSettingFactoryTH()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryTH*);
        (org_ptr(0x1402198e0L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryTH::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryTH*, int, char*, bool);
        return (org_ptr(0x140231e40L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
