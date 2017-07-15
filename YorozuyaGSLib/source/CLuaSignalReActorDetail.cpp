#include <CLuaSignalReActorDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CLuaSignalReActorAddAction2_ptr CLuaSignalReActorAddAction2_next(nullptr);
        Info::CLuaSignalReActorAddAction2_clbk CLuaSignalReActorAddAction2_user(nullptr);
        
        
        Info::CLuaSignalReActorctor_CLuaSignalReActor4_ptr CLuaSignalReActorctor_CLuaSignalReActor4_next(nullptr);
        Info::CLuaSignalReActorctor_CLuaSignalReActor4_clbk CLuaSignalReActorctor_CLuaSignalReActor4_user(nullptr);
        
        Info::CLuaSignalReActorFree6_ptr CLuaSignalReActorFree6_next(nullptr);
        Info::CLuaSignalReActorFree6_clbk CLuaSignalReActorFree6_user(nullptr);
        
        Info::CLuaSignalReActorInit8_ptr CLuaSignalReActorInit8_next(nullptr);
        Info::CLuaSignalReActorInit8_clbk CLuaSignalReActorInit8_user(nullptr);
        
        Info::CLuaSignalReActorSetSignalAndAction10_ptr CLuaSignalReActorSetSignalAndAction10_next(nullptr);
        Info::CLuaSignalReActorSetSignalAndAction10_clbk CLuaSignalReActorSetSignalAndAction10_user(nullptr);
        
        Info::CLuaSignalReActor_Free12_ptr CLuaSignalReActor_Free12_next(nullptr);
        Info::CLuaSignalReActor_Free12_clbk CLuaSignalReActor_Free12_user(nullptr);
        
        Info::CLuaSignalReActor_SearchAction14_ptr CLuaSignalReActor_SearchAction14_next(nullptr);
        Info::CLuaSignalReActor_SearchAction14_clbk CLuaSignalReActor_SearchAction14_user(nullptr);
        
        Info::CLuaSignalReActor_SearchEmptyAction16_ptr CLuaSignalReActor_SearchEmptyAction16_next(nullptr);
        Info::CLuaSignalReActor_SearchEmptyAction16_clbk CLuaSignalReActor_SearchEmptyAction16_user(nullptr);
        
        
        Info::CLuaSignalReActordtor_CLuaSignalReActor18_ptr CLuaSignalReActordtor_CLuaSignalReActor18_next(nullptr);
        Info::CLuaSignalReActordtor_CLuaSignalReActor18_clbk CLuaSignalReActordtor_CLuaSignalReActor18_user(nullptr);
        
        bool CLuaSignalReActorAddAction2_wrapper(struct CLuaSignalReActor* _this, char bySignalCode, char byType, char* strScriptName, char* strName)
        {
           return CLuaSignalReActorAddAction2_user(_this, bySignalCode, byType, strScriptName, strName, CLuaSignalReActorAddAction2_next);
        };
        
        void CLuaSignalReActorctor_CLuaSignalReActor4_wrapper(struct CLuaSignalReActor* _this)
        {
           CLuaSignalReActorctor_CLuaSignalReActor4_user(_this, CLuaSignalReActorctor_CLuaSignalReActor4_next);
        };
        void CLuaSignalReActorFree6_wrapper(struct CLuaSignalReActor* _this)
        {
           CLuaSignalReActorFree6_user(_this, CLuaSignalReActorFree6_next);
        };
        void CLuaSignalReActorInit8_wrapper(struct CLuaSignalReActor* _this)
        {
           CLuaSignalReActorInit8_user(_this, CLuaSignalReActorInit8_next);
        };
        bool CLuaSignalReActorSetSignalAndAction10_wrapper(struct CLuaSignalReActor* _this, char bySignalCode)
        {
           return CLuaSignalReActorSetSignalAndAction10_user(_this, bySignalCode, CLuaSignalReActorSetSignalAndAction10_next);
        };
        void CLuaSignalReActor_Free12_wrapper(struct CLuaSignalReActor* _this, struct CLuaSignalReActor::_Action* pAction)
        {
           CLuaSignalReActor_Free12_user(_this, pAction, CLuaSignalReActor_Free12_next);
        };
        struct CLuaSignalReActor::_Action* CLuaSignalReActor_SearchAction14_wrapper(struct CLuaSignalReActor* _this, char bySignalCode)
        {
           return CLuaSignalReActor_SearchAction14_user(_this, bySignalCode, CLuaSignalReActor_SearchAction14_next);
        };
        struct CLuaSignalReActor::_Action* CLuaSignalReActor_SearchEmptyAction16_wrapper(struct CLuaSignalReActor* _this)
        {
           return CLuaSignalReActor_SearchEmptyAction16_user(_this, CLuaSignalReActor_SearchEmptyAction16_next);
        };
        
        void CLuaSignalReActordtor_CLuaSignalReActor18_wrapper(struct CLuaSignalReActor* _this)
        {
           CLuaSignalReActordtor_CLuaSignalReActor18_user(_this, CLuaSignalReActordtor_CLuaSignalReActor18_next);
        };
        
        ::std::array<hook_record, 9> CLuaSignalReActor_functions = 
        {
            _hook_record {
                (LPVOID)0x1404000a0L,
                (LPVOID *)&CLuaSignalReActorAddAction2_user,
                (LPVOID *)&CLuaSignalReActorAddAction2_next,
                (LPVOID)cast_pointer_function(CLuaSignalReActorAddAction2_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaSignalReActor::*)(char, char, char*, char*))&CLuaSignalReActor::AddAction)
            },
            _hook_record {
                (LPVOID)0x14014b8a0L,
                (LPVOID *)&CLuaSignalReActorctor_CLuaSignalReActor4_user,
                (LPVOID *)&CLuaSignalReActorctor_CLuaSignalReActor4_next,
                (LPVOID)cast_pointer_function(CLuaSignalReActorctor_CLuaSignalReActor4_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaSignalReActor::*)())&CLuaSignalReActor::ctor_CLuaSignalReActor)
            },
            _hook_record {
                (LPVOID)0x140400220L,
                (LPVOID *)&CLuaSignalReActorFree6_user,
                (LPVOID *)&CLuaSignalReActorFree6_next,
                (LPVOID)cast_pointer_function(CLuaSignalReActorFree6_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaSignalReActor::*)())&CLuaSignalReActor::Free)
            },
            _hook_record {
                (LPVOID)0x14014bf40L,
                (LPVOID *)&CLuaSignalReActorInit8_user,
                (LPVOID *)&CLuaSignalReActorInit8_next,
                (LPVOID)cast_pointer_function(CLuaSignalReActorInit8_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaSignalReActor::*)())&CLuaSignalReActor::Init)
            },
            _hook_record {
                (LPVOID)0x140400160L,
                (LPVOID *)&CLuaSignalReActorSetSignalAndAction10_user,
                (LPVOID *)&CLuaSignalReActorSetSignalAndAction10_next,
                (LPVOID)cast_pointer_function(CLuaSignalReActorSetSignalAndAction10_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaSignalReActor::*)(char))&CLuaSignalReActor::SetSignalAndAction)
            },
            _hook_record {
                (LPVOID)0x1404003c0L,
                (LPVOID *)&CLuaSignalReActor_Free12_user,
                (LPVOID *)&CLuaSignalReActor_Free12_next,
                (LPVOID)cast_pointer_function(CLuaSignalReActor_Free12_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaSignalReActor::*)(struct CLuaSignalReActor::_Action*))&CLuaSignalReActor::_Free)
            },
            _hook_record {
                (LPVOID)0x140400320L,
                (LPVOID *)&CLuaSignalReActor_SearchAction14_user,
                (LPVOID *)&CLuaSignalReActor_SearchAction14_next,
                (LPVOID)cast_pointer_function(CLuaSignalReActor_SearchAction14_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaSignalReActor::_Action*(CLuaSignalReActor::*)(char))&CLuaSignalReActor::_SearchAction)
            },
            _hook_record {
                (LPVOID)0x140400290L,
                (LPVOID *)&CLuaSignalReActor_SearchEmptyAction16_user,
                (LPVOID *)&CLuaSignalReActor_SearchEmptyAction16_next,
                (LPVOID)cast_pointer_function(CLuaSignalReActor_SearchEmptyAction16_wrapper),
                (LPVOID)cast_pointer_function((struct CLuaSignalReActor::_Action*(CLuaSignalReActor::*)())&CLuaSignalReActor::_SearchEmptyAction)
            },
            _hook_record {
                (LPVOID)0x14014b980L,
                (LPVOID *)&CLuaSignalReActordtor_CLuaSignalReActor18_user,
                (LPVOID *)&CLuaSignalReActordtor_CLuaSignalReActor18_next,
                (LPVOID)cast_pointer_function(CLuaSignalReActordtor_CLuaSignalReActor18_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaSignalReActor::*)())&CLuaSignalReActor::dtor_CLuaSignalReActor)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
