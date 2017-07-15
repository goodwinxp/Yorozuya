#include <_fireguard_block_request_wrac.hpp>


START_ATF_NAMESPACE
    int _fireguard_block_request_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _fireguard_block_request_wrac*);
        return (org_ptr(0x14011f500L))(this);
    };
END_ATF_NAMESPACE
