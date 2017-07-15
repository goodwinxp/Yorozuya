#include <_apex_send_ip.hpp>


START_ATF_NAMESPACE
    _apex_send_ip::_apex_send_ip()
    {
        using org_ptr = void (WINAPIV*)(struct _apex_send_ip*);
        (org_ptr(0x140410c00L))(this);
    };
    void _apex_send_ip::ctor__apex_send_ip()
    {
        using org_ptr = void (WINAPIV*)(struct _apex_send_ip*);
        (org_ptr(0x140410c00L))(this);
    };
    int _apex_send_ip::size()
    {
        using org_ptr = int (WINAPIV*)(struct _apex_send_ip*);
        return (org_ptr(0x140410c20L))(this);
    };
END_ATF_NAMESPACE
