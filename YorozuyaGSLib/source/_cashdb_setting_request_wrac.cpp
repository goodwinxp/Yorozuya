#include <_cashdb_setting_request_wrac.hpp>


START_ATF_NAMESPACE
    int _cashdb_setting_request_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _cashdb_setting_request_wrac*);
        return (org_ptr(0x140212960L))(this);
    };
END_ATF_NAMESPACE
