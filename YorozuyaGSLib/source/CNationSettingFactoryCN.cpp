#include <CNationSettingFactoryCN.hpp>


START_ATF_NAMESPACE
    CNationSettingFactoryCN::CNationSettingFactoryCN()
        : CNationSettingFactory(156)
    {
    
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryCN*);
        (org_ptr(0x1402197c0L))(this);
    };
    void CNationSettingFactoryCN::ctor_CNationSettingFactoryCN()
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactoryCN*);
        (org_ptr(0x1402197c0L))(this);
    };
    struct CNationSettingData* CNationSettingFactoryCN::Create(int iNationCode, char* szNationCodeStr, bool bServiceMode)
    {
        using org_ptr = struct CNationSettingData* (WINAPIV*)(struct CNationSettingFactoryCN*, int, char*, bool);
        return (org_ptr(0x140230e10L))(this, iNationCode, szNationCodeStr, bServiceMode);
    };
END_ATF_NAMESPACE
