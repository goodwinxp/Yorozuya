#include <_param_cash_update.hpp>


START_ATF_NAMESPACE
    _param_cash_update::_param_cash_update(unsigned int dwAc, unsigned int dwAv, uint16_t wSock)
        : _param_cash(dwAc, dwAv, wSock)
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_update*, unsigned int, unsigned int, uint16_t);
        (org_ptr(0x1402f2790L))(this, dwAc, dwAv, wSock);
    };
    void _param_cash_update::ctor__param_cash_update(unsigned int dwAc, unsigned int dwAv, uint16_t wSock)
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_update*, unsigned int, unsigned int, uint16_t);
        (org_ptr(0x1402f2790L))(this, dwAc, dwAv, wSock);
    };
    int _param_cash_update::size()
    {
        using org_ptr = int (WINAPIV*)(struct _param_cash_update*);
        return (org_ptr(0x140304c80L))(this);
    };
    _param_cash_update::~_param_cash_update()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_update*);
        (org_ptr(0x1402f2970L))(this);
    };
    void _param_cash_update::dtor__param_cash_update()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_update*);
        (org_ptr(0x1402f2970L))(this);
    };
    _param_cash_update::__item::__item()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_update::__item*);
        (org_ptr(0x1402f2920L))(this);
    };
    void _param_cash_update::__item::ctor___item()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_update::__item*);
        (org_ptr(0x1402f2920L))(this);
    };
END_ATF_NAMESPACE
