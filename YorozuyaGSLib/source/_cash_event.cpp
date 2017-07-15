#include <_cash_event.hpp>


START_ATF_NAMESPACE
    _cash_event::_cash_event()
    {
        using org_ptr = void (WINAPIV*)(struct _cash_event*);
        (org_ptr(0x140304540L))(this);
    };
    void _cash_event::ctor__cash_event()
    {
        using org_ptr = void (WINAPIV*)(struct _cash_event*);
        (org_ptr(0x140304540L))(this);
    };
    _cash_event::~_cash_event()
    {
        using org_ptr = void (WINAPIV*)(struct _cash_event*);
        (org_ptr(0x140304720L))(this);
    };
    void _cash_event::dtor__cash_event()
    {
        using org_ptr = void (WINAPIV*)(struct _cash_event*);
        (org_ptr(0x140304720L))(this);
    };
END_ATF_NAMESPACE
