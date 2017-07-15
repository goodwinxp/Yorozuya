#include <CNationSettingFactoryUS.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryUS::CNationSettingFactoryUS()
        : CNationSettingFactory(840)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryUS*);
        (org_ptr(0x140219820L))(this);
    };
    void CNationSettingFactoryUS::ctor_CNationSettingFactoryUS()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryUS*);
        (org_ptr(0x140219820L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryUS::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryUS*, int, char*, bool);
        return (org_ptr(0x140231020L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
