#include <CItemLootTable.hpp>


START_ATF_NAMESPACE
    CItemLootTable::CItemLootTable()
    {
        using org_ptr = void (WINAPIV*)(struct CItemLootTable*);
        (org_ptr(0x1402024d0L))(this);
    };
    void CItemLootTable::ctor_CItemLootTable()
    {
        using org_ptr = void (WINAPIV*)(struct CItemLootTable*);
        (org_ptr(0x1402024d0L))(this);
    };
    bool CItemLootTable::Indexing(struct CRecordData* pItemRec, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemLootTable*, struct CRecordData*, char*);
        return (org_ptr(0x140203f20L))(this, pItemRec, pszErrMsg);
    };
    bool CItemLootTable::ReadRecord(char* szFile, struct CRecordData* pItemRec, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemLootTable*, char*, struct CRecordData*, char*);
        return (org_ptr(0x140203900L))(this, szFile, pItemRec, pszErrMsg);
    };
    CItemLootTable::~CItemLootTable()
    {
        using org_ptr = void (WINAPIV*)(struct CItemLootTable*);
        (org_ptr(0x1402027a0L))(this);
    };
    void CItemLootTable::dtor_CItemLootTable()
    {
        using org_ptr = void (WINAPIV*)(struct CItemLootTable*);
        (org_ptr(0x1402027a0L))(this);
    };
    
END_ATF_NAMESPACE
