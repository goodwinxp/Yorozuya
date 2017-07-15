#include <CRFNewDatabaseDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CRFNewDatabaseAllocSelectHandle2_ptr CRFNewDatabaseAllocSelectHandle2_next(nullptr);
        Info::CRFNewDatabaseAllocSelectHandle2_clbk CRFNewDatabaseAllocSelectHandle2_user(nullptr);
        
        Info::CRFNewDatabaseAllocUpdateHandle4_ptr CRFNewDatabaseAllocUpdateHandle4_next(nullptr);
        Info::CRFNewDatabaseAllocUpdateHandle4_clbk CRFNewDatabaseAllocUpdateHandle4_user(nullptr);
        
        
        Info::CRFNewDatabasector_CRFNewDatabase6_ptr CRFNewDatabasector_CRFNewDatabase6_next(nullptr);
        Info::CRFNewDatabasector_CRFNewDatabase6_clbk CRFNewDatabasector_CRFNewDatabase6_user(nullptr);
        
        Info::CRFNewDatabaseCheckLogFileHour8_ptr CRFNewDatabaseCheckLogFileHour8_next(nullptr);
        Info::CRFNewDatabaseCheckLogFileHour8_clbk CRFNewDatabaseCheckLogFileHour8_user(nullptr);
        
        Info::CRFNewDatabaseCommitTransaction10_ptr CRFNewDatabaseCommitTransaction10_next(nullptr);
        Info::CRFNewDatabaseCommitTransaction10_clbk CRFNewDatabaseCommitTransaction10_user(nullptr);
        
        Info::CRFNewDatabaseConfigUserODBC12_ptr CRFNewDatabaseConfigUserODBC12_next(nullptr);
        Info::CRFNewDatabaseConfigUserODBC12_clbk CRFNewDatabaseConfigUserODBC12_user(nullptr);
        
        Info::CRFNewDatabaseDiagRecALog14_ptr CRFNewDatabaseDiagRecALog14_next(nullptr);
        Info::CRFNewDatabaseDiagRecALog14_clbk CRFNewDatabaseDiagRecALog14_user(nullptr);
        
        Info::CRFNewDatabaseDiagRecWLog16_ptr CRFNewDatabaseDiagRecWLog16_next(nullptr);
        Info::CRFNewDatabaseDiagRecWLog16_clbk CRFNewDatabaseDiagRecWLog16_user(nullptr);
        
        Info::CRFNewDatabaseEndDataBase18_ptr CRFNewDatabaseEndDataBase18_next(nullptr);
        Info::CRFNewDatabaseEndDataBase18_clbk CRFNewDatabaseEndDataBase18_user(nullptr);
        
        Info::CRFNewDatabaseEroorActionProcSQL_ERROR20_ptr CRFNewDatabaseEroorActionProcSQL_ERROR20_next(nullptr);
        Info::CRFNewDatabaseEroorActionProcSQL_ERROR20_clbk CRFNewDatabaseEroorActionProcSQL_ERROR20_user(nullptr);
        
        Info::CRFNewDatabaseErrFmtLog22_ptr CRFNewDatabaseErrFmtLog22_next(nullptr);
        Info::CRFNewDatabaseErrFmtLog22_clbk CRFNewDatabaseErrFmtLog22_user(nullptr);
        
        Info::CRFNewDatabaseErrFmtLog24_ptr CRFNewDatabaseErrFmtLog24_next(nullptr);
        Info::CRFNewDatabaseErrFmtLog24_clbk CRFNewDatabaseErrFmtLog24_user(nullptr);
        
        Info::CRFNewDatabaseErrLog26_ptr CRFNewDatabaseErrLog26_next(nullptr);
        Info::CRFNewDatabaseErrLog26_clbk CRFNewDatabaseErrLog26_user(nullptr);
        
        Info::CRFNewDatabaseErrorAction28_ptr CRFNewDatabaseErrorAction28_next(nullptr);
        Info::CRFNewDatabaseErrorAction28_clbk CRFNewDatabaseErrorAction28_user(nullptr);
        
        Info::CRFNewDatabaseErrorMsgLog30_ptr CRFNewDatabaseErrorMsgLog30_next(nullptr);
        Info::CRFNewDatabaseErrorMsgLog30_clbk CRFNewDatabaseErrorMsgLog30_user(nullptr);
        
        Info::CRFNewDatabaseErrorMsgLog32_ptr CRFNewDatabaseErrorMsgLog32_next(nullptr);
        Info::CRFNewDatabaseErrorMsgLog32_clbk CRFNewDatabaseErrorMsgLog32_user(nullptr);
        
        Info::CRFNewDatabaseExecUpdateBinaryQuery34_ptr CRFNewDatabaseExecUpdateBinaryQuery34_next(nullptr);
        Info::CRFNewDatabaseExecUpdateBinaryQuery34_clbk CRFNewDatabaseExecUpdateBinaryQuery34_user(nullptr);
        
        Info::CRFNewDatabaseExecUpdateQuery36_ptr CRFNewDatabaseExecUpdateQuery36_next(nullptr);
        Info::CRFNewDatabaseExecUpdateQuery36_clbk CRFNewDatabaseExecUpdateQuery36_user(nullptr);
        
        Info::CRFNewDatabaseExecUpdateQuery38_ptr CRFNewDatabaseExecUpdateQuery38_next(nullptr);
        Info::CRFNewDatabaseExecUpdateQuery38_clbk CRFNewDatabaseExecUpdateQuery38_user(nullptr);
        
        Info::CRFNewDatabaseFmtLog40_ptr CRFNewDatabaseFmtLog40_next(nullptr);
        Info::CRFNewDatabaseFmtLog40_clbk CRFNewDatabaseFmtLog40_user(nullptr);
        
        Info::CRFNewDatabaseFmtLog42_ptr CRFNewDatabaseFmtLog42_next(nullptr);
        Info::CRFNewDatabaseFmtLog42_clbk CRFNewDatabaseFmtLog42_user(nullptr);
        
        Info::CRFNewDatabaseFreeSelectHandle44_ptr CRFNewDatabaseFreeSelectHandle44_next(nullptr);
        Info::CRFNewDatabaseFreeSelectHandle44_clbk CRFNewDatabaseFreeSelectHandle44_user(nullptr);
        
        Info::CRFNewDatabaseFreeUpdateHandle46_ptr CRFNewDatabaseFreeUpdateHandle46_next(nullptr);
        Info::CRFNewDatabaseFreeUpdateHandle46_clbk CRFNewDatabaseFreeUpdateHandle46_user(nullptr);
        
        Info::CRFNewDatabaseGetLocalHour48_ptr CRFNewDatabaseGetLocalHour48_next(nullptr);
        Info::CRFNewDatabaseGetLocalHour48_clbk CRFNewDatabaseGetLocalHour48_user(nullptr);
        
        Info::CRFNewDatabaseIsConectionActive50_ptr CRFNewDatabaseIsConectionActive50_next(nullptr);
        Info::CRFNewDatabaseIsConectionActive50_clbk CRFNewDatabaseIsConectionActive50_user(nullptr);
        
        Info::CRFNewDatabaseLog52_ptr CRFNewDatabaseLog52_next(nullptr);
        Info::CRFNewDatabaseLog52_clbk CRFNewDatabaseLog52_user(nullptr);
        
        Info::CRFNewDatabaseReConnectDataBase54_ptr CRFNewDatabaseReConnectDataBase54_next(nullptr);
        Info::CRFNewDatabaseReConnectDataBase54_clbk CRFNewDatabaseReConnectDataBase54_user(nullptr);
        
        Info::CRFNewDatabaseRollbackTransaction56_ptr CRFNewDatabaseRollbackTransaction56_next(nullptr);
        Info::CRFNewDatabaseRollbackTransaction56_clbk CRFNewDatabaseRollbackTransaction56_user(nullptr);
        
        Info::CRFNewDatabaseSQLExecDirect_RetErrCode58_ptr CRFNewDatabaseSQLExecDirect_RetErrCode58_next(nullptr);
        Info::CRFNewDatabaseSQLExecDirect_RetErrCode58_clbk CRFNewDatabaseSQLExecDirect_RetErrCode58_user(nullptr);
        
        Info::CRFNewDatabaseSQLFetch_RetErrCode60_ptr CRFNewDatabaseSQLFetch_RetErrCode60_next(nullptr);
        Info::CRFNewDatabaseSQLFetch_RetErrCode60_clbk CRFNewDatabaseSQLFetch_RetErrCode60_user(nullptr);
        
        Info::CRFNewDatabaseSQLGetData_Binary_RetErrCode62_ptr CRFNewDatabaseSQLGetData_Binary_RetErrCode62_next(nullptr);
        Info::CRFNewDatabaseSQLGetData_Binary_RetErrCode62_clbk CRFNewDatabaseSQLGetData_Binary_RetErrCode62_user(nullptr);
        
        Info::CRFNewDatabaseSQLGetData_RetErrCode64_ptr CRFNewDatabaseSQLGetData_RetErrCode64_next(nullptr);
        Info::CRFNewDatabaseSQLGetData_RetErrCode64_clbk CRFNewDatabaseSQLGetData_RetErrCode64_user(nullptr);
        
        Info::CRFNewDatabaseSelectCleanUp66_ptr CRFNewDatabaseSelectCleanUp66_next(nullptr);
        Info::CRFNewDatabaseSelectCleanUp66_clbk CRFNewDatabaseSelectCleanUp66_user(nullptr);
        
        Info::CRFNewDatabaseSelect_NextHourDate68_ptr CRFNewDatabaseSelect_NextHourDate68_next(nullptr);
        Info::CRFNewDatabaseSelect_NextHourDate68_clbk CRFNewDatabaseSelect_NextHourDate68_user(nullptr);
        
        Info::CRFNewDatabaseSetAutoCommitMode70_ptr CRFNewDatabaseSetAutoCommitMode70_next(nullptr);
        Info::CRFNewDatabaseSetAutoCommitMode70_clbk CRFNewDatabaseSetAutoCommitMode70_user(nullptr);
        
        Info::CRFNewDatabaseSetLogFile72_ptr CRFNewDatabaseSetLogFile72_next(nullptr);
        Info::CRFNewDatabaseSetLogFile72_clbk CRFNewDatabaseSetLogFile72_user(nullptr);
        
        Info::CRFNewDatabaseSetReconnectFailExitFlag74_ptr CRFNewDatabaseSetReconnectFailExitFlag74_next(nullptr);
        Info::CRFNewDatabaseSetReconnectFailExitFlag74_clbk CRFNewDatabaseSetReconnectFailExitFlag74_user(nullptr);
        
        Info::CRFNewDatabaseStartDataBase76_ptr CRFNewDatabaseStartDataBase76_next(nullptr);
        Info::CRFNewDatabaseStartDataBase76_clbk CRFNewDatabaseStartDataBase76_user(nullptr);
        
        Info::CRFNewDatabaseTableExist78_ptr CRFNewDatabaseTableExist78_next(nullptr);
        Info::CRFNewDatabaseTableExist78_clbk CRFNewDatabaseTableExist78_user(nullptr);
        
        
        Info::CRFNewDatabasedtor_CRFNewDatabase83_ptr CRFNewDatabasedtor_CRFNewDatabase83_next(nullptr);
        Info::CRFNewDatabasedtor_CRFNewDatabase83_clbk CRFNewDatabasedtor_CRFNewDatabase83_user(nullptr);
        
        bool CRFNewDatabaseAllocSelectHandle2_wrapper(struct CRFNewDatabase* _this)
        {
           return CRFNewDatabaseAllocSelectHandle2_user(_this, CRFNewDatabaseAllocSelectHandle2_next);
        };
        bool CRFNewDatabaseAllocUpdateHandle4_wrapper(struct CRFNewDatabase* _this)
        {
           return CRFNewDatabaseAllocUpdateHandle4_user(_this, CRFNewDatabaseAllocUpdateHandle4_next);
        };
        
        void CRFNewDatabasector_CRFNewDatabase6_wrapper(struct CRFNewDatabase* _this)
        {
           CRFNewDatabasector_CRFNewDatabase6_user(_this, CRFNewDatabasector_CRFNewDatabase6_next);
        };
        void CRFNewDatabaseCheckLogFileHour8_wrapper(struct CRFNewDatabase* _this)
        {
           CRFNewDatabaseCheckLogFileHour8_user(_this, CRFNewDatabaseCheckLogFileHour8_next);
        };
        bool CRFNewDatabaseCommitTransaction10_wrapper(struct CRFNewDatabase* _this)
        {
           return CRFNewDatabaseCommitTransaction10_user(_this, CRFNewDatabaseCommitTransaction10_next);
        };
        bool CRFNewDatabaseConfigUserODBC12_wrapper(struct CRFNewDatabase* _this, char* szDSN, char* szServer, char* szDatabase, uint16_t wPort)
        {
           return CRFNewDatabaseConfigUserODBC12_user(_this, szDSN, szServer, szDatabase, wPort, CRFNewDatabaseConfigUserODBC12_next);
        };
        void CRFNewDatabaseDiagRecALog14_wrapper(struct CRFNewDatabase* _this, int16_t sqlRet, int16_t HandleType, void* Handle)
        {
           CRFNewDatabaseDiagRecALog14_user(_this, sqlRet, HandleType, Handle, CRFNewDatabaseDiagRecALog14_next);
        };
        void CRFNewDatabaseDiagRecWLog16_wrapper(struct CRFNewDatabase* _this, int16_t sqlRet, int16_t HandleType, void* Handle)
        {
           CRFNewDatabaseDiagRecWLog16_user(_this, sqlRet, HandleType, Handle, CRFNewDatabaseDiagRecWLog16_next);
        };
        void CRFNewDatabaseEndDataBase18_wrapper(struct CRFNewDatabase* _this)
        {
           CRFNewDatabaseEndDataBase18_user(_this, CRFNewDatabaseEndDataBase18_next);
        };
        bool CRFNewDatabaseEroorActionProcSQL_ERROR20_wrapper(struct CRFNewDatabase* _this, void* SQLStmt)
        {
           return CRFNewDatabaseEroorActionProcSQL_ERROR20_user(_this, SQLStmt, CRFNewDatabaseEroorActionProcSQL_ERROR20_next);
        };
        void CRFNewDatabaseErrFmtLog22_wrapper(struct CRFNewDatabase* _this, char* fmt)
        {
           CRFNewDatabaseErrFmtLog22_user(_this, fmt, CRFNewDatabaseErrFmtLog22_next);
        };
        void CRFNewDatabaseErrFmtLog24_wrapper(struct CRFNewDatabase* _this, wchar_t* lpcwFmt)
        {
           CRFNewDatabaseErrFmtLog24_user(_this, lpcwFmt, CRFNewDatabaseErrFmtLog24_next);
        };
        void CRFNewDatabaseErrLog26_wrapper(struct CRFNewDatabase* _this, char* szLog)
        {
           CRFNewDatabaseErrLog26_user(_this, szLog, CRFNewDatabaseErrLog26_next);
        };
        void CRFNewDatabaseErrorAction28_wrapper(struct CRFNewDatabase* _this, int16_t sqlRet, void* SQLStmt)
        {
           CRFNewDatabaseErrorAction28_user(_this, sqlRet, SQLStmt, CRFNewDatabaseErrorAction28_next);
        };
        void CRFNewDatabaseErrorMsgLog30_wrapper(struct CRFNewDatabase* _this, int16_t sqlRet, char* strQuery, char* strKind, void* SQLStmt)
        {
           CRFNewDatabaseErrorMsgLog30_user(_this, sqlRet, strQuery, strKind, SQLStmt, CRFNewDatabaseErrorMsgLog30_next);
        };
        void CRFNewDatabaseErrorMsgLog32_wrapper(struct CRFNewDatabase* _this, int16_t sqlRet, wchar_t* strQuery, wchar_t* strKind, void* SQLStmt)
        {
           CRFNewDatabaseErrorMsgLog32_user(_this, sqlRet, strQuery, strKind, SQLStmt, CRFNewDatabaseErrorMsgLog32_next);
        };
        bool CRFNewDatabaseExecUpdateBinaryQuery34_wrapper(struct CRFNewDatabase* _this, char* strQuery, void* buf, int size, bool bNoDataError)
        {
           return CRFNewDatabaseExecUpdateBinaryQuery34_user(_this, strQuery, buf, size, bNoDataError, CRFNewDatabaseExecUpdateBinaryQuery34_next);
        };
        bool CRFNewDatabaseExecUpdateQuery36_wrapper(struct CRFNewDatabase* _this, char* strQuery, bool bNoDataError)
        {
           return CRFNewDatabaseExecUpdateQuery36_user(_this, strQuery, bNoDataError, CRFNewDatabaseExecUpdateQuery36_next);
        };
        bool CRFNewDatabaseExecUpdateQuery38_wrapper(struct CRFNewDatabase* _this, wchar_t* wstrQuery, bool bNoDataError)
        {
           return CRFNewDatabaseExecUpdateQuery38_user(_this, wstrQuery, bNoDataError, CRFNewDatabaseExecUpdateQuery38_next);
        };
        void CRFNewDatabaseFmtLog40_wrapper(struct CRFNewDatabase* _this, char* fmt)
        {
           CRFNewDatabaseFmtLog40_user(_this, fmt, CRFNewDatabaseFmtLog40_next);
        };
        void CRFNewDatabaseFmtLog42_wrapper(struct CRFNewDatabase* _this, wchar_t* lpcwFmt)
        {
           CRFNewDatabaseFmtLog42_user(_this, lpcwFmt, CRFNewDatabaseFmtLog42_next);
        };
        bool CRFNewDatabaseFreeSelectHandle44_wrapper(struct CRFNewDatabase* _this)
        {
           return CRFNewDatabaseFreeSelectHandle44_user(_this, CRFNewDatabaseFreeSelectHandle44_next);
        };
        bool CRFNewDatabaseFreeUpdateHandle46_wrapper(struct CRFNewDatabase* _this)
        {
           return CRFNewDatabaseFreeUpdateHandle46_user(_this, CRFNewDatabaseFreeUpdateHandle46_next);
        };
        char CRFNewDatabaseGetLocalHour48_wrapper(struct CRFNewDatabase* _this)
        {
           return CRFNewDatabaseGetLocalHour48_user(_this, CRFNewDatabaseGetLocalHour48_next);
        };
        bool CRFNewDatabaseIsConectionActive50_wrapper(struct CRFNewDatabase* _this)
        {
           return CRFNewDatabaseIsConectionActive50_user(_this, CRFNewDatabaseIsConectionActive50_next);
        };
        void CRFNewDatabaseLog52_wrapper(struct CRFNewDatabase* _this, char* szLog)
        {
           CRFNewDatabaseLog52_user(_this, szLog, CRFNewDatabaseLog52_next);
        };
        bool CRFNewDatabaseReConnectDataBase54_wrapper(struct CRFNewDatabase* _this)
        {
           return CRFNewDatabaseReConnectDataBase54_user(_this, CRFNewDatabaseReConnectDataBase54_next);
        };
        bool CRFNewDatabaseRollbackTransaction56_wrapper(struct CRFNewDatabase* _this)
        {
           return CRFNewDatabaseRollbackTransaction56_user(_this, CRFNewDatabaseRollbackTransaction56_next);
        };
        char CRFNewDatabaseSQLExecDirect_RetErrCode58_wrapper(struct CRFNewDatabase* _this, char* strQuery)
        {
           return CRFNewDatabaseSQLExecDirect_RetErrCode58_user(_this, strQuery, CRFNewDatabaseSQLExecDirect_RetErrCode58_next);
        };
        char CRFNewDatabaseSQLFetch_RetErrCode60_wrapper(struct CRFNewDatabase* _this, char* strQuery)
        {
           return CRFNewDatabaseSQLFetch_RetErrCode60_user(_this, strQuery, CRFNewDatabaseSQLFetch_RetErrCode60_next);
        };
        char CRFNewDatabaseSQLGetData_Binary_RetErrCode62_wrapper(struct CRFNewDatabase* _this, char* strQuery, uint16_t* ColumnNumber, char* pData, uint64_t tDataSize)
        {
           return CRFNewDatabaseSQLGetData_Binary_RetErrCode62_user(_this, strQuery, ColumnNumber, pData, tDataSize, CRFNewDatabaseSQLGetData_Binary_RetErrCode62_next);
        };
        char CRFNewDatabaseSQLGetData_RetErrCode64_wrapper(struct CRFNewDatabase* _this, char* strQuery, uint16_t* ColumnNumber, int16_t TargetType, void* TargetValue)
        {
           return CRFNewDatabaseSQLGetData_RetErrCode64_user(_this, strQuery, ColumnNumber, TargetType, TargetValue, CRFNewDatabaseSQLGetData_RetErrCode64_next);
        };
        void CRFNewDatabaseSelectCleanUp66_wrapper(struct CRFNewDatabase* _this, char* strQuery)
        {
           CRFNewDatabaseSelectCleanUp66_user(_this, strQuery, CRFNewDatabaseSelectCleanUp66_next);
        };
        bool CRFNewDatabaseSelect_NextHourDate68_wrapper(struct CRFNewDatabase* _this, char byAddHour, char* szDate)
        {
           return CRFNewDatabaseSelect_NextHourDate68_user(_this, byAddHour, szDate, CRFNewDatabaseSelect_NextHourDate68_next);
        };
        void CRFNewDatabaseSetAutoCommitMode70_wrapper(struct CRFNewDatabase* _this, bool bAutoCommit)
        {
           CRFNewDatabaseSetAutoCommitMode70_user(_this, bAutoCommit, CRFNewDatabaseSetAutoCommitMode70_next);
        };
        void CRFNewDatabaseSetLogFile72_wrapper(struct CRFNewDatabase* _this, char* szUpperLogPath, char* szOdbcName)
        {
           CRFNewDatabaseSetLogFile72_user(_this, szUpperLogPath, szOdbcName, CRFNewDatabaseSetLogFile72_next);
        };
        void CRFNewDatabaseSetReconnectFailExitFlag74_wrapper(struct CRFNewDatabase* _this, bool bFlag)
        {
           CRFNewDatabaseSetReconnectFailExitFlag74_user(_this, bFlag, CRFNewDatabaseSetReconnectFailExitFlag74_next);
        };
        bool CRFNewDatabaseStartDataBase76_wrapper(struct CRFNewDatabase* _this, char* odbcName, char* accountName, char* passWord)
        {
           return CRFNewDatabaseStartDataBase76_user(_this, odbcName, accountName, passWord, CRFNewDatabaseStartDataBase76_next);
        };
        bool CRFNewDatabaseTableExist78_wrapper(struct CRFNewDatabase* _this, char* szTableName)
        {
           return CRFNewDatabaseTableExist78_user(_this, szTableName, CRFNewDatabaseTableExist78_next);
        };
        
        void CRFNewDatabasedtor_CRFNewDatabase83_wrapper(struct CRFNewDatabase* _this)
        {
           CRFNewDatabasedtor_CRFNewDatabase83_user(_this, CRFNewDatabasedtor_CRFNewDatabase83_next);
        };
        
        ::std::array<hook_record, 40> CRFNewDatabase_functions = 
        {
            _hook_record {
                (LPVOID)0x1404875a0L,
                (LPVOID *)&CRFNewDatabaseAllocSelectHandle2_user,
                (LPVOID *)&CRFNewDatabaseAllocSelectHandle2_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseAllocSelectHandle2_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)())&CRFNewDatabase::AllocSelectHandle)
            },
            _hook_record {
                (LPVOID)0x140487620L,
                (LPVOID *)&CRFNewDatabaseAllocUpdateHandle4_user,
                (LPVOID *)&CRFNewDatabaseAllocUpdateHandle4_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseAllocUpdateHandle4_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)())&CRFNewDatabase::AllocUpdateHandle)
            },
            _hook_record {
                (LPVOID)0x140485f80L,
                (LPVOID *)&CRFNewDatabasector_CRFNewDatabase6_user,
                (LPVOID *)&CRFNewDatabasector_CRFNewDatabase6_next,
                (LPVOID)cast_pointer_function(CRFNewDatabasector_CRFNewDatabase6_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)())&CRFNewDatabase::ctor_CRFNewDatabase)
            },
            _hook_record {
                (LPVOID)0x140487a50L,
                (LPVOID *)&CRFNewDatabaseCheckLogFileHour8_user,
                (LPVOID *)&CRFNewDatabaseCheckLogFileHour8_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseCheckLogFileHour8_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)())&CRFNewDatabase::CheckLogFileHour)
            },
            _hook_record {
                (LPVOID)0x1404874c0L,
                (LPVOID *)&CRFNewDatabaseCommitTransaction10_user,
                (LPVOID *)&CRFNewDatabaseCommitTransaction10_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseCommitTransaction10_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)())&CRFNewDatabase::CommitTransaction)
            },
            _hook_record {
                (LPVOID)0x1404880c0L,
                (LPVOID *)&CRFNewDatabaseConfigUserODBC12_user,
                (LPVOID *)&CRFNewDatabaseConfigUserODBC12_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseConfigUserODBC12_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)(char*, char*, char*, uint16_t))&CRFNewDatabase::ConfigUserODBC)
            },
            _hook_record {
                (LPVOID)0x1404862c0L,
                (LPVOID *)&CRFNewDatabaseDiagRecALog14_user,
                (LPVOID *)&CRFNewDatabaseDiagRecALog14_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseDiagRecALog14_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(int16_t, int16_t, void*))&CRFNewDatabase::DiagRecALog)
            },
            _hook_record {
                (LPVOID)0x140486420L,
                (LPVOID *)&CRFNewDatabaseDiagRecWLog16_user,
                (LPVOID *)&CRFNewDatabaseDiagRecWLog16_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseDiagRecWLog16_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(int16_t, int16_t, void*))&CRFNewDatabase::DiagRecWLog)
            },
            _hook_record {
                (LPVOID)0x1404869c0L,
                (LPVOID *)&CRFNewDatabaseEndDataBase18_user,
                (LPVOID *)&CRFNewDatabaseEndDataBase18_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseEndDataBase18_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)())&CRFNewDatabase::EndDataBase)
            },
            _hook_record {
                (LPVOID)0x140486d40L,
                (LPVOID *)&CRFNewDatabaseEroorActionProcSQL_ERROR20_user,
                (LPVOID *)&CRFNewDatabaseEroorActionProcSQL_ERROR20_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseEroorActionProcSQL_ERROR20_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)(void*))&CRFNewDatabase::EroorActionProcSQL_ERROR)
            },
            _hook_record {
                (LPVOID)0x140484e30L,
                (LPVOID *)&CRFNewDatabaseErrFmtLog22_user,
                (LPVOID *)&CRFNewDatabaseErrFmtLog22_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseErrFmtLog22_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(char*))&CRFNewDatabase::ErrFmtLog)
            },
            _hook_record {
                (LPVOID)0x140489450L,
                (LPVOID *)&CRFNewDatabaseErrFmtLog24_user,
                (LPVOID *)&CRFNewDatabaseErrFmtLog24_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseErrFmtLog24_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(wchar_t*))&CRFNewDatabase::ErrFmtLog)
            },
            _hook_record {
                (LPVOID)0x1404894f0L,
                (LPVOID *)&CRFNewDatabaseErrLog26_user,
                (LPVOID *)&CRFNewDatabaseErrLog26_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseErrLog26_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(char*))&CRFNewDatabase::ErrLog)
            },
            _hook_record {
                (LPVOID)0x140486c70L,
                (LPVOID *)&CRFNewDatabaseErrorAction28_user,
                (LPVOID *)&CRFNewDatabaseErrorAction28_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseErrorAction28_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(int16_t, void*))&CRFNewDatabase::ErrorAction)
            },
            _hook_record {
                (LPVOID)0x140486ec0L,
                (LPVOID *)&CRFNewDatabaseErrorMsgLog30_user,
                (LPVOID *)&CRFNewDatabaseErrorMsgLog30_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseErrorMsgLog30_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(int16_t, char*, char*, void*))&CRFNewDatabase::ErrorMsgLog)
            },
            _hook_record {
                (LPVOID)0x140487060L,
                (LPVOID *)&CRFNewDatabaseErrorMsgLog32_user,
                (LPVOID *)&CRFNewDatabaseErrorMsgLog32_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseErrorMsgLog32_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(int16_t, wchar_t*, wchar_t*, void*))&CRFNewDatabase::ErrorMsgLog)
            },
            _hook_record {
                (LPVOID)0x140488250L,
                (LPVOID *)&CRFNewDatabaseExecUpdateBinaryQuery34_user,
                (LPVOID *)&CRFNewDatabaseExecUpdateBinaryQuery34_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseExecUpdateBinaryQuery34_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)(char*, void*, int, bool))&CRFNewDatabase::ExecUpdateBinaryQuery)
            },
            _hook_record {
                (LPVOID)0x1404872f0L,
                (LPVOID *)&CRFNewDatabaseExecUpdateQuery36_user,
                (LPVOID *)&CRFNewDatabaseExecUpdateQuery36_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseExecUpdateQuery36_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)(char*, bool))&CRFNewDatabase::ExecUpdateQuery)
            },
            _hook_record {
                (LPVOID)0x1404871a0L,
                (LPVOID *)&CRFNewDatabaseExecUpdateQuery38_user,
                (LPVOID *)&CRFNewDatabaseExecUpdateQuery38_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseExecUpdateQuery38_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)(wchar_t*, bool))&CRFNewDatabase::ExecUpdateQuery)
            },
            _hook_record {
                (LPVOID)0x140484d90L,
                (LPVOID *)&CRFNewDatabaseFmtLog40_user,
                (LPVOID *)&CRFNewDatabaseFmtLog40_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseFmtLog40_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(char*))&CRFNewDatabase::FmtLog)
            },
            _hook_record {
                (LPVOID)0x140489550L,
                (LPVOID *)&CRFNewDatabaseFmtLog42_user,
                (LPVOID *)&CRFNewDatabaseFmtLog42_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseFmtLog42_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(wchar_t*))&CRFNewDatabase::FmtLog)
            },
            _hook_record {
                (LPVOID)0x1404876a0L,
                (LPVOID *)&CRFNewDatabaseFreeSelectHandle44_user,
                (LPVOID *)&CRFNewDatabaseFreeSelectHandle44_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseFreeSelectHandle44_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)())&CRFNewDatabase::FreeSelectHandle)
            },
            _hook_record {
                (LPVOID)0x140487730L,
                (LPVOID *)&CRFNewDatabaseFreeUpdateHandle46_user,
                (LPVOID *)&CRFNewDatabaseFreeUpdateHandle46_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseFreeUpdateHandle46_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)())&CRFNewDatabase::FreeUpdateHandle)
            },
            _hook_record {
                (LPVOID)0x140487000L,
                (LPVOID *)&CRFNewDatabaseGetLocalHour48_user,
                (LPVOID *)&CRFNewDatabaseGetLocalHour48_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseGetLocalHour48_wrapper),
                (LPVOID)cast_pointer_function((char(CRFNewDatabase::*)())&CRFNewDatabase::GetLocalHour)
            },
            _hook_record {
                (LPVOID)0x1401c7760L,
                (LPVOID *)&CRFNewDatabaseIsConectionActive50_user,
                (LPVOID *)&CRFNewDatabaseIsConectionActive50_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseIsConectionActive50_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)())&CRFNewDatabase::IsConectionActive)
            },
            _hook_record {
                (LPVOID)0x140484d30L,
                (LPVOID *)&CRFNewDatabaseLog52_user,
                (LPVOID *)&CRFNewDatabaseLog52_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseLog52_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(char*))&CRFNewDatabase::Log)
            },
            _hook_record {
                (LPVOID)0x140486b00L,
                (LPVOID *)&CRFNewDatabaseReConnectDataBase54_user,
                (LPVOID *)&CRFNewDatabaseReConnectDataBase54_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseReConnectDataBase54_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)())&CRFNewDatabase::ReConnectDataBase)
            },
            _hook_record {
                (LPVOID)0x140487530L,
                (LPVOID *)&CRFNewDatabaseRollbackTransaction56_user,
                (LPVOID *)&CRFNewDatabaseRollbackTransaction56_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseRollbackTransaction56_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)())&CRFNewDatabase::RollbackTransaction)
            },
            _hook_record {
                (LPVOID)0x140484ed0L,
                (LPVOID *)&CRFNewDatabaseSQLExecDirect_RetErrCode58_user,
                (LPVOID *)&CRFNewDatabaseSQLExecDirect_RetErrCode58_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseSQLExecDirect_RetErrCode58_wrapper),
                (LPVOID)cast_pointer_function((char(CRFNewDatabase::*)(char*))&CRFNewDatabase::SQLExecDirect_RetErrCode)
            },
            _hook_record {
                (LPVOID)0x140485020L,
                (LPVOID *)&CRFNewDatabaseSQLFetch_RetErrCode60_user,
                (LPVOID *)&CRFNewDatabaseSQLFetch_RetErrCode60_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseSQLFetch_RetErrCode60_wrapper),
                (LPVOID)cast_pointer_function((char(CRFNewDatabase::*)(char*))&CRFNewDatabase::SQLFetch_RetErrCode)
            },
            _hook_record {
                (LPVOID)0x1404da460L,
                (LPVOID *)&CRFNewDatabaseSQLGetData_Binary_RetErrCode62_user,
                (LPVOID *)&CRFNewDatabaseSQLGetData_Binary_RetErrCode62_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseSQLGetData_Binary_RetErrCode62_wrapper),
                (LPVOID)cast_pointer_function((char(CRFNewDatabase::*)(char*, uint16_t*, char*, uint64_t))&CRFNewDatabase::SQLGetData_Binary_RetErrCode)
            },
            _hook_record {
                (LPVOID)0x140485130L,
                (LPVOID *)&CRFNewDatabaseSQLGetData_RetErrCode64_user,
                (LPVOID *)&CRFNewDatabaseSQLGetData_RetErrCode64_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseSQLGetData_RetErrCode64_wrapper),
                (LPVOID)cast_pointer_function((char(CRFNewDatabase::*)(char*, uint16_t*, int16_t, void*))&CRFNewDatabase::SQLGetData_RetErrCode)
            },
            _hook_record {
                (LPVOID)0x140485300L,
                (LPVOID *)&CRFNewDatabaseSelectCleanUp66_user,
                (LPVOID *)&CRFNewDatabaseSelectCleanUp66_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseSelectCleanUp66_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(char*))&CRFNewDatabase::SelectCleanUp)
            },
            _hook_record {
                (LPVOID)0x140487d50L,
                (LPVOID *)&CRFNewDatabaseSelect_NextHourDate68_user,
                (LPVOID *)&CRFNewDatabaseSelect_NextHourDate68_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseSelect_NextHourDate68_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)(char, char*))&CRFNewDatabase::Select_NextHourDate)
            },
            _hook_record {
                (LPVOID)0x140487440L,
                (LPVOID *)&CRFNewDatabaseSetAutoCommitMode70_user,
                (LPVOID *)&CRFNewDatabaseSetAutoCommitMode70_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseSetAutoCommitMode70_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(bool))&CRFNewDatabase::SetAutoCommitMode)
            },
            _hook_record {
                (LPVOID)0x140488640L,
                (LPVOID *)&CRFNewDatabaseSetLogFile72_user,
                (LPVOID *)&CRFNewDatabaseSetLogFile72_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseSetLogFile72_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(char*, char*))&CRFNewDatabase::SetLogFile)
            },
            _hook_record {
                (LPVOID)0x1402f2ab0L,
                (LPVOID *)&CRFNewDatabaseSetReconnectFailExitFlag74_user,
                (LPVOID *)&CRFNewDatabaseSetReconnectFailExitFlag74_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseSetReconnectFailExitFlag74_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)(bool))&CRFNewDatabase::SetReconnectFailExitFlag)
            },
            _hook_record {
                (LPVOID)0x140486580L,
                (LPVOID *)&CRFNewDatabaseStartDataBase76_user,
                (LPVOID *)&CRFNewDatabaseStartDataBase76_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseStartDataBase76_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)(char*, char*, char*))&CRFNewDatabase::StartDataBase)
            },
            _hook_record {
                (LPVOID)0x1404877c0L,
                (LPVOID *)&CRFNewDatabaseTableExist78_user,
                (LPVOID *)&CRFNewDatabaseTableExist78_next,
                (LPVOID)cast_pointer_function(CRFNewDatabaseTableExist78_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFNewDatabase::*)(char*))&CRFNewDatabase::TableExist)
            },
            _hook_record {
                (LPVOID)0x140486150L,
                (LPVOID *)&CRFNewDatabasedtor_CRFNewDatabase83_user,
                (LPVOID *)&CRFNewDatabasedtor_CRFNewDatabase83_next,
                (LPVOID)cast_pointer_function(CRFNewDatabasedtor_CRFNewDatabase83_wrapper),
                (LPVOID)cast_pointer_function((void(CRFNewDatabase::*)())&CRFNewDatabase::dtor_CRFNewDatabase)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
