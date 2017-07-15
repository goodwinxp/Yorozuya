#include <_apex_send_trans.hpp>


START_ATF_NAMESPACE
    int _apex_send_trans::size()
    {
        using org_ptr = int (WINAPIV*)(struct _apex_send_trans*);
        return (org_ptr(0x140410c30L))(this);
    };
END_ATF_NAMESPACE
