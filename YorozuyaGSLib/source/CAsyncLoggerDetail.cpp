#include <CAsyncLoggerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CAsyncLoggerctor_CAsyncLogger2_ptr CAsyncLoggerctor_CAsyncLogger2_next(nullptr);
        Info::CAsyncLoggerctor_CAsyncLogger2_clbk CAsyncLoggerctor_CAsyncLogger2_user(nullptr);
        
        Info::CAsyncLoggerDestroy4_ptr CAsyncLoggerDestroy4_next(nullptr);
        Info::CAsyncLoggerDestroy4_clbk CAsyncLoggerDestroy4_user(nullptr);
        
        Info::CAsyncLoggerFormatLog6_ptr CAsyncLoggerFormatLog6_next(nullptr);
        Info::CAsyncLoggerFormatLog6_clbk CAsyncLoggerFormatLog6_user(nullptr);
        
        Info::CAsyncLoggerGetTotalWaitSize8_ptr CAsyncLoggerGetTotalWaitSize8_next(nullptr);
        Info::CAsyncLoggerGetTotalWaitSize8_clbk CAsyncLoggerGetTotalWaitSize8_user(nullptr);
        
        Info::CAsyncLoggerInit10_ptr CAsyncLoggerInit10_next(nullptr);
        Info::CAsyncLoggerInit10_clbk CAsyncLoggerInit10_user(nullptr);
        
        Info::CAsyncLoggerInstance12_ptr CAsyncLoggerInstance12_next(nullptr);
        Info::CAsyncLoggerInstance12_clbk CAsyncLoggerInstance12_user(nullptr);
        
        Info::CAsyncLoggerLog14_ptr CAsyncLoggerLog14_next(nullptr);
        Info::CAsyncLoggerLog14_clbk CAsyncLoggerLog14_user(nullptr);
        
        Info::CAsyncLoggerLog16_ptr CAsyncLoggerLog16_next(nullptr);
        Info::CAsyncLoggerLog16_clbk CAsyncLoggerLog16_user(nullptr);
        
        Info::CAsyncLoggerLogFromArg18_ptr CAsyncLoggerLogFromArg18_next(nullptr);
        Info::CAsyncLoggerLogFromArg18_clbk CAsyncLoggerLogFromArg18_user(nullptr);
        
        Info::CAsyncLoggerLoop20_ptr CAsyncLoggerLoop20_next(nullptr);
        Info::CAsyncLoggerLoop20_clbk CAsyncLoggerLoop20_user(nullptr);
        
        Info::CAsyncLoggerProcThread22_ptr CAsyncLoggerProcThread22_next(nullptr);
        Info::CAsyncLoggerProcThread22_clbk CAsyncLoggerProcThread22_user(nullptr);
        
        Info::CAsyncLoggerProcWrite24_ptr CAsyncLoggerProcWrite24_next(nullptr);
        Info::CAsyncLoggerProcWrite24_clbk CAsyncLoggerProcWrite24_user(nullptr);
        
        Info::CAsyncLoggerRegist26_ptr CAsyncLoggerRegist26_next(nullptr);
        Info::CAsyncLoggerRegist26_clbk CAsyncLoggerRegist26_user(nullptr);
        
        Info::CAsyncLoggerSystemLog28_ptr CAsyncLoggerSystemLog28_next(nullptr);
        Info::CAsyncLoggerSystemLog28_clbk CAsyncLoggerSystemLog28_user(nullptr);
        
        
        Info::CAsyncLoggerdtor_CAsyncLogger32_ptr CAsyncLoggerdtor_CAsyncLogger32_next(nullptr);
        Info::CAsyncLoggerdtor_CAsyncLogger32_clbk CAsyncLoggerdtor_CAsyncLogger32_user(nullptr);
        
        
        void CAsyncLoggerctor_CAsyncLogger2_wrapper(struct CAsyncLogger* _this)
        {
           CAsyncLoggerctor_CAsyncLogger2_user(_this, CAsyncLoggerctor_CAsyncLogger2_next);
        };
        void CAsyncLoggerDestroy4_wrapper()
        {
           CAsyncLoggerDestroy4_user(CAsyncLoggerDestroy4_next);
        };
        bool CAsyncLoggerFormatLog6_wrapper(struct CAsyncLogger* _this, int iType, char* fmt)
        {
           return CAsyncLoggerFormatLog6_user(_this, iType, fmt, CAsyncLoggerFormatLog6_next);
        };
        int CAsyncLoggerGetTotalWaitSize8_wrapper(struct CAsyncLogger* _this)
        {
           return CAsyncLoggerGetTotalWaitSize8_user(_this, CAsyncLoggerGetTotalWaitSize8_next);
        };
        int CAsyncLoggerInit10_wrapper(struct CAsyncLogger* _this)
        {
           return CAsyncLoggerInit10_user(_this, CAsyncLoggerInit10_next);
        };
        struct CAsyncLogger* CAsyncLoggerInstance12_wrapper()
        {
           return CAsyncLoggerInstance12_user(CAsyncLoggerInstance12_next);
        };
        void CAsyncLoggerLog14_wrapper(struct CAsyncLogger* _this, char* szFileName, char* szLog, int iLenStr)
        {
           CAsyncLoggerLog14_user(_this, szFileName, szLog, iLenStr, CAsyncLoggerLog14_next);
        };
        bool CAsyncLoggerLog16_wrapper(struct CAsyncLogger* _this, int iType, char* szLog)
        {
           return CAsyncLoggerLog16_user(_this, iType, szLog, CAsyncLoggerLog16_next);
        };
        bool CAsyncLoggerLogFromArg18_wrapper(struct CAsyncLogger* _this, int iType, char* fmt, char* arg_ptr)
        {
           return CAsyncLoggerLogFromArg18_user(_this, iType, fmt, arg_ptr, CAsyncLoggerLogFromArg18_next);
        };
        void CAsyncLoggerLoop20_wrapper(struct CAsyncLogger* _this)
        {
           CAsyncLoggerLoop20_user(_this, CAsyncLoggerLoop20_next);
        };
        void CAsyncLoggerProcThread22_wrapper(void* p)
        {
           CAsyncLoggerProcThread22_user(p, CAsyncLoggerProcThread22_next);
        };
        void CAsyncLoggerProcWrite24_wrapper(struct CAsyncLogger* _this)
        {
           CAsyncLoggerProcWrite24_user(_this, CAsyncLoggerProcWrite24_next);
        };
        bool CAsyncLoggerRegist26_wrapper(struct CAsyncLogger* _this, ASYNC_LOG_TYPE eType, char* szDirPath, char* szTypeName, bool bAddDateFileName, unsigned int dwUpdateFileNameDelay)
        {
           return CAsyncLoggerRegist26_user(_this, eType, szDirPath, szTypeName, bAddDateFileName, dwUpdateFileNameDelay, CAsyncLoggerRegist26_next);
        };
        void CAsyncLoggerSystemLog28_wrapper(struct CAsyncLogger* _this, char* fmt)
        {
           CAsyncLoggerSystemLog28_user(_this, fmt, CAsyncLoggerSystemLog28_next);
        };
        
        void CAsyncLoggerdtor_CAsyncLogger32_wrapper(struct CAsyncLogger* _this)
        {
           CAsyncLoggerdtor_CAsyncLogger32_user(_this, CAsyncLoggerdtor_CAsyncLogger32_next);
        };
        
        ::std::array<hook_record, 15> CAsyncLogger_functions = 
        {
            _hook_record {
                (LPVOID)0x1403bda40L,
                (LPVOID *)&CAsyncLoggerctor_CAsyncLogger2_user,
                (LPVOID *)&CAsyncLoggerctor_CAsyncLogger2_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerctor_CAsyncLogger2_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogger::*)())&CAsyncLogger::ctor_CAsyncLogger)
            },
            _hook_record {
                (LPVOID)0x1403be1b0L,
                (LPVOID *)&CAsyncLoggerDestroy4_user,
                (LPVOID *)&CAsyncLoggerDestroy4_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerDestroy4_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CAsyncLogger::Destroy)
            },
            _hook_record {
                (LPVOID)0x1403bf220L,
                (LPVOID *)&CAsyncLoggerFormatLog6_user,
                (LPVOID *)&CAsyncLoggerFormatLog6_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerFormatLog6_wrapper),
                (LPVOID)cast_pointer_function((bool(CAsyncLogger::*)(int, char*))&CAsyncLogger::FormatLog)
            },
            _hook_record {
                (LPVOID)0x1403bfd60L,
                (LPVOID *)&CAsyncLoggerGetTotalWaitSize8_user,
                (LPVOID *)&CAsyncLoggerGetTotalWaitSize8_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerGetTotalWaitSize8_wrapper),
                (LPVOID)cast_pointer_function((int(CAsyncLogger::*)())&CAsyncLogger::GetTotalWaitSize)
            },
            _hook_record {
                (LPVOID)0x1403be220L,
                (LPVOID *)&CAsyncLoggerInit10_user,
                (LPVOID *)&CAsyncLoggerInit10_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerInit10_wrapper),
                (LPVOID)cast_pointer_function((int(CAsyncLogger::*)())&CAsyncLogger::Init)
            },
            _hook_record {
                (LPVOID)0x1403be0f0L,
                (LPVOID *)&CAsyncLoggerInstance12_user,
                (LPVOID *)&CAsyncLoggerInstance12_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerInstance12_wrapper),
                (LPVOID)cast_pointer_function((struct CAsyncLogger*(*)())&CAsyncLogger::Instance)
            },
            _hook_record {
                (LPVOID)0x1403c00e0L,
                (LPVOID *)&CAsyncLoggerLog14_user,
                (LPVOID *)&CAsyncLoggerLog14_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerLog14_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogger::*)(char*, char*, int))&CAsyncLogger::Log)
            },
            _hook_record {
                (LPVOID)0x1403bfa00L,
                (LPVOID *)&CAsyncLoggerLog16_user,
                (LPVOID *)&CAsyncLoggerLog16_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerLog16_wrapper),
                (LPVOID)cast_pointer_function((bool(CAsyncLogger::*)(int, char*))&CAsyncLogger::Log)
            },
            _hook_record {
                (LPVOID)0x1403bf620L,
                (LPVOID *)&CAsyncLoggerLogFromArg18_user,
                (LPVOID *)&CAsyncLoggerLogFromArg18_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerLogFromArg18_wrapper),
                (LPVOID)cast_pointer_function((bool(CAsyncLogger::*)(int, char*, char*))&CAsyncLogger::LogFromArg)
            },
            _hook_record {
                (LPVOID)0x1403be870L,
                (LPVOID *)&CAsyncLoggerLoop20_user,
                (LPVOID *)&CAsyncLoggerLoop20_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerLoop20_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogger::*)())&CAsyncLogger::Loop)
            },
            _hook_record {
                (LPVOID)0x1403bfe00L,
                (LPVOID *)&CAsyncLoggerProcThread22_user,
                (LPVOID *)&CAsyncLoggerProcThread22_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerProcThread22_wrapper),
                (LPVOID)cast_pointer_function((void(*)(void*))&CAsyncLogger::ProcThread)
            },
            _hook_record {
                (LPVOID)0x1403beab0L,
                (LPVOID *)&CAsyncLoggerProcWrite24_user,
                (LPVOID *)&CAsyncLoggerProcWrite24_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerProcWrite24_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogger::*)())&CAsyncLogger::ProcWrite)
            },
            _hook_record {
                (LPVOID)0x1403bebb0L,
                (LPVOID *)&CAsyncLoggerRegist26_user,
                (LPVOID *)&CAsyncLoggerRegist26_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerRegist26_wrapper),
                (LPVOID)cast_pointer_function((bool(CAsyncLogger::*)(ASYNC_LOG_TYPE, char*, char*, bool, unsigned int))&CAsyncLogger::Regist)
            },
            _hook_record {
                (LPVOID)0x1403bfe60L,
                (LPVOID *)&CAsyncLoggerSystemLog28_user,
                (LPVOID *)&CAsyncLoggerSystemLog28_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerSystemLog28_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogger::*)(char*))&CAsyncLogger::SystemLog)
            },
            _hook_record {
                (LPVOID)0x1403bdc40L,
                (LPVOID *)&CAsyncLoggerdtor_CAsyncLogger32_user,
                (LPVOID *)&CAsyncLoggerdtor_CAsyncLogger32_next,
                (LPVOID)cast_pointer_function(CAsyncLoggerdtor_CAsyncLogger32_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogger::*)())&CAsyncLogger::dtor_CAsyncLogger)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
