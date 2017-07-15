#include <CNationSettingFactory.hpp>


START_ATF_NAMESPACE
    CNationSettingFactory::CNationSettingFactory(int iType)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactory*, int);
        (org_ptr(0x1402194e0L))(this, iType);
    };
    void CNationSettingFactory::ctor_CNationSettingFactory(int iType)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactory*, int);
        (org_ptr(0x1402194e0L))(this, iType);
    };
    int CNationSettingFactory::GetKey()
    {
        using org_ptr = int (WINAPIV*)(struct CNationSettingFactory*);
        return (org_ptr(0x14021af50L))(this);
    };
    bool CNationSettingFactory::IsExistCheat(char* szCheat, struct CNationSettingData* pkData)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingFactory*, char*, struct CNationSettingData*);
        return (org_ptr(0x140217450L))(this, szCheat, pkData);
    };
    bool CNationSettingFactory::IsNULL()
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingFactory*);
        return (org_ptr(0x14021af70L))(this);
    };
    bool CNationSettingFactory::RegistCheat(struct CNationSettingData* pkData, char* szCheat, bool (WINAPIV* pCheatCommandFn)(struct CPlayer*), int iUseDegree, int iMgrDegree)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingFactory*, struct CNationSettingData*, char*, bool (WINAPIV*)(struct CPlayer*), int, int);
        return (org_ptr(0x1402171c0L))(this, pkData, szCheat, pCheatCommandFn, iUseDegree, iMgrDegree);
    };
    void CNationSettingFactory::RegistCheatEndRecord(struct CNationSettingData* pkData)
    {
        using org_ptr = void (WINAPIV*)(struct CNationSettingFactory*, struct CNationSettingData*);
        (org_ptr(0x140217710L))(this, pkData);
    };
    bool CNationSettingFactory::RegistCheatTable(struct CNationSettingData* pkData)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingFactory*, struct CNationSettingData*);
        return (org_ptr(0x140213530L))(this, pkData);
    };
    bool CNationSettingFactory::RegistCheatTableOnlyInternal(struct CNationSettingData* pkData)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingFactory*, struct CNationSettingData*);
        return (org_ptr(0x1402168b0L))(this, pkData);
    };
    bool CNationSettingFactory::RegistCheatTableUnion(struct CNationSettingData* pkData)
    {
        using org_ptr = bool (WINAPIV*)(struct CNationSettingFactory*, struct CNationSettingData*);
        return (org_ptr(0x1402135b0L))(this, pkData);
    };
END_ATF_NAMESPACE
