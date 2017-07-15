#include <CLuaScriptMgr.hpp>


START_ATF_NAMESPACE
    bool CLuaScriptMgr::AttachLuaScript(struct CLuaScript* pScript, struct CLuaCommand* pAttachCommand)
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaScriptMgr*, struct CLuaScript*, struct CLuaCommand*);
        return (org_ptr(0x1403ffc00L))(this, pScript, pAttachCommand);
    };
    CLuaScriptMgr::CLuaScriptMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScriptMgr*);
        (org_ptr(0x1403ff2f0L))(this);
    };
    void CLuaScriptMgr::ctor_CLuaScriptMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScriptMgr*);
        (org_ptr(0x1403ff2f0L))(this);
    };
    void CLuaScriptMgr::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140203460L))();
    };
    bool CLuaScriptMgr::DetackLuaScript(struct CLuaScript* pScript)
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaScriptMgr*, struct CLuaScript*);
        return (org_ptr(0x1403ffe90L))(this, pScript);
    };
    struct CLogFile* CLuaScriptMgr::GetErrorLogFile()
    {
        using org_ptr = struct CLogFile* (WINAPIV*)(struct CLuaScriptMgr*);
        return (org_ptr(0x140400f90L))(this);
    };
    struct CLogFile* CLuaScriptMgr::GetStateLogFile()
    {
        using org_ptr = struct CLogFile* (WINAPIV*)(struct CLuaScriptMgr*);
        return (org_ptr(0x140400ff0L))(this);
    };
    bool CLuaScriptMgr::InitSDM()
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaScriptMgr*);
        return (org_ptr(0x1403ff5a0L))(this);
    };
    struct CLuaScriptMgr* CLuaScriptMgr::Instance()
    {
        using org_ptr = struct CLuaScriptMgr* (WINAPIV*)();
        return (org_ptr(0x140203740L))();
    };
    void CLuaScriptMgr::LogStack(struct CLuaScript* pScript)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScriptMgr*, struct CLuaScript*);
        (org_ptr(0x140400430L))(this, pScript);
    };
    void CLuaScriptMgr::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScriptMgr*);
        (org_ptr(0x140400050L))(this);
    };
    struct CLuaCommandEx* CLuaScriptMgr::NewCommandEx()
    {
        using org_ptr = struct CLuaCommandEx* (WINAPIV*)(struct CLuaScriptMgr*);
        return (org_ptr(0x1403ff7e0L))(this);
    };
    struct CLuaScript* CLuaScriptMgr::NewScript()
    {
        using org_ptr = struct CLuaScript* (WINAPIV*)(struct CLuaScriptMgr*);
        return (org_ptr(0x1403ff900L))(this);
    };
    void CLuaScriptMgr::RemoveCommandEx(struct CLuaCommandEx* pCommand)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScriptMgr*, struct CLuaCommandEx*);
        (org_ptr(0x1403ff880L))(this, pCommand);
    };
    void CLuaScriptMgr::RemoveScript(struct CLuaScript* pScript)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScriptMgr*, struct CLuaScript*);
        (org_ptr(0x1403ff9a0L))(this, pScript);
    };
    struct CLuaScript* CLuaScriptMgr::SearchScript(char* strFileName)
    {
        using org_ptr = struct CLuaScript* (WINAPIV*)(struct CLuaScriptMgr*, char*);
        return (org_ptr(0x1403ffa30L))(this, strFileName);
    };
    struct CLuaScript* CLuaScriptMgr::SearchScriptFromLuaState(lua_State* state)
    {
        using org_ptr = struct CLuaScript* (WINAPIV*)(struct CLuaScriptMgr*, lua_State*);
        return (org_ptr(0x1403ffb10L))(this, state);
    };
    bool CLuaScriptMgr::_Regist_Novus()
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaScriptMgr*);
        return (org_ptr(0x140406360L))(this);
    };
    CLuaScriptMgr::~CLuaScriptMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScriptMgr*);
        (org_ptr(0x1403ff470L))(this);
    };
    void CLuaScriptMgr::dtor_CLuaScriptMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaScriptMgr*);
        (org_ptr(0x1403ff470L))(this);
    };
END_ATF_NAMESPACE
