#include <_server_notify_inform_zone.hpp>


START_ATF_NAMESPACE
    int _server_notify_inform_zone::size()
    {
        using org_ptr = int (WINAPIV*)(struct _server_notify_inform_zone*);
        return (org_ptr(0x14011f1e0L))(this);
    };
END_ATF_NAMESPACE
