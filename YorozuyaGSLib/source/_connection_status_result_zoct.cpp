#include <_connection_status_result_zoct.hpp>


START_ATF_NAMESPACE
    int _connection_status_result_zoct::size()
    {
        using org_ptr = int (WINAPIV*)(struct _connection_status_result_zoct*);
        return (org_ptr(0x1401c7750L))(this);
    };
END_ATF_NAMESPACE
