#include <LuaParam3Detail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::LuaParam3ctor_LuaParam32_ptr LuaParam3ctor_LuaParam32_next(nullptr);
        Info::LuaParam3ctor_LuaParam32_clbk LuaParam3ctor_LuaParam32_user(nullptr);
        
        
        void LuaParam3ctor_LuaParam32_wrapper(struct LuaParam3* _this, int n1, int n2, int n3)
        {
           LuaParam3ctor_LuaParam32_user(_this, n1, n2, n3, LuaParam3ctor_LuaParam32_next);
        };
        
        ::std::array<hook_record, 1> LuaParam3_functions = 
        {
            _hook_record {
                (LPVOID)0x140409f00L,
                (LPVOID *)&LuaParam3ctor_LuaParam32_user,
                (LPVOID *)&LuaParam3ctor_LuaParam32_next,
                (LPVOID)cast_pointer_function(LuaParam3ctor_LuaParam32_wrapper),
                (LPVOID)cast_pointer_function((void(LuaParam3::*)(int, int, int))&LuaParam3::ctor_LuaParam3)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
