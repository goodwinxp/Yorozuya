#include <CNationSettingFactoryID.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryID::CNationSettingFactoryID()
        : CNationSettingFactory(360)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryID*);
        (org_ptr(0x140219580L))(this);
    };
    void CNationSettingFactoryID::ctor_CNationSettingFactoryID()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryID*);
        (org_ptr(0x140219580L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryID::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryID*, int, char*, bool);
        return (org_ptr(0x14022c590L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
