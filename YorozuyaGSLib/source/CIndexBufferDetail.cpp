#include <CIndexBufferDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CIndexBufferInitIndexBuffer1_ptr CIndexBufferInitIndexBuffer1_next(nullptr);
        Info::CIndexBufferInitIndexBuffer1_clbk CIndexBufferInitIndexBuffer1_user(nullptr);
        
        Info::CIndexBufferReleaseIndexBuffer2_ptr CIndexBufferReleaseIndexBuffer2_next(nullptr);
        Info::CIndexBufferReleaseIndexBuffer2_clbk CIndexBufferReleaseIndexBuffer2_user(nullptr);
        
        Info::CIndexBufferVPLock3_ptr CIndexBufferVPLock3_next(nullptr);
        Info::CIndexBufferVPLock3_clbk CIndexBufferVPLock3_user(nullptr);
        
        Info::CIndexBufferVPUnLock4_ptr CIndexBufferVPUnLock4_next(nullptr);
        Info::CIndexBufferVPUnLock4_clbk CIndexBufferVPUnLock4_user(nullptr);
        
        
        Info::CIndexBufferdtor_CIndexBuffer5_ptr CIndexBufferdtor_CIndexBuffer5_next(nullptr);
        Info::CIndexBufferdtor_CIndexBuffer5_clbk CIndexBufferdtor_CIndexBuffer5_user(nullptr);
        
        void CIndexBufferInitIndexBuffer1_wrapper(struct CIndexBuffer* _this, int arg_0, int arg_1)
        {
           CIndexBufferInitIndexBuffer1_user(_this, arg_0, arg_1, CIndexBufferInitIndexBuffer1_next);
        };
        void CIndexBufferReleaseIndexBuffer2_wrapper(struct CIndexBuffer* _this)
        {
           CIndexBufferReleaseIndexBuffer2_user(_this, CIndexBufferReleaseIndexBuffer2_next);
        };
        uint8_t* CIndexBufferVPLock3_wrapper(struct CIndexBuffer* _this, int arg_0, int arg_1, uint32_t arg_2)
        {
           return CIndexBufferVPLock3_user(_this, arg_0, arg_1, arg_2, CIndexBufferVPLock3_next);
        };
        void CIndexBufferVPUnLock4_wrapper(struct CIndexBuffer* _this)
        {
           CIndexBufferVPUnLock4_user(_this, CIndexBufferVPUnLock4_next);
        };
        
        int64_t CIndexBufferdtor_CIndexBuffer5_wrapper(struct CIndexBuffer* _this)
        {
           return CIndexBufferdtor_CIndexBuffer5_user(_this, CIndexBufferdtor_CIndexBuffer5_next);
        };
        
        ::std::array<hook_record, 5> CIndexBuffer_functions = 
        {
            _hook_record {
                (LPVOID)0x14050c370L,
                (LPVOID *)&CIndexBufferInitIndexBuffer1_user,
                (LPVOID *)&CIndexBufferInitIndexBuffer1_next,
                (LPVOID)cast_pointer_function(CIndexBufferInitIndexBuffer1_wrapper),
                (LPVOID)cast_pointer_function((void(CIndexBuffer::*)(int, int))&CIndexBuffer::InitIndexBuffer)
            },
            _hook_record {
                (LPVOID)0x14050c420L,
                (LPVOID *)&CIndexBufferReleaseIndexBuffer2_user,
                (LPVOID *)&CIndexBufferReleaseIndexBuffer2_next,
                (LPVOID)cast_pointer_function(CIndexBufferReleaseIndexBuffer2_wrapper),
                (LPVOID)cast_pointer_function((void(CIndexBuffer::*)())&CIndexBuffer::ReleaseIndexBuffer)
            },
            _hook_record {
                (LPVOID)0x14050c460L,
                (LPVOID *)&CIndexBufferVPLock3_user,
                (LPVOID *)&CIndexBufferVPLock3_next,
                (LPVOID)cast_pointer_function(CIndexBufferVPLock3_wrapper),
                (LPVOID)cast_pointer_function((uint8_t*(CIndexBuffer::*)(int, int, uint32_t))&CIndexBuffer::VPLock)
            },
            _hook_record {
                (LPVOID)0x14050c4e0L,
                (LPVOID *)&CIndexBufferVPUnLock4_user,
                (LPVOID *)&CIndexBufferVPUnLock4_next,
                (LPVOID)cast_pointer_function(CIndexBufferVPUnLock4_wrapper),
                (LPVOID)cast_pointer_function((void(CIndexBuffer::*)())&CIndexBuffer::VPUnLock)
            },
            _hook_record {
                (LPVOID)0x14050c530L,
                (LPVOID *)&CIndexBufferdtor_CIndexBuffer5_user,
                (LPVOID *)&CIndexBufferdtor_CIndexBuffer5_next,
                (LPVOID)cast_pointer_function(CIndexBufferdtor_CIndexBuffer5_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CIndexBuffer::*)())&CIndexBuffer::dtor_CIndexBuffer)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
