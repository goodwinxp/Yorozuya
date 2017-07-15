#include <CNationSettingFactoryES.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryES::CNationSettingFactoryES()
        : CNationSettingFactory(724)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryES*);
        (org_ptr(0x140219880L))(this);
    };
    void CNationSettingFactoryES::ctor_CNationSettingFactoryES()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryES*);
        (org_ptr(0x140219880L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryES::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryES*, int, char*, bool);
        return (org_ptr(0x140231c30L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
