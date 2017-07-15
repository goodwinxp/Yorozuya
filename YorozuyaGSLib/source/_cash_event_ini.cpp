#include <_cash_event_ini.hpp>


START_ATF_NAMESPACE
    _cash_event_ini::_cash_event_ini()
    {
        using org_ptr = void (WINAPIV*)(struct _cash_event_ini*);
        (org_ptr(0x140304610L))(this);
    };
    void _cash_event_ini::ctor__cash_event_ini()
    {
        using org_ptr = void (WINAPIV*)(struct _cash_event_ini*);
        (org_ptr(0x140304610L))(this);
    };
    
END_ATF_NAMESPACE
