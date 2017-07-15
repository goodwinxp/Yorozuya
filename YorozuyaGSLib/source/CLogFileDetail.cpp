#include <CLogFileDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CLogFilector_CLogFile2_ptr CLogFilector_CLogFile2_next(nullptr);
        Info::CLogFilector_CLogFile2_clbk CLogFilector_CLogFile2_user(nullptr);
        
        Info::CLogFileSetWriteAble4_ptr CLogFileSetWriteAble4_next(nullptr);
        Info::CLogFileSetWriteAble4_clbk CLogFileSetWriteAble4_user(nullptr);
        
        Info::CLogFileSetWriteLogFile6_ptr CLogFileSetWriteLogFile6_next(nullptr);
        Info::CLogFileSetWriteLogFile6_clbk CLogFileSetWriteLogFile6_user(nullptr);
        
        Info::CLogFileWrite8_ptr CLogFileWrite8_next(nullptr);
        Info::CLogFileWrite8_clbk CLogFileWrite8_user(nullptr);
        
        Info::CLogFileWriteFromArg10_ptr CLogFileWriteFromArg10_next(nullptr);
        Info::CLogFileWriteFromArg10_clbk CLogFileWriteFromArg10_user(nullptr);
        
        Info::CLogFileWriteFromArg12_ptr CLogFileWriteFromArg12_next(nullptr);
        Info::CLogFileWriteFromArg12_clbk CLogFileWriteFromArg12_user(nullptr);
        
        Info::CLogFileWriteString14_ptr CLogFileWriteString14_next(nullptr);
        Info::CLogFileWriteString14_clbk CLogFileWriteString14_user(nullptr);
        
        
        Info::CLogFiledtor_CLogFile18_ptr CLogFiledtor_CLogFile18_next(nullptr);
        Info::CLogFiledtor_CLogFile18_clbk CLogFiledtor_CLogFile18_user(nullptr);
        
        
        void CLogFilector_CLogFile2_wrapper(struct CLogFile* _this)
        {
           CLogFilector_CLogFile2_user(_this, CLogFilector_CLogFile2_next);
        };
        void CLogFileSetWriteAble4_wrapper(struct CLogFile* _this, bool bAble)
        {
           CLogFileSetWriteAble4_user(_this, bAble, CLogFileSetWriteAble4_next);
        };
        void CLogFileSetWriteLogFile6_wrapper(struct CLogFile* _this, char* szFileName, int bWriteAble, bool bTrace, bool bDate, bool bAddCount)
        {
           CLogFileSetWriteLogFile6_user(_this, szFileName, bWriteAble, bTrace, bDate, bAddCount, CLogFileSetWriteLogFile6_next);
        };
        void CLogFileWrite8_wrapper(struct CLogFile* _this, char* fmt)
        {
           CLogFileWrite8_user(_this, fmt, CLogFileWrite8_next);
        };
        void CLogFileWriteFromArg10_wrapper(struct CLogFile* _this, char* fmt, char* arg)
        {
           CLogFileWriteFromArg10_user(_this, fmt, arg, CLogFileWriteFromArg10_next);
        };
        void CLogFileWriteFromArg12_wrapper(struct CLogFile* _this, wchar_t* lpcwFmt, char* arg)
        {
           CLogFileWriteFromArg12_user(_this, lpcwFmt, arg, CLogFileWriteFromArg12_next);
        };
        void CLogFileWriteString14_wrapper(struct CLogFile* _this, char* fmt)
        {
           CLogFileWriteString14_user(_this, fmt, CLogFileWriteString14_next);
        };
        
        void CLogFiledtor_CLogFile18_wrapper(struct CLogFile* _this)
        {
           CLogFiledtor_CLogFile18_user(_this, CLogFiledtor_CLogFile18_next);
        };
        
        ::std::array<hook_record, 8> CLogFile_functions = 
        {
            _hook_record {
                (LPVOID)0x140074ff0L,
                (LPVOID *)&CLogFilector_CLogFile2_user,
                (LPVOID *)&CLogFilector_CLogFile2_next,
                (LPVOID)cast_pointer_function(CLogFilector_CLogFile2_wrapper),
                (LPVOID)cast_pointer_function((void(CLogFile::*)())&CLogFile::ctor_CLogFile)
            },
            _hook_record {
                (LPVOID)0x14047db20L,
                (LPVOID *)&CLogFileSetWriteAble4_user,
                (LPVOID *)&CLogFileSetWriteAble4_next,
                (LPVOID)cast_pointer_function(CLogFileSetWriteAble4_wrapper),
                (LPVOID)cast_pointer_function((void(CLogFile::*)(bool))&CLogFile::SetWriteAble)
            },
            _hook_record {
                (LPVOID)0x1400c2d90L,
                (LPVOID *)&CLogFileSetWriteLogFile6_user,
                (LPVOID *)&CLogFileSetWriteLogFile6_next,
                (LPVOID)cast_pointer_function(CLogFileSetWriteLogFile6_wrapper),
                (LPVOID)cast_pointer_function((void(CLogFile::*)(char*, int, bool, bool, bool))&CLogFile::SetWriteLogFile)
            },
            _hook_record {
                (LPVOID)0x140074ab0L,
                (LPVOID *)&CLogFileWrite8_user,
                (LPVOID *)&CLogFileWrite8_next,
                (LPVOID)cast_pointer_function(CLogFileWrite8_wrapper),
                (LPVOID)cast_pointer_function((void(CLogFile::*)(char*))&CLogFile::Write)
            },
            _hook_record {
                (LPVOID)0x1402c43f0L,
                (LPVOID *)&CLogFileWriteFromArg10_user,
                (LPVOID *)&CLogFileWriteFromArg10_next,
                (LPVOID)cast_pointer_function(CLogFileWriteFromArg10_wrapper),
                (LPVOID)cast_pointer_function((void(CLogFile::*)(char*, char*))&CLogFile::WriteFromArg)
            },
            _hook_record {
                (LPVOID)0x140327d50L,
                (LPVOID *)&CLogFileWriteFromArg12_user,
                (LPVOID *)&CLogFileWriteFromArg12_next,
                (LPVOID)cast_pointer_function(CLogFileWriteFromArg12_wrapper),
                (LPVOID)cast_pointer_function((void(CLogFile::*)(wchar_t*, char*))&CLogFile::WriteFromArg)
            },
            _hook_record {
                (LPVOID)0x140207610L,
                (LPVOID *)&CLogFileWriteString14_user,
                (LPVOID *)&CLogFileWriteString14_next,
                (LPVOID)cast_pointer_function(CLogFileWriteString14_wrapper),
                (LPVOID)cast_pointer_function((void(CLogFile::*)(char*))&CLogFile::WriteString)
            },
            _hook_record {
                (LPVOID)0x1400c2ef0L,
                (LPVOID *)&CLogFiledtor_CLogFile18_user,
                (LPVOID *)&CLogFiledtor_CLogFile18_next,
                (LPVOID)cast_pointer_function(CLogFiledtor_CLogFile18_wrapper),
                (LPVOID)cast_pointer_function((void(CLogFile::*)())&CLogFile::dtor_CLogFile)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
