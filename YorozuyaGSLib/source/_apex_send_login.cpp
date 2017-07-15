#include <_apex_send_login.hpp>


START_ATF_NAMESPACE
    int _apex_send_login::size()
    {
        using org_ptr = int (WINAPIV*)(struct _apex_send_login*);
        return (org_ptr(0x140410bf0L))(this);
    };
END_ATF_NAMESPACE
