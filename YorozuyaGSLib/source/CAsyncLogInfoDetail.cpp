#include <CAsyncLogInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CAsyncLogInfoctor_CAsyncLogInfo2_ptr CAsyncLogInfoctor_CAsyncLogInfo2_next(nullptr);
        Info::CAsyncLogInfoctor_CAsyncLogInfo2_clbk CAsyncLogInfoctor_CAsyncLogInfo2_user(nullptr);
        
        Info::CAsyncLogInfoGetCount4_ptr CAsyncLogInfoGetCount4_next(nullptr);
        Info::CAsyncLogInfoGetCount4_clbk CAsyncLogInfoGetCount4_user(nullptr);
        
        Info::CAsyncLogInfoGetDirPath6_ptr CAsyncLogInfoGetDirPath6_next(nullptr);
        Info::CAsyncLogInfoGetDirPath6_clbk CAsyncLogInfoGetDirPath6_user(nullptr);
        
        Info::CAsyncLogInfoGetFileName8_ptr CAsyncLogInfoGetFileName8_next(nullptr);
        Info::CAsyncLogInfoGetFileName8_clbk CAsyncLogInfoGetFileName8_user(nullptr);
        
        Info::CAsyncLogInfoGetTypeName10_ptr CAsyncLogInfoGetTypeName10_next(nullptr);
        Info::CAsyncLogInfoGetTypeName10_clbk CAsyncLogInfoGetTypeName10_user(nullptr);
        
        Info::CAsyncLogInfoIncreaseCount12_ptr CAsyncLogInfoIncreaseCount12_next(nullptr);
        Info::CAsyncLogInfoIncreaseCount12_clbk CAsyncLogInfoIncreaseCount12_user(nullptr);
        
        Info::CAsyncLogInfoInit14_ptr CAsyncLogInfoInit14_next(nullptr);
        Info::CAsyncLogInfoInit14_clbk CAsyncLogInfoInit14_user(nullptr);
        
        Info::CAsyncLogInfoUpdateLogFileName16_ptr CAsyncLogInfoUpdateLogFileName16_next(nullptr);
        Info::CAsyncLogInfoUpdateLogFileName16_clbk CAsyncLogInfoUpdateLogFileName16_user(nullptr);
        
        
        Info::CAsyncLogInfodtor_CAsyncLogInfo20_ptr CAsyncLogInfodtor_CAsyncLogInfo20_next(nullptr);
        Info::CAsyncLogInfodtor_CAsyncLogInfo20_clbk CAsyncLogInfodtor_CAsyncLogInfo20_user(nullptr);
        
        
        void CAsyncLogInfoctor_CAsyncLogInfo2_wrapper(struct CAsyncLogInfo* _this)
        {
           CAsyncLogInfoctor_CAsyncLogInfo2_user(_this, CAsyncLogInfoctor_CAsyncLogInfo2_next);
        };
        unsigned int CAsyncLogInfoGetCount4_wrapper(struct CAsyncLogInfo* _this)
        {
           return CAsyncLogInfoGetCount4_user(_this, CAsyncLogInfoGetCount4_next);
        };
        char* CAsyncLogInfoGetDirPath6_wrapper(struct CAsyncLogInfo* _this)
        {
           return CAsyncLogInfoGetDirPath6_user(_this, CAsyncLogInfoGetDirPath6_next);
        };
        char* CAsyncLogInfoGetFileName8_wrapper(struct CAsyncLogInfo* _this)
        {
           return CAsyncLogInfoGetFileName8_user(_this, CAsyncLogInfoGetFileName8_next);
        };
        char* CAsyncLogInfoGetTypeName10_wrapper(struct CAsyncLogInfo* _this)
        {
           return CAsyncLogInfoGetTypeName10_user(_this, CAsyncLogInfoGetTypeName10_next);
        };
        void CAsyncLogInfoIncreaseCount12_wrapper(struct CAsyncLogInfo* _this)
        {
           CAsyncLogInfoIncreaseCount12_user(_this, CAsyncLogInfoIncreaseCount12_next);
        };
        bool CAsyncLogInfoInit14_wrapper(struct CAsyncLogInfo* _this, ASYNC_LOG_TYPE eType, char* szDirPath, char* szTypeName, bool bAddDateFileName, unsigned int dwUpdateFileNameDelay, struct CLogFile* logLoading)
        {
           return CAsyncLogInfoInit14_user(_this, eType, szDirPath, szTypeName, bAddDateFileName, dwUpdateFileNameDelay, logLoading, CAsyncLogInfoInit14_next);
        };
        void CAsyncLogInfoUpdateLogFileName16_wrapper(struct CAsyncLogInfo* _this)
        {
           CAsyncLogInfoUpdateLogFileName16_user(_this, CAsyncLogInfoUpdateLogFileName16_next);
        };
        
        void CAsyncLogInfodtor_CAsyncLogInfo20_wrapper(struct CAsyncLogInfo* _this)
        {
           CAsyncLogInfodtor_CAsyncLogInfo20_user(_this, CAsyncLogInfodtor_CAsyncLogInfo20_next);
        };
        
        ::std::array<hook_record, 9> CAsyncLogInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1403bc9f0L,
                (LPVOID *)&CAsyncLogInfoctor_CAsyncLogInfo2_user,
                (LPVOID *)&CAsyncLogInfoctor_CAsyncLogInfo2_next,
                (LPVOID)cast_pointer_function(CAsyncLogInfoctor_CAsyncLogInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogInfo::*)())&CAsyncLogInfo::ctor_CAsyncLogInfo)
            },
            _hook_record {
                (LPVOID)0x1403c16b0L,
                (LPVOID *)&CAsyncLogInfoGetCount4_user,
                (LPVOID *)&CAsyncLogInfoGetCount4_next,
                (LPVOID)cast_pointer_function(CAsyncLogInfoGetCount4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CAsyncLogInfo::*)())&CAsyncLogInfo::GetCount)
            },
            _hook_record {
                (LPVOID)0x1403c1630L,
                (LPVOID *)&CAsyncLogInfoGetDirPath6_user,
                (LPVOID *)&CAsyncLogInfoGetDirPath6_next,
                (LPVOID)cast_pointer_function(CAsyncLogInfoGetDirPath6_wrapper),
                (LPVOID)cast_pointer_function((char*(CAsyncLogInfo::*)())&CAsyncLogInfo::GetDirPath)
            },
            _hook_record {
                (LPVOID)0x1403c16d0L,
                (LPVOID *)&CAsyncLogInfoGetFileName8_user,
                (LPVOID *)&CAsyncLogInfoGetFileName8_next,
                (LPVOID)cast_pointer_function(CAsyncLogInfoGetFileName8_wrapper),
                (LPVOID)cast_pointer_function((char*(CAsyncLogInfo::*)())&CAsyncLogInfo::GetFileName)
            },
            _hook_record {
                (LPVOID)0x1403c1650L,
                (LPVOID *)&CAsyncLogInfoGetTypeName10_user,
                (LPVOID *)&CAsyncLogInfoGetTypeName10_next,
                (LPVOID)cast_pointer_function(CAsyncLogInfoGetTypeName10_wrapper),
                (LPVOID)cast_pointer_function((char*(CAsyncLogInfo::*)())&CAsyncLogInfo::GetTypeName)
            },
            _hook_record {
                (LPVOID)0x1403c16f0L,
                (LPVOID *)&CAsyncLogInfoIncreaseCount12_user,
                (LPVOID *)&CAsyncLogInfoIncreaseCount12_next,
                (LPVOID)cast_pointer_function(CAsyncLogInfoIncreaseCount12_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogInfo::*)())&CAsyncLogInfo::IncreaseCount)
            },
            _hook_record {
                (LPVOID)0x1403bcb80L,
                (LPVOID *)&CAsyncLogInfoInit14_user,
                (LPVOID *)&CAsyncLogInfoInit14_next,
                (LPVOID)cast_pointer_function(CAsyncLogInfoInit14_wrapper),
                (LPVOID)cast_pointer_function((bool(CAsyncLogInfo::*)(ASYNC_LOG_TYPE, char*, char*, bool, unsigned int, struct CLogFile*))&CAsyncLogInfo::Init)
            },
            _hook_record {
                (LPVOID)0x1403bd0f0L,
                (LPVOID *)&CAsyncLogInfoUpdateLogFileName16_user,
                (LPVOID *)&CAsyncLogInfoUpdateLogFileName16_next,
                (LPVOID)cast_pointer_function(CAsyncLogInfoUpdateLogFileName16_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogInfo::*)())&CAsyncLogInfo::UpdateLogFileName)
            },
            _hook_record {
                (LPVOID)0x1403bca80L,
                (LPVOID *)&CAsyncLogInfodtor_CAsyncLogInfo20_user,
                (LPVOID *)&CAsyncLogInfodtor_CAsyncLogInfo20_next,
                (LPVOID)cast_pointer_function(CAsyncLogInfodtor_CAsyncLogInfo20_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogInfo::*)())&CAsyncLogInfo::dtor_CAsyncLogInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
