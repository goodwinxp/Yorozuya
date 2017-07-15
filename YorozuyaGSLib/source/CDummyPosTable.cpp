#include <CDummyPosTable.hpp>


START_ATF_NAMESPACE
    CDummyPosTable::CDummyPosTable()
    {
        using org_ptr = void (WINAPIV*)(struct CDummyPosTable*);
        (org_ptr(0x14018a0d0L))(this);
    };
    void CDummyPosTable::ctor_CDummyPosTable()
    {
        using org_ptr = void (WINAPIV*)(struct CDummyPosTable*);
        (org_ptr(0x14018a0d0L))(this);
    };
    bool CDummyPosTable::CheckHeroesDummy(struct CGameObject* pObj, char byRaceCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CGameObject*, char);
        return (org_ptr(0x14018a010L))(pObj, byRaceCode);
    };
    bool CDummyPosTable::FindDummy(char* pszTextFileName, char* pszDummyCode, struct _dummy_position* pDummyPos)
    {
        using org_ptr = bool (WINAPIV*)(char*, char*, struct _dummy_position*);
        return (org_ptr(0x14018a780L))(pszTextFileName, pszDummyCode, pDummyPos);
    };
    struct _dummy_position* CDummyPosTable::GetRecord(char* szCode)
    {
        using org_ptr = struct _dummy_position* (WINAPIV*)(struct CDummyPosTable*, char*);
        return (org_ptr(0x14018a600L))(this, szCode);
    };
    struct _dummy_position* CDummyPosTable::GetRecord(int i)
    {
        using org_ptr = struct _dummy_position* (WINAPIV*)(struct CDummyPosTable*, int);
        return (org_ptr(0x14018a740L))(this, i);
    };
    int CDummyPosTable::GetRecordNum()
    {
        using org_ptr = int (WINAPIV*)(struct CDummyPosTable*);
        return (org_ptr(0x14018a5e0L))(this);
    };
    bool CDummyPosTable::LoadDummyPosition(char* szTextFileName, char* szPrefix)
    {
        using org_ptr = bool (WINAPIV*)(struct CDummyPosTable*, char*, char*);
        return (org_ptr(0x14018a180L))(this, szTextFileName, szPrefix);
    };
    CDummyPosTable::~CDummyPosTable()
    {
        using org_ptr = void (WINAPIV*)(struct CDummyPosTable*);
        (org_ptr(0x14018a110L))(this);
    };
    void CDummyPosTable::dtor_CDummyPosTable()
    {
        using org_ptr = void (WINAPIV*)(struct CDummyPosTable*);
        (org_ptr(0x14018a110L))(this);
    };
END_ATF_NAMESPACE
