#include <_qry_case_race_greetingmsg.hpp>


START_ATF_NAMESPACE
    int _qry_case_race_greetingmsg::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_race_greetingmsg*);
        return (org_ptr(0x140208250L))(this);
    };
END_ATF_NAMESPACE
