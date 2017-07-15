#include <CHackShieldExSystemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CHackShieldExSystemctor_CHackShieldExSystem2_ptr CHackShieldExSystemctor_CHackShieldExSystem2_next(nullptr);
        Info::CHackShieldExSystemctor_CHackShieldExSystem2_clbk CHackShieldExSystemctor_CHackShieldExSystem2_user(nullptr);
        
        Info::CHackShieldExSystemGetParam4_ptr CHackShieldExSystemGetParam4_next(nullptr);
        Info::CHackShieldExSystemGetParam4_clbk CHackShieldExSystemGetParam4_user(nullptr);
        
        Info::CHackShieldExSystemIsActive6_ptr CHackShieldExSystemIsActive6_next(nullptr);
        Info::CHackShieldExSystemIsActive6_clbk CHackShieldExSystemIsActive6_user(nullptr);
        
        Info::CHackShieldExSystemIsInit8_ptr CHackShieldExSystemIsInit8_next(nullptr);
        Info::CHackShieldExSystemIsInit8_clbk CHackShieldExSystemIsInit8_user(nullptr);
        
        Info::CHackShieldExSystemOnCheckSession_FirstVerify10_ptr CHackShieldExSystemOnCheckSession_FirstVerify10_next(nullptr);
        Info::CHackShieldExSystemOnCheckSession_FirstVerify10_clbk CHackShieldExSystemOnCheckSession_FirstVerify10_user(nullptr);
        
        Info::CHackShieldExSystemOnConnectSession12_ptr CHackShieldExSystemOnConnectSession12_next(nullptr);
        Info::CHackShieldExSystemOnConnectSession12_clbk CHackShieldExSystemOnConnectSession12_user(nullptr);
        
        Info::CHackShieldExSystemOnDisConnectSession14_ptr CHackShieldExSystemOnDisConnectSession14_next(nullptr);
        Info::CHackShieldExSystemOnDisConnectSession14_clbk CHackShieldExSystemOnDisConnectSession14_user(nullptr);
        
        Info::CHackShieldExSystemOnLoop16_ptr CHackShieldExSystemOnLoop16_next(nullptr);
        Info::CHackShieldExSystemOnLoop16_clbk CHackShieldExSystemOnLoop16_user(nullptr);
        
        Info::CHackShieldExSystemOnLoopSession18_ptr CHackShieldExSystemOnLoopSession18_next(nullptr);
        Info::CHackShieldExSystemOnLoopSession18_clbk CHackShieldExSystemOnLoopSession18_user(nullptr);
        
        Info::CHackShieldExSystemRecvClientLine20_ptr CHackShieldExSystemRecvClientLine20_next(nullptr);
        Info::CHackShieldExSystemRecvClientLine20_clbk CHackShieldExSystemRecvClientLine20_user(nullptr);
        
        
        Info::CHackShieldExSystemdtor_CHackShieldExSystem25_ptr CHackShieldExSystemdtor_CHackShieldExSystem25_next(nullptr);
        Info::CHackShieldExSystemdtor_CHackShieldExSystem25_clbk CHackShieldExSystemdtor_CHackShieldExSystem25_user(nullptr);
        
        
        void CHackShieldExSystemctor_CHackShieldExSystem2_wrapper(struct CHackShieldExSystem* _this)
        {
           CHackShieldExSystemctor_CHackShieldExSystem2_user(_this, CHackShieldExSystemctor_CHackShieldExSystem2_next);
        };
        struct BASE_HACKSHEILD_PARAM* CHackShieldExSystemGetParam4_wrapper(struct CHackShieldExSystem* _this, unsigned int n)
        {
           return CHackShieldExSystemGetParam4_user(_this, n, CHackShieldExSystemGetParam4_next);
        };
        bool CHackShieldExSystemIsActive6_wrapper(struct CHackShieldExSystem* _this)
        {
           return CHackShieldExSystemIsActive6_user(_this, CHackShieldExSystemIsActive6_next);
        };
        bool CHackShieldExSystemIsInit8_wrapper(struct CHackShieldExSystem* _this)
        {
           return CHackShieldExSystemIsInit8_user(_this, CHackShieldExSystemIsInit8_next);
        };
        bool CHackShieldExSystemOnCheckSession_FirstVerify10_wrapper(struct CHackShieldExSystem* _this, int n)
        {
           return CHackShieldExSystemOnCheckSession_FirstVerify10_user(_this, n, CHackShieldExSystemOnCheckSession_FirstVerify10_next);
        };
        void CHackShieldExSystemOnConnectSession12_wrapper(struct CHackShieldExSystem* _this, int n)
        {
           CHackShieldExSystemOnConnectSession12_user(_this, n, CHackShieldExSystemOnConnectSession12_next);
        };
        void CHackShieldExSystemOnDisConnectSession14_wrapper(struct CHackShieldExSystem* _this, int n)
        {
           CHackShieldExSystemOnDisConnectSession14_user(_this, n, CHackShieldExSystemOnDisConnectSession14_next);
        };
        void CHackShieldExSystemOnLoop16_wrapper(struct CHackShieldExSystem* _this)
        {
           CHackShieldExSystemOnLoop16_user(_this, CHackShieldExSystemOnLoop16_next);
        };
        void CHackShieldExSystemOnLoopSession18_wrapper(struct CHackShieldExSystem* _this, int n)
        {
           CHackShieldExSystemOnLoopSession18_user(_this, n, CHackShieldExSystemOnLoopSession18_next);
        };
        bool CHackShieldExSystemRecvClientLine20_wrapper(struct CHackShieldExSystem* _this, int n, struct _MSG_HEADER* pHeader, char* pMsg)
        {
           return CHackShieldExSystemRecvClientLine20_user(_this, n, pHeader, pMsg, CHackShieldExSystemRecvClientLine20_next);
        };
        
        void CHackShieldExSystemdtor_CHackShieldExSystem25_wrapper(struct CHackShieldExSystem* _this)
        {
           CHackShieldExSystemdtor_CHackShieldExSystem25_user(_this, CHackShieldExSystemdtor_CHackShieldExSystem25_next);
        };
        
        ::std::array<hook_record, 11> CHackShieldExSystem_functions = 
        {
            _hook_record {
                (LPVOID)0x140416cb0L,
                (LPVOID *)&CHackShieldExSystemctor_CHackShieldExSystem2_user,
                (LPVOID *)&CHackShieldExSystemctor_CHackShieldExSystem2_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemctor_CHackShieldExSystem2_wrapper),
                (LPVOID)cast_pointer_function((void(CHackShieldExSystem::*)())&CHackShieldExSystem::ctor_CHackShieldExSystem)
            },
            _hook_record {
                (LPVOID)0x140417080L,
                (LPVOID *)&CHackShieldExSystemGetParam4_user,
                (LPVOID *)&CHackShieldExSystemGetParam4_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemGetParam4_wrapper),
                (LPVOID)cast_pointer_function((struct BASE_HACKSHEILD_PARAM*(CHackShieldExSystem::*)(unsigned int))&CHackShieldExSystem::GetParam)
            },
            _hook_record {
                (LPVOID)0x140417720L,
                (LPVOID *)&CHackShieldExSystemIsActive6_user,
                (LPVOID *)&CHackShieldExSystemIsActive6_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemIsActive6_wrapper),
                (LPVOID)cast_pointer_function((bool(CHackShieldExSystem::*)())&CHackShieldExSystem::IsActive)
            },
            _hook_record {
                (LPVOID)0x140417740L,
                (LPVOID *)&CHackShieldExSystemIsInit8_user,
                (LPVOID *)&CHackShieldExSystemIsInit8_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemIsInit8_wrapper),
                (LPVOID)cast_pointer_function((bool(CHackShieldExSystem::*)())&CHackShieldExSystem::IsInit)
            },
            _hook_record {
                (LPVOID)0x140417250L,
                (LPVOID *)&CHackShieldExSystemOnCheckSession_FirstVerify10_user,
                (LPVOID *)&CHackShieldExSystemOnCheckSession_FirstVerify10_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemOnCheckSession_FirstVerify10_wrapper),
                (LPVOID)cast_pointer_function((bool(CHackShieldExSystem::*)(int))&CHackShieldExSystem::OnCheckSession_FirstVerify)
            },
            _hook_record {
                (LPVOID)0x1404170d0L,
                (LPVOID *)&CHackShieldExSystemOnConnectSession12_user,
                (LPVOID *)&CHackShieldExSystemOnConnectSession12_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemOnConnectSession12_wrapper),
                (LPVOID)cast_pointer_function((void(CHackShieldExSystem::*)(int))&CHackShieldExSystem::OnConnectSession)
            },
            _hook_record {
                (LPVOID)0x140417140L,
                (LPVOID *)&CHackShieldExSystemOnDisConnectSession14_user,
                (LPVOID *)&CHackShieldExSystemOnDisConnectSession14_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemOnDisConnectSession14_wrapper),
                (LPVOID)cast_pointer_function((void(CHackShieldExSystem::*)(int))&CHackShieldExSystem::OnDisConnectSession)
            },
            _hook_record {
                (LPVOID)0x140417390L,
                (LPVOID *)&CHackShieldExSystemOnLoop16_user,
                (LPVOID *)&CHackShieldExSystemOnLoop16_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemOnLoop16_wrapper),
                (LPVOID)cast_pointer_function((void(CHackShieldExSystem::*)())&CHackShieldExSystem::OnLoop)
            },
            _hook_record {
                (LPVOID)0x1404171a0L,
                (LPVOID *)&CHackShieldExSystemOnLoopSession18_user,
                (LPVOID *)&CHackShieldExSystemOnLoopSession18_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemOnLoopSession18_wrapper),
                (LPVOID)cast_pointer_function((void(CHackShieldExSystem::*)(int))&CHackShieldExSystem::OnLoopSession)
            },
            _hook_record {
                (LPVOID)0x1404172c0L,
                (LPVOID *)&CHackShieldExSystemRecvClientLine20_user,
                (LPVOID *)&CHackShieldExSystemRecvClientLine20_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemRecvClientLine20_wrapper),
                (LPVOID)cast_pointer_function((bool(CHackShieldExSystem::*)(int, struct _MSG_HEADER*, char*))&CHackShieldExSystem::RecvClientLine)
            },
            _hook_record {
                (LPVOID)0x140416d70L,
                (LPVOID *)&CHackShieldExSystemdtor_CHackShieldExSystem25_user,
                (LPVOID *)&CHackShieldExSystemdtor_CHackShieldExSystem25_next,
                (LPVOID)cast_pointer_function(CHackShieldExSystemdtor_CHackShieldExSystem25_wrapper),
                (LPVOID)cast_pointer_function((void(CHackShieldExSystem::*)())&CHackShieldExSystem::dtor_CHackShieldExSystem)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
