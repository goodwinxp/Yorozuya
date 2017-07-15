#include <CLuaSignalReActor.hpp>


START_ATF_NAMESPACE
    bool CLuaSignalReActor::AddAction(char bySignalCode, char byType, char* strScriptName, char* strName)
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaSignalReActor*, char, char, char*, char*);
        return (org_ptr(0x1404000a0L))(this, bySignalCode, byType, strScriptName, strName);
    };
    CLuaSignalReActor::CLuaSignalReActor()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaSignalReActor*);
        (org_ptr(0x14014b8a0L))(this);
    };
    void CLuaSignalReActor::ctor_CLuaSignalReActor()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaSignalReActor*);
        (org_ptr(0x14014b8a0L))(this);
    };
    void CLuaSignalReActor::Free()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaSignalReActor*);
        (org_ptr(0x140400220L))(this);
    };
    void CLuaSignalReActor::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaSignalReActor*);
        (org_ptr(0x14014bf40L))(this);
    };
    bool CLuaSignalReActor::SetSignalAndAction(char bySignalCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaSignalReActor*, char);
        return (org_ptr(0x140400160L))(this, bySignalCode);
    };
    void CLuaSignalReActor::_Free(struct CLuaSignalReActor::_Action* pAction)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaSignalReActor*, struct CLuaSignalReActor::_Action*);
        (org_ptr(0x1404003c0L))(this, pAction);
    };
    struct CLuaSignalReActor::_Action* CLuaSignalReActor::_SearchAction(char bySignalCode)
    {
        using org_ptr = struct CLuaSignalReActor::_Action* (WINAPIV*)(struct CLuaSignalReActor*, char);
        return (org_ptr(0x140400320L))(this, bySignalCode);
    };
    struct CLuaSignalReActor::_Action* CLuaSignalReActor::_SearchEmptyAction()
    {
        using org_ptr = struct CLuaSignalReActor::_Action* (WINAPIV*)(struct CLuaSignalReActor*);
        return (org_ptr(0x140400290L))(this);
    };
    CLuaSignalReActor::~CLuaSignalReActor()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaSignalReActor*);
        (org_ptr(0x14014b980L))(this);
    };
    void CLuaSignalReActor::dtor_CLuaSignalReActor()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaSignalReActor*);
        (org_ptr(0x14014b980L))(this);
    };
    void CLuaSignalReActor::_Action::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaSignalReActor::_Action*);
        (org_ptr(0x14014b950L))(this);
    };
    CLuaSignalReActor::_Action::_Action()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaSignalReActor::_Action*);
        (org_ptr(0x14014b900L))(this);
    };
    void CLuaSignalReActor::_Action::ctor__Action()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaSignalReActor::_Action*);
        (org_ptr(0x14014b900L))(this);
    };
    
    
END_ATF_NAMESPACE
