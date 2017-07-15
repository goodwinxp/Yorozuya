#include <CNationSettingFactoryGB.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryGB::CNationSettingFactoryGB()
        : CNationSettingFactory(826)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryGB*);
        (org_ptr(0x140219520L))(this);
    };
    void CNationSettingFactoryGB::ctor_CNationSettingFactoryGB()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryGB*);
        (org_ptr(0x140219520L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryGB::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryGB*, int, char*, bool);
        return (org_ptr(0x14022bc60L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
