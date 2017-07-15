#include <_qry_case_select_patriarch_comm.hpp>


START_ATF_NAMESPACE
    _qry_case_select_patriarch_comm::_qry_case_select_patriarch_comm()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_select_patriarch_comm*);
        (org_ptr(0x140079a00L))(this);
    };
    void _qry_case_select_patriarch_comm::ctor__qry_case_select_patriarch_comm()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_select_patriarch_comm*);
        (org_ptr(0x140079a00L))(this);
    };
    int _qry_case_select_patriarch_comm::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_select_patriarch_comm*);
        return (org_ptr(0x140079a50L))(this);
    };
END_ATF_NAMESPACE
