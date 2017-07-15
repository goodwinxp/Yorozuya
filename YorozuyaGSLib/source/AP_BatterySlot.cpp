#include <AP_BatterySlot.hpp>


START_ATF_NAMESPACE
    AP_BatterySlot::AP_BatterySlot()
    {
        using org_ptr = void (WINAPIV*)(struct AP_BatterySlot*);
        (org_ptr(0x1402d9c10L))(this);
    };
    void AP_BatterySlot::ctor_AP_BatterySlot()
    {
        using org_ptr = void (WINAPIV*)(struct AP_BatterySlot*);
        (org_ptr(0x1402d9c10L))(this);
    };
    void AP_BatterySlot::clear()
    {
        using org_ptr = void (WINAPIV*)(struct AP_BatterySlot*);
        (org_ptr(0x1402d9f80L))(this);
    };
    bool AP_BatterySlot::extract(struct _STORAGE_LIST::_db_con* pout_item)
    {
        using org_ptr = bool (WINAPIV*)(struct AP_BatterySlot*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1402d9e20L))(this, pout_item);
    };
    struct _STORAGE_LIST::_db_con* AP_BatterySlot::get_battery()
    {
        using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct AP_BatterySlot*);
        return (org_ptr(0x1402dde60L))(this);
    };
    unsigned int AP_BatterySlot::get_dur()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct AP_BatterySlot*);
        return (org_ptr(0x1402d9f50L))(this);
    };
    int AP_BatterySlot::insert(struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = int (WINAPIV*)(struct AP_BatterySlot*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1402d9d70L))(this, pItem);
    };
    bool AP_BatterySlot::is_private_item(struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = bool (WINAPIV*)(struct AP_BatterySlot*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1402d9c70L))(this, pItem);
    };
    unsigned int AP_BatterySlot::sub_dur(unsigned int dwSub)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct AP_BatterySlot*, unsigned int);
        return (org_ptr(0x1402d9ea0L))(this, dwSub);
    };
    AP_BatterySlot::~AP_BatterySlot()
    {
        using org_ptr = void (WINAPIV*)(struct AP_BatterySlot*);
        (org_ptr(0x1402d9c60L))(this);
    };
    void AP_BatterySlot::dtor_AP_BatterySlot()
    {
        using org_ptr = void (WINAPIV*)(struct AP_BatterySlot*);
        (org_ptr(0x1402d9c60L))(this);
    };
END_ATF_NAMESPACE
