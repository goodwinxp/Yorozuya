#include <_apex_block_request_wrac.hpp>


START_ATF_NAMESPACE
    int _apex_block_request_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _apex_block_request_wrac*);
        return (org_ptr(0x140410c50L))(this);
    };
END_ATF_NAMESPACE
