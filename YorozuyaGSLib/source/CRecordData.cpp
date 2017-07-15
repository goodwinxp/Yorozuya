#include <CRecordData.hpp>


START_ATF_NAMESPACE
    CRecordData::CRecordData()
    {
        using org_ptr = void (WINAPIV*)(struct CRecordData*);
        (org_ptr(0x14007f490L))(this);
    };
    void CRecordData::ctor_CRecordData()
    {
        using org_ptr = void (WINAPIV*)(struct CRecordData*);
        (org_ptr(0x14007f490L))(this);
    };
    unsigned int CRecordData::FileSize(char* szFile)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CRecordData*, char*);
        return (org_ptr(0x1400441c0L))(this, szFile);
    };
    struct _base_fld* CRecordData::GetRecord(char* szRecordCode)
    {
        using org_ptr = struct _base_fld* (WINAPIV*)(struct CRecordData*, char*);
        return (org_ptr(0x140044b60L))(this, szRecordCode);
    };
    struct _base_fld* CRecordData::GetRecord(char* szRecordCode, int nCompareLen)
    {
        using org_ptr = struct _base_fld* (WINAPIV*)(struct CRecordData*, char*, int);
        return (org_ptr(0x14008f410L))(this, szRecordCode, nCompareLen);
    };
    struct _base_fld* CRecordData::GetRecord(int n)
    {
        using org_ptr = struct _base_fld* (WINAPIV*)(struct CRecordData*, int);
        return (org_ptr(0x1400347c0L))(this, n);
    };
    struct _base_fld* CRecordData::GetRecordByHash(char* szRecordCode, int offset, int len)
    {
        using org_ptr = struct _base_fld* (WINAPIV*)(struct CRecordData*, char*, int, int);
        return (org_ptr(0x14008f2f0L))(this, szRecordCode, offset, len);
    };
    int CRecordData::GetRecordNum()
    {
        using org_ptr = int (WINAPIV*)(struct CRecordData*);
        return (org_ptr(0x140044b00L))(this);
    };
    bool CRecordData::IsTableOpen()
    {
        using org_ptr = bool (WINAPIV*)(struct CRecordData*);
        return (org_ptr(0x140204b60L))(this);
    };
    bool CRecordData::LoadRecordData(void* hFile, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CRecordData*, void*, char*);
        return (org_ptr(0x140044770L))(this, hFile, pszErrMsg);
    };
    bool CRecordData::LoadRecordHeader(void* hFile, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CRecordData*, void*, char*);
        return (org_ptr(0x140044450L))(this, hFile, pszErrMsg);
    };
    unsigned int CRecordData::MakeHash(char* p, int len)
    {
        using org_ptr = unsigned int (WINAPIV*)(char*, int);
        return (org_ptr(0x1400442b0L))(p, len);
    };
    bool CRecordData::MakeHashTable(int offset, int len, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CRecordData*, int, int, char*);
        return (org_ptr(0x140044020L))(this, offset, len, pszErrMsg);
    };
    bool CRecordData::ReadRecord(char* szFile, unsigned int dwStructSize, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CRecordData*, char*, unsigned int, char*);
        return (org_ptr(0x140043d60L))(this, szFile, dwStructSize, pszErrMsg);
    };
    bool CRecordData::ReadRecord_Ex(char* szFile1, char* szFile2, unsigned int dwStructSize, char* pszErrMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CRecordData*, char*, char*, unsigned int, char*);
        return (org_ptr(0x1402af040L))(this, szFile1, szFile2, dwStructSize, pszErrMsg);
    };
    CRecordData::~CRecordData()
    {
        using org_ptr = void (WINAPIV*)(struct CRecordData*);
        (org_ptr(0x14007f550L))(this);
    };
    void CRecordData::dtor_CRecordData()
    {
        using org_ptr = void (WINAPIV*)(struct CRecordData*);
        (org_ptr(0x14007f550L))(this);
    };
END_ATF_NAMESPACE
