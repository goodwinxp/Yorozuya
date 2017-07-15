#include <_server_rate_realtime_load.hpp>


START_ATF_NAMESPACE
    void _server_rate_realtime_load::Init(unsigned int dwReadTerm)
    {
        using org_ptr = void (WINAPIV*)(struct _server_rate_realtime_load*, unsigned int);
        (org_ptr(0x140203120L))(this, dwReadTerm);
    };
    _server_rate_realtime_load::_server_rate_realtime_load()
    {
        using org_ptr = void (WINAPIV*)(struct _server_rate_realtime_load*);
        (org_ptr(0x140203070L))(this);
    };
    void _server_rate_realtime_load::ctor__server_rate_realtime_load()
    {
        using org_ptr = void (WINAPIV*)(struct _server_rate_realtime_load*);
        (org_ptr(0x140203070L))(this);
    };
    _server_rate_realtime_load::~_server_rate_realtime_load()
    {
        using org_ptr = void (WINAPIV*)(struct _server_rate_realtime_load*);
        (org_ptr(0x1402031f0L))(this);
    };
    void _server_rate_realtime_load::dtor__server_rate_realtime_load()
    {
        using org_ptr = void (WINAPIV*)(struct _server_rate_realtime_load*);
        (org_ptr(0x1402031f0L))(this);
    };
END_ATF_NAMESPACE
