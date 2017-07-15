#include <_enter_world_result_zone.hpp>


START_ATF_NAMESPACE
    int _enter_world_result_zone::size()
    {
        using org_ptr = int (WINAPIV*)(struct _enter_world_result_zone*);
        return (org_ptr(0x14011f250L))(this);
    };
END_ATF_NAMESPACE
