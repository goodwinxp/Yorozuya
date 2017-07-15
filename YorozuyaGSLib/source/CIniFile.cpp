#include <CIniFile.hpp>


START_ATF_NAMESPACE
    CIniFile::CIniFile(char* strPath)
    {
        using org_ptr = void (WINAPIV*)(struct CIniFile*, char*);
        (org_ptr(0x14046c530L))(this, strPath);
    };
    void CIniFile::ctor_CIniFile(char* strPath)
    {
        using org_ptr = void (WINAPIV*)(struct CIniFile*, char*);
        (org_ptr(0x14046c530L))(this, strPath);
    };
    CIniFile::CIniFile()
    {
        using org_ptr = void (WINAPIV*)(struct CIniFile*);
        (org_ptr(0x14046c4d0L))(this);
    };
    void CIniFile::ctor_CIniFile()
    {
        using org_ptr = void (WINAPIV*)(struct CIniFile*);
        (org_ptr(0x14046c4d0L))(this);
    };
    void CIniFile::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct CIniFile*);
        (org_ptr(0x14046c8c0L))(this);
    };
    bool CIniFile::DeleteKey(struct INI_Key* pKey)
    {
        using org_ptr = bool (WINAPIV*)(struct CIniFile*, struct INI_Key*);
        return (org_ptr(0x14046da40L))(this, pKey);
    };
    int CIniFile::DeleteKey(char* lpSection, char* lpKey)
    {
        using org_ptr = int (WINAPIV*)(struct CIniFile*, char*, char*);
        return (org_ptr(0x14046d490L))(this, lpSection, lpKey);
    };
    bool CIniFile::DeleteSection(struct INI_Section* pSection)
    {
        using org_ptr = bool (WINAPIV*)(struct CIniFile*, struct INI_Section*);
        return (org_ptr(0x14046d4f0L))(this, pSection);
    };
    int CIniFile::DeleteSection(char* lpSection)
    {
        using org_ptr = int (WINAPIV*)(struct CIniFile*, char*);
        return (org_ptr(0x14046d430L))(this, lpSection);
    };
    struct INI_Key* CIniFile::GetKey(char* strSection, char* strKey)
    {
        using org_ptr = struct INI_Key* (WINAPIV*)(struct CIniFile*, char*, char*);
        return (org_ptr(0x14046d3c0L))(this, strSection, strKey);
    };
    struct INI_Section* CIniFile::GetSection(char* strSection)
    {
        using org_ptr = struct INI_Section* (WINAPIV*)(struct CIniFile*, char*);
        return (org_ptr(0x14046d160L))(this, strSection);
    };
    struct INI_Section* CIniFile::GetSection(unsigned int dwIndex)
    {
        using org_ptr = struct INI_Section* (WINAPIV*)(struct CIniFile*, unsigned int);
        return (org_ptr(0x14041b830L))(this, dwIndex);
    };
    unsigned int CIniFile::GetSectionSize()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CIniFile*);
        return (org_ptr(0x14041b7e0L))(this);
    };
    bool CIniFile::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CIniFile*);
        return (org_ptr(0x14046c6d0L))(this);
    };
    struct INI_Key* CIniFile::LoadKey(char* strSection, char* strKey)
    {
        using org_ptr = struct INI_Key* (WINAPIV*)(struct CIniFile*, char*, char*);
        return (org_ptr(0x14046cf90L))(this, strSection, strKey);
    };
    struct INI_Section* CIniFile::LoadSection(char* strSection)
    {
        using org_ptr = struct INI_Section* (WINAPIV*)(struct CIniFile*, char*);
        return (org_ptr(0x14046cc20L))(this, strSection);
    };
    bool CIniFile::Merge_Intersection(struct CIniFile* rhs)
    {
        using org_ptr = bool (WINAPIV*)(struct CIniFile*, struct CIniFile*);
        return (org_ptr(0x14046e6a0L))(this, rhs);
    };
    bool CIniFile::Merge_SumOfSets(struct CIniFile* rhs)
    {
        using org_ptr = bool (WINAPIV*)(struct CIniFile*, struct CIniFile*);
        return (org_ptr(0x14046e230L))(this, rhs);
    };
    void CIniFile::Save()
    {
        using org_ptr = void (WINAPIV*)(struct CIniFile*);
        (org_ptr(0x14046dd10L))(this);
    };
    bool CIniFile::SaveKey(struct INI_Key* pKey)
    {
        using org_ptr = bool (WINAPIV*)(struct CIniFile*, struct INI_Key*);
        return (org_ptr(0x14046e1a0L))(this, pKey);
    };
    bool CIniFile::SaveSection(struct INI_Section* pSection)
    {
        using org_ptr = bool (WINAPIV*)(struct CIniFile*, struct INI_Section*);
        return (org_ptr(0x14046df30L))(this, pSection);
    };
    void CIniFile::SetIniFilename(char* strPath)
    {
        using org_ptr = void (WINAPIV*)(struct CIniFile*, char*);
        (org_ptr(0x14046c660L))(this, strPath);
    };
    bool CIniFile::SplitKey(char* strBase, char* strKey, int nKeyLen)
    {
        using org_ptr = bool (WINAPIV*)(struct CIniFile*, char*, char*, int);
        return (org_ptr(0x14046cb30L))(this, strBase, strKey, nKeyLen);
    };
    bool CIniFile::WriteString(char* strSection, char* strKey, char* strValue)
    {
        using org_ptr = bool (WINAPIV*)(struct CIniFile*, char*, char*, char*);
        return (org_ptr(0x14046eb50L))(this, strSection, strKey, strValue);
    };
    CIniFile::~CIniFile()
    {
        using org_ptr = void (WINAPIV*)(struct CIniFile*);
        (org_ptr(0x14046c5d0L))(this);
    };
    void CIniFile::dtor_CIniFile()
    {
        using org_ptr = void (WINAPIV*)(struct CIniFile*);
        (org_ptr(0x14046c5d0L))(this);
    };
END_ATF_NAMESPACE
