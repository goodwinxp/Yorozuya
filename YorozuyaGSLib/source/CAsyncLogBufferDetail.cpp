#include <CAsyncLogBufferDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CAsyncLogBufferctor_CAsyncLogBuffer2_ptr CAsyncLogBufferctor_CAsyncLogBuffer2_next(nullptr);
        Info::CAsyncLogBufferctor_CAsyncLogBuffer2_clbk CAsyncLogBufferctor_CAsyncLogBuffer2_user(nullptr);
        
        Info::CAsyncLogBufferGetFileName4_ptr CAsyncLogBufferGetFileName4_next(nullptr);
        Info::CAsyncLogBufferGetFileName4_clbk CAsyncLogBufferGetFileName4_user(nullptr);
        
        Info::CAsyncLogBufferGetLength6_ptr CAsyncLogBufferGetLength6_next(nullptr);
        Info::CAsyncLogBufferGetLength6_clbk CAsyncLogBufferGetLength6_user(nullptr);
        
        Info::CAsyncLogBufferGetStr8_ptr CAsyncLogBufferGetStr8_next(nullptr);
        Info::CAsyncLogBufferGetStr8_clbk CAsyncLogBufferGetStr8_user(nullptr);
        
        Info::CAsyncLogBufferInit10_ptr CAsyncLogBufferInit10_next(nullptr);
        Info::CAsyncLogBufferInit10_clbk CAsyncLogBufferInit10_user(nullptr);
        
        Info::CAsyncLogBufferLog12_ptr CAsyncLogBufferLog12_next(nullptr);
        Info::CAsyncLogBufferLog12_clbk CAsyncLogBufferLog12_user(nullptr);
        
        
        Info::CAsyncLogBufferdtor_CAsyncLogBuffer16_ptr CAsyncLogBufferdtor_CAsyncLogBuffer16_next(nullptr);
        Info::CAsyncLogBufferdtor_CAsyncLogBuffer16_clbk CAsyncLogBufferdtor_CAsyncLogBuffer16_user(nullptr);
        
        
        void CAsyncLogBufferctor_CAsyncLogBuffer2_wrapper(struct CAsyncLogBuffer* _this)
        {
           CAsyncLogBufferctor_CAsyncLogBuffer2_user(_this, CAsyncLogBufferctor_CAsyncLogBuffer2_next);
        };
        char* CAsyncLogBufferGetFileName4_wrapper(struct CAsyncLogBuffer* _this)
        {
           return CAsyncLogBufferGetFileName4_user(_this, CAsyncLogBufferGetFileName4_next);
        };
        int CAsyncLogBufferGetLength6_wrapper(struct CAsyncLogBuffer* _this)
        {
           return CAsyncLogBufferGetLength6_user(_this, CAsyncLogBufferGetLength6_next);
        };
        char* CAsyncLogBufferGetStr8_wrapper(struct CAsyncLogBuffer* _this)
        {
           return CAsyncLogBufferGetStr8_user(_this, CAsyncLogBufferGetStr8_next);
        };
        bool CAsyncLogBufferInit10_wrapper(struct CAsyncLogBuffer* _this, int iMaxBufferSize)
        {
           return CAsyncLogBufferInit10_user(_this, iMaxBufferSize, CAsyncLogBufferInit10_next);
        };
        bool CAsyncLogBufferLog12_wrapper(struct CAsyncLogBuffer* _this, char* pszFileName, char* szLog, int iLen)
        {
           return CAsyncLogBufferLog12_user(_this, pszFileName, szLog, iLen, CAsyncLogBufferLog12_next);
        };
        
        void CAsyncLogBufferdtor_CAsyncLogBuffer16_wrapper(struct CAsyncLogBuffer* _this)
        {
           CAsyncLogBufferdtor_CAsyncLogBuffer16_user(_this, CAsyncLogBufferdtor_CAsyncLogBuffer16_next);
        };
        
        ::std::array<hook_record, 7> CAsyncLogBuffer_functions = 
        {
            _hook_record {
                (LPVOID)0x1403bd290L,
                (LPVOID *)&CAsyncLogBufferctor_CAsyncLogBuffer2_user,
                (LPVOID *)&CAsyncLogBufferctor_CAsyncLogBuffer2_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferctor_CAsyncLogBuffer2_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogBuffer::*)())&CAsyncLogBuffer::ctor_CAsyncLogBuffer)
            },
            _hook_record {
                (LPVOID)0x1403c1110L,
                (LPVOID *)&CAsyncLogBufferGetFileName4_user,
                (LPVOID *)&CAsyncLogBufferGetFileName4_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferGetFileName4_wrapper),
                (LPVOID)cast_pointer_function((char*(CAsyncLogBuffer::*)())&CAsyncLogBuffer::GetFileName)
            },
            _hook_record {
                (LPVOID)0x1403c1130L,
                (LPVOID *)&CAsyncLogBufferGetLength6_user,
                (LPVOID *)&CAsyncLogBufferGetLength6_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferGetLength6_wrapper),
                (LPVOID)cast_pointer_function((int(CAsyncLogBuffer::*)())&CAsyncLogBuffer::GetLength)
            },
            _hook_record {
                (LPVOID)0x1403c1150L,
                (LPVOID *)&CAsyncLogBufferGetStr8_user,
                (LPVOID *)&CAsyncLogBufferGetStr8_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferGetStr8_wrapper),
                (LPVOID)cast_pointer_function((char*(CAsyncLogBuffer::*)())&CAsyncLogBuffer::GetStr)
            },
            _hook_record {
                (LPVOID)0x1403bd2f0L,
                (LPVOID *)&CAsyncLogBufferInit10_user,
                (LPVOID *)&CAsyncLogBufferInit10_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferInit10_wrapper),
                (LPVOID)cast_pointer_function((bool(CAsyncLogBuffer::*)(int))&CAsyncLogBuffer::Init)
            },
            _hook_record {
                (LPVOID)0x1403bd380L,
                (LPVOID *)&CAsyncLogBufferLog12_user,
                (LPVOID *)&CAsyncLogBufferLog12_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferLog12_wrapper),
                (LPVOID)cast_pointer_function((bool(CAsyncLogBuffer::*)(char*, char*, int))&CAsyncLogBuffer::Log)
            },
            _hook_record {
                (LPVOID)0x1403bc990L,
                (LPVOID *)&CAsyncLogBufferdtor_CAsyncLogBuffer16_user,
                (LPVOID *)&CAsyncLogBufferdtor_CAsyncLogBuffer16_next,
                (LPVOID)cast_pointer_function(CAsyncLogBufferdtor_CAsyncLogBuffer16_wrapper),
                (LPVOID)cast_pointer_function((void(CAsyncLogBuffer::*)())&CAsyncLogBuffer::dtor_CAsyncLogBuffer)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
