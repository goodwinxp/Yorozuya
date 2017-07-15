#include <CRFNewDatabase.hpp>


START_ATF_NAMESPACE
    bool CRFNewDatabase::AllocSelectHandle()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        return (org_ptr(0x1404875a0L))(this);
    };
    bool CRFNewDatabase::AllocUpdateHandle()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        return (org_ptr(0x140487620L))(this);
    };
    CRFNewDatabase::CRFNewDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
        (org_ptr(0x140485f80L))(this);
    };
    void CRFNewDatabase::ctor_CRFNewDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
        (org_ptr(0x140485f80L))(this);
    };
    void CRFNewDatabase::CheckLogFileHour()
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
        (org_ptr(0x140487a50L))(this);
    };
    bool CRFNewDatabase::CommitTransaction()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        return (org_ptr(0x1404874c0L))(this);
    };
    bool CRFNewDatabase::ConfigUserODBC(char* szDSN, char* szServer, char* szDatabase, uint16_t wPort)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, char*, char*, uint16_t);
        return (org_ptr(0x1404880c0L))(this, szDSN, szServer, szDatabase, wPort);
    };
    void CRFNewDatabase::DiagRecALog(int16_t sqlRet, int16_t HandleType, void* Handle)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, int16_t, void*);
        (org_ptr(0x1404862c0L))(this, sqlRet, HandleType, Handle);
    };
    void CRFNewDatabase::DiagRecWLog(int16_t sqlRet, int16_t HandleType, void* Handle)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, int16_t, void*);
        (org_ptr(0x140486420L))(this, sqlRet, HandleType, Handle);
    };
    void CRFNewDatabase::EndDataBase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
        (org_ptr(0x1404869c0L))(this);
    };
    bool CRFNewDatabase::EroorActionProcSQL_ERROR(void* SQLStmt)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, void*);
        return (org_ptr(0x140486d40L))(this, SQLStmt);
    };
    void CRFNewDatabase::ErrFmtLog(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
        (org_ptr(0x140484e30L))(this, fmt);
    };
    void CRFNewDatabase::ErrFmtLog(wchar_t* lpcwFmt)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, wchar_t*);
        (org_ptr(0x140489450L))(this, lpcwFmt);
    };
    void CRFNewDatabase::ErrLog(char* szLog)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
        (org_ptr(0x1404894f0L))(this, szLog);
    };
    void CRFNewDatabase::ErrorAction(int16_t sqlRet, void* SQLStmt)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, void*);
        (org_ptr(0x140486c70L))(this, sqlRet, SQLStmt);
    };
    void CRFNewDatabase::ErrorMsgLog(int16_t sqlRet, char* strQuery, char* strKind, void* SQLStmt)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, char*, char*, void*);
        (org_ptr(0x140486ec0L))(this, sqlRet, strQuery, strKind, SQLStmt);
    };
    void CRFNewDatabase::ErrorMsgLog(int16_t sqlRet, wchar_t* strQuery, wchar_t* strKind, void* SQLStmt)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, wchar_t*, wchar_t*, void*);
        (org_ptr(0x140487060L))(this, sqlRet, strQuery, strKind, SQLStmt);
    };
    bool CRFNewDatabase::ExecUpdateBinaryQuery(char* strQuery, void* buf, int size, bool bNoDataError)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, void*, int, bool);
        return (org_ptr(0x140488250L))(this, strQuery, buf, size, bNoDataError);
    };
    bool CRFNewDatabase::ExecUpdateQuery(char* strQuery, bool bNoDataError)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, bool);
        return (org_ptr(0x1404872f0L))(this, strQuery, bNoDataError);
    };
    bool CRFNewDatabase::ExecUpdateQuery(wchar_t* wstrQuery, bool bNoDataError)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, wchar_t*, bool);
        return (org_ptr(0x1404871a0L))(this, wstrQuery, bNoDataError);
    };
    void CRFNewDatabase::FmtLog(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
        (org_ptr(0x140484d90L))(this, fmt);
    };
    void CRFNewDatabase::FmtLog(wchar_t* lpcwFmt)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, wchar_t*);
        (org_ptr(0x140489550L))(this, lpcwFmt);
    };
    bool CRFNewDatabase::FreeSelectHandle()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        return (org_ptr(0x1404876a0L))(this);
    };
    bool CRFNewDatabase::FreeUpdateHandle()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        return (org_ptr(0x140487730L))(this);
    };
    char CRFNewDatabase::GetLocalHour()
    {
        using org_ptr = char (WINAPIV*)(struct CRFNewDatabase*);
        return (org_ptr(0x140487000L))(this);
    };
    bool CRFNewDatabase::IsConectionActive()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        return (org_ptr(0x1401c7760L))(this);
    };
    void CRFNewDatabase::Log(char* szLog)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
        (org_ptr(0x140484d30L))(this, szLog);
    };
    bool CRFNewDatabase::ReConnectDataBase()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        return (org_ptr(0x140486b00L))(this);
    };
    bool CRFNewDatabase::RollbackTransaction()
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        return (org_ptr(0x140487530L))(this);
    };
    char CRFNewDatabase::SQLExecDirect_RetErrCode(char* strQuery)
    {
        using org_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*);
        return (org_ptr(0x140484ed0L))(this, strQuery);
    };
    char CRFNewDatabase::SQLFetch_RetErrCode(char* strQuery)
    {
        using org_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*);
        return (org_ptr(0x140485020L))(this, strQuery);
    };
    char CRFNewDatabase::SQLGetData_Binary_RetErrCode(char* strQuery, uint16_t* ColumnNumber, char* pData, uint64_t tDataSize)
    {
        using org_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*, uint16_t*, char*, uint64_t);
        return (org_ptr(0x1404da460L))(this, strQuery, ColumnNumber, pData, tDataSize);
    };
    char CRFNewDatabase::SQLGetData_RetErrCode(char* strQuery, uint16_t* ColumnNumber, int16_t TargetType, void* TargetValue)
    {
        using org_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*, uint16_t*, int16_t, void*);
        return (org_ptr(0x140485130L))(this, strQuery, ColumnNumber, TargetType, TargetValue);
    };
    void CRFNewDatabase::SelectCleanUp(char* strQuery)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
        (org_ptr(0x140485300L))(this, strQuery);
    };
    bool CRFNewDatabase::Select_NextHourDate(char byAddHour, char* szDate)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char, char*);
        return (org_ptr(0x140487d50L))(this, byAddHour, szDate);
    };
    void CRFNewDatabase::SetAutoCommitMode(bool bAutoCommit)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, bool);
        (org_ptr(0x140487440L))(this, bAutoCommit);
    };
    void CRFNewDatabase::SetLogFile(char* szUpperLogPath, char* szOdbcName)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*, char*);
        (org_ptr(0x140488640L))(this, szUpperLogPath, szOdbcName);
    };
    void CRFNewDatabase::SetReconnectFailExitFlag(bool bFlag)
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*, bool);
        (org_ptr(0x1402f2ab0L))(this, bFlag);
    };
    bool CRFNewDatabase::StartDataBase(char* odbcName, char* accountName, char* passWord)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, char*, char*);
        return (org_ptr(0x140486580L))(this, odbcName, accountName, passWord);
    };
    bool CRFNewDatabase::TableExist(char* szTableName)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*);
        return (org_ptr(0x1404877c0L))(this, szTableName);
    };
    CRFNewDatabase::~CRFNewDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
        (org_ptr(0x140486150L))(this);
    };
    void CRFNewDatabase::dtor_CRFNewDatabase()
    {
        using org_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
        (org_ptr(0x140486150L))(this);
    };
END_ATF_NAMESPACE
