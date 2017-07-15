#include <_qry_case_update_punishment.hpp>


START_ATF_NAMESPACE
    int _qry_case_update_punishment::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_update_punishment*);
        return (org_ptr(0x1402b0f60L))(this);
    };
END_ATF_NAMESPACE
