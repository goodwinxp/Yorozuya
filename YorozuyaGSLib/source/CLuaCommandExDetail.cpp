#include <CLuaCommandExDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CLuaCommandExctor_CLuaCommandEx2_ptr CLuaCommandExctor_CLuaCommandEx2_next(nullptr);
        Info::CLuaCommandExctor_CLuaCommandEx2_clbk CLuaCommandExctor_CLuaCommandEx2_user(nullptr);
        
        Info::CLuaCommandExGetScriptName4_ptr CLuaCommandExGetScriptName4_next(nullptr);
        Info::CLuaCommandExGetScriptName4_clbk CLuaCommandExGetScriptName4_user(nullptr);
        
        Info::CLuaCommandExSetCmd6_ptr CLuaCommandExSetCmd6_next(nullptr);
        Info::CLuaCommandExSetCmd6_clbk CLuaCommandExSetCmd6_user(nullptr);
        
        
        Info::CLuaCommandExdtor_CLuaCommandEx10_ptr CLuaCommandExdtor_CLuaCommandEx10_next(nullptr);
        Info::CLuaCommandExdtor_CLuaCommandEx10_clbk CLuaCommandExdtor_CLuaCommandEx10_user(nullptr);
        
        
        void CLuaCommandExctor_CLuaCommandEx2_wrapper(struct CLuaCommandEx* _this)
        {
           CLuaCommandExctor_CLuaCommandEx2_user(_this, CLuaCommandExctor_CLuaCommandEx2_next);
        };
        char* CLuaCommandExGetScriptName4_wrapper(struct CLuaCommandEx* _this)
        {
           return CLuaCommandExGetScriptName4_user(_this, CLuaCommandExGetScriptName4_next);
        };
        void CLuaCommandExSetCmd6_wrapper(struct CLuaCommandEx* _this, char byType, char* strScriptName, char* strName)
        {
           CLuaCommandExSetCmd6_user(_this, byType, strScriptName, strName, CLuaCommandExSetCmd6_next);
        };
        
        void CLuaCommandExdtor_CLuaCommandEx10_wrapper(struct CLuaCommandEx* _this)
        {
           CLuaCommandExdtor_CLuaCommandEx10_user(_this, CLuaCommandExdtor_CLuaCommandEx10_next);
        };
        
        ::std::array<hook_record, 4> CLuaCommandEx_functions = 
        {
            _hook_record {
                (LPVOID)0x1404024e0L,
                (LPVOID *)&CLuaCommandExctor_CLuaCommandEx2_user,
                (LPVOID *)&CLuaCommandExctor_CLuaCommandEx2_next,
                (LPVOID)cast_pointer_function(CLuaCommandExctor_CLuaCommandEx2_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaCommandEx::*)())&CLuaCommandEx::ctor_CLuaCommandEx)
            },
            _hook_record {
                (LPVOID)0x140401260L,
                (LPVOID *)&CLuaCommandExGetScriptName4_user,
                (LPVOID *)&CLuaCommandExGetScriptName4_next,
                (LPVOID)cast_pointer_function(CLuaCommandExGetScriptName4_wrapper),
                (LPVOID)cast_pointer_function((char*(CLuaCommandEx::*)())&CLuaCommandEx::GetScriptName)
            },
            _hook_record {
                (LPVOID)0x1404011d0L,
                (LPVOID *)&CLuaCommandExSetCmd6_user,
                (LPVOID *)&CLuaCommandExSetCmd6_next,
                (LPVOID)cast_pointer_function(CLuaCommandExSetCmd6_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaCommandEx::*)(char, char*, char*))&CLuaCommandEx::SetCmd)
            },
            _hook_record {
                (LPVOID)0x140402540L,
                (LPVOID *)&CLuaCommandExdtor_CLuaCommandEx10_user,
                (LPVOID *)&CLuaCommandExdtor_CLuaCommandEx10_next,
                (LPVOID)cast_pointer_function(CLuaCommandExdtor_CLuaCommandEx10_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaCommandEx::*)())&CLuaCommandEx::dtor_CLuaCommandEx)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
