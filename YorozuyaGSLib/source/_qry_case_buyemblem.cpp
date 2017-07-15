#include <_qry_case_buyemblem.hpp>


START_ATF_NAMESPACE
    int _qry_case_buyemblem::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_buyemblem*);
        return (org_ptr(0x14025d660L))(this);
    };
END_ATF_NAMESPACE
