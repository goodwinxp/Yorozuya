#include <_param_cash_rollback.hpp>


START_ATF_NAMESPACE
    _param_cash_rollback::_param_cash_rollback(unsigned int dwAc, unsigned int dwAv, uint16_t wSock)
        : _param_cash(dwAc, dwAv, wSock)
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_rollback*, unsigned int, unsigned int, uint16_t);
        (org_ptr(0x1402f29b0L))(this, dwAc, dwAv, wSock);
    };
    void _param_cash_rollback::ctor__param_cash_rollback(unsigned int dwAc, unsigned int dwAv, uint16_t wSock)
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_rollback*, unsigned int, unsigned int, uint16_t);
        (org_ptr(0x1402f29b0L))(this, dwAc, dwAv, wSock);
    };
    int _param_cash_rollback::size()
    {
        using org_ptr = int (WINAPIV*)(struct _param_cash_rollback*);
        return (org_ptr(0x1402f2a70L))(this);
    };
    _param_cash_rollback::~_param_cash_rollback()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_rollback*);
        (org_ptr(0x1402f2a30L))(this);
    };
    void _param_cash_rollback::dtor__param_cash_rollback()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash_rollback*);
        (org_ptr(0x1402f2a30L))(this);
    };
    
END_ATF_NAMESPACE
