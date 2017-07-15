#include <LendItemSheet.hpp>


START_ATF_NAMESPACE
    int LendItemSheet::CheckTime()
    {
        using org_ptr = int (WINAPIV*)(struct LendItemSheet*);
        return (org_ptr(0x14030d790L))(this);
    };
    bool LendItemSheet::DeleteLink(char byStorageCode, struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = bool (WINAPIV*)(struct LendItemSheet*, char, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x14030f080L))(this, byStorageCode, pItem);
    };
    bool LendItemSheet::Initialzie()
    {
        using org_ptr = bool (WINAPIV*)(struct LendItemSheet*);
        return (org_ptr(0x14030ee40L))(this);
    };
    bool LendItemSheet::InsertLink(char byStorageCode, struct _STORAGE_LIST::_db_con* pkItem)
    {
        using org_ptr = bool (WINAPIV*)(struct LendItemSheet*, char, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x14030efd0L))(this, byStorageCode, pkItem);
    };
    LendItemSheet::LendItemSheet(struct CPlayer* p)
    {
        using org_ptr = void (WINAPIV*)(struct LendItemSheet*, struct CPlayer*);
        (org_ptr(0x14030edd0L))(this, p);
    };
    void LendItemSheet::ctor_LendItemSheet(struct CPlayer* p)
    {
        using org_ptr = void (WINAPIV*)(struct LendItemSheet*, struct CPlayer*);
        (org_ptr(0x14030edd0L))(this, p);
    };
    void LendItemSheet::Release()
    {
        using org_ptr = void (WINAPIV*)(struct LendItemSheet*);
        (org_ptr(0x14030f160L))(this);
    };
    LendItemSheet::~LendItemSheet()
    {
        using org_ptr = void (WINAPIV*)(struct LendItemSheet*);
        (org_ptr(0x14030f220L))(this);
    };
    void LendItemSheet::dtor_LendItemSheet()
    {
        using org_ptr = void (WINAPIV*)(struct LendItemSheet*);
        (org_ptr(0x14030f220L))(this);
    };
    
    LendItemSheet::Cell::Cell(char byStCode, struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct LendItemSheet::Cell*, char, struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x14030f040L))(this, byStCode, pItem);
    };
    void LendItemSheet::Cell::ctor_Cell(char byStCode, struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct LendItemSheet::Cell*, char, struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x14030f040L))(this, byStCode, pItem);
    };
    LendItemSheet::Cell::Cell()
    {
        using org_ptr = void (WINAPIV*)(struct LendItemSheet::Cell*);
        (org_ptr(0x14030fff0L))(this);
    };
    void LendItemSheet::Cell::ctor_Cell()
    {
        using org_ptr = void (WINAPIV*)(struct LendItemSheet::Cell*);
        (org_ptr(0x14030fff0L))(this);
    };
END_ATF_NAMESPACE
