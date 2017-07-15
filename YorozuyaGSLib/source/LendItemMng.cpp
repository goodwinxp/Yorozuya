#include <LendItemMng.hpp>


START_ATF_NAMESPACE
    bool LendItemMng::DeleteLink(uint16_t wIdx, char byStorageCode, struct _STORAGE_LIST::_db_con* pkItem)
    {
        using org_ptr = bool (WINAPIV*)(struct LendItemMng*, uint16_t, char, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x14030dd80L))(this, wIdx, byStorageCode, pkItem);
    };
    struct LendItemSheet* LendItemMng::GetSheet(uint16_t wIdx)
    {
        using org_ptr = struct LendItemSheet* (WINAPIV*)(struct LendItemMng*, uint16_t);
        return (org_ptr(0x14007b9c0L))(this, wIdx);
    };
    bool LendItemMng::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct LendItemMng*);
        return (org_ptr(0x14030da20L))(this);
    };
    bool LendItemMng::InsertLink(uint16_t wIdx, char byStorageCode, struct _STORAGE_LIST::_db_con* pkItem)
    {
        using org_ptr = bool (WINAPIV*)(struct LendItemMng*, uint16_t, char, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x14030dc70L))(this, wIdx, byStorageCode, pkItem);
    };
    struct LendItemMng* LendItemMng::Instance()
    {
        using org_ptr = struct LendItemMng* (WINAPIV*)();
        return (org_ptr(0x140074ec0L))();
    };
    LendItemMng::LendItemMng()
    {
        using org_ptr = void (WINAPIV*)(struct LendItemMng*);
        (org_ptr(0x140074fa0L))(this);
    };
    void LendItemMng::ctor_LendItemMng()
    {
        using org_ptr = void (WINAPIV*)(struct LendItemMng*);
        (org_ptr(0x140074fa0L))(this);
    };
    void LendItemMng::Release(uint16_t wIdx)
    {
        using org_ptr = void (WINAPIV*)(struct LendItemMng*, uint16_t);
        (org_ptr(0x14030def0L))(this, wIdx);
    };
    void LendItemMng::ReleaseAll()
    {
        using org_ptr = void (WINAPIV*)(struct LendItemMng*);
        (org_ptr(0x14030df50L))(this);
    };
    LendItemMng::~LendItemMng()
    {
        using org_ptr = void (WINAPIV*)(struct LendItemMng*);
        (org_ptr(0x14030f390L))(this);
    };
    void LendItemMng::dtor_LendItemMng()
    {
        using org_ptr = void (WINAPIV*)(struct LendItemMng*);
        (org_ptr(0x14030f390L))(this);
    };
END_ATF_NAMESPACE
