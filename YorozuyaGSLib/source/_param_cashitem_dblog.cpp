#include <_param_cashitem_dblog.hpp>


START_ATF_NAMESPACE
    _param_cashitem_dblog::_param_cashitem_dblog(unsigned int dwAv)
        : _param_cash(0xFFFFFFFF, dwAv, 0xFFFFu)
    {
        using org_ptr = void (WINAPIV*)(struct _param_cashitem_dblog*, unsigned int);
        (org_ptr(0x140304cc0L))(this, dwAv);
    };
    void _param_cashitem_dblog::ctor__param_cashitem_dblog(unsigned int dwAv)
    {
        using org_ptr = void (WINAPIV*)(struct _param_cashitem_dblog*, unsigned int);
        (org_ptr(0x140304cc0L))(this, dwAv);
    };
    int _param_cashitem_dblog::size()
    {
        using org_ptr = int (WINAPIV*)(struct _param_cashitem_dblog*);
        return (org_ptr(0x140304d90L))(this);
    };
    _param_cashitem_dblog::~_param_cashitem_dblog()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cashitem_dblog*);
        (org_ptr(0x140304d50L))(this);
    };
    void _param_cashitem_dblog::dtor__param_cashitem_dblog()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cashitem_dblog*);
        (org_ptr(0x140304d50L))(this);
    };
    
END_ATF_NAMESPACE
