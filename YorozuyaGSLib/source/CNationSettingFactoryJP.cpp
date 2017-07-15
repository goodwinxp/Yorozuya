#include <CNationSettingFactoryJP.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryJP::CNationSettingFactoryJP()
        : CNationSettingFactory(392)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryJP*);
        (org_ptr(0x1402195e0L))(this);
    };
    void CNationSettingFactoryJP::ctor_CNationSettingFactoryJP()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryJP*);
        (org_ptr(0x1402195e0L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryJP::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryJP*, int, char*, bool);
        return (org_ptr(0x14022cf00L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
