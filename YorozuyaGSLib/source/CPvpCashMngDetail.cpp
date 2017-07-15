#include <CPvpCashMngDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPvpCashMngctor_CPvpCashMng2_ptr CPvpCashMngctor_CPvpCashMng2_next(nullptr);
        Info::CPvpCashMngctor_CPvpCashMng2_clbk CPvpCashMngctor_CPvpCashMng2_user(nullptr);
        
        Info::CPvpCashMngGetMaxTempPoint4_ptr CPvpCashMngGetMaxTempPoint4_next(nullptr);
        Info::CPvpCashMngGetMaxTempPoint4_clbk CPvpCashMngGetMaxTempPoint4_user(nullptr);
        
        Info::CPvpCashMngGetMinTempPoint6_ptr CPvpCashMngGetMinTempPoint6_next(nullptr);
        Info::CPvpCashMngGetMinTempPoint6_clbk CPvpCashMngGetMinTempPoint6_user(nullptr);
        
        Info::CPvpCashMngGetMyClassVal8_ptr CPvpCashMngGetMyClassVal8_next(nullptr);
        Info::CPvpCashMngGetMyClassVal8_clbk CPvpCashMngGetMyClassVal8_user(nullptr);
        
        Info::CPvpCashMngGetTalikNum10_ptr CPvpCashMngGetTalikNum10_next(nullptr);
        Info::CPvpCashMngGetTalikNum10_clbk CPvpCashMngGetTalikNum10_user(nullptr);
        
        Info::CPvpCashMngGetTalikRecvrPoint12_ptr CPvpCashMngGetTalikRecvrPoint12_next(nullptr);
        Info::CPvpCashMngGetTalikRecvrPoint12_clbk CPvpCashMngGetTalikRecvrPoint12_user(nullptr);
        
        Info::CPvpCashMngGetTalikRecvrPoint14_ptr CPvpCashMngGetTalikRecvrPoint14_next(nullptr);
        Info::CPvpCashMngGetTalikRecvrPoint14_clbk CPvpCashMngGetTalikRecvrPoint14_user(nullptr);
        
        Info::CPvpCashMngInstance16_ptr CPvpCashMngInstance16_next(nullptr);
        Info::CPvpCashMngInstance16_clbk CPvpCashMngInstance16_user(nullptr);
        
        Info::CPvpCashMngIsTalikItem18_ptr CPvpCashMngIsTalikItem18_next(nullptr);
        Info::CPvpCashMngIsTalikItem18_clbk CPvpCashMngIsTalikItem18_user(nullptr);
        
        Info::CPvpCashMngLoadData20_ptr CPvpCashMngLoadData20_next(nullptr);
        Info::CPvpCashMngLoadData20_clbk CPvpCashMngLoadData20_user(nullptr);
        
        Info::CPvpCashMngParsing22_ptr CPvpCashMngParsing22_next(nullptr);
        Info::CPvpCashMngParsing22_clbk CPvpCashMngParsing22_user(nullptr);
        
        Info::CPvpCashMngRelease24_ptr CPvpCashMngRelease24_next(nullptr);
        Info::CPvpCashMngRelease24_clbk CPvpCashMngRelease24_user(nullptr);
        
        Info::CPvpCashMngSetItem26_ptr CPvpCashMngSetItem26_next(nullptr);
        Info::CPvpCashMngSetItem26_clbk CPvpCashMngSetItem26_user(nullptr);
        
        
        Info::CPvpCashMngdtor_CPvpCashMng30_ptr CPvpCashMngdtor_CPvpCashMng30_next(nullptr);
        Info::CPvpCashMngdtor_CPvpCashMng30_clbk CPvpCashMngdtor_CPvpCashMng30_user(nullptr);
        
        
        void CPvpCashMngctor_CPvpCashMng2_wrapper(struct CPvpCashMng* _this)
        {
           CPvpCashMngctor_CPvpCashMng2_user(_this, CPvpCashMngctor_CPvpCashMng2_next);
        };
        int CPvpCashMngGetMaxTempPoint4_wrapper(struct CPvpCashMng* _this, char nLv, bool bPremium)
        {
           return CPvpCashMngGetMaxTempPoint4_user(_this, nLv, bPremium, CPvpCashMngGetMaxTempPoint4_next);
        };
        int CPvpCashMngGetMinTempPoint6_wrapper(struct CPvpCashMng* _this, char nLv)
        {
           return CPvpCashMngGetMinTempPoint6_user(_this, nLv, CPvpCashMngGetMinTempPoint6_next);
        };
        int CPvpCashMngGetMyClassVal8_wrapper(struct CPvpCashMng* _this, char* pClass)
        {
           return CPvpCashMngGetMyClassVal8_user(_this, pClass, CPvpCashMngGetMyClassVal8_next);
        };
        int CPvpCashMngGetTalikNum10_wrapper(struct CPvpCashMng* _this)
        {
           return CPvpCashMngGetTalikNum10_user(_this, CPvpCashMngGetTalikNum10_next);
        };
        int CPvpCashMngGetTalikRecvrPoint12_wrapper(struct CPvpCashMng* _this, int i)
        {
           return CPvpCashMngGetTalikRecvrPoint12_user(_this, i, CPvpCashMngGetTalikRecvrPoint12_next);
        };
        int CPvpCashMngGetTalikRecvrPoint14_wrapper(struct CPvpCashMng* _this, char byTblCode, unsigned int dwIndex)
        {
           return CPvpCashMngGetTalikRecvrPoint14_user(_this, byTblCode, dwIndex, CPvpCashMngGetTalikRecvrPoint14_next);
        };
        struct CPvpCashMng* CPvpCashMngInstance16_wrapper()
        {
           return CPvpCashMngInstance16_user(CPvpCashMngInstance16_next);
        };
        bool CPvpCashMngIsTalikItem18_wrapper(struct CPvpCashMng* _this, char* strCode)
        {
           return CPvpCashMngIsTalikItem18_user(_this, strCode, CPvpCashMngIsTalikItem18_next);
        };
        bool CPvpCashMngLoadData20_wrapper(struct CPvpCashMng* _this)
        {
           return CPvpCashMngLoadData20_user(_this, CPvpCashMngLoadData20_next);
        };
        bool CPvpCashMngParsing22_wrapper(struct CPvpCashMng* _this, char* szTitle, char* szItem, char** szBuff, int nInx, char byParseType)
        {
           return CPvpCashMngParsing22_user(_this, szTitle, szItem, szBuff, nInx, byParseType, CPvpCashMngParsing22_next);
        };
        void CPvpCashMngRelease24_wrapper(struct CPvpCashMng* _this)
        {
           CPvpCashMngRelease24_user(_this, CPvpCashMngRelease24_next);
        };
        bool CPvpCashMngSetItem26_wrapper(struct CPvpCashMng* _this, char* szItemCode, int nInx)
        {
           return CPvpCashMngSetItem26_user(_this, szItemCode, nInx, CPvpCashMngSetItem26_next);
        };
        
        void CPvpCashMngdtor_CPvpCashMng30_wrapper(struct CPvpCashMng* _this)
        {
           CPvpCashMngdtor_CPvpCashMng30_user(_this, CPvpCashMngdtor_CPvpCashMng30_next);
        };
        
        ::std::array<hook_record, 14> CPvpCashMng_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f6e20L,
                (LPVOID *)&CPvpCashMngctor_CPvpCashMng2_user,
                (LPVOID *)&CPvpCashMngctor_CPvpCashMng2_next,
                (LPVOID)cast_pointer_function(CPvpCashMngctor_CPvpCashMng2_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashMng::*)())&CPvpCashMng::ctor_CPvpCashMng)
            },
            _hook_record {
                (LPVOID)0x1403f6590L,
                (LPVOID *)&CPvpCashMngGetMaxTempPoint4_user,
                (LPVOID *)&CPvpCashMngGetMaxTempPoint4_next,
                (LPVOID)cast_pointer_function(CPvpCashMngGetMaxTempPoint4_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashMng::*)(char, bool))&CPvpCashMng::GetMaxTempPoint)
            },
            _hook_record {
                (LPVOID)0x1403f6650L,
                (LPVOID *)&CPvpCashMngGetMinTempPoint6_user,
                (LPVOID *)&CPvpCashMngGetMinTempPoint6_next,
                (LPVOID)cast_pointer_function(CPvpCashMngGetMinTempPoint6_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashMng::*)(char))&CPvpCashMng::GetMinTempPoint)
            },
            _hook_record {
                (LPVOID)0x1403f64d0L,
                (LPVOID *)&CPvpCashMngGetMyClassVal8_user,
                (LPVOID *)&CPvpCashMngGetMyClassVal8_next,
                (LPVOID)cast_pointer_function(CPvpCashMngGetMyClassVal8_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashMng::*)(char*))&CPvpCashMng::GetMyClassVal)
            },
            _hook_record {
                (LPVOID)0x1403f63d0L,
                (LPVOID *)&CPvpCashMngGetTalikNum10_user,
                (LPVOID *)&CPvpCashMngGetTalikNum10_next,
                (LPVOID)cast_pointer_function(CPvpCashMngGetTalikNum10_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashMng::*)())&CPvpCashMng::GetTalikNum)
            },
            _hook_record {
                (LPVOID)0x1403f63f0L,
                (LPVOID *)&CPvpCashMngGetTalikRecvrPoint12_user,
                (LPVOID *)&CPvpCashMngGetTalikRecvrPoint12_next,
                (LPVOID)cast_pointer_function(CPvpCashMngGetTalikRecvrPoint12_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashMng::*)(int))&CPvpCashMng::GetTalikRecvrPoint)
            },
            _hook_record {
                (LPVOID)0x1403f6420L,
                (LPVOID *)&CPvpCashMngGetTalikRecvrPoint14_user,
                (LPVOID *)&CPvpCashMngGetTalikRecvrPoint14_next,
                (LPVOID)cast_pointer_function(CPvpCashMngGetTalikRecvrPoint14_wrapper),
                (LPVOID)cast_pointer_function((int(CPvpCashMng::*)(char, unsigned int))&CPvpCashMng::GetTalikRecvrPoint)
            },
            _hook_record {
                (LPVOID)0x1403f5a10L,
                (LPVOID *)&CPvpCashMngInstance16_user,
                (LPVOID *)&CPvpCashMngInstance16_next,
                (LPVOID)cast_pointer_function(CPvpCashMngInstance16_wrapper),
                (LPVOID)cast_pointer_function((struct CPvpCashMng*(*)())&CPvpCashMng::Instance)
            },
            _hook_record {
                (LPVOID)0x1403f66f0L,
                (LPVOID *)&CPvpCashMngIsTalikItem18_user,
                (LPVOID *)&CPvpCashMngIsTalikItem18_next,
                (LPVOID)cast_pointer_function(CPvpCashMngIsTalikItem18_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpCashMng::*)(char*))&CPvpCashMng::IsTalikItem)
            },
            _hook_record {
                (LPVOID)0x1403f5ea0L,
                (LPVOID *)&CPvpCashMngLoadData20_user,
                (LPVOID *)&CPvpCashMngLoadData20_next,
                (LPVOID)cast_pointer_function(CPvpCashMngLoadData20_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpCashMng::*)())&CPvpCashMng::LoadData)
            },
            _hook_record {
                (LPVOID)0x1403f5c40L,
                (LPVOID *)&CPvpCashMngParsing22_user,
                (LPVOID *)&CPvpCashMngParsing22_next,
                (LPVOID)cast_pointer_function(CPvpCashMngParsing22_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpCashMng::*)(char*, char*, char**, int, char))&CPvpCashMng::Parsing)
            },
            _hook_record {
                (LPVOID)0x1403f5ad0L,
                (LPVOID *)&CPvpCashMngRelease24_user,
                (LPVOID *)&CPvpCashMngRelease24_next,
                (LPVOID)cast_pointer_function(CPvpCashMngRelease24_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashMng::*)())&CPvpCashMng::Release)
            },
            _hook_record {
                (LPVOID)0x1403f5b50L,
                (LPVOID *)&CPvpCashMngSetItem26_user,
                (LPVOID *)&CPvpCashMngSetItem26_next,
                (LPVOID)cast_pointer_function(CPvpCashMngSetItem26_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpCashMng::*)(char*, int))&CPvpCashMng::SetItem)
            },
            _hook_record {
                (LPVOID)0x1403f7170L,
                (LPVOID *)&CPvpCashMngdtor_CPvpCashMng30_user,
                (LPVOID *)&CPvpCashMngdtor_CPvpCashMng30_next,
                (LPVOID)cast_pointer_function(CPvpCashMngdtor_CPvpCashMng30_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpCashMng::*)())&CPvpCashMng::dtor_CPvpCashMng)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
