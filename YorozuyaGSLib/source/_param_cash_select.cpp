#include <_param_cash_select.hpp>


START_ATF_NAMESPACE
    _param_cash_select::_param_cash_select(unsigned int dwAc, unsigned int dwAv, uint16_t wSock)
        : _param_cash(dwAc, dwAv, wSock)
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_select*, unsigned int, unsigned int, uint16_t);
        (org_ptr(0x140304a80L))(this, dwAc, dwAv, wSock);
    };
    void _param_cash_select::ctor__param_cash_select(unsigned int dwAc, unsigned int dwAv, uint16_t wSock)
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_select*, unsigned int, unsigned int, uint16_t);
        (org_ptr(0x140304a80L))(this, dwAc, dwAv, wSock);
    };
    int _param_cash_select::size()
    {
        using org_ptr = int (WINAPIV*)(struct _param_cash_select*);
        return (org_ptr(0x140304b30L))(this);
    };
    _param_cash_select::~_param_cash_select()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_select*);
        (org_ptr(0x140304af0L))(this);
    };
    void _param_cash_select::dtor__param_cash_select()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_select*);
        (org_ptr(0x140304af0L))(this);
    };
END_ATF_NAMESPACE
