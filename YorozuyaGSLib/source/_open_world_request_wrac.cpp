#include <_open_world_request_wrac.hpp>


START_ATF_NAMESPACE
    int _open_world_request_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _open_world_request_wrac*);
        return (org_ptr(0x1402080c0L))(this);
    };
END_ATF_NAMESPACE
