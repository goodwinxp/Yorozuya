#include <CHackShieldExSystem.hpp>


START_ATF_NAMESPACE
    CHackShieldExSystem::CHackShieldExSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CHackShieldExSystem*);
        (org_ptr(0x140416cb0L))(this);
    };
    void CHackShieldExSystem::ctor_CHackShieldExSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CHackShieldExSystem*);
        (org_ptr(0x140416cb0L))(this);
    };
    struct BASE_HACKSHEILD_PARAM* CHackShieldExSystem::GetParam(unsigned int n)
    {
        using org_ptr = struct BASE_HACKSHEILD_PARAM* (WINAPIV*)(struct CHackShieldExSystem*, unsigned int);
        return (org_ptr(0x140417080L))(this, n);
    };
    bool CHackShieldExSystem::IsActive()
    {
        using org_ptr = bool (WINAPIV*)(struct CHackShieldExSystem*);
        return (org_ptr(0x140417720L))(this);
    };
    bool CHackShieldExSystem::IsInit()
    {
        using org_ptr = bool (WINAPIV*)(struct CHackShieldExSystem*);
        return (org_ptr(0x140417740L))(this);
    };
    bool CHackShieldExSystem::OnCheckSession_FirstVerify(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct CHackShieldExSystem*, int);
        return (org_ptr(0x140417250L))(this, n);
    };
    void CHackShieldExSystem::OnConnectSession(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CHackShieldExSystem*, int);
        (org_ptr(0x1404170d0L))(this, n);
    };
    void CHackShieldExSystem::OnDisConnectSession(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CHackShieldExSystem*, int);
        (org_ptr(0x140417140L))(this, n);
    };
    void CHackShieldExSystem::OnLoop()
    {
        using org_ptr = void (WINAPIV*)(struct CHackShieldExSystem*);
        (org_ptr(0x140417390L))(this);
    };
    void CHackShieldExSystem::OnLoopSession(int n)
    {
        using org_ptr = void (WINAPIV*)(struct CHackShieldExSystem*, int);
        (org_ptr(0x1404171a0L))(this, n);
    };
    bool CHackShieldExSystem::RecvClientLine(int n, struct _MSG_HEADER* pHeader, char* pMsg)
    {
        using org_ptr = bool (WINAPIV*)(struct CHackShieldExSystem*, int, struct _MSG_HEADER*, char*);
        return (org_ptr(0x1404172c0L))(this, n, pHeader, pMsg);
    };
    CHackShieldExSystem::~CHackShieldExSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CHackShieldExSystem*);
        (org_ptr(0x140416d70L))(this);
    };
    void CHackShieldExSystem::dtor_CHackShieldExSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CHackShieldExSystem*);
        (org_ptr(0x140416d70L))(this);
    };
END_ATF_NAMESPACE
