#include <_dh_mission_mgr.hpp>


START_ATF_NAMESPACE
    unsigned int _dh_mission_mgr::GetLimMSecTime()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct _dh_mission_mgr*);
        return (org_ptr(0x14026ef40L))(this);
    };
    struct _dh_mission_mgr::_if_change* _dh_mission_mgr::GetMissionCont(struct _dh_mission_setup* pMsSetup)
    {
        using org_ptr = struct _dh_mission_mgr::_if_change* (WINAPIV*)(struct _dh_mission_mgr*, struct _dh_mission_setup*);
        return (org_ptr(0x14026f220L))(this, pMsSetup);
    };
    void _dh_mission_mgr::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr*);
        (org_ptr(0x14026ed50L))(this);
    };
    bool _dh_mission_mgr::IsOpenPortal(int nIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct _dh_mission_mgr*, int);
        return (org_ptr(0x14026f4a0L))(this, nIndex);
    };
    void _dh_mission_mgr::NextMission(struct _dh_mission_setup* pNextMssionPtr)
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr*, struct _dh_mission_setup*);
        (org_ptr(0x14026efc0L))(this, pNextMssionPtr);
    };
    void _dh_mission_mgr::OpenPortal(int nIndex)
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr*, int);
        (org_ptr(0x1400c2d10L))(this, nIndex);
    };
    struct _dh_mission_mgr::_if_change* _dh_mission_mgr::SearchCurMissionCont()
    {
        using org_ptr = struct _dh_mission_mgr::_if_change* (WINAPIV*)(struct _dh_mission_mgr*);
        return (org_ptr(0x14026f580L))(this);
    };
    _dh_mission_mgr::_dh_mission_mgr()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr*);
        (org_ptr(0x14026eb70L))(this);
    };
    void _dh_mission_mgr::ctor__dh_mission_mgr()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr*);
        (org_ptr(0x14026eb70L))(this);
    };
    
    void _dh_mission_mgr::_count::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr::_count*);
        (org_ptr(0x14026eea0L))(this);
    };
    void _dh_mission_mgr::_if_change::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr::_if_change*);
        (org_ptr(0x14026ec70L))(this);
    };
    bool _dh_mission_mgr::_if_change::IsFill()
    {
        using org_ptr = bool (WINAPIV*)(struct _dh_mission_mgr::_if_change*);
        return (org_ptr(0x14026f320L))(this);
    };
    _dh_mission_mgr::_if_change::_if_change()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr::_if_change*);
        (org_ptr(0x14026ec20L))(this);
    };
    void _dh_mission_mgr::_if_change::ctor__if_change()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr::_if_change*);
        (org_ptr(0x14026ec20L))(this);
    };
    _dh_mission_mgr::_respawn_monster_act::_respawn_monster_act()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr::_respawn_monster_act*);
        (org_ptr(0x14026ecb0L))(this);
    };
    void _dh_mission_mgr::_respawn_monster_act::ctor__respawn_monster_act()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr::_respawn_monster_act*);
        (org_ptr(0x14026ecb0L))(this);
    };
    void _dh_mission_mgr::_respawn_monster_act::init()
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr::_respawn_monster_act*);
        (org_ptr(0x14026ed00L))(this);
    };
    void _dh_mission_mgr::_respawn_monster_act::set(struct __respawn_monster* data)
    {
        using org_ptr = void (WINAPIV*)(struct _dh_mission_mgr::_respawn_monster_act*, struct __respawn_monster*);
        (org_ptr(0x14026f0f0L))(this, data);
    };
    
END_ATF_NAMESPACE
