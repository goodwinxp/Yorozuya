#include <_qry_case_forceleave.hpp>


START_ATF_NAMESPACE
    int _qry_case_forceleave::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_forceleave*);
        return (org_ptr(0x14025d630L))(this);
    };
END_ATF_NAMESPACE
