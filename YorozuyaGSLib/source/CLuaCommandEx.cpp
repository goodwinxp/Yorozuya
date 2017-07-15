#include <CLuaCommandEx.hpp>


START_ATF_NAMESPACE
    CLuaCommandEx::CLuaCommandEx()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommandEx*);
        (org_ptr(0x1404024e0L))(this);
    };
    void CLuaCommandEx::ctor_CLuaCommandEx()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommandEx*);
        (org_ptr(0x1404024e0L))(this);
    };
    char* CLuaCommandEx::GetScriptName()
    {
        using org_ptr = char* (WINAPIV*)(struct CLuaCommandEx*);
        return (org_ptr(0x140401260L))(this);
    };
    void CLuaCommandEx::SetCmd(char byType, char* strScriptName, char* strName)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommandEx*, char, char*, char*);
        (org_ptr(0x1404011d0L))(this, byType, strScriptName, strName);
    };
    CLuaCommandEx::~CLuaCommandEx()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommandEx*);
        (org_ptr(0x140402540L))(this);
    };
    void CLuaCommandEx::dtor_CLuaCommandEx()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommandEx*);
        (org_ptr(0x140402540L))(this);
    };
    CLuaCommandEx::_State::_State()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommandEx::_State*);
        (org_ptr(0x1404027f0L))(this);
    };
    void CLuaCommandEx::_State::ctor__State()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaCommandEx::_State*);
        (org_ptr(0x1404027f0L))(this);
    };
END_ATF_NAMESPACE
