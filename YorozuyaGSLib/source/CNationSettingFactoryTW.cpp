#include <CNationSettingFactoryTW.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryTW::CNationSettingFactoryTW()
        : CNationSettingFactory(158)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryTW*);
        (org_ptr(0x140219760L))(this);
    };
    void CNationSettingFactoryTW::ctor_CNationSettingFactoryTW()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryTW*);
        (org_ptr(0x140219760L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryTW::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryTW*, int, char*, bool);
        return (org_ptr(0x14022f700L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
