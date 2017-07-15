#include <_REGED.hpp>


START_ATF_NAMESPACE
    bool _REGED::Release(char bySlot)
    {
        using org_ptr = bool (WINAPIV*)(struct _REGED*, char);
        return (org_ptr(0x140120660L))(this, bySlot);
    };
    bool _REGED::Set(char bySlot, struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = bool (WINAPIV*)(struct _REGED*, char, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x14011fef0L))(this, bySlot, pItem);
    };
    void _REGED::UpdateEquipLv()
    {
        using org_ptr = void (WINAPIV*)(struct _REGED*);
        (org_ptr(0x14011f5f0L))(this);
    };
    _REGED::_REGED()
    {
        using org_ptr = void (WINAPIV*)(struct _REGED*);
        (org_ptr(0x140075420L))(this);
    };
    void _REGED::ctor__REGED()
    {
        using org_ptr = void (WINAPIV*)(struct _REGED*);
        (org_ptr(0x140075420L))(this);
    };
    void _REGED::init()
    {
        using org_ptr = void (WINAPIV*)(struct _REGED*);
        (org_ptr(0x1400755a0L))(this);
    };
END_ATF_NAMESPACE
