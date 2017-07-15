#include <_qry_case_make_storage.hpp>


START_ATF_NAMESPACE
    _qry_case_make_storage::_qry_case_make_storage()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_make_storage*);
        (org_ptr(0x1402e1c10L))(this);
    };
    void _qry_case_make_storage::ctor__qry_case_make_storage()
    {
        using org_ptr = void (WINAPIV*)(struct _qry_case_make_storage*);
        (org_ptr(0x1402e1c10L))(this);
    };
    int _qry_case_make_storage::size()
    {
        using org_ptr = int (WINAPIV*)(struct _qry_case_make_storage*);
        return (org_ptr(0x1402e1c30L))(this);
    };
END_ATF_NAMESPACE
