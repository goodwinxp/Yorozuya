#include <CActionPointSystemMgr.hpp>


START_ATF_NAMESPACE
    CActionPointSystemMgr::CActionPointSystemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*);
        (org_ptr(0x1404110f0L))(this);
    };
    void CActionPointSystemMgr::ctor_CActionPointSystemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*);
        (org_ptr(0x1404110f0L))(this);
    };
    void CActionPointSystemMgr::Check_Event_Status()
    {
        using org_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*);
        (org_ptr(0x140411380L))(this);
    };
    void CActionPointSystemMgr::Check_Load_Event_Status(char byActionCode, struct _action_point_system_ini* pIni)
    {
        using org_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*, char, struct _action_point_system_ini*);
        (org_ptr(0x140411250L))(this, byActionCode, pIni);
    };
    void CActionPointSystemMgr::Check_Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*);
        (org_ptr(0x1404114e0L))(this);
    };
    char CActionPointSystemMgr::GetEventStatus(char byActionCode)
    {
        using org_ptr = char (WINAPIV*)(struct CActionPointSystemMgr*, char);
        return (org_ptr(0x14007b880L))(this, byActionCode);
    };
    bool CActionPointSystemMgr::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct CActionPointSystemMgr*);
        return (org_ptr(0x140411150L))(this);
    };
    struct CActionPointSystemMgr* CActionPointSystemMgr::Instance()
    {
        using org_ptr = struct CActionPointSystemMgr* (WINAPIV*)();
        return (org_ptr(0x14007b8b0L))();
    };
    bool CActionPointSystemMgr::IsPointReset(char byActionCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CActionPointSystemMgr*, char);
        return (org_ptr(0x14007c190L))(this, byActionCode);
    };
    bool CActionPointSystemMgr::IsSystemEnable(char byActionCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CActionPointSystemMgr*, char);
        return (org_ptr(0x14007c1c0L))(this, byActionCode);
    };
    void CActionPointSystemMgr::Load_Event_INI(struct _action_point_system_ini* pIni, uint16_t wIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*, struct _action_point_system_ini*, uint16_t);
        (org_ptr(0x140411520L))(this, pIni, wIndex);
    };
    void CActionPointSystemMgr::SetEventStatus(char byActionCode, char byStatus)
    {
        using org_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*, char, char);
        (org_ptr(0x140411e30L))(this, byActionCode, byStatus);
    };
    CActionPointSystemMgr::~CActionPointSystemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*);
        (org_ptr(0x140411140L))(this);
    };
    void CActionPointSystemMgr::dtor_CActionPointSystemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CActionPointSystemMgr*);
        (org_ptr(0x140411140L))(this);
    };
END_ATF_NAMESPACE
