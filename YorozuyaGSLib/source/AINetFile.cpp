#include <AINetFile.hpp>


START_ATF_NAMESPACE
    AINetFile::AINetFile(void* hFile, unsigned int dwAccess)
    {
        using org_ptr = void (WINAPIV*)(struct AINetFile*, void*, unsigned int);
        (org_ptr(0x140432380L))(this, hFile, dwAccess);
    };
    void AINetFile::ctor_AINetFile(void* hFile, unsigned int dwAccess)
    {
        using org_ptr = void (WINAPIV*)(struct AINetFile*, void*, unsigned int);
        (org_ptr(0x140432380L))(this, hFile, dwAccess);
    };
    void AINetFile::Close()
    {
        using org_ptr = void (WINAPIV*)(struct AINetFile*);
        (org_ptr(0x140432600L))(this);
    };
    unsigned int AINetFile::Read(void* lpBuf, unsigned int nCount)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct AINetFile*, void*, unsigned int);
        return (org_ptr(0x140432420L))(this, lpBuf, nCount);
    };
    unsigned int AINetFile::Write(void* lpBuf, unsigned int nCount)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct AINetFile*, void*, unsigned int);
        return (org_ptr(0x1404324a0L))(this, lpBuf, nCount);
    };
    int AINetFile::WriteString(char* str)
    {
        using org_ptr = int (WINAPIV*)(struct AINetFile*, char*);
        return (org_ptr(0x140432520L))(this, str);
    };
    AINetFile::~AINetFile()
    {
        using org_ptr = void (WINAPIV*)(struct AINetFile*);
        (org_ptr(0x1404323d0L))(this);
    };
    void AINetFile::dtor_AINetFile()
    {
        using org_ptr = void (WINAPIV*)(struct AINetFile*);
        (org_ptr(0x1404323d0L))(this);
    };
END_ATF_NAMESPACE
