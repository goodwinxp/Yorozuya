#include <_param_cash.hpp>


START_ATF_NAMESPACE
    _param_cash::_param_cash(unsigned int dwAccount, unsigned int dwAvator, uint16_t wSock)
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash*, unsigned int, unsigned int, uint16_t);
        (org_ptr(0x1402f2890L))(this, dwAccount, dwAvator, wSock);
    };
    void _param_cash::ctor__param_cash(unsigned int dwAccount, unsigned int dwAvator, uint16_t wSock)
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash*, unsigned int, unsigned int, uint16_t);
        (org_ptr(0x1402f2890L))(this, dwAccount, dwAvator, wSock);
    };
    _param_cash::~_param_cash()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash*);
        (org_ptr(0x1402f2910L))(this);
    };
    void _param_cash::dtor__param_cash()
    {
        using org_ptr = void (WINAPIV*)(struct _param_cash*);
        (org_ptr(0x1402f2910L))(this);
    };
END_ATF_NAMESPACE
