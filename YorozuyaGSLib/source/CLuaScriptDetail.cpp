#include <CLuaScriptDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CLuaScriptctor_CLuaScript2_ptr CLuaScriptctor_CLuaScript2_next(nullptr);
        Info::CLuaScriptctor_CLuaScript2_clbk CLuaScriptctor_CLuaScript2_user(nullptr);
        
        Info::CLuaScriptGetLuaState4_ptr CLuaScriptGetLuaState4_next(nullptr);
        Info::CLuaScriptGetLuaState4_clbk CLuaScriptGetLuaState4_user(nullptr);
        
        Info::CLuaScriptGetName6_ptr CLuaScriptGetName6_next(nullptr);
        Info::CLuaScriptGetName6_clbk CLuaScriptGetName6_user(nullptr);
        
        Info::CLuaScriptRunCommand8_ptr CLuaScriptRunCommand8_next(nullptr);
        Info::CLuaScriptRunCommand8_clbk CLuaScriptRunCommand8_user(nullptr);
        
        Info::CLuaScriptSetName10_ptr CLuaScriptSetName10_next(nullptr);
        Info::CLuaScriptSetName10_clbk CLuaScriptSetName10_user(nullptr);
        
        
        Info::CLuaScriptdtor_CLuaScript14_ptr CLuaScriptdtor_CLuaScript14_next(nullptr);
        Info::CLuaScriptdtor_CLuaScript14_clbk CLuaScriptdtor_CLuaScript14_user(nullptr);
        
        
        void CLuaScriptctor_CLuaScript2_wrapper(struct CLuaScript* _this)
        {
           CLuaScriptctor_CLuaScript2_user(_this, CLuaScriptctor_CLuaScript2_next);
        };
        lua_State* CLuaScriptGetLuaState4_wrapper(struct CLuaScript* _this)
        {
           return CLuaScriptGetLuaState4_user(_this, CLuaScriptGetLuaState4_next);
        };
        char* CLuaScriptGetName6_wrapper(struct CLuaScript* _this)
        {
           return CLuaScriptGetName6_user(_this, CLuaScriptGetName6_next);
        };
        bool CLuaScriptRunCommand8_wrapper(struct CLuaScript* _this, struct CLuaCommand* pCommand)
        {
           return CLuaScriptRunCommand8_user(_this, pCommand, CLuaScriptRunCommand8_next);
        };
        void CLuaScriptSetName10_wrapper(struct CLuaScript* _this, char* strName)
        {
           CLuaScriptSetName10_user(_this, strName, CLuaScriptSetName10_next);
        };
        
        void CLuaScriptdtor_CLuaScript14_wrapper(struct CLuaScript* _this)
        {
           CLuaScriptdtor_CLuaScript14_user(_this, CLuaScriptdtor_CLuaScript14_next);
        };
        
        ::std::array<hook_record, 6> CLuaScript_functions = 
        {
            _hook_record {
                (LPVOID)0x140401ed0L,
                (LPVOID *)&CLuaScriptctor_CLuaScript2_user,
                (LPVOID *)&CLuaScriptctor_CLuaScript2_next,
                (LPVOID)cast_pointer_function(CLuaScriptctor_CLuaScript2_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaScript::*)())&CLuaScript::ctor_CLuaScript)
            },
            _hook_record {
                (LPVOID)0x140401f50L,
                (LPVOID *)&CLuaScriptGetLuaState4_user,
                (LPVOID *)&CLuaScriptGetLuaState4_next,
                (LPVOID)cast_pointer_function(CLuaScriptGetLuaState4_wrapper),
                (LPVOID)cast_pointer_function((lua_State*(CLuaScript::*)())&CLuaScript::GetLuaState)
            },
            _hook_record {
                (LPVOID)0x140401f30L,
                (LPVOID *)&CLuaScriptGetName6_user,
                (LPVOID *)&CLuaScriptGetName6_next,
                (LPVOID)cast_pointer_function(CLuaScriptGetName6_wrapper),
                (LPVOID)cast_pointer_function((char*(CLuaScript::*)())&CLuaScript::GetName)
            },
            _hook_record {
                (LPVOID)0x1403ff0d0L,
                (LPVOID *)&CLuaScriptRunCommand8_user,
                (LPVOID *)&CLuaScriptRunCommand8_next,
                (LPVOID)cast_pointer_function(CLuaScriptRunCommand8_wrapper),
                (LPVOID)cast_pointer_function((bool(CLuaScript::*)(struct CLuaCommand*))&CLuaScript::RunCommand)
            },
            _hook_record {
                (LPVOID)0x140401f70L,
                (LPVOID *)&CLuaScriptSetName10_user,
                (LPVOID *)&CLuaScriptSetName10_next,
                (LPVOID)cast_pointer_function(CLuaScriptSetName10_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaScript::*)(char*))&CLuaScript::SetName)
            },
            _hook_record {
                (LPVOID)0x140401f10L,
                (LPVOID *)&CLuaScriptdtor_CLuaScript14_user,
                (LPVOID *)&CLuaScriptdtor_CLuaScript14_next,
                (LPVOID)cast_pointer_function(CLuaScriptdtor_CLuaScript14_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaScript::*)())&CLuaScript::dtor_CLuaScript)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
