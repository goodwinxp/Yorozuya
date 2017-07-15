#include <CNationSettingFactoryBR.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryBR::CNationSettingFactoryBR()
        : CNationSettingFactory(76)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryBR*);
        (org_ptr(0x140219700L))(this);
    };
    void CNationSettingFactoryBR::ctor_CNationSettingFactoryBR()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryBR*);
        (org_ptr(0x140219700L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryBR::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryBR*, int, char*, bool);
        return (org_ptr(0x14022f4f0L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
