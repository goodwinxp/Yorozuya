#include <CTextureRenderDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CTextureRenderBeginScene1_ptr CTextureRenderBeginScene1_next(nullptr);
        Info::CTextureRenderBeginScene1_clbk CTextureRenderBeginScene1_user(nullptr);
        
        Info::CTextureRenderClearFrameBuffer2_ptr CTextureRenderClearFrameBuffer2_next(nullptr);
        Info::CTextureRenderClearFrameBuffer2_clbk CTextureRenderClearFrameBuffer2_user(nullptr);
        
        Info::CTextureRenderCreateTexture3_ptr CTextureRenderCreateTexture3_next(nullptr);
        Info::CTextureRenderCreateTexture3_clbk CTextureRenderCreateTexture3_user(nullptr);
        
        Info::CTextureRenderEndScene4_ptr CTextureRenderEndScene4_next(nullptr);
        Info::CTextureRenderEndScene4_clbk CTextureRenderEndScene4_user(nullptr);
        
        Info::CTextureRenderGetD3DTexture5_ptr CTextureRenderGetD3DTexture5_next(nullptr);
        Info::CTextureRenderGetD3DTexture5_clbk CTextureRenderGetD3DTexture5_user(nullptr);
        
        Info::CTextureRenderGetXSize6_ptr CTextureRenderGetXSize6_next(nullptr);
        Info::CTextureRenderGetXSize6_clbk CTextureRenderGetXSize6_user(nullptr);
        
        Info::CTextureRenderGetYSize7_ptr CTextureRenderGetYSize7_next(nullptr);
        Info::CTextureRenderGetYSize7_clbk CTextureRenderGetYSize7_user(nullptr);
        
        Info::CTextureRenderIsLoaded8_ptr CTextureRenderIsLoaded8_next(nullptr);
        Info::CTextureRenderIsLoaded8_clbk CTextureRenderIsLoaded8_user(nullptr);
        
        Info::CTextureRenderReleaseTexture9_ptr CTextureRenderReleaseTexture9_next(nullptr);
        Info::CTextureRenderReleaseTexture9_clbk CTextureRenderReleaseTexture9_user(nullptr);
        
        Info::CTextureRenderSetClearAtOnce10_ptr CTextureRenderSetClearAtOnce10_next(nullptr);
        Info::CTextureRenderSetClearAtOnce10_clbk CTextureRenderSetClearAtOnce10_user(nullptr);
        
        
        Info::CTextureRenderdtor_CTextureRender11_ptr CTextureRenderdtor_CTextureRender11_next(nullptr);
        Info::CTextureRenderdtor_CTextureRender11_clbk CTextureRenderdtor_CTextureRender11_user(nullptr);
        
        int64_t CTextureRenderBeginScene1_wrapper(struct CTextureRender* _this, uint32_t arg_0)
        {
           return CTextureRenderBeginScene1_user(_this, arg_0, CTextureRenderBeginScene1_next);
        };
        void CTextureRenderClearFrameBuffer2_wrapper(struct CTextureRender* _this, uint32_t arg_0)
        {
           CTextureRenderClearFrameBuffer2_user(_this, arg_0, CTextureRenderClearFrameBuffer2_next);
        };
        int64_t CTextureRenderCreateTexture3_wrapper(struct CTextureRender* _this, struct IDirect3DDevice8* arg_0, uint32_t arg_1, uint32_t arg_2, int arg_3)
        {
           return CTextureRenderCreateTexture3_user(_this, arg_0, arg_1, arg_2, arg_3, CTextureRenderCreateTexture3_next);
        };
        void CTextureRenderEndScene4_wrapper(struct CTextureRender* _this)
        {
           CTextureRenderEndScene4_user(_this, CTextureRenderEndScene4_next);
        };
        struct IDirect3DTexture8* CTextureRenderGetD3DTexture5_wrapper(struct CTextureRender* _this)
        {
           return CTextureRenderGetD3DTexture5_user(_this, CTextureRenderGetD3DTexture5_next);
        };
        uint32_t CTextureRenderGetXSize6_wrapper(struct CTextureRender* _this)
        {
           return CTextureRenderGetXSize6_user(_this, CTextureRenderGetXSize6_next);
        };
        uint32_t CTextureRenderGetYSize7_wrapper(struct CTextureRender* _this)
        {
           return CTextureRenderGetYSize7_user(_this, CTextureRenderGetYSize7_next);
        };
        int64_t CTextureRenderIsLoaded8_wrapper(struct CTextureRender* _this)
        {
           return CTextureRenderIsLoaded8_user(_this, CTextureRenderIsLoaded8_next);
        };
        void CTextureRenderReleaseTexture9_wrapper(struct CTextureRender* _this)
        {
           CTextureRenderReleaseTexture9_user(_this, CTextureRenderReleaseTexture9_next);
        };
        void CTextureRenderSetClearAtOnce10_wrapper(struct CTextureRender* _this, int arg_0)
        {
           CTextureRenderSetClearAtOnce10_user(_this, arg_0, CTextureRenderSetClearAtOnce10_next);
        };
        
        int64_t CTextureRenderdtor_CTextureRender11_wrapper(struct CTextureRender* _this)
        {
           return CTextureRenderdtor_CTextureRender11_user(_this, CTextureRenderdtor_CTextureRender11_next);
        };
        
        ::std::array<hook_record, 11> CTextureRender_functions = 
        {
            _hook_record {
                (LPVOID)0x140529f10L,
                (LPVOID *)&CTextureRenderBeginScene1_user,
                (LPVOID *)&CTextureRenderBeginScene1_next,
                (LPVOID)cast_pointer_function(CTextureRenderBeginScene1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CTextureRender::*)(uint32_t))&CTextureRender::BeginScene)
            },
            _hook_record {
                (LPVOID)0x140529e50L,
                (LPVOID *)&CTextureRenderClearFrameBuffer2_user,
                (LPVOID *)&CTextureRenderClearFrameBuffer2_next,
                (LPVOID)cast_pointer_function(CTextureRenderClearFrameBuffer2_wrapper),
                (LPVOID)cast_pointer_function((void(CTextureRender::*)(uint32_t))&CTextureRender::ClearFrameBuffer)
            },
            _hook_record {
                (LPVOID)0x140529c50L,
                (LPVOID *)&CTextureRenderCreateTexture3_user,
                (LPVOID *)&CTextureRenderCreateTexture3_next,
                (LPVOID)cast_pointer_function(CTextureRenderCreateTexture3_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CTextureRender::*)(struct IDirect3DDevice8*, uint32_t, uint32_t, int))&CTextureRender::CreateTexture)
            },
            _hook_record {
                (LPVOID)0x140529eb0L,
                (LPVOID *)&CTextureRenderEndScene4_user,
                (LPVOID *)&CTextureRenderEndScene4_next,
                (LPVOID)cast_pointer_function(CTextureRenderEndScene4_wrapper),
                (LPVOID)cast_pointer_function((void(CTextureRender::*)())&CTextureRender::EndScene)
            },
            _hook_record {
                (LPVOID)0x1404ede30L,
                (LPVOID *)&CTextureRenderGetD3DTexture5_user,
                (LPVOID *)&CTextureRenderGetD3DTexture5_next,
                (LPVOID)cast_pointer_function(CTextureRenderGetD3DTexture5_wrapper),
                (LPVOID)cast_pointer_function((struct IDirect3DTexture8*(CTextureRender::*)())&CTextureRender::GetD3DTexture)
            },
            _hook_record {
                (LPVOID)0x140513ec0L,
                (LPVOID *)&CTextureRenderGetXSize6_user,
                (LPVOID *)&CTextureRenderGetXSize6_next,
                (LPVOID)cast_pointer_function(CTextureRenderGetXSize6_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CTextureRender::*)())&CTextureRender::GetXSize)
            },
            _hook_record {
                (LPVOID)0x140513ed0L,
                (LPVOID *)&CTextureRenderGetYSize7_user,
                (LPVOID *)&CTextureRenderGetYSize7_next,
                (LPVOID)cast_pointer_function(CTextureRenderGetYSize7_wrapper),
                (LPVOID)cast_pointer_function((uint32_t(CTextureRender::*)())&CTextureRender::GetYSize)
            },
            _hook_record {
                (LPVOID)0x140513eb0L,
                (LPVOID *)&CTextureRenderIsLoaded8_user,
                (LPVOID *)&CTextureRenderIsLoaded8_next,
                (LPVOID)cast_pointer_function(CTextureRenderIsLoaded8_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CTextureRender::*)())&CTextureRender::IsLoaded)
            },
            _hook_record {
                (LPVOID)0x140529ba0L,
                (LPVOID *)&CTextureRenderReleaseTexture9_user,
                (LPVOID *)&CTextureRenderReleaseTexture9_next,
                (LPVOID)cast_pointer_function(CTextureRenderReleaseTexture9_wrapper),
                (LPVOID)cast_pointer_function((void(CTextureRender::*)())&CTextureRender::ReleaseTexture)
            },
            _hook_record {
                (LPVOID)0x140513ee0L,
                (LPVOID *)&CTextureRenderSetClearAtOnce10_user,
                (LPVOID *)&CTextureRenderSetClearAtOnce10_next,
                (LPVOID)cast_pointer_function(CTextureRenderSetClearAtOnce10_wrapper),
                (LPVOID)cast_pointer_function((void(CTextureRender::*)(int))&CTextureRender::SetClearAtOnce)
            },
            _hook_record {
                (LPVOID)0x140529b90L,
                (LPVOID *)&CTextureRenderdtor_CTextureRender11_user,
                (LPVOID *)&CTextureRenderdtor_CTextureRender11_next,
                (LPVOID)cast_pointer_function(CTextureRenderdtor_CTextureRender11_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CTextureRender::*)())&CTextureRender::dtor_CTextureRender)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
