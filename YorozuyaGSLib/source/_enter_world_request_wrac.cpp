#include <_enter_world_request_wrac.hpp>


START_ATF_NAMESPACE
    int _enter_world_request_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _enter_world_request_wrac*);
        return (org_ptr(0x14011f240L))(this);
    };
END_ATF_NAMESPACE
