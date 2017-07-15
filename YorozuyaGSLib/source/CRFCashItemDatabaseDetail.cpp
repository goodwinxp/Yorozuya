#include <CRFCashItemDatabaseDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CRFCashItemDatabasector_CRFCashItemDatabase2_ptr CRFCashItemDatabasector_CRFCashItemDatabase2_next(nullptr);
        Info::CRFCashItemDatabasector_CRFCashItemDatabase2_clbk CRFCashItemDatabasector_CRFCashItemDatabase2_user(nullptr);
        
        Info::CRFCashItemDatabaseCallProc_InsertCashItemLog4_ptr CRFCashItemDatabaseCallProc_InsertCashItemLog4_next(nullptr);
        Info::CRFCashItemDatabaseCallProc_InsertCashItemLog4_clbk CRFCashItemDatabaseCallProc_InsertCashItemLog4_user(nullptr);
        
        Info::CRFCashItemDatabaseCallProc_RFONLINE_Cancel6_ptr CRFCashItemDatabaseCallProc_RFONLINE_Cancel6_next(nullptr);
        Info::CRFCashItemDatabaseCallProc_RFONLINE_Cancel6_clbk CRFCashItemDatabaseCallProc_RFONLINE_Cancel6_user(nullptr);
        
        Info::CRFCashItemDatabaseCallProc_RFONLINE_Cancel_Jap8_ptr CRFCashItemDatabaseCallProc_RFONLINE_Cancel_Jap8_next(nullptr);
        Info::CRFCashItemDatabaseCallProc_RFONLINE_Cancel_Jap8_clbk CRFCashItemDatabaseCallProc_RFONLINE_Cancel_Jap8_user(nullptr);
        
        Info::CRFCashItemDatabaseCallProc_RFOnlineAuth10_ptr CRFCashItemDatabaseCallProc_RFOnlineAuth10_next(nullptr);
        Info::CRFCashItemDatabaseCallProc_RFOnlineAuth10_clbk CRFCashItemDatabaseCallProc_RFOnlineAuth10_user(nullptr);
        
        Info::CRFCashItemDatabaseCallProc_RFOnlineAuth_Jap12_ptr CRFCashItemDatabaseCallProc_RFOnlineAuth_Jap12_next(nullptr);
        Info::CRFCashItemDatabaseCallProc_RFOnlineAuth_Jap12_clbk CRFCashItemDatabaseCallProc_RFOnlineAuth_Jap12_user(nullptr);
        
        Info::CRFCashItemDatabaseCallProc_RFOnlineAvg_Event14_ptr CRFCashItemDatabaseCallProc_RFOnlineAvg_Event14_next(nullptr);
        Info::CRFCashItemDatabaseCallProc_RFOnlineAvg_Event14_clbk CRFCashItemDatabaseCallProc_RFOnlineAvg_Event14_user(nullptr);
        
        Info::CRFCashItemDatabaseCallProc_RFOnlineUse16_ptr CRFCashItemDatabaseCallProc_RFOnlineUse16_next(nullptr);
        Info::CRFCashItemDatabaseCallProc_RFOnlineUse16_clbk CRFCashItemDatabaseCallProc_RFOnlineUse16_user(nullptr);
        
        Info::CRFCashItemDatabaseCallProc_RFOnlineUse_Jap18_ptr CRFCashItemDatabaseCallProc_RFOnlineUse_Jap18_next(nullptr);
        Info::CRFCashItemDatabaseCallProc_RFOnlineUse_Jap18_clbk CRFCashItemDatabaseCallProc_RFOnlineUse_Jap18_user(nullptr);
        
        Info::CRFCashItemDatabasedhRExtractSubString23_ptr CRFCashItemDatabasedhRExtractSubString23_next(nullptr);
        Info::CRFCashItemDatabasedhRExtractSubString23_clbk CRFCashItemDatabasedhRExtractSubString23_user(nullptr);
        
        
        Info::CRFCashItemDatabasedtor_CRFCashItemDatabase25_ptr CRFCashItemDatabasedtor_CRFCashItemDatabase25_next(nullptr);
        Info::CRFCashItemDatabasedtor_CRFCashItemDatabase25_clbk CRFCashItemDatabasedtor_CRFCashItemDatabase25_user(nullptr);
        
        
        void CRFCashItemDatabasector_CRFCashItemDatabase2_wrapper(struct CRFCashItemDatabase* _this)
        {
           CRFCashItemDatabasector_CRFCashItemDatabase2_user(_this, CRFCashItemDatabasector_CRFCashItemDatabase2_next);
        };
        bool CRFCashItemDatabaseCallProc_InsertCashItemLog4_wrapper(struct CRFCashItemDatabase* _this, unsigned int dwSerial, char byLv, char* szItemCode, char* szItemName, char byNum, unsigned int dwCost)
        {
           return CRFCashItemDatabaseCallProc_InsertCashItemLog4_user(_this, dwSerial, byLv, szItemCode, szItemName, byNum, dwCost, CRFCashItemDatabaseCallProc_InsertCashItemLog4_next);
        };
        int CRFCashItemDatabaseCallProc_RFONLINE_Cancel6_wrapper(struct CRFCashItemDatabase* _this, struct _param_cash_rollback::__list* list)
        {
           return CRFCashItemDatabaseCallProc_RFONLINE_Cancel6_user(_this, list, CRFCashItemDatabaseCallProc_RFONLINE_Cancel6_next);
        };
        int CRFCashItemDatabaseCallProc_RFONLINE_Cancel_Jap8_wrapper(struct CRFCashItemDatabase* _this, struct _param_cash_rollback* list, int iIndex)
        {
           return CRFCashItemDatabaseCallProc_RFONLINE_Cancel_Jap8_user(_this, list, iIndex, CRFCashItemDatabaseCallProc_RFONLINE_Cancel_Jap8_next);
        };
        int CRFCashItemDatabaseCallProc_RFOnlineAuth10_wrapper(struct CRFCashItemDatabase* _this, struct _param_cash_select* rParam)
        {
           return CRFCashItemDatabaseCallProc_RFOnlineAuth10_user(_this, rParam, CRFCashItemDatabaseCallProc_RFOnlineAuth10_next);
        };
        int CRFCashItemDatabaseCallProc_RFOnlineAuth_Jap12_wrapper(struct CRFCashItemDatabase* _this, struct _param_cash_select* rParam)
        {
           return CRFCashItemDatabaseCallProc_RFOnlineAuth_Jap12_user(_this, rParam, CRFCashItemDatabaseCallProc_RFOnlineAuth_Jap12_next);
        };
        int CRFCashItemDatabaseCallProc_RFOnlineAvg_Event14_wrapper(struct CRFCashItemDatabase* _this, unsigned int* iAvgCashSelling)
        {
           return CRFCashItemDatabaseCallProc_RFOnlineAvg_Event14_user(_this, iAvgCashSelling, CRFCashItemDatabaseCallProc_RFOnlineAvg_Event14_next);
        };
        int CRFCashItemDatabaseCallProc_RFOnlineUse16_wrapper(struct CRFCashItemDatabase* _this, struct _param_cash_update* rParam, int nIdx)
        {
           return CRFCashItemDatabaseCallProc_RFOnlineUse16_user(_this, rParam, nIdx, CRFCashItemDatabaseCallProc_RFOnlineUse16_next);
        };
        int CRFCashItemDatabaseCallProc_RFOnlineUse_Jap18_wrapper(struct CRFCashItemDatabase* _this, struct _param_cash_update* rParam, int nIdx)
        {
           return CRFCashItemDatabaseCallProc_RFOnlineUse_Jap18_user(_this, rParam, nIdx, CRFCashItemDatabaseCallProc_RFOnlineUse_Jap18_next);
        };
        void CRFCashItemDatabasedhRExtractSubString23_wrapper(struct CRFCashItemDatabase* _this, char* szSub, char* szFull, int n)
        {
           CRFCashItemDatabasedhRExtractSubString23_user(_this, szSub, szFull, n, CRFCashItemDatabasedhRExtractSubString23_next);
        };
        
        void CRFCashItemDatabasedtor_CRFCashItemDatabase25_wrapper(struct CRFCashItemDatabase* _this)
        {
           CRFCashItemDatabasedtor_CRFCashItemDatabase25_user(_this, CRFCashItemDatabasedtor_CRFCashItemDatabase25_next);
        };
        
        ::std::array<hook_record, 11> CRFCashItemDatabase_functions = 
        {
            _hook_record {
                (LPVOID)0x1402f2ae0L,
                (LPVOID *)&CRFCashItemDatabasector_CRFCashItemDatabase2_user,
                (LPVOID *)&CRFCashItemDatabasector_CRFCashItemDatabase2_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabasector_CRFCashItemDatabase2_wrapper),
                (LPVOID)cast_pointer_function((void(CRFCashItemDatabase::*)())&CRFCashItemDatabase::ctor_CRFCashItemDatabase)
            },
            _hook_record {
                (LPVOID)0x140483530L,
                (LPVOID *)&CRFCashItemDatabaseCallProc_InsertCashItemLog4_user,
                (LPVOID *)&CRFCashItemDatabaseCallProc_InsertCashItemLog4_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabaseCallProc_InsertCashItemLog4_wrapper),
                (LPVOID)cast_pointer_function((bool(CRFCashItemDatabase::*)(unsigned int, char, char*, char*, char, unsigned int))&CRFCashItemDatabase::CallProc_InsertCashItemLog)
            },
            _hook_record {
                (LPVOID)0x140482d90L,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFONLINE_Cancel6_user,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFONLINE_Cancel6_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabaseCallProc_RFONLINE_Cancel6_wrapper),
                (LPVOID)cast_pointer_function((int(CRFCashItemDatabase::*)(struct _param_cash_rollback::__list*))&CRFCashItemDatabase::CallProc_RFONLINE_Cancel)
            },
            _hook_record {
                (LPVOID)0x140484090L,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFONLINE_Cancel_Jap8_user,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFONLINE_Cancel_Jap8_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabaseCallProc_RFONLINE_Cancel_Jap8_wrapper),
                (LPVOID)cast_pointer_function((int(CRFCashItemDatabase::*)(struct _param_cash_rollback*, int))&CRFCashItemDatabase::CallProc_RFONLINE_Cancel_Jap)
            },
            _hook_record {
                (LPVOID)0x140482430L,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFOnlineAuth10_user,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFOnlineAuth10_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabaseCallProc_RFOnlineAuth10_wrapper),
                (LPVOID)cast_pointer_function((int(CRFCashItemDatabase::*)(struct _param_cash_select*))&CRFCashItemDatabase::CallProc_RFOnlineAuth)
            },
            _hook_record {
                (LPVOID)0x1404836a0L,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFOnlineAuth_Jap12_user,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFOnlineAuth_Jap12_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabaseCallProc_RFOnlineAuth_Jap12_wrapper),
                (LPVOID)cast_pointer_function((int(CRFCashItemDatabase::*)(struct _param_cash_select*))&CRFCashItemDatabase::CallProc_RFOnlineAuth_Jap)
            },
            _hook_record {
                (LPVOID)0x1404832b0L,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFOnlineAvg_Event14_user,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFOnlineAvg_Event14_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabaseCallProc_RFOnlineAvg_Event14_wrapper),
                (LPVOID)cast_pointer_function((int(CRFCashItemDatabase::*)(unsigned int*))&CRFCashItemDatabase::CallProc_RFOnlineAvg_Event)
            },
            _hook_record {
                (LPVOID)0x140482840L,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFOnlineUse16_user,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFOnlineUse16_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabaseCallProc_RFOnlineUse16_wrapper),
                (LPVOID)cast_pointer_function((int(CRFCashItemDatabase::*)(struct _param_cash_update*, int))&CRFCashItemDatabase::CallProc_RFOnlineUse)
            },
            _hook_record {
                (LPVOID)0x140483a70L,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFOnlineUse_Jap18_user,
                (LPVOID *)&CRFCashItemDatabaseCallProc_RFOnlineUse_Jap18_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabaseCallProc_RFOnlineUse_Jap18_wrapper),
                (LPVOID)cast_pointer_function((int(CRFCashItemDatabase::*)(struct _param_cash_update*, int))&CRFCashItemDatabase::CallProc_RFOnlineUse_Jap)
            },
            _hook_record {
                (LPVOID)0x140483420L,
                (LPVOID *)&CRFCashItemDatabasedhRExtractSubString23_user,
                (LPVOID *)&CRFCashItemDatabasedhRExtractSubString23_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabasedhRExtractSubString23_wrapper),
                (LPVOID)cast_pointer_function((void(CRFCashItemDatabase::*)(char*, char*, int))&CRFCashItemDatabase::dhRExtractSubString)
            },
            _hook_record {
                (LPVOID)0x1402f2bb0L,
                (LPVOID *)&CRFCashItemDatabasedtor_CRFCashItemDatabase25_user,
                (LPVOID *)&CRFCashItemDatabasedtor_CRFCashItemDatabase25_next,
                (LPVOID)cast_pointer_function(CRFCashItemDatabasedtor_CRFCashItemDatabase25_wrapper),
                (LPVOID)cast_pointer_function((void(CRFCashItemDatabase::*)())&CRFCashItemDatabase::dtor_CRFCashItemDatabase)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
