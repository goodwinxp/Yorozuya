#include <CItemUpgradeTable.hpp>


START_ATF_NAMESPACE
    CItemUpgradeTable::CItemUpgradeTable()
    {
        using org_ptr = void (WINAPIV*)(struct CItemUpgradeTable*);
        (org_ptr(0x140202bc0L))(this);
    };
    void CItemUpgradeTable::ctor_CItemUpgradeTable()
    {
        using org_ptr = void (WINAPIV*)(struct CItemUpgradeTable*);
        (org_ptr(0x140202bc0L))(this);
    };
    struct _ItemUpgrade_fld* CItemUpgradeTable::GetRecord(unsigned int dwIndex)
    {
        using org_ptr = struct _ItemUpgrade_fld* (WINAPIV*)(struct CItemUpgradeTable*, unsigned int);
        return (org_ptr(0x14007aee0L))(this, dwIndex);
    };
    struct _ItemUpgrade_fld* CItemUpgradeTable::GetRecordFromRes(unsigned int dwResIndex)
    {
        using org_ptr = struct _ItemUpgrade_fld* (WINAPIV*)(struct CItemUpgradeTable*, unsigned int);
        return (org_ptr(0x1400b84e0L))(this, dwResIndex);
    };
    int CItemUpgradeTable::GetSize()
    {
        using org_ptr = int (WINAPIV*)(struct CItemUpgradeTable*);
        return (org_ptr(0x14029d4b0L))(this);
    };
    bool CItemUpgradeTable::Indexing(struct CRecordData* pResRec, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemUpgradeTable*, struct CRecordData*, char*);
        return (org_ptr(0x1402049a0L))(this, pResRec, pszErrMsg);
    };
    bool CItemUpgradeTable::ReadRecord(char* szFile, struct CRecordData* pResRec, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CItemUpgradeTable*, char*, struct CRecordData*, char*);
        return (org_ptr(0x140204850L))(this, szFile, pResRec, pszErrMsg);
    };
    CItemUpgradeTable::~CItemUpgradeTable()
    {
        using org_ptr = void (WINAPIV*)(struct CItemUpgradeTable*);
        (org_ptr(0x140202c50L))(this);
    };
    void CItemUpgradeTable::dtor_CItemUpgradeTable()
    {
        using org_ptr = void (WINAPIV*)(struct CItemUpgradeTable*);
        (org_ptr(0x140202c50L))(this);
    };
END_ATF_NAMESPACE
