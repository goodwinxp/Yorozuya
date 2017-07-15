#include <CNationSettingFactoryPH.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryPH::CNationSettingFactoryPH()
        : CNationSettingFactory(608)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryPH*);
        (org_ptr(0x140219640L))(this);
    };
    void CNationSettingFactoryPH::ctor_CNationSettingFactoryPH()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryPH*);
        (org_ptr(0x140219640L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryPH::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryPH*, int, char*, bool);
        return (org_ptr(0x14022d890L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
