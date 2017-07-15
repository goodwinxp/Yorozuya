#include <_event_respawn.hpp>


START_ATF_NAMESPACE
    _event_respawn::_event_respawn()
    {
        using org_ptr = void (WINAPIV*)(struct _event_respawn*);
        (org_ptr(0x1402a7740L))(this);
    };
    void _event_respawn::ctor__event_respawn()
    {
        using org_ptr = void (WINAPIV*)(struct _event_respawn*);
        (org_ptr(0x1402a7740L))(this);
    };
    
    
    
    _event_respawn::_state::_state()
    {
        using org_ptr = void (WINAPIV*)(struct _event_respawn::_state*);
        (org_ptr(0x1402a77c0L))(this);
    };
    void _event_respawn::_state::ctor__state()
    {
        using org_ptr = void (WINAPIV*)(struct _event_respawn::_state*);
        (org_ptr(0x1402a77c0L))(this);
    };
    void _event_respawn::_state::init()
    {
        using org_ptr = void (WINAPIV*)(struct _event_respawn::_state*);
        (org_ptr(0x1402a7810L))(this);
    };
    
END_ATF_NAMESPACE
