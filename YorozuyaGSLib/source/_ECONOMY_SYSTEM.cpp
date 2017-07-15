#include <_ECONOMY_SYSTEM.hpp>


START_ATF_NAMESPACE
    void _ECONOMY_SYSTEM::CurTradeMoneyInit()
    {
        using org_ptr = void (WINAPIV*)(struct _ECONOMY_SYSTEM*);
        (org_ptr(0x1402a5bc0L))(this);
    };
    void _ECONOMY_SYSTEM::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _ECONOMY_SYSTEM*);
        (org_ptr(0x1402a5b40L))(this);
    };
    _ECONOMY_SYSTEM::_ECONOMY_SYSTEM()
    {
        using org_ptr = void (WINAPIV*)(struct _ECONOMY_SYSTEM*);
        (org_ptr(0x1402a5cf0L))(this);
    };
    void _ECONOMY_SYSTEM::ctor__ECONOMY_SYSTEM()
    {
        using org_ptr = void (WINAPIV*)(struct _ECONOMY_SYSTEM*);
        (org_ptr(0x1402a5cf0L))(this);
    };
    
END_ATF_NAMESPACE
