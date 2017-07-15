#include <CLogFile.hpp>


START_ATF_NAMESPACE
    CLogFile::CLogFile()
    {
        using org_ptr = void (WINAPIV*)(struct CLogFile*);
        (org_ptr(0x140074ff0L))(this);
    };
    void CLogFile::ctor_CLogFile()
    {
        using org_ptr = void (WINAPIV*)(struct CLogFile*);
        (org_ptr(0x140074ff0L))(this);
    };
    void CLogFile::SetWriteAble(bool bAble)
    {
        using org_ptr = void (WINAPIV*)(struct CLogFile*, bool);
        (org_ptr(0x14047db20L))(this, bAble);
    };
    void CLogFile::SetWriteLogFile(char* szFileName, int bWriteAble, bool bTrace, bool bDate, bool bAddCount)
    {
        using org_ptr = void (WINAPIV*)(struct CLogFile*, char*, int, bool, bool, bool);
        (org_ptr(0x1400c2d90L))(this, szFileName, bWriteAble, bTrace, bDate, bAddCount);
    };
    void CLogFile::Write(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CLogFile*, char*);
        (org_ptr(0x140074ab0L))(this, fmt);
    };
    void CLogFile::WriteFromArg(char* fmt, char* arg)
    {
        using org_ptr = void (WINAPIV*)(struct CLogFile*, char*, char*);
        (org_ptr(0x1402c43f0L))(this, fmt, arg);
    };
    void CLogFile::WriteFromArg(wchar_t* lpcwFmt, char* arg)
    {
        using org_ptr = void (WINAPIV*)(struct CLogFile*, wchar_t*, char*);
        (org_ptr(0x140327d50L))(this, lpcwFmt, arg);
    };
    void CLogFile::WriteString(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CLogFile*, char*);
        (org_ptr(0x140207610L))(this, fmt);
    };
    CLogFile::~CLogFile()
    {
        using org_ptr = void (WINAPIV*)(struct CLogFile*);
        (org_ptr(0x1400c2ef0L))(this);
    };
    void CLogFile::dtor_CLogFile()
    {
        using org_ptr = void (WINAPIV*)(struct CLogFile*);
        (org_ptr(0x1400c2ef0L))(this);
    };
END_ATF_NAMESPACE
