#include <WheatyExceptionReport.hpp>


START_ATF_NAMESPACE
    char* WheatyExceptionReport::DumpTypeIndex(char* pszCurrBuffer, uint64_t modBase, unsigned int dwTypeIndex, unsigned int nestingLevel, uint64_t offset, bool* bHandled)
    {
        using org_ptr = char* (WINAPIV*)(char*, uint64_t, unsigned int, unsigned int, uint64_t, bool*);
        return (org_ptr(0x140440d40L))(pszCurrBuffer, modBase, dwTypeIndex, nestingLevel, offset, bHandled);
    };
    int WheatyExceptionReport::EnumerateSymbolsCallback(struct _SYMBOL_INFO* pSymInfo, unsigned int SymbolSize, void* UserContext)
    {
        using org_ptr = int (WINAPIV*)(struct _SYMBOL_INFO*, unsigned int, void*);
        return (org_ptr(0x140440a30L))(pSymInfo, SymbolSize, UserContext);
    };
    char* WheatyExceptionReport::FormatOutputValue(char* pszCurrBuffer, BasicType basicType, uint64_t length, void* pAddress)
    {
        using org_ptr = char* (WINAPIV*)(char*, BasicType, uint64_t, void*);
        return (org_ptr(0x140441160L))(pszCurrBuffer, basicType, length, pAddress);
    };
    bool WheatyExceptionReport::FormatSymbolValue(struct _SYMBOL_INFO* pSym, struct _tagSTACKFRAME64* sf, char* pszBuffer, unsigned int cbBuffer)
    {
        using org_ptr = bool (WINAPIV*)(struct _SYMBOL_INFO*, struct _tagSTACKFRAME64*, char*, unsigned int);
        return (org_ptr(0x140440b40L))(pSym, sf, pszBuffer, cbBuffer);
    };
    void WheatyExceptionReport::GenerateExceptionReport(struct _EXCEPTION_POINTERS* pExceptionInfo)
    {
        using org_ptr = void (WINAPIV*)(struct _EXCEPTION_POINTERS*);
        (org_ptr(0x14043f990L))(pExceptionInfo);
    };
    BasicType WheatyExceptionReport::GetBasicType(unsigned int typeIndex, uint64_t modBase)
    {
        using org_ptr = BasicType (WINAPIV*)(unsigned int, uint64_t);
        return (org_ptr(0x140441380L))(typeIndex, modBase);
    };
    int WheatyExceptionReport::GetDisplayInfo(int nDeviceIndex, char* lpszDeviceInfo, char* lpszMonitorInfo)
    {
        using org_ptr = int (WINAPIV*)(int, char*, char*);
        return (org_ptr(0x1404416b0L))(nDeviceIndex, lpszDeviceInfo, lpszMonitorInfo);
    };
    char* WheatyExceptionReport::GetExceptionString(unsigned int dwCode)
    {
        using org_ptr = char* (WINAPIV*)(unsigned int);
        return (org_ptr(0x140440170L))(dwCode);
    };
    int WheatyExceptionReport::GetLogicalAddress(void* addr, char* szModule, unsigned int len, unsigned int* section, unsigned int* offset)
    {
        using org_ptr = int (WINAPIV*)(void*, char*, unsigned int, unsigned int*, unsigned int*);
        return (org_ptr(0x1404404a0L))(addr, szModule, len, section, offset);
    };
    char* WheatyExceptionReport::GetOsName(unsigned int dwPlatformId, unsigned int dwMajorVersion, unsigned int dwMinorVersion)
    {
        using org_ptr = char* (WINAPIV*)(unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x140441570L))(dwPlatformId, dwMajorVersion, dwMinorVersion);
    };
    char* WheatyExceptionReport::GetOsVersion()
    {
        using org_ptr = char* (WINAPIV*)();
        return (org_ptr(0x140441470L))();
    };
    void WheatyExceptionReport::SetDescription(char* pszDescription)
    {
        using org_ptr = void (WINAPIV*)(struct WheatyExceptionReport*, char*);
        (org_ptr(0x14043f5f0L))(this, pszDescription);
    };
    void WheatyExceptionReport::SetFtpConnection(char* pszFtpIp, unsigned int nFtpPort, char* pszFtpId, char* pszFtpPwd, char* pszFtpDirectory)
    {
        using org_ptr = void (WINAPIV*)(struct WheatyExceptionReport*, char*, unsigned int, char*, char*, char*);
        (org_ptr(0x14043f640L))(this, pszFtpIp, nFtpPort, pszFtpId, pszFtpPwd, pszFtpDirectory);
    };
    void WheatyExceptionReport::SetLogName(char* pszLogName)
    {
        using org_ptr = void (WINAPIV*)(struct WheatyExceptionReport*, char*);
        (org_ptr(0x14043f5a0L))(this, pszLogName);
    };
    void WheatyExceptionReport::SetRunDialog(int bRun)
    {
        using org_ptr = void (WINAPIV*)(struct WheatyExceptionReport*, int);
        (org_ptr(0x14043f6e0L))(this, bRun);
    };
    WheatyExceptionReport::WheatyExceptionReport()
    {
        using org_ptr = void (WINAPIV*)(struct WheatyExceptionReport*);
        (org_ptr(0x14043f4d0L))(this);
    };
    void WheatyExceptionReport::ctor_WheatyExceptionReport()
    {
        using org_ptr = void (WINAPIV*)(struct WheatyExceptionReport*);
        (org_ptr(0x14043f4d0L))(this);
    };
    int WheatyExceptionReport::WheatyUnhandledExceptionFilter(struct _EXCEPTION_POINTERS* pExceptionInfo)
    {
        using org_ptr = int (WINAPIV*)(struct _EXCEPTION_POINTERS*);
        return (org_ptr(0x14043f700L))(pExceptionInfo);
    };
    void WheatyExceptionReport::WriteStackDetails(struct _CONTEXT* pContext, bool bWriteVariables)
    {
        using org_ptr = void (WINAPIV*)(struct _CONTEXT*, bool);
        (org_ptr(0x1404406a0L))(pContext, bWriteVariables);
    };
    int WheatyExceptionReport::_tprintfh(void* hFile, char* format)
    {
        using org_ptr = int (WINAPIV*)(void*, char*);
        return (org_ptr(0x1404417d0L))(hFile, format);
    };
    int WheatyExceptionReport::printf(char* format)
    {
        using org_ptr = int (WINAPIV*)(char*);
        return (org_ptr(0x1404416d0L))(format);
    };
    WheatyExceptionReport::~WheatyExceptionReport()
    {
        using org_ptr = void (WINAPIV*)(struct WheatyExceptionReport*);
        (org_ptr(0x14043f560L))(this);
    };
    void WheatyExceptionReport::dtor_WheatyExceptionReport()
    {
        using org_ptr = void (WINAPIV*)(struct WheatyExceptionReport*);
        (org_ptr(0x14043f560L))(this);
    };
    
END_ATF_NAMESPACE
