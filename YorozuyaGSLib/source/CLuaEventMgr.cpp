#include <CLuaEventMgr.hpp>


START_ATF_NAMESPACE
    bool CLuaEventMgr::AttachEvent(struct CLuaEventNode* pEvent)
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaEventMgr*, struct CLuaEventNode*);
        return (org_ptr(0x140403690L))(this, pEvent);
    };
    CLuaEventMgr::CLuaEventMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventMgr*);
        (org_ptr(0x1404034a0L))(this);
    };
    void CLuaEventMgr::ctor_CLuaEventMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventMgr*);
        (org_ptr(0x1404034a0L))(this);
    };
    void CLuaEventMgr::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x1402034f0L))();
    };
    bool CLuaEventMgr::DettachEvent(struct CLuaEventNode* pEvent)
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaEventMgr*, struct CLuaEventNode*);
        return (org_ptr(0x1404037c0L))(this, pEvent);
    };
    bool CLuaEventMgr::InitSDM()
    {
        using org_ptr = bool (WINAPIV*)(struct CLuaEventMgr*);
        return (org_ptr(0x140403570L))(this);
    };
    struct CLuaEventMgr* CLuaEventMgr::Instance()
    {
        using org_ptr = struct CLuaEventMgr* (WINAPIV*)();
        return (org_ptr(0x140401010L))();
    };
    void CLuaEventMgr::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventMgr*);
        (org_ptr(0x140403820L))(this);
    };
    struct CLuaEventNode* CLuaEventMgr::NewEvent()
    {
        using org_ptr = struct CLuaEventNode* (WINAPIV*)(struct CLuaEventMgr*);
        return (org_ptr(0x140403580L))(this);
    };
    void CLuaEventMgr::RemoveEvent(struct CLuaEventNode* pEvent)
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventMgr*, struct CLuaEventNode*);
        (org_ptr(0x140403610L))(this, pEvent);
    };
    struct CLuaEventNode* CLuaEventMgr::SearchEvent(char* strFileName)
    {
        using org_ptr = struct CLuaEventNode* (WINAPIV*)(struct CLuaEventMgr*, char*);
        return (org_ptr(0x140403700L))(this, strFileName);
    };
    CLuaEventMgr::~CLuaEventMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventMgr*);
        (org_ptr(0x140403530L))(this);
    };
    void CLuaEventMgr::dtor_CLuaEventMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CLuaEventMgr*);
        (org_ptr(0x140403530L))(this);
    };
END_ATF_NAMESPACE
