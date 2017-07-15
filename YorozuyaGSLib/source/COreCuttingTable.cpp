#include <COreCuttingTable.hpp>


START_ATF_NAMESPACE
    COreCuttingTable::COreCuttingTable()
    {
        using org_ptr = void (WINAPIV*)(struct COreCuttingTable*);
        (org_ptr(0x140202a10L))(this);
    };
    void COreCuttingTable::ctor_COreCuttingTable()
    {
        using org_ptr = void (WINAPIV*)(struct COreCuttingTable*);
        (org_ptr(0x140202a10L))(this);
    };
    unsigned int COreCuttingTable::GetOreIndexFromRate(unsigned int dwOreIndex, unsigned int dwRate)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct COreCuttingTable*, unsigned int, unsigned int);
        return (org_ptr(0x1400d3f50L))(this, dwOreIndex, dwRate);
    };
    bool COreCuttingTable::Indexing(struct CRecordData* pOreRec, struct CRecordData* pResRec, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct COreCuttingTable*, struct CRecordData*, struct CRecordData*, char*);
        return (org_ptr(0x140204580L))(this, pOreRec, pResRec, pszErrMsg);
    };
    bool COreCuttingTable::ReadRecord(char* szFile, struct CRecordData* pOreRec, struct CRecordData* pResRec, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct COreCuttingTable*, char*, struct CRecordData*, struct CRecordData*, char*);
        return (org_ptr(0x140204360L))(this, szFile, pOreRec, pResRec, pszErrMsg);
    };
    COreCuttingTable::~COreCuttingTable()
    {
        using org_ptr = void (WINAPIV*)(struct COreCuttingTable*);
        (org_ptr(0x140202aa0L))(this);
    };
    void COreCuttingTable::dtor_COreCuttingTable()
    {
        using org_ptr = void (WINAPIV*)(struct COreCuttingTable*);
        (org_ptr(0x140202aa0L))(this);
    };
    COreCuttingTable::_ore_cut_list::_ore_cut_list()
    {
        using org_ptr = void (WINAPIV*)(struct COreCuttingTable::_ore_cut_list*);
        (org_ptr(0x140204550L))(this);
    };
    void COreCuttingTable::_ore_cut_list::ctor__ore_cut_list()
    {
        using org_ptr = void (WINAPIV*)(struct COreCuttingTable::_ore_cut_list*);
        (org_ptr(0x140204550L))(this);
    };
    
END_ATF_NAMESPACE
