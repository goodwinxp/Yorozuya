#include <CLuaScript.hpp>


START_ATF_NAMESPACE
    CLuaScript::CLuaScript()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScript*);
        (org_ptr(0x140401ed0L))(this);
    };
    void CLuaScript::ctor_CLuaScript()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScript*);
        (org_ptr(0x140401ed0L))(this);
    };
    lua_State* CLuaScript::GetLuaState()
    {
        using org_ptr = lua_State* (WINAPIV*)(struct CLuaScript*);
        return (org_ptr(0x140401f50L))(this);
    };
    char* CLuaScript::GetName()
    {
        using org_ptr = char* (WINAPIV*)(struct CLuaScript*);
        return (org_ptr(0x140401f30L))(this);
    };
    bool CLuaScript::RunCommand(struct CLuaCommand* pCommand)
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaScript*, struct CLuaCommand*);
        return (org_ptr(0x1403ff0d0L))(this, pCommand);
    };
    void CLuaScript::SetName(char* strName)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScript*, char*);
        (org_ptr(0x140401f70L))(this, strName);
    };
    CLuaScript::~CLuaScript()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScript*);
        (org_ptr(0x140401f10L))(this);
    };
    void CLuaScript::dtor_CLuaScript()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScript*);
        (org_ptr(0x140401f10L))(this);
    };
    CLuaScript::_State::_State()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScript::_State*);
        (org_ptr(0x140402270L))(this);
    };
    void CLuaScript::_State::ctor__State()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScript::_State*);
        (org_ptr(0x140402270L))(this);
    };
END_ATF_NAMESPACE
