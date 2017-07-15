#include <CVertexBufferDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CVertexBufferctor_CVertexBuffer1_ptr CVertexBufferctor_CVertexBuffer1_next(nullptr);
        Info::CVertexBufferctor_CVertexBuffer1_clbk CVertexBufferctor_CVertexBuffer1_user(nullptr);
        
        Info::CVertexBufferInitVertexBuffer2_ptr CVertexBufferInitVertexBuffer2_next(nullptr);
        Info::CVertexBufferInitVertexBuffer2_clbk CVertexBufferInitVertexBuffer2_user(nullptr);
        
        Info::CVertexBufferReleaseVertexBuffer3_ptr CVertexBufferReleaseVertexBuffer3_next(nullptr);
        Info::CVertexBufferReleaseVertexBuffer3_clbk CVertexBufferReleaseVertexBuffer3_user(nullptr);
        
        Info::CVertexBufferVPLock4_ptr CVertexBufferVPLock4_next(nullptr);
        Info::CVertexBufferVPLock4_clbk CVertexBufferVPLock4_user(nullptr);
        
        Info::CVertexBufferVPUnLock5_ptr CVertexBufferVPUnLock5_next(nullptr);
        Info::CVertexBufferVPUnLock5_clbk CVertexBufferVPUnLock5_user(nullptr);
        
        
        Info::CVertexBufferdtor_CVertexBuffer6_ptr CVertexBufferdtor_CVertexBuffer6_next(nullptr);
        Info::CVertexBufferdtor_CVertexBuffer6_clbk CVertexBufferdtor_CVertexBuffer6_user(nullptr);
        
        
        void CVertexBufferctor_CVertexBuffer1_wrapper(void* arg_0)
        {
           CVertexBufferctor_CVertexBuffer1_user(arg_0, CVertexBufferctor_CVertexBuffer1_next);
        };
        void CVertexBufferInitVertexBuffer2_wrapper(struct CVertexBuffer* _this, int arg_0, int arg_1, uint32_t arg_2)
        {
           CVertexBufferInitVertexBuffer2_user(_this, arg_0, arg_1, arg_2, CVertexBufferInitVertexBuffer2_next);
        };
        void CVertexBufferReleaseVertexBuffer3_wrapper(struct CVertexBuffer* _this)
        {
           CVertexBufferReleaseVertexBuffer3_user(_this, CVertexBufferReleaseVertexBuffer3_next);
        };
        uint8_t* CVertexBufferVPLock4_wrapper(struct CVertexBuffer* _this, int arg_0, int arg_1, uint32_t arg_2)
        {
           return CVertexBufferVPLock4_user(_this, arg_0, arg_1, arg_2, CVertexBufferVPLock4_next);
        };
        void CVertexBufferVPUnLock5_wrapper(struct CVertexBuffer* _this)
        {
           CVertexBufferVPUnLock5_user(_this, CVertexBufferVPUnLock5_next);
        };
        
        void CVertexBufferdtor_CVertexBuffer6_wrapper(void* arg_0)
        {
           CVertexBufferdtor_CVertexBuffer6_user(arg_0, CVertexBufferdtor_CVertexBuffer6_next);
        };
        
        ::std::array<hook_record, 6> CVertexBuffer_functions = 
        {
            _hook_record {
                (LPVOID)0x14050c180L,
                (LPVOID *)&CVertexBufferctor_CVertexBuffer1_user,
                (LPVOID *)&CVertexBufferctor_CVertexBuffer1_next,
                (LPVOID)cast_pointer_function(CVertexBufferctor_CVertexBuffer1_wrapper),
                (LPVOID)cast_pointer_function((void(CVertexBuffer::*)())&CVertexBuffer::ctor_CVertexBuffer)
            },
            _hook_record {
                (LPVOID)0x14050c1a0L,
                (LPVOID *)&CVertexBufferInitVertexBuffer2_user,
                (LPVOID *)&CVertexBufferInitVertexBuffer2_next,
                (LPVOID)cast_pointer_function(CVertexBufferInitVertexBuffer2_wrapper),
                (LPVOID)cast_pointer_function((void(CVertexBuffer::*)(int, int, uint32_t))&CVertexBuffer::InitVertexBuffer)
            },
            _hook_record {
                (LPVOID)0x14050c280L,
                (LPVOID *)&CVertexBufferReleaseVertexBuffer3_user,
                (LPVOID *)&CVertexBufferReleaseVertexBuffer3_next,
                (LPVOID)cast_pointer_function(CVertexBufferReleaseVertexBuffer3_wrapper),
                (LPVOID)cast_pointer_function((void(CVertexBuffer::*)())&CVertexBuffer::ReleaseVertexBuffer)
            },
            _hook_record {
                (LPVOID)0x14050c2c0L,
                (LPVOID *)&CVertexBufferVPLock4_user,
                (LPVOID *)&CVertexBufferVPLock4_next,
                (LPVOID)cast_pointer_function(CVertexBufferVPLock4_wrapper),
                (LPVOID)cast_pointer_function((uint8_t*(CVertexBuffer::*)(int, int, uint32_t))&CVertexBuffer::VPLock)
            },
            _hook_record {
                (LPVOID)0x14050c340L,
                (LPVOID *)&CVertexBufferVPUnLock5_user,
                (LPVOID *)&CVertexBufferVPUnLock5_next,
                (LPVOID)cast_pointer_function(CVertexBufferVPUnLock5_wrapper),
                (LPVOID)cast_pointer_function((void(CVertexBuffer::*)())&CVertexBuffer::VPUnLock)
            },
            _hook_record {
                (LPVOID)0x14050c190L,
                (LPVOID *)&CVertexBufferdtor_CVertexBuffer6_user,
                (LPVOID *)&CVertexBufferdtor_CVertexBuffer6_next,
                (LPVOID)cast_pointer_function(CVertexBufferdtor_CVertexBuffer6_wrapper),
                (LPVOID)cast_pointer_function((void(CVertexBuffer::*)())&CVertexBuffer::dtor_CVertexBuffer)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
