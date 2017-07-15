#include <CNationSettingFactoryRU.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryRU::CNationSettingFactoryRU()
        : CNationSettingFactory(643)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryRU*);
        (org_ptr(0x1402196a0L))(this);
    };
    void CNationSettingFactoryRU::ctor_CNationSettingFactoryRU()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryRU*);
        (org_ptr(0x1402196a0L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryRU::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryRU*, int, char*, bool);
        return (org_ptr(0x14022e390L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
