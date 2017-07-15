#include <CD3DArcBallDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CD3DArcBallctor_CD3DArcBall1_ptr CD3DArcBallctor_CD3DArcBall1_next(nullptr);
        Info::CD3DArcBallctor_CD3DArcBall1_clbk CD3DArcBallctor_CD3DArcBall1_user(nullptr);
        
        Info::CD3DArcBallHandleMouseMessages2_ptr CD3DArcBallHandleMouseMessages2_next(nullptr);
        Info::CD3DArcBallHandleMouseMessages2_clbk CD3DArcBallHandleMouseMessages2_user(nullptr);
        
        Info::CD3DArcBallScreenToVector3_ptr CD3DArcBallScreenToVector3_next(nullptr);
        Info::CD3DArcBallScreenToVector3_clbk CD3DArcBallScreenToVector3_user(nullptr);
        
        Info::CD3DArcBallSetRadius4_ptr CD3DArcBallSetRadius4_next(nullptr);
        Info::CD3DArcBallSetRadius4_clbk CD3DArcBallSetRadius4_user(nullptr);
        
        Info::CD3DArcBallSetWindow5_ptr CD3DArcBallSetWindow5_next(nullptr);
        Info::CD3DArcBallSetWindow5_clbk CD3DArcBallSetWindow5_user(nullptr);
        
        
        int64_t CD3DArcBallctor_CD3DArcBall1_wrapper(struct CD3DArcBall* _this)
        {
           return CD3DArcBallctor_CD3DArcBall1_user(_this, CD3DArcBallctor_CD3DArcBall1_next);
        };
        int64_t CD3DArcBallHandleMouseMessages2_wrapper(struct CD3DArcBall* _this, HWND arg_0, unsigned int arg_1, uint64_t arg_2, int64_t arg_3)
        {
           return CD3DArcBallHandleMouseMessages2_user(_this, arg_0, arg_1, arg_2, arg_3, CD3DArcBallHandleMouseMessages2_next);
        };
        struct D3DXVECTOR3* CD3DArcBallScreenToVector3_wrapper(struct CD3DArcBall* _this, short retstr, struct D3DXVECTOR3* arg_0, int arg_1)
        {
           return CD3DArcBallScreenToVector3_user(_this, retstr, arg_0, arg_1, CD3DArcBallScreenToVector3_next);
        };
        void CD3DArcBallSetRadius4_wrapper(struct CD3DArcBall* _this, float arg_0)
        {
           CD3DArcBallSetRadius4_user(_this, arg_0, CD3DArcBallSetRadius4_next);
        };
        void CD3DArcBallSetWindow5_wrapper(struct CD3DArcBall* _this, int arg_0, int arg_1, float arg_2)
        {
           CD3DArcBallSetWindow5_user(_this, arg_0, arg_1, arg_2, CD3DArcBallSetWindow5_next);
        };
        
        ::std::array<hook_record, 5> CD3DArcBall_functions = 
        {
            _hook_record {
                (LPVOID)0x14052c210L,
                (LPVOID *)&CD3DArcBallctor_CD3DArcBall1_user,
                (LPVOID *)&CD3DArcBallctor_CD3DArcBall1_next,
                (LPVOID)cast_pointer_function(CD3DArcBallctor_CD3DArcBall1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CD3DArcBall::*)())&CD3DArcBall::ctor_CD3DArcBall)
            },
            _hook_record {
                (LPVOID)0x14052c510L,
                (LPVOID *)&CD3DArcBallHandleMouseMessages2_user,
                (LPVOID *)&CD3DArcBallHandleMouseMessages2_next,
                (LPVOID)cast_pointer_function(CD3DArcBallHandleMouseMessages2_wrapper),
                (LPVOID)cast_pointer_function((int64_t(CD3DArcBall::*)(HWND, unsigned int, uint64_t, int64_t))&CD3DArcBall::HandleMouseMessages)
            },
            _hook_record {
                (LPVOID)0x14052c3e0L,
                (LPVOID *)&CD3DArcBallScreenToVector3_user,
                (LPVOID *)&CD3DArcBallScreenToVector3_next,
                (LPVOID)cast_pointer_function(CD3DArcBallScreenToVector3_wrapper),
                (LPVOID)cast_pointer_function((struct D3DXVECTOR3*(CD3DArcBall::*)(short, struct D3DXVECTOR3*, int))&CD3DArcBall::ScreenToVector)
            },
            _hook_record {
                (LPVOID)0x14052c500L,
                (LPVOID *)&CD3DArcBallSetRadius4_user,
                (LPVOID *)&CD3DArcBallSetRadius4_next,
                (LPVOID)cast_pointer_function(CD3DArcBallSetRadius4_wrapper),
                (LPVOID)cast_pointer_function((void(CD3DArcBall::*)(float))&CD3DArcBall::SetRadius)
            },
            _hook_record {
                (LPVOID)0x14052c3d0L,
                (LPVOID *)&CD3DArcBallSetWindow5_user,
                (LPVOID *)&CD3DArcBallSetWindow5_next,
                (LPVOID)cast_pointer_function(CD3DArcBallSetWindow5_wrapper),
                (LPVOID)cast_pointer_function((void(CD3DArcBall::*)(int, int, float))&CD3DArcBall::SetWindow)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
