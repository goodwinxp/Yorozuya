#include <_qry_case_gm_greetingmsg.hpp>


START_ATF_NAMESPACE
    int _qry_case_gm_greetingmsg::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_gm_greetingmsg*);
        return (org_ptr(0x140208240L))(this);
    };
END_ATF_NAMESPACE
