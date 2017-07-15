#include <_event_set_looting.hpp>


START_ATF_NAMESPACE
    _event_set_looting::_event_set_looting()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set_looting*);
        (org_ptr(0x1402a9f70L))(this);
    };
    void _event_set_looting::ctor__event_set_looting()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set_looting*);
        (org_ptr(0x1402a9f70L))(this);
    };
    void _event_set_looting::init()
    {
        using org_ptr = void (WINAPIV*)(struct _event_set_looting*);
        (org_ptr(0x1402a9fc0L))(this);
    };
    
    
END_ATF_NAMESPACE
