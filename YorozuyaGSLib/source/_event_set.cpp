#include <_event_set.hpp>


START_ATF_NAMESPACE
    _event_set::_event_set()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set*);
        (org_ptr(0x1402a9db0L))(this);
    };
    void _event_set::ctor__event_set()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set*);
        (org_ptr(0x1402a9db0L))(this);
    };
    void _event_set::init()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set*);
        (org_ptr(0x1402a9e30L))(this);
    };
    _event_set::_monster_set::_monster_set()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set::_monster_set*);
        (org_ptr(0x1402a9e80L))(this);
    };
    void _event_set::_monster_set::ctor__monster_set()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set::_monster_set*);
        (org_ptr(0x1402a9e80L))(this);
    };
    _event_set::_monster_set::_state::_state()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set::_monster_set::_state*);
        (org_ptr(0x1402a9ed0L))(this);
    };
    void _event_set::_monster_set::_state::ctor__state()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set::_monster_set::_state*);
        (org_ptr(0x1402a9ed0L))(this);
    };
    void _event_set::_monster_set::_state::init()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set::_monster_set::_state*);
        (org_ptr(0x1402a9f20L))(this);
    };
    
END_ATF_NAMESPACE
