#include <_cash_event_inform_zocl.hpp>


START_ATF_NAMESPACE
    _cash_event_inform_zocl::_cash_event_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _cash_event_inform_zocl*);
        (org_ptr(0x14030d710L))(this);
    };
    void _cash_event_inform_zocl::ctor__cash_event_inform_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _cash_event_inform_zocl*);
        (org_ptr(0x14030d710L))(this);
    };
    int _cash_event_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _cash_event_inform_zocl*);
        return (org_ptr(0x14030d760L))(this);
    };
    
    
END_ATF_NAMESPACE
