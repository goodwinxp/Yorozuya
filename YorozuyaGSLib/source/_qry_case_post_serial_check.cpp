#include <_qry_case_post_serial_check.hpp>


START_ATF_NAMESPACE
    _qry_case_post_serial_check::_qry_case_post_serial_check()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_post_serial_check*);
        (org_ptr(0x140328240L))(this);
    };
    void _qry_case_post_serial_check::ctor__qry_case_post_serial_check()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_post_serial_check*);
        (org_ptr(0x140328240L))(this);
    };
    int _qry_case_post_serial_check::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_post_serial_check*);
        return (org_ptr(0x140328290L))(this);
    };
    
END_ATF_NAMESPACE
