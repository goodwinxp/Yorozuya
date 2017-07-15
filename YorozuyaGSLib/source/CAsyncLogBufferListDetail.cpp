#include <CAsyncLogBufferListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CAsyncLogBufferListctor_CAsyncLogBufferList2_ptr CAsyncLogBufferListctor_CAsyncLogBufferList2_next(nullptr);
        Info::CAsyncLogBufferListctor_CAsyncLogBufferList2_clbk CAsyncLogBufferListctor_CAsyncLogBufferList2_user(nullptr);
        
        Info::CAsyncLogBufferListGetBufferSize4_ptr CAsyncLogBufferListGetBufferSize4_next(nullptr);
        Info::CAsyncLogBufferListGetBufferSize4_clbk CAsyncLogBufferListGetBufferSize4_user(nullptr);
        
        Info::CAsyncLogBufferListGetEmptySize6_ptr CAsyncLogBufferListGetEmptySize6_next(nullptr);
        Info::CAsyncLogBufferListGetEmptySize6_clbk CAsyncLogBufferListGetEmptySize6_user(nullptr);
        
        Info::CAsyncLogBufferListGetProcCount8_ptr CAsyncLogBufferListGetProcCount8_next(nullptr);
        Info::CAsyncLogBufferListGetProcCount8_clbk CAsyncLogBufferListGetProcCount8_user(nullptr);
        
        Info::CAsyncLogBufferListInit10_ptr CAsyncLogBufferListInit10_next(nullptr);
        Info::CAsyncLogBufferListInit10_clbk CAsyncLogBufferListInit10_user(nullptr);
        
        Info::CAsyncLogBufferListLog12_ptr CAsyncLogBufferListLog12_next(nullptr);
        Info::CAsyncLogBufferListLog12_clbk CAsyncLogBufferListLog12_user(nullptr);
        
        Info::CAsyncLogBufferListProcWrite14_ptr CAsyncLogBufferListProcWrite14_next(nullptr);
        Info::CAsyncLogBufferListProcWrite14_clbk CAsyncLogBufferListProcWrite14_user(nullptr);
        
        Info::CAsyncLogBufferListWriteFile16_ptr CAsyncLogBufferListWriteFile16_next(nullptr);
        Info::CAsyncLogBufferListWriteFile16_clbk CAsyncLogBufferListWriteFile16_user(nullptr);
        
        
        Info::CAsyncLogBufferListdtor_CAsyncLogBufferList20_ptr CAsyncLogBufferListdtor_CAsyncLogBufferList20_next(nullptr);
        Info::CAsyncLogBufferListdtor_CAsyncLogBufferList20_clbk CAsyncLogBufferListdtor_CAsyncLogBufferList20_user(nullptr);
        
        
        void CAsyncLogBufferListctor_CAsyncLogBufferList2_wrapper(struct CAsyncLogBufferList* _this)
        {
           CAsyncLogBufferListctor_CAsyncLogBufferList2_user(_this, CAsyncLogBufferListctor_CAsyncLogBufferList2_next);
        };
        unsigned int CAsyncLogBufferListGetBufferSize4_wrapper(struct CAsyncLogBufferList* _this)
        {
           return CAsyncLogBufferListGetBufferSize4_user(_this, CAsyncLogBufferListGetBufferSize4_next);
        };
        int CAsyncLogBufferListGetEmptySize6_wrapper(struct CAsyncLogBufferList* _this)
        {
           return CAsyncLogBufferListGetEmptySize6_user(_this, CAsyncLogBufferListGetEmptySize6_next);
        };
        int CAsyncLogBufferListGetProcCount8_wrapper(struct CAsyncLogBufferList* _this)
        {
           return CAsyncLogBufferListGetProcCount8_user(_this, CAsyncLogBufferListGetProcCount8_next);
        };
        bool CAsyncLogBufferListInit10_wrapper(struct CAsyncLogBufferList* _this, unsigned int uiMaxBufferCnt, unsigned int uiMaxBufferSize, struct CLogFile* logLoading)
        {
           return CAsyncLogBufferListInit10_user(_this, uiMaxBufferCnt, uiMaxBufferSize, logLoading, CAsyncLogBufferListInit10_next);
        };
        bool CAsyncLogBufferListLog12_wrapper(struct CAsyncLogBufferList* _this, char* pszFileName, char* szLog, int iLen)
        {
           return CAsyncLogBufferListLog12_user(_this, pszFileName, szLog, iLen, CAsyncLogBufferListLog12_next);
        };
        void CAsyncLogBufferListProcWrite14_wrapper(struct CAsyncLogBufferList* _this)
        {
           CAsyncLogBufferListProcWrite14_user(_this, CAsyncLogBufferListProcWrite14_next);
        };
        void CAsyncLogBufferListWriteFile16_wrapper(char* pszFileName, int nLen, char* pszData)
        {
           CAsyncLogBufferListWriteFile16_user(pszFileName, nLen, pszData, CAsyncLogBufferListWriteFile16_next);
        };
        
        void CAsyncLogBufferListdtor_CAsyncLogBufferList20_wrapper(struct CAsyncLogBufferList* _this)
        {
           CAsyncLogBufferListdtor_CAsyncLogBufferList20_user(_this, CAsyncLogBufferListdtor_CAsyncLogBufferList20_next);
        };
        
        ::std::array<hook_record, 9> CAsyncLogBufferList_functions = 
        {
            _hook_record {
                (LPVOID)0x1403bd460L,
                (LPVOID *)&CAsyncLogBufferListctor_CAsyncLogBufferList2_user,
                (LPVOID *)&CAsyncLogBufferListctor_CAsyncLogBufferList2_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferListctor_CAsyncLogBufferList2_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogBufferList::*)())&CAsyncLogBufferList::ctor_CAsyncLogBufferList)
            },
            _hook_record {
                (LPVOID)0x1403c1770L,
                (LPVOID *)&CAsyncLogBufferListGetBufferSize4_user,
                (LPVOID *)&CAsyncLogBufferListGetBufferSize4_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferListGetBufferSize4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CAsyncLogBufferList::*)())&CAsyncLogBufferList::GetBufferSize)
            },
            _hook_record {
                (LPVOID)0x1403c1790L,
                (LPVOID *)&CAsyncLogBufferListGetEmptySize6_user,
                (LPVOID *)&CAsyncLogBufferListGetEmptySize6_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferListGetEmptySize6_wrapper),
                (LPVOID)cast_pointer_function((int(CAsyncLogBufferList::*)())&CAsyncLogBufferList::GetEmptySize)
            },
            _hook_record {
                (LPVOID)0x1403c1720L,
                (LPVOID *)&CAsyncLogBufferListGetProcCount8_user,
                (LPVOID *)&CAsyncLogBufferListGetProcCount8_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferListGetProcCount8_wrapper),
                (LPVOID)cast_pointer_function((int(CAsyncLogBufferList::*)())&CAsyncLogBufferList::GetProcCount)
            },
            _hook_record {
                (LPVOID)0x1403bd510L,
                (LPVOID *)&CAsyncLogBufferListInit10_user,
                (LPVOID *)&CAsyncLogBufferListInit10_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferListInit10_wrapper),
                (LPVOID)cast_pointer_function((bool(CAsyncLogBufferList::*)(unsigned int, unsigned int, struct CLogFile*))&CAsyncLogBufferList::Init)
            },
            _hook_record {
                (LPVOID)0x1403bd780L,
                (LPVOID *)&CAsyncLogBufferListLog12_user,
                (LPVOID *)&CAsyncLogBufferListLog12_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferListLog12_wrapper),
                (LPVOID)cast_pointer_function((bool(CAsyncLogBufferList::*)(char*, char*, int))&CAsyncLogBufferList::Log)
            },
            _hook_record {
                (LPVOID)0x1403bd860L,
                (LPVOID *)&CAsyncLogBufferListProcWrite14_user,
                (LPVOID *)&CAsyncLogBufferListProcWrite14_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferListProcWrite14_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogBufferList::*)())&CAsyncLogBufferList::ProcWrite)
            },
            _hook_record {
                (LPVOID)0x1403bd960L,
                (LPVOID *)&CAsyncLogBufferListWriteFile16_user,
                (LPVOID *)&CAsyncLogBufferListWriteFile16_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferListWriteFile16_wrapper),
                (LPVOID)cast_pointer_function((void(*)(char*, int, char*))&CAsyncLogBufferList::WriteFile)
            },
            _hook_record {
                (LPVOID)0x1403c1340L,
                (LPVOID *)&CAsyncLogBufferListdtor_CAsyncLogBufferList20_user,
                (LPVOID *)&CAsyncLogBufferListdtor_CAsyncLogBufferList20_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferListdtor_CAsyncLogBufferList20_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogBufferList::*)())&CAsyncLogBufferList::dtor_CAsyncLogBufferList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
