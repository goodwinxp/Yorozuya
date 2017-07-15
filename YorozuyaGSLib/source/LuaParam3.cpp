#include <LuaParam3.hpp>


START_ATF_NAMESPACE
    LuaParam3::LuaParam3(int n1, int n2, int n3)
    {
        using org_ptr = void (WINAPIV*)(struct LuaParam3*, int, int, int);
        (org_ptr(0x140409f00L))(this, n1, n2, n3);
    };
    void LuaParam3::ctor_LuaParam3(int n1, int n2, int n3)
    {
        using org_ptr = void (WINAPIV*)(struct LuaParam3*, int, int, int);
        (org_ptr(0x140409f00L))(this, n1, n2, n3);
    };
END_ATF_NAMESPACE
