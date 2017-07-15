#include <_con_event_.hpp>


START_ATF_NAMESPACE
    _con_event_::_con_event_()
    {
        using org_ptr = void (WINAPIV*)(struct _con_event_*);
        (org_ptr(0x140304660L))(this);
    };
    void _con_event_::ctor__con_event_()
    {
        using org_ptr = void (WINAPIV*)(struct _con_event_*);
        (org_ptr(0x140304660L))(this);
    };
    _con_event_::~_con_event_()
    {
        using org_ptr = void (WINAPIV*)(struct _con_event_*);
        (org_ptr(0x140304770L))(this);
    };
    void _con_event_::dtor__con_event_()
    {
        using org_ptr = void (WINAPIV*)(struct _con_event_*);
        (org_ptr(0x140304770L))(this);
    };
END_ATF_NAMESPACE
