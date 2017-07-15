#include <_qry_case_alive_char.hpp>


START_ATF_NAMESPACE
    _qry_case_alive_char::_qry_case_alive_char()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_alive_char*);
        (org_ptr(0x140120d80L))(this);
    };
    void _qry_case_alive_char::ctor__qry_case_alive_char()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_alive_char*);
        (org_ptr(0x140120d80L))(this);
    };
    int _qry_case_alive_char::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_alive_char*);
        return (org_ptr(0x140120d70L))(this);
    };
END_ATF_NAMESPACE
