#include <_WEAPON_PARAM.hpp>


START_ATF_NAMESPACE
    void _WEAPON_PARAM::FixUnit(struct _UNIT_DB_BASE::_LIST* pUnit)
    {
        using org_ptr = void (WINAPIV*)(struct _WEAPON_PARAM*, struct _UNIT_DB_BASE::_LIST*);
        (org_ptr(0x14007d2a0L))(this, pUnit);
    };
    void _WEAPON_PARAM::FixWeapon(struct _STORAGE_LIST::_db_con* pWeapon)
    {
        using org_ptr = void (WINAPIV*)(struct _WEAPON_PARAM*, struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x14007ba30L))(this, pWeapon);
    };
    unsigned int _WEAPON_PARAM::GetAttackDelay(int nLv, int nAddDelay)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct _WEAPON_PARAM*, int, int);
        return (org_ptr(0x14008e730L))(this, nLv, nAddDelay);
    };
    int _WEAPON_PARAM::GetAttackToolType()
    {
        using org_ptr = int (WINAPIV*)(struct _WEAPON_PARAM*);
        return (org_ptr(0x1400349b0L))(this);
    };
    int _WEAPON_PARAM::GetWeaponTolType(struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = int (WINAPIV*)(struct _WEAPON_PARAM*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x14007bd10L))(this, pItem);
    };
    void _WEAPON_PARAM::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _WEAPON_PARAM*);
        (org_ptr(0x140077fb0L))(this);
    };
    void _WEAPON_PARAM::SetStaticMember(struct CRecordData* pWeaponData)
    {
        using org_ptr = void (WINAPIV*)(struct CRecordData*);
        (org_ptr(0x140204db0L))(pWeaponData);
    };
END_ATF_NAMESPACE
