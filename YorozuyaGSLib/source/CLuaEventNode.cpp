#include <CLuaEventNode.hpp>


START_ATF_NAMESPACE
    CLuaEventNode::CLuaEventNode()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode*);
        (org_ptr(0x1404043d0L))(this);
    };
    void CLuaEventNode::ctor_CLuaEventNode()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode*);
        (org_ptr(0x1404043d0L))(this);
    };
    char* CLuaEventNode::GetCallFunName()
    {
        using org_ptr = char* (WINAPIV*)(struct CLuaEventNode*);
        return (org_ptr(0x140403b60L))(this);
    };
    char* CLuaEventNode::GetName()
    {
        using org_ptr = char* (WINAPIV*)(struct CLuaEventNode*);
        return (org_ptr(0x140403ae0L))(this);
    };
    unsigned int CLuaEventNode::GetNextLoopTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CLuaEventNode*);
        return (org_ptr(0x140403bb0L))(this);
    };
    struct CLuaScript* CLuaEventNode::GetScript()
    {
        using org_ptr = struct CLuaScript* (WINAPIV*)(struct CLuaEventNode*);
        return (org_ptr(0x140403b40L))(this);
    };
    unsigned int CLuaEventNode::GetTimeTerm()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CLuaEventNode*);
        return (org_ptr(0x140403b90L))(this);
    };
    void CLuaEventNode::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode*);
        (org_ptr(0x140403af0L))(this);
    };
    bool CLuaEventNode::IsCallFun()
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaEventNode*);
        return (org_ptr(0x140403b20L))(this);
    };
    void CLuaEventNode::SetCallFun(char* strCallFunName, unsigned int dwTime)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode*, char*, unsigned int);
        (org_ptr(0x1404033c0L))(this, strCallFunName, dwTime);
    };
    void CLuaEventNode::SetName(char* strName)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode*, char*);
        (org_ptr(0x140406730L))(this, strName);
    };
    void CLuaEventNode::SetNextLoopTime(unsigned int dwNextLoopTime)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode*, unsigned int);
        (org_ptr(0x140403bd0L))(this, dwNextLoopTime);
    };
    void CLuaEventNode::SetScript(struct CLuaScript* pParentScript)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode*, struct CLuaScript*);
        (org_ptr(0x140403470L))(this, pParentScript);
    };
    CLuaEventNode::~CLuaEventNode()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode*);
        (org_ptr(0x140404160L))(this);
    };
    void CLuaEventNode::dtor_CLuaEventNode()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode*);
        (org_ptr(0x140404160L))(this);
    };
    CLuaEventNode::_State::_State()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode::_State*);
        (org_ptr(0x1404046c0L))(this);
    };
    void CLuaEventNode::_State::ctor__State()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventNode::_State*);
        (org_ptr(0x1404046c0L))(this);
    };
END_ATF_NAMESPACE
