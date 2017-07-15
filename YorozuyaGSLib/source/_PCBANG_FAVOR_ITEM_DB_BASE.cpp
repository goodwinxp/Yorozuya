#include <_PCBANG_FAVOR_ITEM_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _PCBANG_FAVOR_ITEM_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _PCBANG_FAVOR_ITEM_DB_BASE*);
        (org_ptr(0x140077df0L))(this);
    };
    bool _PCBANG_FAVOR_ITEM_DB_BASE::InsertItem(struct _STORAGE_LIST::_db_con* Item)
    {
        using org_ptr = bool (WINAPIV*)(struct _PCBANG_FAVOR_ITEM_DB_BASE*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x14040cb90L))(this, Item);
    };
    bool _PCBANG_FAVOR_ITEM_DB_BASE::IsDeleteItem(struct _STORAGE_LIST::_db_con* Item)
    {
        using org_ptr = bool (WINAPIV*)(struct _PCBANG_FAVOR_ITEM_DB_BASE*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x14040cc30L))(this, Item);
    };
END_ATF_NAMESPACE
