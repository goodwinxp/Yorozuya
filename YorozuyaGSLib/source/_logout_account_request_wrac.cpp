#include <_logout_account_request_wrac.hpp>


START_ATF_NAMESPACE
    int _logout_account_request_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _logout_account_request_wrac*);
        return (org_ptr(0x14011f230L))(this);
    };
END_ATF_NAMESPACE
