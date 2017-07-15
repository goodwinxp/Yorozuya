#include <WheatyExceptionReportDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::WheatyExceptionReportDumpTypeIndex2_ptr WheatyExceptionReportDumpTypeIndex2_next(nullptr);
        Info::WheatyExceptionReportDumpTypeIndex2_clbk WheatyExceptionReportDumpTypeIndex2_user(nullptr);
        
        Info::WheatyExceptionReportEnumerateSymbolsCallback4_ptr WheatyExceptionReportEnumerateSymbolsCallback4_next(nullptr);
        Info::WheatyExceptionReportEnumerateSymbolsCallback4_clbk WheatyExceptionReportEnumerateSymbolsCallback4_user(nullptr);
        
        Info::WheatyExceptionReportFormatOutputValue6_ptr WheatyExceptionReportFormatOutputValue6_next(nullptr);
        Info::WheatyExceptionReportFormatOutputValue6_clbk WheatyExceptionReportFormatOutputValue6_user(nullptr);
        
        Info::WheatyExceptionReportFormatSymbolValue8_ptr WheatyExceptionReportFormatSymbolValue8_next(nullptr);
        Info::WheatyExceptionReportFormatSymbolValue8_clbk WheatyExceptionReportFormatSymbolValue8_user(nullptr);
        
        Info::WheatyExceptionReportGenerateExceptionReport10_ptr WheatyExceptionReportGenerateExceptionReport10_next(nullptr);
        Info::WheatyExceptionReportGenerateExceptionReport10_clbk WheatyExceptionReportGenerateExceptionReport10_user(nullptr);
        
        Info::WheatyExceptionReportGetBasicType12_ptr WheatyExceptionReportGetBasicType12_next(nullptr);
        Info::WheatyExceptionReportGetBasicType12_clbk WheatyExceptionReportGetBasicType12_user(nullptr);
        
        Info::WheatyExceptionReportGetDisplayInfo14_ptr WheatyExceptionReportGetDisplayInfo14_next(nullptr);
        Info::WheatyExceptionReportGetDisplayInfo14_clbk WheatyExceptionReportGetDisplayInfo14_user(nullptr);
        
        Info::WheatyExceptionReportGetExceptionString16_ptr WheatyExceptionReportGetExceptionString16_next(nullptr);
        Info::WheatyExceptionReportGetExceptionString16_clbk WheatyExceptionReportGetExceptionString16_user(nullptr);
        
        Info::WheatyExceptionReportGetLogicalAddress18_ptr WheatyExceptionReportGetLogicalAddress18_next(nullptr);
        Info::WheatyExceptionReportGetLogicalAddress18_clbk WheatyExceptionReportGetLogicalAddress18_user(nullptr);
        
        Info::WheatyExceptionReportGetOsName20_ptr WheatyExceptionReportGetOsName20_next(nullptr);
        Info::WheatyExceptionReportGetOsName20_clbk WheatyExceptionReportGetOsName20_user(nullptr);
        
        Info::WheatyExceptionReportGetOsVersion22_ptr WheatyExceptionReportGetOsVersion22_next(nullptr);
        Info::WheatyExceptionReportGetOsVersion22_clbk WheatyExceptionReportGetOsVersion22_user(nullptr);
        
        Info::WheatyExceptionReportSetDescription24_ptr WheatyExceptionReportSetDescription24_next(nullptr);
        Info::WheatyExceptionReportSetDescription24_clbk WheatyExceptionReportSetDescription24_user(nullptr);
        
        Info::WheatyExceptionReportSetFtpConnection26_ptr WheatyExceptionReportSetFtpConnection26_next(nullptr);
        Info::WheatyExceptionReportSetFtpConnection26_clbk WheatyExceptionReportSetFtpConnection26_user(nullptr);
        
        Info::WheatyExceptionReportSetLogName28_ptr WheatyExceptionReportSetLogName28_next(nullptr);
        Info::WheatyExceptionReportSetLogName28_clbk WheatyExceptionReportSetLogName28_user(nullptr);
        
        Info::WheatyExceptionReportSetRunDialog30_ptr WheatyExceptionReportSetRunDialog30_next(nullptr);
        Info::WheatyExceptionReportSetRunDialog30_clbk WheatyExceptionReportSetRunDialog30_user(nullptr);
        
        
        Info::WheatyExceptionReportctor_WheatyExceptionReport32_ptr WheatyExceptionReportctor_WheatyExceptionReport32_next(nullptr);
        Info::WheatyExceptionReportctor_WheatyExceptionReport32_clbk WheatyExceptionReportctor_WheatyExceptionReport32_user(nullptr);
        
        Info::WheatyExceptionReportWheatyUnhandledExceptionFilter34_ptr WheatyExceptionReportWheatyUnhandledExceptionFilter34_next(nullptr);
        Info::WheatyExceptionReportWheatyUnhandledExceptionFilter34_clbk WheatyExceptionReportWheatyUnhandledExceptionFilter34_user(nullptr);
        
        Info::WheatyExceptionReportWriteStackDetails36_ptr WheatyExceptionReportWriteStackDetails36_next(nullptr);
        Info::WheatyExceptionReportWriteStackDetails36_clbk WheatyExceptionReportWriteStackDetails36_user(nullptr);
        
        Info::WheatyExceptionReport_tprintfh38_ptr WheatyExceptionReport_tprintfh38_next(nullptr);
        Info::WheatyExceptionReport_tprintfh38_clbk WheatyExceptionReport_tprintfh38_user(nullptr);
        
        Info::WheatyExceptionReportprintf40_ptr WheatyExceptionReportprintf40_next(nullptr);
        Info::WheatyExceptionReportprintf40_clbk WheatyExceptionReportprintf40_user(nullptr);
        
        
        Info::WheatyExceptionReportdtor_WheatyExceptionReport42_ptr WheatyExceptionReportdtor_WheatyExceptionReport42_next(nullptr);
        Info::WheatyExceptionReportdtor_WheatyExceptionReport42_clbk WheatyExceptionReportdtor_WheatyExceptionReport42_user(nullptr);
        
        char* WheatyExceptionReportDumpTypeIndex2_wrapper(char* pszCurrBuffer, uint64_t modBase, unsigned int dwTypeIndex, unsigned int nestingLevel, uint64_t offset, bool* bHandled)
        {
           return WheatyExceptionReportDumpTypeIndex2_user(pszCurrBuffer, modBase, dwTypeIndex, nestingLevel, offset, bHandled, WheatyExceptionReportDumpTypeIndex2_next);
        };
        int WheatyExceptionReportEnumerateSymbolsCallback4_wrapper(struct _SYMBOL_INFO* pSymInfo, unsigned int SymbolSize, void* UserContext)
        {
           return WheatyExceptionReportEnumerateSymbolsCallback4_user(pSymInfo, SymbolSize, UserContext, WheatyExceptionReportEnumerateSymbolsCallback4_next);
        };
        char* WheatyExceptionReportFormatOutputValue6_wrapper(char* pszCurrBuffer, BasicType basicType, uint64_t length, void* pAddress)
        {
           return WheatyExceptionReportFormatOutputValue6_user(pszCurrBuffer, basicType, length, pAddress, WheatyExceptionReportFormatOutputValue6_next);
        };
        bool WheatyExceptionReportFormatSymbolValue8_wrapper(struct _SYMBOL_INFO* pSym, struct _tagSTACKFRAME64* sf, char* pszBuffer, unsigned int cbBuffer)
        {
           return WheatyExceptionReportFormatSymbolValue8_user(pSym, sf, pszBuffer, cbBuffer, WheatyExceptionReportFormatSymbolValue8_next);
        };
        void WheatyExceptionReportGenerateExceptionReport10_wrapper(struct _EXCEPTION_POINTERS* pExceptionInfo)
        {
           WheatyExceptionReportGenerateExceptionReport10_user(pExceptionInfo, WheatyExceptionReportGenerateExceptionReport10_next);
        };
        BasicType WheatyExceptionReportGetBasicType12_wrapper(unsigned int typeIndex, uint64_t modBase)
        {
           return WheatyExceptionReportGetBasicType12_user(typeIndex, modBase, WheatyExceptionReportGetBasicType12_next);
        };
        int WheatyExceptionReportGetDisplayInfo14_wrapper(int nDeviceIndex, char* lpszDeviceInfo, char* lpszMonitorInfo)
        {
           return WheatyExceptionReportGetDisplayInfo14_user(nDeviceIndex, lpszDeviceInfo, lpszMonitorInfo, WheatyExceptionReportGetDisplayInfo14_next);
        };
        char* WheatyExceptionReportGetExceptionString16_wrapper(unsigned int dwCode)
        {
           return WheatyExceptionReportGetExceptionString16_user(dwCode, WheatyExceptionReportGetExceptionString16_next);
        };
        int WheatyExceptionReportGetLogicalAddress18_wrapper(void* addr, char* szModule, unsigned int len, unsigned int* section, unsigned int* offset)
        {
           return WheatyExceptionReportGetLogicalAddress18_user(addr, szModule, len, section, offset, WheatyExceptionReportGetLogicalAddress18_next);
        };
        char* WheatyExceptionReportGetOsName20_wrapper(unsigned int dwPlatformId, unsigned int dwMajorVersion, unsigned int dwMinorVersion)
        {
           return WheatyExceptionReportGetOsName20_user(dwPlatformId, dwMajorVersion, dwMinorVersion, WheatyExceptionReportGetOsName20_next);
        };
        char* WheatyExceptionReportGetOsVersion22_wrapper()
        {
           return WheatyExceptionReportGetOsVersion22_user(WheatyExceptionReportGetOsVersion22_next);
        };
        void WheatyExceptionReportSetDescription24_wrapper(struct WheatyExceptionReport* _this, char* pszDescription)
        {
           WheatyExceptionReportSetDescription24_user(_this, pszDescription, WheatyExceptionReportSetDescription24_next);
        };
        void WheatyExceptionReportSetFtpConnection26_wrapper(struct WheatyExceptionReport* _this, char* pszFtpIp, unsigned int nFtpPort, char* pszFtpId, char* pszFtpPwd, char* pszFtpDirectory)
        {
           WheatyExceptionReportSetFtpConnection26_user(_this, pszFtpIp, nFtpPort, pszFtpId, pszFtpPwd, pszFtpDirectory, WheatyExceptionReportSetFtpConnection26_next);
        };
        void WheatyExceptionReportSetLogName28_wrapper(struct WheatyExceptionReport* _this, char* pszLogName)
        {
           WheatyExceptionReportSetLogName28_user(_this, pszLogName, WheatyExceptionReportSetLogName28_next);
        };
        void WheatyExceptionReportSetRunDialog30_wrapper(struct WheatyExceptionReport* _this, int bRun)
        {
           WheatyExceptionReportSetRunDialog30_user(_this, bRun, WheatyExceptionReportSetRunDialog30_next);
        };
        
        void WheatyExceptionReportctor_WheatyExceptionReport32_wrapper(struct WheatyExceptionReport* _this)
        {
           WheatyExceptionReportctor_WheatyExceptionReport32_user(_this, WheatyExceptionReportctor_WheatyExceptionReport32_next);
        };
        int WheatyExceptionReportWheatyUnhandledExceptionFilter34_wrapper(struct _EXCEPTION_POINTERS* pExceptionInfo)
        {
           return WheatyExceptionReportWheatyUnhandledExceptionFilter34_user(pExceptionInfo, WheatyExceptionReportWheatyUnhandledExceptionFilter34_next);
        };
        void WheatyExceptionReportWriteStackDetails36_wrapper(struct _CONTEXT* pContext, bool bWriteVariables)
        {
           WheatyExceptionReportWriteStackDetails36_user(pContext, bWriteVariables, WheatyExceptionReportWriteStackDetails36_next);
        };
        int WheatyExceptionReport_tprintfh38_wrapper(void* hFile, char* format)
        {
           return WheatyExceptionReport_tprintfh38_user(hFile, format, WheatyExceptionReport_tprintfh38_next);
        };
        int WheatyExceptionReportprintf40_wrapper(char* format)
        {
           return WheatyExceptionReportprintf40_user(format, WheatyExceptionReportprintf40_next);
        };
        
        void WheatyExceptionReportdtor_WheatyExceptionReport42_wrapper(struct WheatyExceptionReport* _this)
        {
           WheatyExceptionReportdtor_WheatyExceptionReport42_user(_this, WheatyExceptionReportdtor_WheatyExceptionReport42_next);
        };
        
        ::std::array<hook_record, 21> WheatyExceptionReport_functions = 
        {
            _hook_record {
                (LPVOID)0x140440d40L,
                (LPVOID *)&WheatyExceptionReportDumpTypeIndex2_user,
                (LPVOID *)&WheatyExceptionReportDumpTypeIndex2_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportDumpTypeIndex2_wrapper),
                (LPVOID)cast_pointer_function((char*(*)(char*, uint64_t, unsigned int, unsigned int, uint64_t, bool*))&WheatyExceptionReport::DumpTypeIndex)
            },
            _hook_record {
                (LPVOID)0x140440a30L,
                (LPVOID *)&WheatyExceptionReportEnumerateSymbolsCallback4_user,
                (LPVOID *)&WheatyExceptionReportEnumerateSymbolsCallback4_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportEnumerateSymbolsCallback4_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct _SYMBOL_INFO*, unsigned int, void*))&WheatyExceptionReport::EnumerateSymbolsCallback)
            },
            _hook_record {
                (LPVOID)0x140441160L,
                (LPVOID *)&WheatyExceptionReportFormatOutputValue6_user,
                (LPVOID *)&WheatyExceptionReportFormatOutputValue6_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportFormatOutputValue6_wrapper),
                (LPVOID)cast_pointer_function((char*(*)(char*, BasicType, uint64_t, void*))&WheatyExceptionReport::FormatOutputValue)
            },
            _hook_record {
                (LPVOID)0x140440b40L,
                (LPVOID *)&WheatyExceptionReportFormatSymbolValue8_user,
                (LPVOID *)&WheatyExceptionReportFormatSymbolValue8_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportFormatSymbolValue8_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(struct _SYMBOL_INFO*, struct _tagSTACKFRAME64*, char*, unsigned int))&WheatyExceptionReport::FormatSymbolValue)
            },
            _hook_record {
                (LPVOID)0x14043f990L,
                (LPVOID *)&WheatyExceptionReportGenerateExceptionReport10_user,
                (LPVOID *)&WheatyExceptionReportGenerateExceptionReport10_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportGenerateExceptionReport10_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _EXCEPTION_POINTERS*))&WheatyExceptionReport::GenerateExceptionReport)
            },
            _hook_record {
                (LPVOID)0x140441380L,
                (LPVOID *)&WheatyExceptionReportGetBasicType12_user,
                (LPVOID *)&WheatyExceptionReportGetBasicType12_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportGetBasicType12_wrapper),
                (LPVOID)cast_pointer_function((BasicType(*)(unsigned int, uint64_t))&WheatyExceptionReport::GetBasicType)
            },
            _hook_record {
                (LPVOID)0x1404416b0L,
                (LPVOID *)&WheatyExceptionReportGetDisplayInfo14_user,
                (LPVOID *)&WheatyExceptionReportGetDisplayInfo14_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportGetDisplayInfo14_wrapper),
                (LPVOID)cast_pointer_function((int(*)(int, char*, char*))&WheatyExceptionReport::GetDisplayInfo)
            },
            _hook_record {
                (LPVOID)0x140440170L,
                (LPVOID *)&WheatyExceptionReportGetExceptionString16_user,
                (LPVOID *)&WheatyExceptionReportGetExceptionString16_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportGetExceptionString16_wrapper),
                (LPVOID)cast_pointer_function((char*(*)(unsigned int))&WheatyExceptionReport::GetExceptionString)
            },
            _hook_record {
                (LPVOID)0x1404404a0L,
                (LPVOID *)&WheatyExceptionReportGetLogicalAddress18_user,
                (LPVOID *)&WheatyExceptionReportGetLogicalAddress18_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportGetLogicalAddress18_wrapper),
                (LPVOID)cast_pointer_function((int(*)(void*, char*, unsigned int, unsigned int*, unsigned int*))&WheatyExceptionReport::GetLogicalAddress)
            },
            _hook_record {
                (LPVOID)0x140441570L,
                (LPVOID *)&WheatyExceptionReportGetOsName20_user,
                (LPVOID *)&WheatyExceptionReportGetOsName20_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportGetOsName20_wrapper),
                (LPVOID)cast_pointer_function((char*(*)(unsigned int, unsigned int, unsigned int))&WheatyExceptionReport::GetOsName)
            },
            _hook_record {
                (LPVOID)0x140441470L,
                (LPVOID *)&WheatyExceptionReportGetOsVersion22_user,
                (LPVOID *)&WheatyExceptionReportGetOsVersion22_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportGetOsVersion22_wrapper),
                (LPVOID)cast_pointer_function((char*(*)())&WheatyExceptionReport::GetOsVersion)
            },
            _hook_record {
                (LPVOID)0x14043f5f0L,
                (LPVOID *)&WheatyExceptionReportSetDescription24_user,
                (LPVOID *)&WheatyExceptionReportSetDescription24_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportSetDescription24_wrapper),
                (LPVOID)cast_pointer_function((void(WheatyExceptionReport::*)(char*))&WheatyExceptionReport::SetDescription)
            },
            _hook_record {
                (LPVOID)0x14043f640L,
                (LPVOID *)&WheatyExceptionReportSetFtpConnection26_user,
                (LPVOID *)&WheatyExceptionReportSetFtpConnection26_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportSetFtpConnection26_wrapper),
                (LPVOID)cast_pointer_function((void(WheatyExceptionReport::*)(char*, unsigned int, char*, char*, char*))&WheatyExceptionReport::SetFtpConnection)
            },
            _hook_record {
                (LPVOID)0x14043f5a0L,
                (LPVOID *)&WheatyExceptionReportSetLogName28_user,
                (LPVOID *)&WheatyExceptionReportSetLogName28_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportSetLogName28_wrapper),
                (LPVOID)cast_pointer_function((void(WheatyExceptionReport::*)(char*))&WheatyExceptionReport::SetLogName)
            },
            _hook_record {
                (LPVOID)0x14043f6e0L,
                (LPVOID *)&WheatyExceptionReportSetRunDialog30_user,
                (LPVOID *)&WheatyExceptionReportSetRunDialog30_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportSetRunDialog30_wrapper),
                (LPVOID)cast_pointer_function((void(WheatyExceptionReport::*)(int))&WheatyExceptionReport::SetRunDialog)
            },
            _hook_record {
                (LPVOID)0x14043f4d0L,
                (LPVOID *)&WheatyExceptionReportctor_WheatyExceptionReport32_user,
                (LPVOID *)&WheatyExceptionReportctor_WheatyExceptionReport32_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportctor_WheatyExceptionReport32_wrapper),
                (LPVOID)cast_pointer_function((void(WheatyExceptionReport::*)())&WheatyExceptionReport::ctor_WheatyExceptionReport)
            },
            _hook_record {
                (LPVOID)0x14043f700L,
                (LPVOID *)&WheatyExceptionReportWheatyUnhandledExceptionFilter34_user,
                (LPVOID *)&WheatyExceptionReportWheatyUnhandledExceptionFilter34_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportWheatyUnhandledExceptionFilter34_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct _EXCEPTION_POINTERS*))&WheatyExceptionReport::WheatyUnhandledExceptionFilter)
            },
            _hook_record {
                (LPVOID)0x1404406a0L,
                (LPVOID *)&WheatyExceptionReportWriteStackDetails36_user,
                (LPVOID *)&WheatyExceptionReportWriteStackDetails36_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportWriteStackDetails36_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _CONTEXT*, bool))&WheatyExceptionReport::WriteStackDetails)
            },
            _hook_record {
                (LPVOID)0x1404417d0L,
                (LPVOID *)&WheatyExceptionReport_tprintfh38_user,
                (LPVOID *)&WheatyExceptionReport_tprintfh38_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReport_tprintfh38_wrapper),
                (LPVOID)cast_pointer_function((int(*)(void*, char*))&WheatyExceptionReport::_tprintfh)
            },
            _hook_record {
                (LPVOID)0x1404416d0L,
                (LPVOID *)&WheatyExceptionReportprintf40_user,
                (LPVOID *)&WheatyExceptionReportprintf40_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportprintf40_wrapper),
                (LPVOID)cast_pointer_function((int(*)(char*))&WheatyExceptionReport::printf)
            },
            _hook_record {
                (LPVOID)0x14043f560L,
                (LPVOID *)&WheatyExceptionReportdtor_WheatyExceptionReport42_user,
                (LPVOID *)&WheatyExceptionReportdtor_WheatyExceptionReport42_next,
                (LPVOID)cast_pointer_function(WheatyExceptionReportdtor_WheatyExceptionReport42_wrapper),
                (LPVOID)cast_pointer_function((void(WheatyExceptionReport::*)())&WheatyExceptionReport::dtor_WheatyExceptionReport)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
