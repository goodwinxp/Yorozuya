#include <_qry_case_update_server_reset_token.hpp>


START_ATF_NAMESPACE
    int _qry_case_update_server_reset_token::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_update_server_reset_token*);
        return (org_ptr(0x140208260L))(this);
    };
END_ATF_NAMESPACE
