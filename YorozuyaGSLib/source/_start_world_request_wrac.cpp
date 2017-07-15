#include <_start_world_request_wrac.hpp>


START_ATF_NAMESPACE
    int _start_world_request_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _start_world_request_wrac*);
        return (org_ptr(0x1402080d0L))(this);
    };
END_ATF_NAMESPACE
