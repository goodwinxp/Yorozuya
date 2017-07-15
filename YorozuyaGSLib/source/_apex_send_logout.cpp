#include <_apex_send_logout.hpp>


START_ATF_NAMESPACE
    int _apex_send_logout::size()
    {
        using org_ptr = int (WINAPIV*)(struct _apex_send_logout*);
        return (org_ptr(0x140410c40L))(this);
    };
END_ATF_NAMESPACE
