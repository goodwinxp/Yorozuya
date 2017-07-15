#include <CMapDataTable.hpp>


START_ATF_NAMESPACE
    CMapDataTable::CMapDataTable()
    {
        using org_ptr = void (WINAPIV*)(struct CMapDataTable*);
        (org_ptr(0x140198740L))(this);
    };
    void CMapDataTable::ctor_CMapDataTable()
    {
        using org_ptr = void (WINAPIV*)(struct CMapDataTable*);
        (org_ptr(0x140198740L))(this);
    };
    struct _map_fld* CMapDataTable::GetRecord(unsigned int dwIndex)
    {
        using org_ptr = struct _map_fld* (WINAPIV*)(struct CMapDataTable*, unsigned int);
        return (org_ptr(0x1400ef2d0L))(this, dwIndex);
    };
    int CMapDataTable::GetRecordNum()
    {
        using org_ptr = int (WINAPIV*)(struct CMapDataTable*);
        return (org_ptr(0x140199050L))(this);
    };
    bool CMapDataTable::ReadScript(char* szFileName)
    {
        using org_ptr = bool (WINAPIV*)(struct CMapDataTable*, char*);
        return (org_ptr(0x140198900L))(this, szFileName);
    };
    CMapDataTable::~CMapDataTable()
    {
        using org_ptr = void (WINAPIV*)(struct CMapDataTable*);
        (org_ptr(0x140198790L))(this);
    };
    void CMapDataTable::dtor_CMapDataTable()
    {
        using org_ptr = void (WINAPIV*)(struct CMapDataTable*);
        (org_ptr(0x140198790L))(this);
    };
END_ATF_NAMESPACE
