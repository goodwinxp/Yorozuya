#include <_qry_case_select_charserial.hpp>


START_ATF_NAMESPACE
    int _qry_case_select_charserial::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_select_charserial*);
        return (org_ptr(0x140102910L))(this);
    };
END_ATF_NAMESPACE
