#include <CNationSettingFactoryKR.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryKR::CNationSettingFactoryKR()
        : CNationSettingFactory(410)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryKR*);
        (org_ptr(0x140219480L))(this);
    };
    void CNationSettingFactoryKR::ctor_CNationSettingFactoryKR()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryKR*);
        (org_ptr(0x140219480L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryKR::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryKR*, int, char*, bool);
        return (org_ptr(0x14022ae30L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
