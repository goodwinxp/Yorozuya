#include <_qry_case_sendwebracebosssms.hpp>


START_ATF_NAMESPACE
    int _qry_case_sendwebracebosssms::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_sendwebracebosssms*);
        return (org_ptr(0x1401dab00L))(this);
    };
END_ATF_NAMESPACE
