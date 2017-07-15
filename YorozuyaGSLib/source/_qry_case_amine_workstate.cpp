#include <_qry_case_amine_workstate.hpp>


START_ATF_NAMESPACE
    _qry_case_amine_workstate::_qry_case_amine_workstate()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_amine_workstate*);
        (org_ptr(0x1402d4380L))(this);
    };
    void _qry_case_amine_workstate::ctor__qry_case_amine_workstate()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_amine_workstate*);
        (org_ptr(0x1402d4380L))(this);
    };
    int _qry_case_amine_workstate::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_amine_workstate*);
        return (org_ptr(0x1402d43a0L))(this);
    };
END_ATF_NAMESPACE
